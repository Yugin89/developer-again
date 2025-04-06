// Copyright © 2022 Cyrus365, All Rights Reserved.


#include "C3_RSP_ManagerBase.h"
#include "C3_RSP.h"

#include "C3_RSP_FunctionLibrary.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Engine/PostProcessVolume.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetStringLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "Engine/Engine.h"
#include "Engine/GameEngine.h"
#include "Engine/GameViewportClient.h"


AC3_RSP_ManagerBase::AC3_RSP_ManagerBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Bind the OnScreenshotCaptured function to the delegate
	if (GEngine && GEngine->GameViewport)
	{
		GEngine->GameViewport->OnScreenshotCaptured().AddUObject(this, &AC3_RSP_ManagerBase::OnScreenshotCapturedInternal);
	}
}

void AC3_RSP_ManagerBase::SetRenderingMethod(const ERSP_RenderingMethod InMethod)
{
	// Return if InMethod == None
	if (InMethod == ERSP_RenderingMethod::None) return;

	// Store the previous one
	RenderingMethod_Previous = RenderingMethod_Current;
	RenderingMethod_Current = InMethod;

	// What previous method is?
	switch (RenderingMethod_Previous)
	{
	case ERSP_RenderingMethod::PathTracing:
		// If previous is Path Tracing...
		switch (RenderingMethod_Current)
		{
		case ERSP_RenderingMethod::Raster:
			ShowLitMode(this);
			break;
		default:
			break;
		}
		break;
	case ERSP_RenderingMethod::Raster:
		switch (RenderingMethod_Current)
		{
		case ERSP_RenderingMethod::PathTracing:
			ShowPathTracer(this);
			break;
		default:
			break;
		}
		break;
	default:
		switch (RenderingMethod_Current)
		{
		case ERSP_RenderingMethod::Raster:
			ShowLitMode(this);
			break;
		case ERSP_RenderingMethod::PathTracing:
			ShowPathTracer(this);
			break;
		default:
			break;
		}
		break;
	//case default:
	//	break;
	}
}

void AC3_RSP_ManagerBase::ShowPathTracer(const UObject* WorldContextObject, const bool ProgressDisplay, const bool Denoiser)
{
	PathTracerEnable_Last = true;

	UKismetSystemLibrary::ExecuteConsoleCommand(WorldContextObject, "show PathTracing");

	PathTracerProgressDisplay_Last = ProgressDisplay;
	FString tempProgressDisplay = "r.PathTracing.ProgressDisplay ";
	tempProgressDisplay += ProgressDisplay ? "1" : "0";
	UKismetSystemLibrary::ExecuteConsoleCommand(WorldContextObject, tempProgressDisplay);

	PathTracerDenoiser_Last = Denoiser;
	FString tempDenoiser = "r.PathTracing.Denoiser ";
	tempDenoiser += Denoiser ? "1" : "0";
	UKismetSystemLibrary::ExecuteConsoleCommand(WorldContextObject, tempDenoiser);
}

void AC3_RSP_ManagerBase::ShowLitMode(const UObject* WorldContextObject)
{
	PathTracerEnable_Last = false;

	UKismetSystemLibrary::ExecuteConsoleCommand(WorldContextObject, "viewmode lit", UGameplayStatics::GetPlayerController(WorldContextObject, 0));
}

void AC3_RSP_ManagerBase::RestartPathTracer_Implementation(UObject* WorldContextObject)
{
	if (PathTracerEnable_Last)
	{
		// First Change To Lit Mode
		ShowLitMode(WorldContextObject);
	}

	// (This is timer) Then change to Path Tracer Mode After 0.1s
	FTimerHandle TimerHandler;
	GetWorldTimerManager().SetTimer(TimerHandler, this, &AC3_RSP_ManagerBase::RestartPathTracer_Core, 0.1F, false, -1.0F);

	// This is Delay
	/*UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
	FLatentActionInfo LatentInfo;
	LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, new FAWSDelayAction(Duration, LatentInfo));*/
}

