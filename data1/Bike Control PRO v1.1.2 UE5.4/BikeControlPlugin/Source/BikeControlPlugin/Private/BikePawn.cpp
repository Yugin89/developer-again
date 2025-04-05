// Copyright 2022 Fly Dream Dev. All Rights Reserved.

#include "BikePawn.h"

#include "PIDCtrlComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "PhysicalMaterials/PhysicalMaterial.h"

#include "Components/SkeletalMeshComponent.h"
#include "TimerManager.h"
#include "Curves/CurveFloat.h"
#include "Engine.h"

float constexpr rpmToRad = DOUBLE_PI * 2.f / 60.f;
float constexpr radToRpm = 1.f / rpmToRad;

// Sets default values
ABikePawn::ABikePawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickGroup = TG_PrePhysics;

	//************************************************************************
	// Component
	//************************************************************************

	BikeSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BikeSkeletalMesh"));
	BikeSkeletalMesh->SetCollisionObjectType(ECollisionChannel::ECC_Vehicle);
	BikeSkeletalMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	BikeSkeletalMesh->SetSimulatePhysics(true);
	RootComponent = BikeSkeletalMesh;

	frontWheelWidthSphere = CreateDefaultSubobject<USphereComponent>(TEXT("frontWheelWidthSphere"));
	frontWheelWidthSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	frontWheelWidthSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	frontWheelWidthSphere->SetupAttachment(GetRootComponent());
	frontWheelWidthSphere->SetSphereRadius(5.f);

	rearWheelWidthSphere = CreateDefaultSubobject<USphereComponent>(TEXT("rearWheelWidthSphere"));
	rearWheelWidthSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	rearWheelWidthSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	rearWheelWidthSphere->SetupAttachment(GetRootComponent());
	rearWheelWidthSphere->SetSphereRadius(5.f);

	PidCtrlComponent = CreateDefaultSubobject<UPIDCtrlComponent>(TEXT("PidCtrlComponent"));
	PidPitchCtrlComponent = CreateDefaultSubobject<UPIDCtrlComponent>(TEXT("PidPitchCtrlComponent"));

	//************************************************************************

	OnCalculateCustomPhysics.BindUObject(this, &ABikePawn::CustomPhysics);
}

// Called when the game starts or when spawned
void ABikePawn::BeginPlay()
{
	bodyRootComponent = Cast<UPrimitiveComponent>(GetRootComponent());
	if (bodyRootComponent != nullptr)
	{
		bodyRootInstance = bodyRootComponent->GetBodyInstance();
	}

	Super::BeginPlay();

	if (!frontLinkComponent || !rearLinkComponent)
	{
		GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Red, TEXT("Error: Link not set."));
		return;
	}

	InitializingVariables();

	GetWorld()->GetTimerManager().SetTimer(pidReset_Handle, this, &ABikePawn::PidResetTimer, 0.25f, true, 0.25f);
}

// Called every frame
void ABikePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	currentDeltaTime = DeltaTime;

	if (!bIsBikeInitialized)
	{
		return;
	}

	if (bodyRootInstance)
	{
		bodyRootInstance->AddCustomPhysics(OnCalculateCustomPhysics);
	}
	else
	{
		return;
	}

	DebugBuild();

	for (int i = 0; i < suspensionsArr.Num(); ++i)
	{
		float minLength_ = suspensionsArr[i].restLength - suspensionsArr[i].travelDist;
		float maxLength_ = suspensionsArr[i].restLength + suspensionsArr[i].travelDist;

		float release_ = suspensionsArr[i].currentLength - minLength_;
		float minRelease_;
		if (i == 0)
		{
			minRelease_ = 2.f;
		}
		else
		{
			minRelease_ = 4.f;
		}

		if (release_ <= minRelease_ && suspensionsArr[i].force < suspensionsArr[i].forceMax - 50.f)
		{
			TireBumpEvent(i);
		}
		else if (wheelsArr[i].bWheelContact && suspensionsArr[i].currentLength > maxLength_ - 6.f)
		{
			TireBumpEvent(i);
		}

		if (wheelsArr[i].absCapacity >= brakeSettings.torqueMax * 0.7f)
		{
			AbsWheelEvent(i);
		}
	}
}

// Called every update physics.
void ABikePawn::CustomPhysics(float deltaTime, FBodyInstance* bodyInstance)
{
	if (!bIsBikeInitialized)
	{
		return;
	}

	// Update pawn sub-stepping transform.
	pawnTransform = GetTransformBikePawn();

	subStepDeltaTime = deltaTime;
	PhysicsTick(subStepDeltaTime);

	hitResultsArr.Empty();

	bikeForwardVelocity = FVector::DotProduct(pawnTransform.GetRotation().GetForwardVector(), BikeSkeletalMesh->GetPhysicsLinearVelocityAtPoint(pawnTransform.GetLocation()));
	// Convert velocity to KMH speed.
	bikeForwardSpeedKMH = FMath::Abs(bikeForwardVelocity * 0.036f);

	TArray<bool> wheelContactArr_;

	////////////////////////////////////// *** Looking Wheel Contact Points *** //////////////////////////

	LookingContactPoints(wheelContactArr_);

	//////////////////////////////////// *** Wheelie and Stoppie control ***/////////////////////////////

//	WheelieControl(pawnTransform);

	StoppieControl();

	//////////////////////////////////// *** Calculate Bike Components ***///////////////////////////////

	for (int id_ = 0; id_ < hitResultsArr.Num(); ++id_)
	{
		wheelsArr[id_].speedFromWheelKMH = wheelsArr[id_].toSpeedMultiply * wheelsArr[id_].angularVelocity * radToRpm;

		////////////////////////////////////// *** Apply Brakes *** //////////////////////////////////////

		ApplyBrakes(id_);

		////////////////////////////////////// *** Suspension *** ////////////////////////////////////////

		SuspensionCalculate(id_, wheelContactArr_);

		////////////////////////////////////// *** Linear Velocity Local *** /////////////////////////////
		if (wheelsArr[id_].bWheelContact)
		{
			// Calculate linear velocity for wheel.
			WheelLocalLinearVelocity(id_);

			////////////////////////////////////// *** Wheel Acceleration *** ////////////////////////////

			WheelAcceleration(id_);

			////////////////////////////////////// *** Slip Front *** ////////////////////////////////////

			SlipFrontCalculate(id_);

			////////////////////////////////////// *** Slip Side *** /////////////////////////////////////

			SlipSideCalculate(id_);

			////////////////////////////////////// *** Add Tire Force *** ////////////////////////////////

			ApplyTireSlipForce(id_);
		}
	}

	EngineAcceleration();

	////////////////////////////////////// *** Force Z *** ///////////////////////////////////////////////

	GravityAndSuspensionForces();

	////////////////////////////////////// *** Change Center Mass *** ////////////////////////////////////

//	AdaptiveCenterMass(pawnTransform);

	////////////////////////////////////// *** PID Roll Assist *** ///////////////////////////////////////

	RollAssistant();

	if (bAirControl)
	{
		if (bikeForwardSpeedKMH >= minSpeedAirControl)
		{
			AirControl();
		}
	}
}

void ABikePawn::AdaptiveCenterMass() const
{
	float rollMass_ = FMath::GetMappedRangeValueClamped(FVector2f(30.f, 0.f), FVector2f(1.f, 0.f), FMath::Abs(pawnTransform.Rotator().Roll));
	float speedMass_ = FMath::GetMappedRangeValueClamped(FVector2f(40.f, 10.f), FVector2f(1.f, 0.f), FMath::Abs(bikeForwardSpeedKMH));
	float totalMass_ = FMath::Max(speedMass_, rollMass_);

	BikeSkeletalMesh->SetCenterOfMass(FMath::Lerp(defaultCenterMass, maneuveringCenterMass, totalMass_));
}

void ABikePawn::StoppieControl()
{
	if (!wheelsArr[1].bWheelContact && wheelsArr[0].bWheelContact && brakeSettings.frontHandBrake > 0.f)
	{
		if (pawnTransform.Rotator().Pitch < -7.f && pawnTransform.Rotator().Pitch > -60.f)
		{
			wheelsArr[0].brakeTorque = 0.f;
			brakeSettings.brake = 0.f;
			brakeSettings.frontHandBrake = 0.f;

			float bikePitch_ = pawnTransform.Rotator().Pitch;

			float mapAngle_ = FMath::GetMappedRangeValueClamped(FVector2d(60.f, 5.f), FVector2d(60.f, 0.f), FMath::Abs(bikePitch_));
			PidPitchCtrlComponent->CalculatePidValues(-mapAngle_, 0.f, subStepDeltaTime);

			FVector torque_ = pawnTransform.GetRotation().GetRightVector() * (PidPitchCtrlComponent->pidValue * 35000.f);
			AddTorqueComponent(torque_, false);

			bIsStoppieDetected = true;
		}
		else
		{
			bIsStoppieDetected = false;
		}
	}
	else
	{
		bIsStoppieDetected = false;
	}
}

