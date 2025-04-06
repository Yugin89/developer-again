// Copyright 2022 Cyrus365, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "UObject/NoExportTypes.h"
#include "C3_RSP_Struct.h"


#include "C3_RSP_ManagerBase.generated.h"


USTRUCT(BlueprintType, Category = "Cyrus 365|Runtime Screenshot Pro|Struct")
struct FRSP_Stru1
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cyrus 365|Kickstart Blueprint Library|Struct", meta = (DisplayName = "Bool"))
	bool A_Bool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cyrus 365|Kickstart Blueprint Library|Struct", meta = (DisplayName = "Byte"))
	uint8 A_Byte;
};

UENUM(BlueprintType)
enum class ERSP_RenderingMethod : uint8
{
	None UMETA(Hidden),
	Raster UMETA(DisplayName = "Raster"),
	RTX UMETA(Hidden, DisplayName = "Fully Ray Tracing"),
	PathTracing UMETA(DisplayName = "Path Tracing Pro")
};

UENUM(BlueprintType)
enum class ERSP_ScreenshotMethod : uint8
{
	None UMETA(Hidden),
	InstantShot UMETA(DisplayName = "Instant Shot"),
	// Basic Screenshot in UE
	AdvancedShot UMETA(DisplayName = "Advanced Shot"),
	//  More function, use another screenshot method
	PathTracerShot UMETA(DisplayName = "Path Tracer Specialised Shot") // Special for Path Tracer
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FC3_RSP_OnScreenshotCaptured, int32, SizeX, int32, SizeY, UTexture2D*, Texture, const TArray<FColor>&, RawData);


/**
 * 
 */
UCLASS(Blueprintable)
class C3_RSP_API AC3_RSP_ManagerBase : public AInfo
{
	GENERATED_UCLASS_BODY()
	
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	// RENDERING
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	/** Current Rendering Method. */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Cyrus 365|Runtime Screenshot Pro|Render Pro",
		meta = (DisplayName = "Current Rendering Method", Keywords = "Render Method, RSP"))
	ERSP_RenderingMethod RenderingMethod_Current;

	/** Previous Rendering Method. */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Cyrus 365|Runtime Screenshot Pro|Render Pro",
		meta = (DisplayName = "Previous Rednering Method", Keywords = "Render Method, RSP"))
	ERSP_RenderingMethod RenderingMethod_Previous;

	/**
	* Set Rendering Method. 
	* Don't set to "None".
	*/
	UFUNCTION(BlueprintCallable, Category = "Cyrus 365|Runtime Screenshot Pro|Render Pro",
		meta = (DisplayName = "Set Render Method", Keywords = "Render Method, RSP"))
	void SetRenderingMethod(UPARAM(DisplayName = "Method") ERSP_RenderingMethod InMethod = ERSP_RenderingMethod::Raster);


	//~~~~~~~~~~~~~~~~~~~
	// PATH TRACING PRO RENDERING
	//~~~~~~~~~~~~~~~~~~~

protected:
	/** Can use path tracer? */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
		meta = (DisplayName = "Path Tracer Enabled?", Category = "Cyrus 365|Runtime Screenshot Pro|Render Pro|Path Tracer", Keywords = "Enable, RSP"))
	bool PathTracerEnable_Last;

	/** Is path tracer current active? */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
		meta = (DisplayName = "Active?", Category = "Cyrus 365|Runtime Screenshot Pro|Render Pro|Path Tracer", Keywords = "Enable, RSP"))
	bool PathTracerActive_Last;

	/** Show progress bar in path tracer? */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
		meta = (DisplayName = "Progress Display?", Category = "Cyrus 365|Runtime Screenshot Pro|Render Pro|Path Tracer", Keywords = "Enable, RSP"))
	bool PathTracerProgressDisplay_Last;

	/** Enable denoiser in path tracer? */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
		meta = (DisplayName = "Denoiser?", Category = "Cyrus 365|Runtime Screenshot Pro|Render Pro|Path Tracer", Keywords = "Enable, RSP"))
	bool PathTracerDenoiser_Last;

public:
	/** Turn on Path Tracer. */
	UFUNCTION(BlueprintCallable, Category = "Cyrus 365|Runtime Screenshot Pro|Render Pro|Path Tracing",
		meta = (DisplayName = "Show Path Tracer", Keywords = "Path Tracer, RSP", WorldContext = "WorldContextObject"))
	void ShowPathTracer(const UObject* WorldContextObject, bool ProgressDisplay = true, bool Denoiser = true);

	/** Useful for reset the Path Tracer progress. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Cyrus 365|Runtime Screenshot Pro|Render Pro|Path Tracing",
		meta = (DisplayName = "Restart Path Tracer", Keywords = "Restart, RSP", WorldContext = "WorldContextObject"))
	void RestartPathTracer(UObject* WorldContextObject);

	/** (INTERNAL USE) Restart Core. */
	void RestartPathTracer_Core();

	

	//~~~~~~~~~~~~~~~~~~~
	// LIT MODE
	//~~~~~~~~~~~~~~~~~~~

	/** Turn off Path Tracer. And resume to Lit Mode. */
	UFUNCTION(BlueprintCallable, Category = "Cyrus 365|Runtime Screenshot Pro|Render Pro|Raster",
		meta = (DisplayName = "Show Lit Mode", Keywords = "Path Tracer, RSP", WorldContext = "WorldContextObject"))
	void ShowLitMode(const UObject* WorldContextObject);

	

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	// SCREENSHOT METHOD
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

