// Copyright 2022 Fly Dream Dev. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

#include "Physics/Experimental/PhysScene_Chaos.h"

#include "BikePawn.generated.h"

UENUM()
enum class EWheelPosition: uint8
{
	FRONT UMETA(DisplayName = "Front"),
	REAR UMETA(DisplayName = "Rear")
};

USTRUCT(BlueprintType)
struct FSuspensionStruct
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters", meta=(ClampMin = 0.f))
	float restLength = 50.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters", meta=(ClampMin = 0.f))
	float travelDist = 10.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters", meta=(ClampMin = 0.f))
	float stiffness = 400.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters", meta=(ClampMin = 0.f))
	float damper = 20.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters", meta=(ClampMax = 0.f))
	float forceMin = -2500.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters", meta=(ClampMin = 0.f))
	float forceMax = 4000.f;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Bike Parameters")
	float currentLength = 0.f;
	UPROPERTY()
	float lastLength = 0.f;
	UPROPERTY()
	float damperForce = 0.f;
	UPROPERTY()
	float force = 0.f;

	FSuspensionStruct()
	{
	};
};

USTRUCT(BlueprintType)
struct FWheelStruct
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Bike Parameters - Wheel")
	float radius = 34.f;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Bike Parameters - Wheel")
	float tireWidth = 5.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters - Wheel")
	float mass = 8.f;
	UPROPERTY()
	float rRR = 0.f;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Bike Parameters - Wheel")
	FVector wheelLocation = FVector::ZeroVector;
	UPROPERTY()
	FVector wheelUpdateLocation = FVector::ZeroVector;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Bike Parameters - Wheel")
	FVector linearVelocity = FVector::ZeroVector;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Bike Parameters - Wheel")
	FVector linearVelocityWorld = FVector::ZeroVector;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Bike Parameters - Wheel")
	bool bWheelContact = false;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Bike Parameters - Wheel")
	float deltaRotation = 0.f;
	UPROPERTY()
	float inertia = 1.5f;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Bike Parameters - Wheel")
	float angularVelocity = 0.f;
	UPROPERTY()
	float driveTorque = 0.f;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Bike Parameters - Wheel")
	float longSlipVelocity = 0.f;
	UPROPERTY()
	float brakeTorque = 0.f;
	UPROPERTY()
	float relaxationLenghtFront = 0.003f;
	UPROPERTY()
	float relaxationLenghtSide = 0.003f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters - Wheel")
	float slipPeak = 8.f;
	UPROPERTY()
	float slipAngleDyn = 0.f;
	UPROPERTY()
	float forceX = 0.f;
	UPROPERTY()
	FVector2f slip = FVector2f::ZeroVector;
	UPROPERTY()
	bool bIsLocked = false;
	UPROPERTY()
	float absCapacity = 0.f;
	UPROPERTY()
	float toSpeedMultiply = 0.f;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Bike Parameters - Wheel")
	float speedFromWheelKMH = 0.f;
	UPROPERTY()
	int sidePointNumber = 0;

	FWheelStruct()
	{
	};
};

USTRUCT(BlueprintType)
struct FEngineStruct
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters - Engine")
	class UCurveFloat* torqueCurve = nullptr;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters - Engine", meta=(ClampMin = 0.f))
	float idleRPM = 700.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters - Engine", meta=(ClampMin = 0.f))
	float maxRPM = 14000.f;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Bike Parameters - Engine")
	float inertia = 0.2f;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Bike Parameters - Engine")
	float rpm = 0.f;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Bike Parameters - Engine")
	float torque = 0.f;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Bike Parameters - Engine")
	float angularVelocity = 0.f;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Bike Parameters - Engine")
	float throttle = 0.f;
	UPROPERTY()
	float idleRpmRad = 0.f;
	UPROPERTY()
	float maxRpmRad = 0.f;
	UPROPERTY()
	float startFriction = 50.f;
	UPROPERTY()
	float frictionCoefficient = 0.0085f;
	UPROPERTY()
	float effectiveTorque = 0.f;

	FEngineStruct()
	{
	};
};