void ABikePawn::WheelieControl()
{
	float pitchDelta_ = pawnTransform.Rotator().Pitch + hitResultsArr[1].ImpactNormal.Rotation().Pitch - 90.f;

	if (!wheelsArr[0].bWheelContact && wheelsArr[1].bWheelContact)
	{
		if (pitchDelta_ > 25.f && bikeForwardSpeedKMH > 5.f && brakeSettings.rearHandBrake == 0.f && wheelsArr[0].brakeTorque == 0.f && engineSettings.throttle > 0.f)
		{
			pitchDelta_ -= 30.f;
			PidPitchCtrlComponent->CalculatePidValues(pitchDelta_, 0.f, subStepDeltaTime);

			FVector torque_ = pawnTransform.GetRotation().GetRightVector() * (PidPitchCtrlComponent->pidValue * 350000.f);
			AddTorqueComponent(torque_, false);

			bIsWheelieDetected = true;
		}
		else
		{
			bIsWheelieDetected = false;
		}
	}
	else
	{
		bIsWheelieDetected = false;
	}
}

void ABikePawn::RollAssistant()
{
	if (PidCtrlComponent->bPidCtrlEnable)
	{
		if (bRollAirControl || wheelsArr[1].bWheelContact || wheelsArr[0].bWheelContact)
		{
			float bikeRoll_ = pawnTransform.Rotator().Roll;
		//	float bikePitch_ = pawnTransform.Rotator().Pitch;
			if (FMath::Abs(bikeRoll_) < pidRollControlMaxRoll)// && FMath::Abs(bikePitch_) < pidRollControlMaxPitch)
			{
				float angleValue_ = FMath::GetMappedRangeValueClamped(FVector2f(0.f, maxSteeringAngle),
																	  FVector2f(0.f, FMath::Sign(steeringAngle) * bikeAngleSteeringCurve->GetFloatValue(bikeForwardSpeedKMH)),
																	  FMath::Abs(steeringAngle));

				float totalValue_ = bikeRoll_ - angleValue_;

				double valueMinMax_(1000000000.f);
				PidCtrlComponent->CalculatePidValues(totalValue_, 0.f, subStepDeltaTime, -valueMinMax_, valueMinMax_);

				FRotator newRot_ = pawnTransform.GetRotation().Rotator();
				newRot_.Pitch = 0.f;
				
				FVector torque_ = newRot_.Vector() * (PidCtrlComponent->pidValue);
					//pawnTransform.GetRotation().GetForwardVector() * (PidCtrlComponent->pidValue);

				AddTorqueComponent(torque_, false);
			}
		}
	}
}

void ABikePawn::AirControl()
{
	if (PidCtrlComponent->bPidCtrlEnable)
	{
		if (!wheelsArr[0].bWheelContact && !wheelsArr[1].bWheelContact)
		{
			if (FMath::Abs(pawnTransform.Rotator().Roll) < pidRollControlMaxRoll)
			{
				float pitch_ = pawnTransform.Rotator().Pitch;

				PidPitchCtrlComponent->CalculatePidValues(pitch_, flyPitch, subStepDeltaTime);

				FVector torque_ = pawnTransform.GetRotation().GetRightVector() * (PidPitchCtrlComponent->pidValue * 555000.f);
				AddTorqueComponent(torque_, false);
			}
		}
		else
		{
			flyPitch = pawnTransform.Rotator().Pitch;
		}
	}
}

void ABikePawn::PhysicsTick_Implementation(float substepDeltaTime)
{
}

void ABikePawn::AddForceComponent(const FVector& force, bool bAccelChange) const
{
	if (bodyRootInstance)
	{
		bodyRootInstance->AddForce(force, true, bAccelChange);
	}
}

void ABikePawn::AddForceAtLocationComponent(const FVector& force, const FVector& atLocation) const
{
	if (bodyRootInstance)
	{
		bodyRootInstance->AddForceAtPosition(force, atLocation, true);
	}
}

void ABikePawn::AddTorqueComponent(const FVector& torque, bool bAccelChange) const
{
	if (bodyRootInstance)
	{
		bodyRootInstance->AddTorqueInRadians(torque, true, bAccelChange);
	}
}

void ABikePawn::AddForward(float axisValue)
{
	forwardAxisValue = axisValue;

	if (bikeForwardSpeedKMH > 1.f && brakeSettings.frontHandBrake > 0.f)
	{
		forwardAxisValue = 0.f;
	}

	if (bUseAnalogController)
	{
		engineSettings.throttle = axisValue;
	}
	else
	{
		if (forwardAxisValue > 0)
		{
			engineSettings.throttle = FMath::Min(engineSettings.throttle + currentDeltaTime * 4.f, 1.f);
		}
		else
		{
			engineSettings.throttle = FMath::Max(engineSettings.throttle - currentDeltaTime * 2.f, 0.f);
		}
	}
}

void ABikePawn::AddRight(float axisValue)
{
	if (!bIsBikeInitialized)
	{
		return;
	}

	rightAxisValue = axisValue;

	if (bUseAnalogController)
	{
		float steeringSpeed_ = steeringSpeedCurve->GetFloatValue(bikeForwardSpeedKMH);
		float steeringMultiply_ = steeringMultiplyCurve->GetFloatValue(FMath::GetMappedRangeValueClamped(FVector2f(0.f, maxSteeringAngle),
																										 FVector2f(0.f, 1.f), FMath::Abs(steeringAngle)));

		float steeringAngleMax_ = FMath::GetMappedRangeValueClamped(FVector2d(-1.f, 1.f), FVector2d(-maxSteeringAngle, maxSteeringAngle), axisValue);
		steeringAngle = FMath::FInterpConstantTo(steeringAngle, steeringAngleMax_, currentDeltaTime, steeringSpeed_ * steeringMultiply_);
	}
	else
	{
		float steeringSpeed_ = steeringSpeedCurve->GetFloatValue(bikeForwardSpeedKMH);
		float steeringMultiply_ = steeringMultiplyCurve->GetFloatValue(FMath::GetMappedRangeValueClamped(FVector2f(0.f, maxSteeringAngle),
																										 FVector2f(0.f, 1.f), FMath::Abs(steeringAngle)));
		if (rightAxisValue != 0.f)
		{
			steeringAngle = FMath::Clamp(rightAxisValue * (steeringMultiply_ * steeringSpeed_ * currentDeltaTime) + steeringAngle, -maxSteeringAngle, maxSteeringAngle);
		}
		else if (steeringAngle != 0.f)
		{
			float newSteeringAngle_ = FMath::Clamp(steeringAngle + -FMath::Sign(steeringAngle) * (steeringMultiply_ * steeringSpeed_ * currentDeltaTime), -maxSteeringAngle, maxSteeringAngle);
			if (FMath::Sign(newSteeringAngle_) != FMath::Sign(steeringAngle))
			{
				steeringAngle = 0.f;
			}
			else
			{
				steeringAngle = newSteeringAngle_;
			}
		}
	}
}

bool ABikePawn::ShiftGearUp()
{
	if (gearBoxSettings.targetGear + 1 > gearBoxSettings.gearSpeedMaxArr.Num() - 1)
	{
		return false;
	}

	if (GetWorldTimerManager().IsTimerActive(changeGear_Handle))
	{
		GetWorldTimerManager().ClearTimer(changeGear_Handle);
	}

	gearBoxSettings.targetGear++;
	gearBoxSettings.currentGear = 0;
	gearBoxSettings.maxSpeed = 10000.f;

	if (gearBoxSettings.targetGear > gearBoxSettings.gearSpeedMaxArr.Num() - 1)
	{
		gearBoxSettings.targetGear = gearBoxSettings.gearSpeedMaxArr.Num() - 1;
	}

	GetWorldTimerManager().SetTimer(changeGear_Handle, this, &ABikePawn::ChangeGearTimer, gearBoxSettings.gearShiftTime, false, gearBoxSettings.gearShiftTime);

	return true;
}

bool ABikePawn::ShiftGearDown()
{
	if (gearBoxSettings.targetGear - 1 < 0)
	{
		return false;
	}

	if (GetWorldTimerManager().IsTimerActive(changeGear_Handle))
	{
		GetWorldTimerManager().ClearTimer(changeGear_Handle);
	}

	gearBoxSettings.targetGear--;
	if (gearBoxSettings.targetGear < 0)
	{
		gearBoxSettings.targetGear = 0;
	}
	gearBoxSettings.currentGear = 0;
	gearBoxSettings.maxSpeed = 10000.f;

	GetWorldTimerManager().SetTimer(changeGear_Handle, this, &ABikePawn::ChangeGearTimer, gearBoxSettings.gearShiftTime, false, gearBoxSettings.gearShiftTime);

	return true;
}

