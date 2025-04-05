// Copyright 2022 Fly Dream Dev. All Rights Reserved.


#include "PIDCtrlComponent.h"

// Sets default values for this component's properties
UPIDCtrlComponent::UPIDCtrlComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


float UPIDCtrlComponent::CalculatePidValues(float pointValue, float measuredValue, float deltaTime, float minValue, float maxValue)
{
	float error_(pointValue - measuredValue);
	float integral_(error_ * deltaTime + pidReset);
	float derivative_((error_ - lastError) / deltaTime);
	
	float pCorrect_(pTermValue * error_);
	float iCorrect_(iTermValue * integral_);
	float dCorrect_(dTermValue * derivative_);

	pidReset = integral_;
	lastError = error_;

	pidValue = FMath::Clamp(pCorrect_ + iCorrect_ + dCorrect_, minValue, maxValue);
	
	return pidValue;
}

void UPIDCtrlComponent::ResetPidValues()
{
	lastError = 0.f;
	pidReset = 0.f;
}


// Called when the game starts
void UPIDCtrlComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

// Called every frame
void UPIDCtrlComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bDebug)
	{
		GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Red, FString::Printf(TEXT("pidValue is %f"), pidValue));
	}

}

