// Copyright 2022 Fly Dream Dev. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PIDCtrlComponent.generated.h"


UCLASS()
class BIKECONTROLPLUGIN_API UPIDCtrlComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPIDCtrlComponent();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters PID")
	bool bPidCtrlEnable = true;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters PID")
	float pTermValue = 5.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters PID")
	float iTermValue = 0.5f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters PID")
	float dTermValue = 0.4f;
	/*UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Bike Parameters PID")
	float minValue = -500.f;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Bike Parameters PID")
	float maxValue = 500.f;*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Bike Parameters PID")
	bool bDebug = false;

	UPROPERTY()
	float pidValue = 0.f;
	UFUNCTION(BlueprintCallable, Category = "Bike Parameters PID")
	void ResetPidValues();
	
	float CalculatePidValues(float pointValue, float measuredValue, float deltaTime, float minValue = -500.f, float maxValue = 500.f);


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:	

	UPROPERTY()
	float lastError = 0.f;
	UPROPERTY()
	float pidReset = 0.f;
		
};