bool ABikePawn::SetGear(int setGear)
{
	if (setGear < 0 || setGear > gearBoxSettings.gearSpeedMaxArr.Num() - 1)
	{
		return false;
	}

	if (GetWorldTimerManager().IsTimerActive(changeGear_Handle))
	{
		GetWorldTimerManager().ClearTimer(changeGear_Handle);
	}

	gearBoxSettings.targetGear = setGear;
	gearBoxSettings.currentGear = 1;

	GetWorldTimerManager().SetTimer(changeGear_Handle, this, &ABikePawn::ChangeGearTimer, gearBoxSettings.gearShiftTime, false, gearBoxSettings.gearShiftTime);

	return true;
}

void ABikePawn::StartEngine()
{
	bIsEngineWorking = true;
}

void ABikePawn::StopEngine()
{
	bIsEngineWorking = false;
	engineSettings.rpm = 0.f;
	wheelsArr[1].driveTorque = 0.f;
}

void ABikePawn::AddBrake(float axisValue)
{
	if (gearBoxSettings.currentGear == 0 && forwardAxisValue < 0.f && wheelsArr[1].angularVelocity <= 0.5f &&
		wheelsArr[1].brakeTorque > 0.f && wheelsArr[1].bWheelContact && brakeAxisValue == 0.f && bikeForwardSpeedKMH < 10.f)
	{
		bIsReverseDetected = true;
	}

	if (axisValue == 0.f)
	{
		bIsReverseDetected = false;
	}

	brakeAxisValue = axisValue;

	if (bUseAnalogController)
	{
		if (axisValue < 0.f)
		{
			brakeSettings.brake = brakeAxisValue * -1.f;
		}
		else
		{
			brakeSettings.brake = FMath::Max(brakeSettings.brake - currentDeltaTime * 4.f, 0.f);
		}
	}
	else
	{
		if (axisValue < 0.f)
		{
			float brakeMultiply_ = FMath::GetMappedRangeValueClamped(FVector2f(0.f, 100.f), FVector2f(1.f, 4.f), bikeForwardSpeedKMH);
			brakeSettings.brake = FMath::Min(brakeSettings.brake + currentDeltaTime * brakeMultiply_, 1.f);
		}
		else
		{
			brakeSettings.brake = FMath::Max(brakeSettings.brake - currentDeltaTime * 8.f, 0.f);
		}
	}
}

void ABikePawn::AddFrontBrake(float axisValue, bool bSmoothBrake)
{
	if (bSmoothBrake)
	{
		if (axisValue > 0.f && forwardAxisValue <= 0.f || bikeForwardSpeedKMH < 1.f && axisValue > 0.f)
		{
			brakeSettings.frontHandBrake = FMath::Min(brakeSettings.frontHandBrake + currentDeltaTime * 6.f, 1.f);
		}
		else
		{
			brakeSettings.frontHandBrake = FMath::Max(brakeSettings.frontHandBrake - currentDeltaTime * 4.f, 0.f);
		}
	}
	else
	{
		brakeSettings.frontHandBrake = axisValue;
	}
}

void ABikePawn::AddRearBrake(float axisValue, bool bSmoothBrake)
{
	if (bSmoothBrake)
	{
		if (axisValue > 0)
		{
			brakeSettings.rearHandBrake = FMath::Min(brakeSettings.rearHandBrake + currentDeltaTime * 6.f, 1.f);
		}
		else
		{
			brakeSettings.rearHandBrake = FMath::Max(brakeSettings.rearHandBrake - currentDeltaTime * 4.f, 0.f);
		}
	}
	else
	{
		brakeSettings.rearHandBrake = axisValue;
	}
}

void ABikePawn::AddTurbo(float axisValue)
{
	if (axisValue > 0)
	{
		turboValue = FMath::Min(turboValue + currentDeltaTime * 6.f, 1.f);
	}
	else
	{
		turboValue = FMath::Max(turboValue - currentDeltaTime * 4.f, 0.f);
	}
}

void ABikePawn::GetEngineStatus(bool& bIsWorking) const
{
	bIsWorking = bIsEngineWorking;
}

void ABikePawn::InitializingVariables()
{
	linksArr.Add(frontLinkComponent);
	linksArr.Add(rearLinkComponent);

	/////////////////////////////// *** Suspension *** //////////////////////////////////////////////
	// Ray length initializing.
	frontSuspensionParameters.lastLength = frontSuspensionParameters.restLength;
	rearSuspensionParameters.lastLength = rearSuspensionParameters.restLength;

	frontSuspensionParameters.currentLength = frontSuspensionParameters.restLength;
	rearSuspensionParameters.currentLength = rearSuspensionParameters.restLength;

	suspensionsArr.Add(frontSuspensionParameters);
	suspensionsArr.Add(rearSuspensionParameters);

	/////////////////////////////// *** Wheel *** //////////////////////////////////////////////
	wheelPositionArr.Add(frontWheelMeasureComponent);
	wheelPositionArr.Add(rearWheelMeasureComponent);

	frontWheelParameters.radius = frontWheelMeasureComponent->GetScaledSphereRadius();
	rearWheelParameters.radius = rearWheelMeasureComponent->GetScaledSphereRadius();

	frontWheelParameters.tireWidth = frontWheelWidthSphere->GetScaledSphereRadius();
	rearWheelParameters.tireWidth = rearWheelWidthSphere->GetScaledSphereRadius();

	wheelsArr.Add(frontWheelParameters);
	wheelsArr.Add(rearWheelParameters);

	engineSettings.idleRpmRad = engineSettings.idleRPM * rpmToRad;
	engineSettings.maxRpmRad = engineSettings.maxRPM * rpmToRad;

	if (gearBoxSettings.currentGear > gearBoxSettings.gearSpeedMaxArr.Num() - 1)
	{
		gearBoxSettings.currentGear = 1;
	}

	gearBoxSettings.targetGear = gearBoxSettings.currentGear;

	for (int wheelID_ = 0; wheelID_ < wheelsArr.Num(); ++wheelID_)
	{
		wheelsArr[wheelID_].inertia = FMath::Pow(wheelsArr[wheelID_].radius / 100.f, 2.f) * wheelsArr[wheelID_].mass * 0.5f;
		wheelsArr[wheelID_].rRR = wheelsArr[wheelID_].radius / 100.f;
		wheelsArr[wheelID_].toSpeedMultiply = 3.f / 25.f * DOUBLE_PI * wheelsArr[wheelID_].rRR;
	}

	if (IsValid(engineSettings.torqueCurve) &&
		IsValid(bikeAngleSteeringCurve) &&
		IsValid(steeringSpeedCurve) &&
		IsValid(sideForceFromSpeedCurve) &&
		IsValid(steeringMultiplyCurve) &&
		IsValid(steeringAngleBySpeed) &&
		IsValid(steeringHelpMultiplyBySpeed))
	{
		bIsBikeInitialized = true;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Red, TEXT("ERROR - BIKE NOT INITIALIZED"));
	}

	FDebugStruct newStruct_;
	debugTelemetryArr.Add(newStruct_);
	debugTelemetryArr.Add(newStruct_);
}

void ABikePawn::WheelLocalLinearVelocity(const int& wheelID)
{
	FTransform virtualWheelPoint_;
	virtualWheelPoint_.SetLocation(FVector(linksArr[wheelID]->GetComponentLocation().X, linksArr[wheelID]->GetComponentLocation().Y, wheelPositionArr[wheelID]->GetComponentLocation().Z));
	if (wheelID == 0)
	{
		virtualWheelPoint_.SetRotation(steeringComponent->GetComponentRotation().Quaternion());
	}
	else
	{
		virtualWheelPoint_.SetRotation(pawnTransform.GetRotation());
	}
	virtualWheelPoint_.SetScale3D(FVector(1.f, 1.f, 1.f));

	FVector linearVelocity_(BikeSkeletalMesh->GetPhysicsLinearVelocityAtPoint(hitResultsArr[wheelID].ImpactPoint));

	if (hitResultsArr[wheelID].Component.IsValid())
	{
		if (hitResultsArr[wheelID].Component->Mobility == EComponentMobility::Movable)
		{
			FVector impactCompLinearVelocity_(hitResultsArr[wheelID].Component->GetPhysicsLinearVelocityAtPoint(hitResultsArr[wheelID].ImpactPoint));
			linearVelocity_ -= impactCompLinearVelocity_;
		}
	}

	wheelsArr[wheelID].linearVelocityWorld = linearVelocity_ * 0.01f;
	wheelsArr[wheelID].linearVelocity = virtualWheelPoint_.InverseTransformVectorNoScale(wheelsArr[wheelID].linearVelocityWorld);
}