void AC3_RSP_ManagerBase::RestartPathTracer_Core()
{
	ShowPathTracer(this, PathTracerProgressDisplay_Last, PathTracerDenoiser_Last);
}



//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// SCREENSHOT METHOD
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~



//~~~~~~~~~~~~~~~~~~~
// INSTANT SHOT
//~~~~~~~~~~~~~~~~~~~

bool AC3_RSP_ManagerBase::InstantShot_Capture_Core(const FString Filename, const bool MaskUsingCustomDepth, const bool CaptureHDR, const int32 Multiplier, const int32 Res_X, const int32 Res_Y, const bool IsPathTracerShot, const bool InShowNotifications)
{
#if 0
	// Old
	// HighResShot filename=PATH (XxY OR Multiplier) CaptureX CaptureY CaptureW CaptureH bMaskUsingCustomDepth bDumpBufferVisualizationTargets bCaptureHDR bDateTimeAsFilename

	// Not sure
	// HighResShot (XxY OR Multiplier) filename=PATH CaptureX CaptureY CaptureW CaptureH bMaskUsingCustomDepth bDumpBufferVisualizationTargets bCaptureHDR bDateTimeAsFilename
	// HighResShot 3840x2160 filename="D:/_Temp2/4K" 0 0 0 0
#endif

	// Check if the filename is valid and the resolution is valid
	const FString TempFinalFilename = UC3_RSP_FunctionLibrary::TryCorrectFilename(Filename);

	// Check if the filename is valid and the resolution is valid 
	if (!TempFinalFilename.IsEmpty() && (Multiplier >= 1 || (Res_X >= 1 && Res_Y >= 1)))
	{
		// Save the input parameters
		CaptureSettings = FC3_RSP_CaptureSettings(TempFinalFilename, MaskUsingCustomDepth, CaptureHDR, Multiplier, Res_X, Res_Y);
		
		// Use multiplier?
		const bool bTempUseMultiplier = (Res_X == -1 && Res_Y == -1);

		// Basic Command
		FString TempResult = "HighResShot ";

		// Filename
		TempResult += ("filename=\"");
		const FString TempFilename = UKismetStringLibrary::Replace(TempFinalFilename, "\\", "/");
		TempResult += TempFilename + "\" ";

		// Multiplier or XxY
		TempResult += (bTempUseMultiplier) ? (FString::FromInt(Multiplier)) : (FString::FromInt(Res_X) + "x" + FString::FromInt(Res_Y));
		TempResult += " ";

		// CaptureX CaptureY
		TempResult += "0 0 ";

		// CaptureW CaptureH
		const FVector2D TempViewportSize = UWidgetLayoutLibrary::GetViewportSize(this);
		FString TempCaptureW;
		FString TempCaptureH;
		// Use Multipler
		if (bTempUseMultiplier)
		{
			TempCaptureW = FString::FromInt(UKismetMathLibrary::Round(TempViewportSize.X) * Multiplier);
			TempCaptureH = FString::FromInt(UKismetMathLibrary::Round(TempViewportSize.Y) * Multiplier);
		}
		// Use Resolution
		else
		{
			TempCaptureW = FString::FromInt(Res_X);
			TempCaptureH = FString::FromInt(Res_Y);
		}
		TempResult += (TempCaptureW + " " + TempCaptureH + " ");

		// bMaskUsingCustomDepth
		TempResult += MaskUsingCustomDepth ? "1 " : "0 ";

		// bDumpBufferVisualizationTargets
		TempResult += ("0 ");

		// bCaptureHDR
		TempResult += CaptureHDR ? "1 " : "0 ";

		// bDateTimeAsFilename
		TempResult += ("0");

		// Raster instant shot?
		if (!IsPathTracerShot)
		{
			UKismetSystemLibrary::ExecuteConsoleCommand(this, TEXT("r.HighResScreenshotDelay 4"));
		}

		// Disable notification for now?
		if (!InShowNotifications)
		{
			// Disable the notification for now
			UC3_RSP_FunctionLibrary::FL_ShowAllNotifications(false);

			// Then add it back later
			FTimerHandle RestartNotificationTimer;
			GetWorldTimerManager().SetTimer(RestartNotificationTimer, this, &AC3_RSP_ManagerBase::ResumeNotification, 0.1F);
		}

		// Main Action
		//UE_LOG(LogTemp, Log, TEXT("Full Command: %s"), *tempResult); // Need "*" to dereference from FString to TChar
		UKismetSystemLibrary::ExecuteConsoleCommand(this, TempResult);

		// In UE5.3, since the above script cannot save the file to Filename, we need to use OnScreenshotCapturedInternal to save file

		return true;
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Exec - InstantShot_Capture_Lite: No Valid Input"));
		return false;
	}
}

