// Copyright © 2022 Cyrus365, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "C3_RSP_Struct.generated.h"

USTRUCT(BlueprintType, Category = "Cyrus 365|Runtime Screenshot Pro|Struct")
struct FC3_RSP_CaptureSettings
{
	GENERATED_BODY()

	FORCEINLINE FC3_RSP_CaptureSettings()
	{
	};

	explicit FORCEINLINE FC3_RSP_CaptureSettings(const FString& InFilename, const bool InMaskUsingCustomDepth, const bool InCaptureHDR, const int32 InMultiplier, const int32 InRes_X, const int32 InRes_Y)
		: Filename(InFilename),
		  MaskUsingCustomDepth(InMaskUsingCustomDepth),
		  CaptureHDR(InCaptureHDR),
		  Multiplier(InMultiplier),
		  Res_X(InRes_X),
		  Res_Y(InRes_Y)
	{
	};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cyrus 365|Runtime Screenshot Pro|Struct")
	FString Filename;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cyrus 365|Runtime Screenshot Pro|Struct")
	bool MaskUsingCustomDepth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cyrus 365|Runtime Screenshot Pro|Struct")
	bool CaptureHDR;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cyrus 365|Runtime Screenshot Pro|Struct",
		meta = (ClampMin = "1", UIMin = "1"))
	int32 Multiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cyrus 365|Runtime Screenshot Pro|Struct", DisplayName = "Resolution X",
		meta = (ClampMin = "1", UIMin = "1"))
	int32 Res_X;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cyrus 365|Runtime Screenshot Pro|Struct", DisplayName = "Resolution Y",
		meta = (ClampMin = "1", UIMin = "1"))
	int32 Res_Y;
};