void ABikePawn::ApplyBrakes(const int& wheelID)
{
	// Reverse.
	if (bIsReverseDetected)
	{
		FVector forceBack_ = pawnTransform.GetRotation().GetForwardVector() * -50000.f;
		AddForceComponent(forceBack_, false);
		wheelsArr[wheelID].bIsLocked = false;
		brakeSettings.brake = 0.f;
		wheelsArr[wheelID].brakeTorque = 0.f;
		wheelsArr[wheelID].angularVelocity = FMath::Clamp(wheelsArr[wheelID].angularVelocity, -3.f, 1000);
	}
	else
	{
		if (wheelID == 0)
		{
			if (brakeSettings.frontHandBrake != 0.f)
			{
				wheelsArr[wheelID].brakeTorque = FMath::Lerp(wheelsArr[wheelID].brakeTorque, brakeSettings.handBrakeTorqueMax, brakeSettings.frontHandBrake);
			}
			else
			{
				wheelsArr[wheelID].brakeTorque = FMath::Min(brakeSettings.torqueMax * brakeSettings.brakeBias * brakeSettings.brake, brakeSettings.torqueMax);
			}
		}
		else
		{
			if (brakeSettings.rearHandBrake != 0.f)
			{
				wheelsArr[wheelID].brakeTorque = FMath::Lerp(wheelsArr[wheelID].brakeTorque, brakeSettings.handBrakeTorqueMax, brakeSettings.rearHandBrake);
			}
			else
			{
				wheelsArr[wheelID].brakeTorque = FMath::Min(brakeSettings.torqueMax * (1.f - brakeSettings.brakeBias) * brakeSettings.brake, brakeSettings.torqueMax);
			}
		}

		if (wheelsArr[wheelID].angularVelocity >= 0.f)
		{
			float errorTolerance_(5.f);
			if (steeringAngle != 0.f)
			{
				errorTolerance_ = 3.f;
			}

			if (!FMath::IsNearlyEqual(wheelsArr[wheelID].speedFromWheelKMH, bikeForwardSpeedKMH, errorTolerance_) && brakeSettings.brake != 0.f)
			{
				wheelsArr[wheelID].absCapacity = FMath::Clamp(wheelsArr[wheelID].absCapacity + 0.5f / subStepDeltaTime, 0.f, brakeSettings.torqueMax);
				wheelsArr[wheelID].brakeTorque = FMath::Clamp(wheelsArr[wheelID].brakeTorque - wheelsArr[wheelID].absCapacity, 0.f, brakeSettings.torqueMax);
			}
			else
			{
				wheelsArr[wheelID].absCapacity = 0.f;
			}

			// Reset capacity.
			if (brakeAxisValue == 0.f)
			{
				wheelsArr[wheelID].absCapacity = 0.f;
			}
		}
	}
}

FHitResult ABikePawn::FindAdditionalPoint(const int& wheelID, TArray<bool>& wheelContactArr)
{
	FVector startV_;
	if (bUseMovingAxis)
	{
		startV_ = FVector(wheelPositionArr[wheelID]->GetComponentLocation().X, wheelPositionArr[wheelID]->GetComponentLocation().Y, linksArr[wheelID]->GetComponentLocation().Z);
	}
	else
	{
		startV_ = linksArr[wheelID]->GetComponentLocation();
	}

	FVector wheelPoint_ = linksArr[wheelID]->GetForwardVector() * (suspensionsArr[wheelID].currentLength) + linksArr[wheelID]->GetComponentLocation();

	float startStep_(90.f);
	bool bBuildWheel_(true);
	int sidePoints_(0);
	TArray<FHitResult> wheelHitResultsArr_;

	FVector endPoint_;

	auto SidePointTrace = [&](const float& setStep)
	{
		endPoint_ = pawnTransform.GetRotation().GetForwardVector().RotateAngleAxis(setStep, pawnTransform.GetRotation().GetRightVector());

		endPoint_ = endPoint_ * wheelsArr[wheelID].radius + wheelPoint_;

		FHitResult hitResult_(TraceToLocation(startV_, endPoint_, wheelsArr[wheelID].tireWidth, bUseSphereTrace, false));

		if (bDebugTrace)
		{
			FDebugTraceStruct newTrace_;
			newTrace_.startV = startV_;
			if (hitResult_.bBlockingHit)
			{
				newTrace_.endV = hitResult_.Location;
			}
			else
			{
				newTrace_.endV = endPoint_;
			}
			newTrace_.sphereSize = wheelsArr[wheelID].tireWidth;
			debugTraceArr.Add(newTrace_);
		}

		return hitResult_;
	};

	wheelHitResultsArr_.Add(SidePointTrace(startStep_));

	while (bBuildWheel_)
	{
		if (sidePoints_ == additionalSidePoints)
		{
			startStep_ = 90.f;
		}

		if (sidePoints_ < additionalSidePoints)
		{
			startStep_ += axisStep;
			wheelHitResultsArr_.Add(SidePointTrace(startStep_));
			++sidePoints_;
		}
		else
		{
			startStep_ -= axisStep;
			wheelHitResultsArr_.Add(SidePointTrace(startStep_));
			++sidePoints_;
		}

		if (sidePoints_ == additionalSidePoints * 2)
		{
			bBuildWheel_ = false;
		}
	}

	float minDistance_(0);
	int indexMinDistance_(-1);
	bool bFirstDistance_(true);

	bool bSmoothSelected(false);

	float measureDistance_;
	int measureIndex_;

	if (wheelID == 0)
	{
		measureDistance_ = frontDistance;
		measureIndex_ = frontSelected;
	}
	else
	{
		measureDistance_ = rearDistance;
		measureIndex_ = rearSelected;
	}

	if (measureIndex_ > -1)
	{
		float checkDistance_ = (wheelHitResultsArr_[measureIndex_].TraceStart - wheelHitResultsArr_[measureIndex_].ImpactPoint).Size();
		if (checkDistance_ <= measureDistance_ + smoothSidePointsSelect)
		{
			bSmoothSelected = true;
			indexMinDistance_ = measureIndex_;
		}
	}

	if (!bSmoothSelected)
	{
		for (int i = wheelHitResultsArr_.Num() - 1; i >= 0; --i)
		{
			if (wheelHitResultsArr_[i].bBlockingHit && (wheelPoint_ - wheelHitResultsArr_[i].ImpactPoint).Size() <= wheelsArr[wheelID].radius + tireTraceCorrect)
			{
				float distance_ = (wheelHitResultsArr_[i].TraceStart - wheelHitResultsArr_[i].ImpactPoint).Size();

				if (bFirstDistance_)
				{
					bFirstDistance_ = false;
					minDistance_ = distance_;
					indexMinDistance_ = i;
				}
				else if (distance_ < minDistance_ + smoothSidePointsSelect)
				{
					minDistance_ = distance_;
					indexMinDistance_ = i;
				}
			}
		}
	}

	if (indexMinDistance_ > -1)
	{
		wheelContactArr.Add(true);

		if (wheelID == 0)
		{
			frontSelected = indexMinDistance_;
			frontDistance = minDistance_;
		}
		else
		{
			rearSelected = indexMinDistance_;
			rearDistance = minDistance_;
		}
		int realPoint_ = indexMinDistance_;
		if (realPoint_ > additionalSidePoints)
		{
			realPoint_ -= additionalSidePoints;
		}
		wheelsArr[wheelID].sidePointNumber = realPoint_;
		return wheelHitResultsArr_[indexMinDistance_];
	}
	else
	{
		wheelContactArr.Add(false);

		if (wheelID == 0)
		{
			frontSelected = -1;
			frontDistance = 0.f;
		}
		else
		{
			rearSelected = -1;
			rearDistance = 0.f;
		}
		wheelsArr[wheelID].sidePointNumber = 0;
		return wheelHitResultsArr_[0];
	}
}