USTRUCT(BlueprintType)
struct FGearStruct
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters - Engine")
	TArray<float> gearSpeedMaxArr;

	UPROPERTY()
	float maxSpeed = 0.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters - Gearbox", meta=(ClampMin = 0.f))
	int currentGear = 0;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters - Gearbox", meta=(ClampMin = 0.f))
	float gearShiftTime = 0.15f;
	UPROPERTY()
	int targetGear = 0;

	void SetRatio()
	{
		maxSpeed = gearSpeedMaxArr[currentGear];
	};

	FGearStruct()
	{
		gearSpeedMaxArr.Add(280.f);
		gearSpeedMaxArr.Add(80.f);
		gearSpeedMaxArr.Add(120.f);
		gearSpeedMaxArr.Add(170.f);
		gearSpeedMaxArr.Add(220.f);
		gearSpeedMaxArr.Add(250.f);
		gearSpeedMaxArr.Add(270.f);

		maxSpeed = gearSpeedMaxArr[0];
	};
};

USTRUCT(BlueprintType)
struct FDebugStruct
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	FVector tireSlipForceEnd = FVector::ZeroVector;
	UPROPERTY()
	FVector tireSlipForceEnd2 = FVector::ZeroVector;
	UPROPERTY()
	FVector suspensionForceEnd = FVector::ZeroVector;

	FDebugStruct()
	{
	};
};

USTRUCT(BlueprintType)
struct FDebugTraceStruct
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	FVector startV = FVector::ZeroVector;
	UPROPERTY()
	FVector endV = FVector::ZeroVector;
	UPROPERTY()
	float sphereSize = 0.f;

	FDebugTraceStruct()
	{
	};
};

USTRUCT(BlueprintType)
struct FBrakeStruct
{
	GENERATED_USTRUCT_BODY()

	// Max Brake Power.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters - Brake", meta=(ClampMin = 0.f))
	float torqueMax = 700.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters - Brake", meta=(ClampMin = 0.f, ClampMax = 1.f))
	float brakeBias = 0.7f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters - Brake", meta=(ClampMin = 0.f))
	float handBrakeTorqueMax = 2500.f;

	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Bike Parameters - Brake")
	float brake = 0.f;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Bike Parameters - Brake")
	float frontHandBrake = 0.f;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Bike Parameters - Brake")
	float rearHandBrake = 0.f;

	FBrakeStruct()
	{
	};
};