bool AC3_RSP_ManagerBase::PathTracerShot_Capture_Core(const FString Filename, const bool MaskUsingCustomDepth, const bool CaptureHDR, const int32 Multiplier, const int32 Res_X, const int32 Res_Y, const int32 Delay, const bool InShowNotifications)
{
	if (!Filename.IsEmpty() && (Multiplier >= 1 || (Res_X >= 1 && Res_Y >= 1)))
	{
		FString tempDelayCommand = TEXT("r.HighResScreenshotDelay ");

		// Auto detect "Samples Per Pixel"
		if (Delay == -1)
		{
			TArray<AActor*> tempPPVolumes;
			UGameplayStatics::GetAllActorsOfClass(this, APostProcessVolume::StaticClass(), tempPPVolumes);
			int32 tempHighestSamples = 0;

			for (AActor* i : tempPPVolumes)
			{
				if (APostProcessVolume* tempVolume = Cast<APostProcessVolume>(i))
				{
					int32 tempSamples = tempVolume->Settings.PathTracingSamplesPerPixel;

					// Compare the highest samples
					if (tempSamples > tempHighestSamples) tempHighestSamples = tempSamples;
				}
			}

			tempDelayCommand += FString::FromInt(tempHighestSamples);

			//UE_LOG(LogTemp, Log, TEXT("Delay: %d"), tempHighestSamples);
		}
		else
		{
			tempDelayCommand += FString::FromInt(Delay);
		}

		// Make a delay
		UKismetSystemLibrary::ExecuteConsoleCommand(this, tempDelayCommand);

		// Screenshot
		this->AC3_RSP_ManagerBase::InstantShot_Capture_Core(Filename, MaskUsingCustomDepth, CaptureHDR, Multiplier, Res_X, Res_Y, true, InShowNotifications);

		return true;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("PathTracerShot_Capture_Core: Invalid input parameters"));
		return false;
	}
}

void AC3_RSP_ManagerBase::ResumeNotification()
{
	UC3_RSP_FunctionLibrary::FL_ShowAllNotifications(true);
}



//~~~~~~~~~~~~~~~~~~~
// EVENT
//~~~~~~~~~~~~~~~~~~~

void AC3_RSP_ManagerBase::OnScreenshotCapturedInternal(const int32 InSizeX, const int32 InSizeY, const TArray<FColor>& InImageData)
{
	// This function will be called when a screenshot is captured
	// UE_LOG(LogTemp, Log, TEXT("Screenshot captured: %d x %d"), InSizeX, InSizeY);

	// For UE5.3
	// Save the image data
	UC3_RSP_FunctionLibrary::SaveImageFileFromColorData(CaptureSettings.Filename, InSizeX, InSizeY, InImageData);

	// Convert the image data to a texture
	UTexture2D* TempScreenshotTexture = UC3_RSP_FunctionLibrary::ConvertImageToTexture(InSizeX, InSizeY, InImageData);

	// Broadcast the event
	if (OnScreenshotCaptured.IsBound())
	{
		OnScreenshotCaptured.Broadcast(InSizeX, InSizeY, TempScreenshotTexture, InImageData);
	}
}