void ABikePawn::DebugBuild()
{
	if (bShowFPS)
	{
		// Show FPS and Physics FPS.
		FNumberFormattingOptions numberFormatOptions_;
		numberFormatOptions_.MaximumFractionalDigits = 0;

		FText textFps_ = FText::AsNumber(1.f / currentDeltaTime, &numberFormatOptions_);
		FString fps_ = textFps_.ToString();

		FText textPhysicsFps_ = FText::AsNumber(1.f / subStepDeltaTime, &numberFormatOptions_);
		FString pFps_ = textPhysicsFps_.ToString();

		float fpsSize_ = 1.2f;
		GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Yellow, fps_ + TEXT(" - Main Game Thread FPS"), true, FVector2d(fpsSize_, fpsSize_));
		GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, pFps_ + TEXT(" - Physic Calculate FPS"), true, FVector2d(fpsSize_, fpsSize_));

		GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Red, FString::Printf(TEXT("Frame Time %f"), currentDeltaTime));

		GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, TEXT("================================ FPS ================================"));
	}
	if (bDebugTelemetry)
	{
		GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, TEXT("============================== OTHER ==============================="));

		if (brakeAxisValue < 0.f)
		{
			GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, FString::Printf(TEXT("Brake %f"), brakeSettings.brake));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Yellow, FString::Printf(TEXT("Brake %f"), brakeSettings.brake));
		}

		if (brakeSettings.frontHandBrake > 0.f)
		{
			GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, FString::Printf(TEXT("Front Hand Brake %f"), brakeSettings.frontHandBrake));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Yellow, FString::Printf(TEXT("Front Hand Brake %f"), brakeSettings.frontHandBrake));
		}

		if (brakeSettings.rearHandBrake > 0.f)
		{
			GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, FString::Printf(TEXT("Rear Hand Brake %f"), brakeSettings.rearHandBrake));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Yellow, FString::Printf(TEXT("Rear Hand Brake %f"), brakeSettings.rearHandBrake));
		}

		for (int i = 0; i < wheelsArr.Num(); ++i)
		{
			if (i == 0)
			{
				if (wheelsArr[i].brakeTorque > 0.f)
				{
					GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, FString::Printf(TEXT("Front Brake Torque %f"), wheelsArr[i].brakeTorque));
				}
				else
				{
					GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Yellow, FString::Printf(TEXT("Front Brake Torque %f"), wheelsArr[i].brakeTorque));
				}

				if (wheelsArr[i].absCapacity > 0.f)
				{
					GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, FString::Printf(TEXT("Front ABS Capacity %f"), wheelsArr[i].absCapacity));
				}
				else
				{
					GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Yellow, FString::Printf(TEXT("Front ABS Capacity %f"), wheelsArr[i].absCapacity));
				}
			}
			else
			{
				if (wheelsArr[i].brakeTorque > 0.f)
				{
					GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, FString::Printf(TEXT("Rear Brake Torque %f"), wheelsArr[i].brakeTorque));
				}
				else
				{
					GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Yellow, FString::Printf(TEXT("Rear Brake Torque %f"), wheelsArr[i].brakeTorque));
				}

				if (wheelsArr[i].absCapacity > 0.f)
				{
					GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, FString::Printf(TEXT("Rear ABS Capacity %f"), wheelsArr[i].absCapacity));
				}
				else
				{
					GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Yellow, FString::Printf(TEXT("Rear ABS Capacity %f"), wheelsArr[i].absCapacity));
				}
			}
		}

		GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, TEXT("============================== Brake ==============================="));

		if (rightAxisValue != 0.f)
		{
			GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, FString::Printf(TEXT("Steering Angle %f"), steeringAngle));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Yellow, FString::Printf(TEXT("Steering Angle %f"), steeringAngle));
		}

		if (forwardAxisValue > 0.f)
		{
			GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, FString::Printf(TEXT("Throttle Value %f"), engineSettings.throttle));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Yellow, FString::Printf(TEXT("Throttle Value %f"), engineSettings.throttle));
		}

		GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, TEXT("============================== Control ==============================="));

		GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, FString::Printf(TEXT("Current Gear %i"), gearBoxSettings.currentGear));

		GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, TEXT("============================== Gear ==============================="));

		for (int i = 0; i < suspensionsArr.Num(); ++i)
		{
			if (i == 0)
			{
				GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Yellow, FString::Printf(TEXT("Front Length %f"), suspensionsArr[i].currentLength));
			}
			else
			{
				GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Yellow, FString::Printf(TEXT("Rear Length %f"), suspensionsArr[i].currentLength));
			}
		}

		GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, TEXT("============================== Suspensions ==============================="));

		GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, FString::Printf(TEXT("Forward Up Forces %f"), suspensionsArr[0].force));
		GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, FString::Printf(TEXT("Rear Up Forces %f"), suspensionsArr[1].force));
		GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, FString::Printf(TEXT("Forward Side Forces %f"), debugTelemetryArr[0].tireSlipForceEnd.Size()));
		GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, FString::Printf(TEXT("Rear Side Forces %f"), debugTelemetryArr[1].tireSlipForceEnd.Size()));

		GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, TEXT("============================== Forces ==============================="));

		if (FMath::Abs(BikeSkeletalMesh->GetComponentRotation().Roll) < pidRollControlMaxRoll && FMath::Abs(BikeSkeletalMesh->GetComponentRotation().Pitch) < pidRollControlMaxPitch)
		{
			GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Yellow, FString::Printf(TEXT("Bike Roll %f"), BikeSkeletalMesh->GetComponentRotation().Roll));
			GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Yellow, FString::Printf(TEXT("Bike Pitch %f"), BikeSkeletalMesh->GetComponentRotation().Pitch));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Purple, FString::Printf(TEXT("Bike Roll %f"), BikeSkeletalMesh->GetComponentRotation().Roll));
			GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Purple, FString::Printf(TEXT("Bike Pitch %f"), BikeSkeletalMesh->GetComponentRotation().Pitch));
		}

		GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, TEXT("============================== Bike ==============================="));

		for (int i = 0; i < wheelsArr.Num(); ++i)
		{
			if (i == 0)
			{
				GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, FString::Printf(TEXT("Front Wheel RPM %f"), wheelsArr[i].angularVelocity * radToRpm));
			}
			else
			{
				GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, FString::Printf(TEXT("Rear Wheel RPM %f"), wheelsArr[i].angularVelocity * radToRpm));
			}
		}
		for (int i = 0; i < wheelsArr.Num(); ++i)
		{
			if (i == 0)
			{
				GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Green, TEXT("Front Wheel slipY ") + wheelsArr[i].slip.ToString());
			}
			else
			{
				GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Green, TEXT("Rear Wheel slipY ") + wheelsArr[i].slip.ToString());
			}
		}

		GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Green, TEXT("============================== Wheels ==============================="));

		GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Orange, FString::Printf(TEXT("Engine RPM %f"), engineSettings.rpm));
		GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Orange, FString::Printf(TEXT("Engine Effective Torque %f"), engineSettings.effectiveTorque));

		GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Orange, TEXT("============================== Engine ==============================="));
	}

	if (bDebugForces)
	{
		for (int wheelID_ = 0; wheelID_ < wheelsArr.Num(); ++wheelID_)
		{
			FVector startV_ = wheelPositionArr[wheelID_]->GetComponentLocation();

			FVector startForwardPoint_;
			constexpr float sideDistance_(40.f);
			if (wheelID_ == 0)
			{
				startForwardPoint_ = wheelPositionArr[wheelID_]->GetComponentLocation() + BikeSkeletalMesh->GetRightVector() * sideDistance_;
			}
			else
			{
				startForwardPoint_ = wheelPositionArr[wheelID_]->GetComponentLocation() + BikeSkeletalMesh->GetRightVector() * -sideDistance_;
			}

			// Suspension.
			float forcePower_ = FMath::GetMappedRangeValueClamped(FVector2f(0.f, suspensionsArr[wheelID_].forceMax),
																  FVector2f(0.f, 150.f), debugTelemetryArr[wheelID_].suspensionForceEnd.Size());

			debugTelemetryArr[wheelID_].suspensionForceEnd.Normalize();

			DrawDebugDirectionalArrow(GetWorld(), startForwardPoint_, debugTelemetryArr[wheelID_].suspensionForceEnd * forcePower_ + startForwardPoint_, 5.f, FColor::Blue, false, -1.f, 0, 2.f);

			forcePower_ = FMath::GetMappedRangeValueClamped(FVector2f(0.f, suspensionsArr[wheelID_].forceMax),
															FVector2f(0.f, 550.f), debugTelemetryArr[wheelID_].tireSlipForceEnd.Size());

			debugTelemetryArr[wheelID_].tireSlipForceEnd.Normalize();

			DrawDebugDirectionalArrow(GetWorld(), startV_, debugTelemetryArr[wheelID_].tireSlipForceEnd * forcePower_ + startV_, 15.f, FColor::Green, false, -1.f, 0, 3.f);
			DrawDebugDirectionalArrow(GetWorld(), startForwardPoint_, debugTelemetryArr[wheelID_].tireSlipForceEnd2 + startForwardPoint_, 15.f, FColor::Magenta, false, -1.f, 0, 3.f);
		}

		float boxSize_(8.f);
		DrawDebugBox(GetWorld(), BikeSkeletalMesh->GetCenterOfMass(), FVector(boxSize_, boxSize_, boxSize_), FColor::Yellow, false, -1.f, 0.f, 3.f);
	}

	if (bDebugTrace)
	{
		for (int whID = 0; whID < hitResultsArr.Num(); ++whID)
		{
			if (hitResultsArr[whID].bBlockingHit)
			{
				DrawDebugDirectionalArrow(GetWorld(), hitResultsArr[whID].TraceStart, hitResultsArr[whID].ImpactPoint, 5.0f, FColor::Red, false, -1.f, 0, 1.0f);
			}
			else
			{
				DrawDebugDirectionalArrow(GetWorld(), hitResultsArr[whID].TraceStart, hitResultsArr[whID].TraceEnd, 5.0f, FColor::Green, false, -1.f, 0, 1.0f);
			}

			// Debug Impact Point
			if (wheelsArr[whID].bWheelContact)
			{
				DrawDebugSphere(GetWorld(), hitResultsArr[whID].Location, wheelsArr[whID].tireWidth, 8, FColor::Red, false, -1.f, 0, 5.f);
				DrawDebugBox(GetWorld(), hitResultsArr[whID].ImpactPoint, FVector(5.f, 5.f, 5.f), FColor::Blue, false, -1.f, 0, 3.f);
			}
			else
			{
				DrawDebugSphere(GetWorld(), hitResultsArr[whID].Location, wheelsArr[whID].tireWidth, 8, FColor::Green, false, -1.f, 0, 1.f);
			}
		}

		for (int i = 0; i < debugTraceArr.Num(); ++i)
		{
			DrawDebugDirectionalArrow(GetWorld(), debugTraceArr[i].startV, debugTraceArr[i].endV, 5.0f, FColor::Green, false, -1.f, 0, 1.0f);
			DrawDebugSphere(GetWorld(), debugTraceArr[i].endV, debugTraceArr[i].sphereSize, 8, FColor::Green, false, -1.f, 0, 1.f);
		}
	}

	if (bDebugWheels)
	{
		for (int i = 0; i < wheelsArr.Num(); ++i)
		{
			DrawDebugCircle(GetWorld(), wheelsArr[i].wheelLocation, wheelsArr[i].radius, 36, FColor::White, false, -1.f, 0, 2.f, BikeSkeletalMesh->GetForwardVector());
		}
	}
}