public:
	///*
	//* Set Rendering Method.
	//* Don't set to "None".
	//*/
	//UFUNCTION(BlueprintCallable, Category = "Cyrus 365|Runtime Screenshot Pro|Screenshot",
	//	meta = (DisplayName = "Set Screenshot Method", Keywords = "Screenshot Method, RSP"))
	//	void SetScreenshotMethod(UPARAM(DisplayName = "Method") ERSP_ScreenshotMethod InMethod = ERSP_ScreenshotMethod::InstantShot);

	

	//~~~~~~~~~~~~~~~~~~~
	// INSTANT SHOT
	//~~~~~~~~~~~~~~~~~~~

protected:
	// HighResShot 2 / HighResShot 3840x2160
	// HighResShot filename=PATH (XxY OR Multiplier) CaptureX CaptureY CaptureW CaptureH bMaskUsingCustomDepth bDumpBufferVisualizationTargets bCaptureHDR bDateTimeAsFilename

	FC3_RSP_CaptureSettings CaptureSettings;

public:
	/** 
	* Take a quick screenshot. The easiest & lite way to screenshot. 
	* Can set resolution multiplier or exact resolution parameter for screenshot.
	* Set either Multiplier or Resolution.
	* @Param Filename - The whole file path. Not only the screenshot name.
	* Example:  C:/_Workspace/Cyrus365/screenshot1.png
	* @Param Multiplier - For screen multiplier. E.g. 1x / 2x / 3x... Set either Multiplier or Resolution. *** If you set multiplier, the Resolution must be -1. ***
	* @Param Res_X - Exact resolution X. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***
	* @Param Res_Y - Exact resolution Y. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***
	*/
	UFUNCTION(BlueprintCallable, Category = "Cyrus 365|Runtime Screenshot Pro|Screenshot|Instant Shot",
		meta = (DisplayName = "Take Shot Core", Keywords = "Take Shot Core, RSP", AdvancedDisplay = "Res_X, Res_Y"))
	bool InstantShot_Capture_Core(FString Filename, bool MaskUsingCustomDepth, bool CaptureHDR, int32 Multiplier = 1, int32 Res_X = -1, int32 Res_Y = -1, bool IsPathTracerShot = false, bool InShowNotifications = false);

	/** 
	* Take a Path Tracer screenshot. 
	* Can set resolution multiplier or exact resolution parameter for screenshot.
	* Set either Multiplier or Resolution.
	* @Param Filename - The whole file path. Not only the screenshot name.
	* Example:  C:/_Workspace/Cyrus365/screenshot1.png
	* @Param Multiplier - For screen multiplier. E.g. 1x / 2x / 3x... Set either Multiplier or Resolution. *** If you set multiplier, the Resolution must be -1. ***
	* @Param Res_X - Exact resolution X. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***
	* @Param Res_Y - Exact resolution Y. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***
	* @Param Delay - Leave -1 equal to auto find the right time to perform a screenshot. Or you can set a value larger than the "Sample Per Pixel" in path tarcer.
	*/
	UFUNCTION(BlueprintCallable, Category = "Cyrus 365|Runtime Screenshot Pro|Screenshot|Path Tracer",
		meta = (DisplayName = "Take Path Tracer Shot", Keywords = "Path Tracer Screenshot, RSP", AdvancedDisplay = "Res_X, Res_Y"))
	bool PathTracerShot_Capture_Core(FString Filename, bool MaskUsingCustomDepth, bool CaptureHDR, int32 Multiplier = 1, int32 Res_X = -1, int32 Res_Y = -1, int32 Delay = -1, bool InShowNotifications = false);

	/**
	 * @brief Resume notification. For stop it in before. 
	 */
	UFUNCTION(BlueprintCallable, Category = "Cyrus 365|Runtime Screenshot Pro|Screenshot|Path Tracer",
		meta = (DisplayName = "Resume Notification", Keywords = "RSP"))
	void ResumeNotification();



	//~~~~~~~~~~~~~~~~~~~
	// EVENT
	//~~~~~~~~~~~~~~~~~~~

private:
	/**
	 * Function that will be called when the screenshot is captured
	 * @param InSizeX 
	 * @param InSizeY 
	 * @param InImageData 
	 */
	UFUNCTION()
	void OnScreenshotCapturedInternal(const int32 InSizeX, const int32 InSizeY, const TArray<FColor>& InImageData);

public:
	UPROPERTY(BlueprintAssignable, Category = "Cyrus 365|Runtime Screenshot Pro|Screenshot|Event",
		meta = (DisplayName = "On Screenshot Captured", Keywords = "RSP"))
	FC3_RSP_OnScreenshotCaptured OnScreenshotCaptured;
};