UCLASS()
class BIKECONTROLPLUGIN_API ABikePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABikePawn();

	//************************************************************************
	// Component                                                                  
	//************************************************************************

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component")
	class USkeletalMeshComponent* BikeSkeletalMesh;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component")
	class UPIDCtrlComponent* PidCtrlComponent;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component")
	class UPIDCtrlComponent* PidPitchCtrlComponent;
	//************************************************************************

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Component")
	class UArrowComponent* frontLinkComponent;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Component")
	class UArrowComponent* rearLinkComponent;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Component")
	class UArrowComponent* steeringComponent;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Component")
	class USphereComponent* frontWheelMeasureComponent;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Component")
	class USphereComponent* rearWheelMeasureComponent;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Component")
	class USphereComponent* frontWheelWidthSphere;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Component")
	class USphereComponent* rearWheelWidthSphere;
	

	FCalculateCustomPhysics OnCalculateCustomPhysics;
	virtual void CustomPhysics(float deltaTime, FBodyInstance* bodyInstance);

	// This event is called on every physics tick, including sub-steps.
	UFUNCTION(BlueprintNativeEvent, meta = (DisplayName = "Physics Tick"), Category = "Bike Parameters")
	void PhysicsTick(float substepDeltaTime);

	virtual void PhysicsTick_Implementation(float substepDeltaTime);

	//////////////////////////////////// *** DEBUG ***/////////////////////////////////////////
	///

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters - Debug")
	bool bShowFPS = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters - Debug")
	bool bDebugTelemetry = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters - Debug")
	bool bDebugTrace = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters - Debug")
	bool bDebugForces = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters - Debug")
	bool bDebugWheels = false;


	///////////////////////////////////////////////////////////////////////////////////////////

	void AddForceComponent(const FVector& force, bool bAccelChange) const;

	void AddForceAtLocationComponent(const FVector& force, const FVector& atLocation) const;

	void AddTorqueComponent(const FVector& torque, bool bAccelChange) const;

	UFUNCTION(BlueprintCallable, Category = "Bike Functions")
	void AddForward(float axisValue);
	UFUNCTION(BlueprintCallable, Category = "Bike Functions")
	void AddRight(float axisValue);
	UFUNCTION(BlueprintCallable, Category = "Bike Functions")
	bool ShiftGearUp();
	UFUNCTION(BlueprintCallable, Category = "Bike Functions")
	bool ShiftGearDown();
	UFUNCTION(BlueprintCallable, Category = "Bike Functions")
	bool SetGear(int setGear);
	UFUNCTION(BlueprintCallable, Category = "Bike Functions")
	void StartEngine();
	UFUNCTION(BlueprintCallable, Category = "Bike Functions")
	void StopEngine();
	UFUNCTION(BlueprintCallable, Category = "Bike Functions")
	void AddBrake(float axisValue);
	UFUNCTION(BlueprintCallable, Category = "Bike Functions")
	void AddFrontBrake(float axisValue, bool bSmoothBrake);
	UFUNCTION(BlueprintCallable, Category = "Bike Functions")
	void AddRearBrake(float axisValue, bool bSmoothBrake);
	UFUNCTION(BlueprintCallable, Category = "Bike Functions")
	void AddTurbo(float axisValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Bike Functions")
	void TireBumpEvent(int tireIndex);
	UFUNCTION(BlueprintImplementableEvent, Category = "Bike Functions")
	void AbsWheelEvent(int wheelIndex);
	UFUNCTION(BlueprintPure, Category = "Bike Functions")
	void GetEngineStatus(bool& bIsWorking) const;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters - Suspension")
	FSuspensionStruct frontSuspensionParameters;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters - Suspension")
	FSuspensionStruct rearSuspensionParameters;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Bike Parameters - Suspension")
	TArray<FSuspensionStruct> suspensionsArr;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Bike Parameters - Suspension")
	TArray<FWheelStruct> wheelsArr;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Bike Parameters - Suspension")
	float steeringAngle = 0.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters - Suspension")
	bool bUseMovingAxis = true;
	UPROPERTY()
	bool bUseSphereTrace = true;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters - Suspension")
	bool bUseComplexTrace = false;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Bike Parameters - Suspension")
	TArray<FHitResult> hitResultsArr;

	///////////////////////////////////////////////////////////////////////////////////////////
	///
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters - Engine")
	FEngineStruct engineSettings;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters - Gearbox")
	FGearStruct gearBoxSettings;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters - Brake")
	FBrakeStruct brakeSettings;

	///////////////////////////////////////////////////////////////////////////////////////////


	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters - Wheel")
	FWheelStruct frontWheelParameters;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters - Wheel")
	FWheelStruct rearWheelParameters;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters - Wheel", meta=(ClampMin = 1))
	int additionalSidePoints = 3;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters - Wheel", meta=(ClampMin = 1))
	float axisStep = 10.f;
	UPROPERTY() // UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters - Wheel", meta=(ClampMin = 0))
	float tireTraceCorrect = 2.f;
	UPROPERTY() //	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters - Wheel", meta=(ClampMin = 0))
	float smoothSidePointsSelect = 2.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters - Control", meta=(ClampMin = 0.f))
	float maxSteeringAngle = 27.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters - Control")
	bool bUseAnalogController = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters - Control")
	UCurveFloat* steeringAngleBySpeed = nullptr;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters - Control")
	UCurveFloat* steeringSpeedCurve = nullptr;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters - Control")
	UCurveFloat* bikeAngleSteeringCurve = nullptr;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters - Control")
	UCurveFloat* steeringHelpMultiplyBySpeed = nullptr;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters - Control")
	UCurveFloat* sideForceFromSpeedCurve = nullptr;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bike Parameters - Control")
	UCurveFloat* steeringMultiplyCurve = nullptr;
	// Helps for jumping. The mtocycle remains in the same Pitch position as before the jump.
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters - Control")
	bool bAirControl = false;
	// Continue the motorcycle to balance the roll axis even if both wheels do not touch the surface.
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters - Control")
	bool bRollAirControl = true;
	UPROPERTY() // UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters - Control", meta = (ClampMin = 0, ClampMax = 100), meta = (EditCondition = "bAirControl", EditConditionHides))
	float minSpeedAirControl = 40.f;

	UPROPERTY() //UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters - Assistant - PID", meta=(ClampMin = 1))
	float pidRollControlMaxPitch = 75.f;
	UPROPERTY() //UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters - Assistant - PID", meta=(ClampMin = 1))
	float pidRollControlMaxRoll = 65.f;

	UPROPERTY() // UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters - Assistant")
	FVector maneuveringCenterMass = FVector(0.f, 0.f, -15.f);
	UPROPERTY() // UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters - Assistant")
	FVector defaultCenterMass = FVector(0.f, 0.f, 0.f);

	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Bike Parameters - Telemetry")
	float bikeForwardVelocity = 0.f;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Bike Parameters - Telemetry")
	float bikeForwardSpeedKMH = 0.f;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Bike Parameters - Telemetry")
	bool bIsBurnDetected = false;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Bike Parameters - Telemetry")
	float burnTime = 0.f;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Bike Parameters - Telemetry")
	bool bIsBikeInitialized = false;
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Bike Parameters - Telemetry")
	bool bIsReverseDetected = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FTransform GetTransformBikePawn() const;

	FHitResult TraceToLocation(FVector const& startV, FVector const& endV, float sphereRadius, bool bIsSphere, bool bDebugLines) const;

	FHitResult FindAdditionalPoint(const int& wheelID, TArray<bool>& wheelContactArr);

	virtual void InitializingVariables();

	void DebugBuild();

	void PidResetTimer() const;

	//////////////////////////////////// *** Calculate Bike Components ***/////////////////////////////////////////

	void LookingContactPoints(TArray<bool>& wheelContactArr);

	void RollAssistant();

	void AirControl();

	void WheelieControl();

	void StoppieControl();

	void ChangeGearTimer();

	void EngineAcceleration();

	void WheelAcceleration(const int& wheelID);

	void WheelLocalLinearVelocity(const int& wheelID);

	void ApplyBrakes(const int& wheelID);

	void AdaptiveCenterMass() const;

	void SlipFrontCalculate(const int& wheelID);

	void SlipSideCalculate(const int& wheelID);

	void ApplyTireSlipForce(const int& wheelID);

	void SuspensionCalculate(const int& whID, const TArray<bool>& wheelContactArr);

	void GravityAndSuspensionForces();

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////


	FBodyInstance* bodyRootInstance;
	static FBodyInstance* GetBodyInstance(UPrimitiveComponent* PrimitiveComponent);

	UPROPERTY()
	UPrimitiveComponent* bodyRootComponent = nullptr;

private:
	UPROPERTY()
	double subStepDeltaTime = 0.f;

	UPROPERTY()
	FTransform pawnTransform = FTransform::Identity;

	// Front and Rear links.
	UPROPERTY()
	TArray<class USceneComponent*> linksArr;

	// Front and Rear Wheel.
	UPROPERTY()
	TArray<class USphereComponent*> wheelPositionArr;


	// Input
	UPROPERTY()
	float forwardAxisValue = 0.f;
	UPROPERTY()
	float rightAxisValue = 0.f;
	UPROPERTY()
	float brakeAxisValue = 0.f;
	UPROPERTY()
	float turboValue = 0.f;

	///////////////// Find Additional Point
	UPROPERTY()
	int frontSelected = -1;
	UPROPERTY()
	int rearSelected = -1;
	UPROPERTY()
	float frontDistance = 0.f;
	UPROPERTY()
	float rearDistance = 0.f;
	////////////////////////////////////////

	UPROPERTY()
	double currentDeltaTime = 0.f;

	UPROPERTY()
	FTimerHandle changeGear_Handle;

	UPROPERTY()
	FTimerHandle pidReset_Handle;


	UPROPERTY()
	TArray<FDebugStruct> debugTelemetryArr;

	UPROPERTY()
	TArray<FDebugTraceStruct> debugTraceArr;

	UPROPERTY()
	bool bIsWheelieDetected = false;
	UPROPERTY()
	bool bIsStoppieDetected = false;
	UPROPERTY()
	bool bIsEngineWorking = false;
	UPROPERTY()
	float flyPitch = 0.f;
};