void ABikePawn::PidResetTimer() const
{
	if (steeringAngle == 0.f)
	{
		if (FMath::Abs(PidCtrlComponent->pidValue) > 3.0f)
		{
			PidCtrlComponent->ResetPidValues();
			PidPitchCtrlComponent->ResetPidValues();
		}
	}
}

void ABikePawn::LookingContactPoints(TArray<bool>& wheelContactArr)
{
	hitResultsArr.Empty();

	debugTraceArr.Empty();

	for (int linkID_ = 0; linkID_ < linksArr.Num(); ++linkID_)
	{
		// Looking for additional points of contact.
		hitResultsArr.Add(FindAdditionalPoint(linkID_, wheelContactArr));
	}
}

void ABikePawn::GravityAndSuspensionForces()
{
	for (int whID = 0; whID < suspensionsArr.Num(); ++whID)
	{
		if (wheelsArr[whID].bWheelContact)
		{
			FVector bikeLocation_ = pawnTransform.GetLocation();
			FVector targetLocation_ = bikeLocation_;
			targetLocation_.Z += 1000.f;
			FRotator targetRotation_ = UKismetMathLibrary::FindLookAtRotation(bikeLocation_, targetLocation_);

			float sideMultiply_ = FMath::GetMappedRangeValueClamped(FVector2f(0.f, (float)additionalSidePoints), FVector2f(0.f, 0.9f), wheelsArr[whID].sidePointNumber);
			sideMultiply_ = FMath::Max(sideMultiply_, 0.1f);
			FVector& loc_ = wheelsArr[whID].wheelLocation;
			FVector forceImpact_(hitResultsArr[whID].ImpactNormal * (suspensionsArr[whID].force * sideMultiply_));

			float upHalfMultiply_ = (1.f - sideMultiply_) / 2.f;
			upHalfMultiply_ = FMath::Max(upHalfMultiply_, 0.1f);
			
			float halfForce_ = suspensionsArr[whID].force * upHalfMultiply_;
			FVector forceUp_ = targetRotation_.Vector() * halfForce_;
			FVector forceBikeUp_ = pawnTransform.GetRotation().GetUpVector() * halfForce_;

			AddForceAtLocationComponent((forceImpact_ + forceUp_ + forceBikeUp_) * 100.f, loc_);

			if (bDebugForces)
			{
				debugTelemetryArr[whID].suspensionForceEnd = forceImpact_ + forceUp_ + forceBikeUp_;
			}
		}
	}
}

void ABikePawn::ChangeGearTimer()
{
	gearBoxSettings.currentGear = gearBoxSettings.targetGear;
	GetWorldTimerManager().ClearTimer(changeGear_Handle);

	gearBoxSettings.SetRatio();
}

void ABikePawn::EngineAcceleration()
{
	if (!bIsEngineWorking)
	{
		engineSettings.angularVelocity = 0.f;
		return;
	}

	float friction_ = engineSettings.startFriction + (engineSettings.rpm * engineSettings.frictionCoefficient);
	float currentInitialTorque_ = (friction_ + engineSettings.torqueCurve->GetFloatValue(engineSettings.rpm)) * engineSettings.throttle;
	engineSettings.effectiveTorque = currentInitialTorque_ - friction_;

	// Random idle rpm.
	float idleRpmRad_ = FMath::RandRange(engineSettings.idleRPM * 0.9f, engineSettings.idleRPM) * rpmToRad;

	if (gearBoxSettings.currentGear != 0)
	{
		engineSettings.angularVelocity = FMath::GetMappedRangeValueClamped(FVector2f(0.f, gearBoxSettings.maxSpeed),
																		   FVector2f(idleRpmRad_, engineSettings.maxRpmRad), wheelsArr[1].angularVelocity);;
	}
	else
	{
		float acceleration_ = (engineSettings.effectiveTorque) / engineSettings.inertia;
		float angularVelocityDelta_ = acceleration_ * subStepDeltaTime;

		if (angularVelocityDelta_ > 0.f)
		{
			angularVelocityDelta_ *= 4.f;
		}
		else
		{
			angularVelocityDelta_ *= 2.f;
		}

		float maxRpmRad_ = FMath::RandRange(engineSettings.maxRpmRad * 0.92f, engineSettings.maxRpmRad);

		engineSettings.angularVelocity = FMath::Clamp(engineSettings.angularVelocity + angularVelocityDelta_, idleRpmRad_, maxRpmRad_);;
	}

	engineSettings.rpm = engineSettings.angularVelocity * radToRpm;

	if (gearBoxSettings.currentGear != 0 && !bIsBurnDetected)
	{
		float boostThrottleMultiply_ = 19.f;
		float maxThrottleMultiply_ = 15.f;
		float minThrottleMultiply_ = 11.f;

		float multiplyThrottleSize_ = FMath::GetMappedRangeValueClamped(FVector2f(3.f, 100.f), FVector2f(maxThrottleMultiply_, minThrottleMultiply_), bikeForwardSpeedKMH);
		if (turboValue != 0 && bikeForwardSpeedKMH < 45.f && !bIsBurnDetected)
		{
			multiplyThrottleSize_ = FMath::Lerp(minThrottleMultiply_, boostThrottleMultiply_, turboValue);
		}
		else if (turboValue != 0 && !bIsBurnDetected)
		{
			multiplyThrottleSize_ = FMath::Lerp(minThrottleMultiply_, boostThrottleMultiply_, turboValue);
		}
		else if (bIsBurnDetected)
		{
			multiplyThrottleSize_ = 2.f;
		}

		if (gearBoxSettings.currentGear != 0 || turboValue != 0.f) //wheelsArr[1].bWheelContact &&
		{
			float multiplyThrottle_;

			if (bikeForwardSpeedKMH > 3.f)
			{
				multiplyThrottle_ = FMath::GetMappedRangeValueClamped(FVector2f(10.f, 300.f), FVector2f(multiplyThrottleSize_, 0.2f), bikeForwardSpeedKMH);
			}
			else
			{
				multiplyThrottle_ = 15.f;
			}

			float totalTorque_ = FMath::Max(engineSettings.throttle, 0.f) * multiplyThrottle_ * engineSettings.torqueCurve->GetFloatValue(engineSettings.rpm);

			wheelsArr[1].driveTorque = totalTorque_;
		}
		else
		{
			wheelsArr[1].driveTorque = wheelsArr[1].driveTorque * 0.15f;
		}
	}
	else if (bIsBurnDetected)
	{
		wheelsArr[1].driveTorque = FMath::Max(engineSettings.throttle, 0.f) * 100.f;
	}
	else
	{
		wheelsArr[1].driveTorque = 0;
	}
}

void ABikePawn::SuspensionCalculate(const int& whID, const TArray<bool>& wheelContactArr)
{
	float springForce_;

	if (hitResultsArr[whID].bBlockingHit)
	{
		// Update suspension length.
		float susLenght_ = (linksArr[whID]->GetComponentLocation() - (hitResultsArr[whID].ImpactPoint + pawnTransform.GetRotation().GetUpVector() * wheelsArr[whID].radius)).Size();

		const float minLenght_(suspensionsArr[whID].restLength - suspensionsArr[whID].travelDist);
		const float maxLenght_(suspensionsArr[whID].restLength + suspensionsArr[whID].travelDist);
		susLenght_ = FMath::Clamp(susLenght_, minLenght_, maxLenght_);

		suspensionsArr[whID].currentLength = susLenght_;

		springForce_ = (suspensionsArr[whID].restLength - suspensionsArr[whID].currentLength) * suspensionsArr[whID].stiffness;

		wheelsArr[whID].bWheelContact = wheelContactArr[whID];
	}
	else
	{
		suspensionsArr[whID].currentLength = suspensionsArr[whID].restLength + suspensionsArr[whID].travelDist;
		wheelsArr[whID].bWheelContact = false;
		springForce_ = 0.f;
	}

	suspensionsArr[whID].damperForce = (suspensionsArr[whID].lastLength - suspensionsArr[whID].currentLength) / subStepDeltaTime * suspensionsArr[whID].damper;

	if (wheelsArr[whID].bWheelContact)
	{
		float minForce_ = FMath::Max(suspensionsArr[whID].forceMin, -300.f);
		float minForceSpeed_ = FMath::GetMappedRangeValueClamped(FVector2f(0.f, 80.f), FVector2f(minForce_, suspensionsArr[whID].forceMin), bikeForwardSpeedKMH);

		// Add force Z.
		if (brakeSettings.frontHandBrake != 0.f)
		{
			float totalMinForce_ = FMath::Lerp(minForceSpeed_, 0.f, brakeSettings.frontHandBrake);

			suspensionsArr[whID].force = FMath::Clamp(springForce_ + suspensionsArr[whID].damperForce, totalMinForce_, suspensionsArr[whID].forceMax);
		}
		else
		{
			suspensionsArr[whID].force = FMath::Clamp(springForce_ + suspensionsArr[whID].damperForce, minForceSpeed_, suspensionsArr[whID].forceMax);
		}
	}
	else
	{
		suspensionsArr[whID].force = 0.f;
	}

	// Update last length for next frame.
	suspensionsArr[whID].lastLength = suspensionsArr[whID].currentLength;

	wheelsArr[whID].wheelLocation = -pawnTransform.GetRotation().GetUpVector() * suspensionsArr[whID].currentLength + hitResultsArr[whID].TraceStart;
}

void ABikePawn::SlipFrontCalculate(const int& wheelID)
{
	float targetAngularVelocity_ = wheelsArr[wheelID].linearVelocity.X / wheelsArr[wheelID].rRR;

	float targetAngularAcceleration_ = (wheelsArr[wheelID].angularVelocity - targetAngularVelocity_) / subStepDeltaTime;

	float targetTorque_ = targetAngularAcceleration_ * wheelsArr[wheelID].inertia;

	float mtCoefficient_ = 1.f; // 0.7f;

	float maxFrictionTorque_ =  suspensionsArr[wheelID].force * wheelsArr[wheelID].rRR * mtCoefficient_;

	float slipMax_;

	if (wheelsArr[wheelID].bIsLocked)
	{
		slipMax_ = FMath::Sign(wheelsArr[wheelID].longSlipVelocity);
	}
	else
	{
		if (bIsBurnDetected && wheelID == 0)
		{
			slipMax_ = FMath::Clamp(UKismetMathLibrary::SafeDivide(targetTorque_, maxFrictionTorque_), -1.0f, 1.0f);
		}
		else
		{
			slipMax_ = UKismetMathLibrary::SafeDivide(targetTorque_, maxFrictionTorque_);
		}
	}

	float longSlipCoefficient_ = FMath::Abs(wheelsArr[wheelID].longSlipVelocity) / wheelsArr[wheelID].relaxationLenghtFront * 0.01f;
	longSlipCoefficient_ = FMath::Clamp(longSlipCoefficient_, 0.f, 1.f);

	wheelsArr[wheelID].slip.X = ((slipMax_ - wheelsArr[wheelID].slip.X) * longSlipCoefficient_ + wheelsArr[wheelID].slip.X);
}

void ABikePawn::SlipSideCalculate(const int& wheelID)
{
	float slipAngle_(0.f); // else = 0.f.
	if (wheelsArr[wheelID].linearVelocity.X != 0.f)
	{
		slipAngle_ = wheelsArr[wheelID].linearVelocity.Y / FMath::Abs(wheelsArr[wheelID].linearVelocity.X);
		slipAngle_ = UKismetMathLibrary::DegAtan(-slipAngle_);
	}

	wheelsArr[wheelID].slip.Y = FMath::Clamp(slipAngle_ / wheelsArr[wheelID].slipPeak, -1.f, 1.f);

	float lowStageSlip_ = wheelsArr[wheelID].slipPeak * FMath::Sign(wheelsArr[wheelID].linearVelocity.Y * -1.f);

	float mapRangeLength_ = FMath::GetMappedRangeValueClamped(FVector2f(3.0f, 6.0f), FVector2f(0.f, 1.f), wheelsArr[wheelID].linearVelocity.Size());

	float stageSlip_ = UKismetMathLibrary::Lerp(lowStageSlip_, slipAngle_, mapRangeLength_);

	float coefficient_ = FMath::Abs(wheelsArr[wheelID].linearVelocity.Y) / wheelsArr[wheelID].relaxationLenghtSide * 0.01f;
	coefficient_ = FMath::Clamp(coefficient_, 0.f, 1.f);

	//	wheelsArr[wheelID].slipAngleDyn = (stageSlip_ - wheelsArr[wheelID].slipAngleDyn) * coefficient_ + wheelsArr[wheelID].slipAngleDyn;
	wheelsArr[wheelID].slipAngleDyn = FMath::Clamp((stageSlip_ - wheelsArr[wheelID].slipAngleDyn) * coefficient_ + wheelsArr[wheelID].slipAngleDyn, -90.f, 90.f);

	//	wheelsArr[wheelID].slip.Y = FMath::Clamp(wheelsArr[wheelID].slipAngleDyn / wheelsArr[wheelID].slipAnglePeak, -1.f, 1.f);
	wheelsArr[wheelID].slip.Y = wheelsArr[wheelID].slipAngleDyn / wheelsArr[wheelID].slipPeak;
}

void ABikePawn::ApplyTireSlipForce(const int& wheelID)
{
	FVector rightToPlane_;
	FVector forwardToPlane_;

	if (wheelID == 1 && brakeSettings.frontHandBrake != 0.f &&
		bikeForwardSpeedKMH < 7.0f &&
		engineSettings.throttle > 0.f &&
		gearBoxSettings.currentGear != 0 &&
		wheelsArr[0].bWheelContact &&
		wheelsArr[1].bWheelContact)
	{
		bIsBurnDetected = true;

		if (engineSettings.rpm > 2500.f)
		{
			burnTime = burnTime + 1.f * subStepDeltaTime;
		}
		else
		{
			burnTime = 0.f;
		}
	}
	else if (wheelID == 1)
	{
		bIsBurnDetected = false;
		burnTime = 0.f;
	}

	if (bIsBurnDetected && wheelID == 1)
	{
		if (wheelsArr[wheelID].angularVelocity > 10.f)
		{
			wheelsArr[wheelID].slip.Y = 0.7f * -rightAxisValue;
		}

		wheelsArr[wheelID].slip.X = FMath::Clamp(wheelsArr[wheelID].slip.X, -0.1f, 0.1f);
	}

	// Variant One.
	/*if (wheelID == 0)
	{
		rightToPlane_ = FVector::VectorPlaneProject(steeringComponent->GetRightVector(), hitResultsArr[wheelID].Normal).GetSafeNormal();
		forwardToPlane_ = FVector::VectorPlaneProject(steeringComponent->GetForwardVector(), hitResultsArr[wheelID].Normal).GetSafeNormal();
	}
	else
	{
		rightToPlane_ = FVector::VectorPlaneProject(pawnTransform.GetRotation().GetRightVector(), hitResultsArr[wheelID].Normal).GetSafeNormal();
		forwardToPlane_ = FVector::VectorPlaneProject(pawnTransform.GetRotation().GetForwardVector(), hitResultsArr[wheelID].Normal).GetSafeNormal();
	}*/

	// Variant Two.
	FVector targetLoc_;
	if (wheelID == 0)
	{
		targetLoc_ = steeringComponent->GetRightVector() * 100.f + steeringComponent->GetComponentLocation();
		targetLoc_.Z = steeringComponent->GetComponentLocation().Z;
		rightToPlane_ = UKismetMathLibrary::FindLookAtRotation(steeringComponent->GetComponentLocation(), targetLoc_).Vector().GetSafeNormal(); // FVector::VectorPlaneProject(steeringComponent->GetRightVector(), hitResultsArr[wheelID].Normal).GetSafeNormal();
		forwardToPlane_ = steeringComponent->GetForwardVector(); //FVector::VectorPlaneProject(steeringComponent->GetForwardVector(), hitResultsArr[wheelID].Normal).GetSafeNormal();
	}
	else
	{
		targetLoc_ = pawnTransform.GetRotation().GetRightVector() * 100.f + pawnTransform.GetLocation();
		targetLoc_.Z = pawnTransform.GetLocation().Z;
		rightToPlane_ = UKismetMathLibrary::FindLookAtRotation(pawnTransform.GetLocation(), targetLoc_).Vector().GetSafeNormal(); //FVector::VectorPlaneProject(pawnTransform.GetRotation().GetRightVector(), hitResultsArr[wheelID].Normal).GetSafeNormal();
		forwardToPlane_ = pawnTransform.GetRotation().GetForwardVector();//FVector::VectorPlaneProject(pawnTransform.GetRotation().GetForwardVector(), hitResultsArr[wheelID].Normal).GetSafeNormal();
	}

	float maxSideForceZ_ = sideForceFromSpeedCurve->GetFloatValue(bikeForwardSpeedKMH);
	float maxForceZ_ = FMath::Max(suspensionsArr[wheelID].force, 0.f);

	double rightForce_ = maxSideForceZ_ * wheelsArr[wheelID].slip.Y * 100.f;

	if (wheelID == 0)
	{
		rightToPlane_ = rightToPlane_ * rightForce_ * steeringHelpMultiplyBySpeed->GetFloatValue(bikeForwardSpeedKMH);
	}
	else
	{
		rightToPlane_ = rightToPlane_ * rightForce_;
	}

	AddForceAtLocationComponent(rightToPlane_, wheelsArr[wheelID].wheelLocation);

//	float testMultiply_ = 0.4f;
	wheelsArr[wheelID].forceX = maxForceZ_ * wheelsArr[wheelID].slip.X; // * testMultiply_;

	FVector frontForceLoc_(wheelsArr[wheelID].wheelLocation); //(wheelsArr[wheelID].wheelLocation);

	forwardToPlane_ = maxForceZ_ * wheelsArr[wheelID].slip.X * forwardToPlane_;

	if (brakeAxisValue < 0.f && steeringAngle == 0.f && bikeForwardSpeedKMH < 60.f || brakeSettings.frontHandBrake != 0.f || brakeSettings.rearHandBrake != 0.f)
	{
		frontForceLoc_ = hitResultsArr[wheelID].ImpactPoint;
	}
	else if (bikeForwardSpeedKMH < 20.f && brakeAxisValue >= 0.f && steeringAngle == 0.f)
	{
		frontForceLoc_ = hitResultsArr[wheelID].ImpactPoint;
	}

	if (bIsBurnDetected)
	{
		if (wheelID == 0)
		{
			AddForceAtLocationComponent(forwardToPlane_ * 100.f, frontForceLoc_);
		}
		else
		{
			AddForceAtLocationComponent(forwardToPlane_ * 1.f, frontForceLoc_);
		}
	}
	else
	{
		if (brakeAxisValue < 0 && bikeForwardSpeedKMH > 5.f)
		{
			AddForceAtLocationComponent(forwardToPlane_ * 250.f, frontForceLoc_);
		}
		else if (brakeSettings.frontHandBrake > 0.f && wheelsArr[0].bWheelContact && forwardAxisValue <= 0.f)
		{
			if (wheelID == 0)
			{
				AddForceAtLocationComponent(forwardToPlane_ * 250.f, frontForceLoc_);
			}
			else
			{
				AddForceAtLocationComponent(forwardToPlane_ * 100.f, frontForceLoc_);
			}
		}
		else
		{
			AddForceAtLocationComponent(forwardToPlane_ * 100.f, frontForceLoc_);
		}
	}

	if (bDebugForces)
	{
		debugTelemetryArr[wheelID].tireSlipForceEnd = rightToPlane_;
		debugTelemetryArr[wheelID].tireSlipForceEnd2 = forwardToPlane_;
	}
}

void ABikePawn::WheelAcceleration(const int& wheelID)
{
	float frictionTorqueWheel_ = wheelsArr[wheelID].forceX * wheelsArr[wheelID].rRR;
	float wheelAngularVelocity_ = (wheelsArr[wheelID].driveTorque - frictionTorqueWheel_) / wheelsArr[wheelID].inertia;

	wheelsArr[wheelID].angularVelocity = wheelsArr[wheelID].angularVelocity + (wheelAngularVelocity_ * subStepDeltaTime);

	// Adaptive Engine Break.
	if (engineSettings.throttle == 0.f && gearBoxSettings.currentGear != 0 && wheelID == 1)
	{
		float engineBrakeMultiply_ = FMath::GetMappedRangeValueClamped(FVector2f(4000.f, engineSettings.maxRPM), FVector2f(0.f, 250.f), engineSettings.rpm);
		wheelsArr[1].angularVelocity = FMath::Max(wheelsArr[wheelID].angularVelocity - engineBrakeMultiply_ * subStepDeltaTime, 0.f);
	}

	float surfaceTypeMultiply_(0.035f); // more == slow (0.035f);
	float wheelBrakeForce_ = ((wheelsArr[wheelID].brakeTorque +  suspensionsArr[wheelID].force * wheelsArr[wheelID].rRR * surfaceTypeMultiply_) *
							  FMath::Sign(wheelsArr[wheelID].angularVelocity * -1.f)) / wheelsArr[wheelID].inertia;

	float wheelAngularVelocityTemp_ = wheelsArr[wheelID].angularVelocity + (wheelBrakeForce_ * subStepDeltaTime);

	if (FMath::Sign(wheelsArr[wheelID].angularVelocity) != FMath::Sign(wheelAngularVelocityTemp_))
	{
		wheelsArr[wheelID].bIsLocked = true;
		wheelsArr[wheelID].angularVelocity = 0.f;
	}
	else
	{
		if (wheelID == 1)
		{
			float maxSpeed_ = FMath::RandRange(gearBoxSettings.maxSpeed * 0.93f, gearBoxSettings.maxSpeed);
			wheelsArr[wheelID].angularVelocity = FMath::Clamp(wheelAngularVelocityTemp_, -20.f, maxSpeed_);
		}
		else
		{
			wheelsArr[wheelID].angularVelocity = wheelAngularVelocityTemp_;
		}

		wheelsArr[wheelID].bIsLocked = false;
	}

	wheelsArr[wheelID].longSlipVelocity = (wheelsArr[wheelID].angularVelocity * wheelsArr[wheelID].rRR) - wheelsArr[wheelID].linearVelocity.X;

	// Wheel rotation animation.
	if (wheelID == 0 && brakeSettings.frontHandBrake == 0.f && brakeSettings.brake == 0.f)
	{
		wheelsArr[wheelID].deltaRotation = FMath::RadiansToDegrees(wheelsArr[wheelID].linearVelocity.X / wheelsArr[wheelID].rRR * subStepDeltaTime);
	}
	else
	{
		wheelsArr[wheelID].deltaRotation = FMath::RadiansToDegrees(wheelsArr[wheelID].angularVelocity * subStepDeltaTime);
	}
}

// Called to bind functionality to input
void ABikePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

FTransform ABikePawn::GetTransformBikePawn() const
{
	if (bodyRootInstance != nullptr)
	{
		return bodyRootInstance->GetUnrealWorldTransform();
	}
	return FTransform::Identity;
}

FHitResult ABikePawn::TraceToLocation(FVector const& startV, FVector const& endV, float sphereRadius, bool bIsSphere, bool bDebugLines) const
{
	FCollisionQueryParams traceParams_(TEXT("TraceCheck"));

	traceParams_.bReturnPhysicalMaterial = true;
	traceParams_.bTraceComplex = bUseComplexTrace;

	const FQuat acQuat_ = GetActorQuat();

	// if (bDebugLines)
	// {
	// 	const FName traceTag("WeaponTraceTag");
	//
	// 	GetWorld()->DebugDrawTraceTag = traceTag;
	// 	traceParams_.TraceTag = traceTag;
	// }

	FHitResult hitTrace_(ForceInit);
	if (bIsSphere)
	{
		GetWorld()->SweepSingleByChannel(hitTrace_, startV, endV, acQuat_, ECC_Visibility, FCollisionShape::MakeSphere(sphereRadius), traceParams_);
	}
	else
	{
		GetWorld()->LineTraceSingleByChannel(hitTrace_, startV, endV, ECC_Visibility, traceParams_);
	}

	if (bDebugLines && bDebugTrace)
	{
		if (hitTrace_.bBlockingHit && hitTrace_.ImpactPoint != FVector::ZeroVector)
		{
			DrawDebugDirectionalArrow(GetWorld(), startV, hitTrace_.ImpactPoint, 1.0f, FColor::Red, false, -1.f, 0, 1.0f);
		}
		else
		{
			DrawDebugDirectionalArrow(GetWorld(), startV, endV, 1.0f, FColor::Green, false, -1.f, 0, 1.0f);
		}
	}

	return hitTrace_;
}