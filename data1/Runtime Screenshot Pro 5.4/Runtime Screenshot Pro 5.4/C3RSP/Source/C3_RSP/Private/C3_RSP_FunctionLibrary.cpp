// Copyright © 2022 Cyrus365, All Rights Reserved.


#include "C3_RSP_FunctionLibrary.h"
#include "C3_RSP.h"
#include "ImageUtils.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetStringLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/World.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Engine/Texture2D.h"
#include "Engine/Texture.h"
#include "TextureResource.h"
#include "Misc/FileHelper.h"


//#include "IDesktopPlatform.h"
//#include "DesktopPlatformModule.h"
//#include "EditorFontGlyphs.h"
//#include "Framework/Application/SlateApplication.h"
//#include "PropertyCustomizationHelpers.h"
//#include "SlateOptMacros.h"
//#include "Styling/AppStyle.h"
//#include "Widgets/Input/SButton.h"

UC3_RSP_FunctionLibrary::UC3_RSP_FunctionLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}


AC3_RSP_ManagerBase* UC3_RSP_FunctionLibrary::GetRSPManager(const UObject* WorldContextObject)
{
	// Get the Class
	// YourClassName::StaticClass()
	if (AActor* tempResult = UGameplayStatics::GetActorOfClass(WorldContextObject, AC3_RSP_ManagerBase::StaticClass()))
	{
		return Cast<AC3_RSP_ManagerBase>(tempResult);
	}
	else
	{
		/*AC3_RSP_ManagerBase* SpawnedActor1 = (AC3_RSP_ManagerBase*)WorldContextObject->GetWorld()->SpawnActor(AC3_RSP_ManagerBase::StaticClass(), NAME_None, FVector(0, 0, 0));*/
		if (AC3_RSP_ManagerBase* SpawnedActor1 = (AC3_RSP_ManagerBase*)WorldContextObject->GetWorld()->SpawnActor(AC3_RSP_ManagerBase::StaticClass()))
		{
			return SpawnedActor1;
		}
		else
		{
			return nullptr;
		}
	}
	//ARSP_ManagerBase* temp1 = ARSP_ManagerBase*();
}

void UC3_RSP_FunctionLibrary::FL_EnablePathTracer(const UObject* WorldContextObject, bool Enable, bool ProgressDisplay, bool Denoiser)
{
	if (Enable)
	{
		GetRSPManager(WorldContextObject)->ShowPathTracer(WorldContextObject, ProgressDisplay, Denoiser);
	}
	else
	{
		GetRSPManager(WorldContextObject)->ShowLitMode(WorldContextObject);
	}
}

void UC3_RSP_FunctionLibrary::FL_LumenUseHardwareRaytracing(const UObject* WorldContextObject, bool UseHardware)
{
	FString tempUseHardware = "r.Lumen.HardwareRayTracing ";
	tempUseHardware += UseHardware ? "1" : "0";
	UKismetSystemLibrary::ExecuteConsoleCommand(WorldContextObject, tempUseHardware);
}

void UC3_RSP_FunctionLibrary::FL_SetRenderingMethod(const UObject* WorldContextObject, ERSP_RenderingMethod InMethod)
{
	if (AC3_RSP_ManagerBase* tempRSPManager = GetRSPManager(WorldContextObject))
	{
		tempRSPManager->SetRenderingMethod(InMethod);
	}
}

bool UC3_RSP_FunctionLibrary::FL_InstantScreenshot_Lite(UObject* WorldContextObject, FString Filename)
{
	if (GetRSPManager(WorldContextObject)->InstantShot_Capture_Core(Filename, false, false, 1)) return true;
	else return false;
}

bool UC3_RSP_FunctionLibrary::FL_InstantScreenshot_Pro(UObject* WorldContextObject, FString Filename, int32 Multiplier, int32 Res_X, int32 Res_Y, bool InShowNotifications)
{
	if (GetRSPManager(WorldContextObject)->InstantShot_Capture_Core(
		Filename,
		false,
		false,
		Multiplier,
		Res_X,
		Res_Y,
		false,
		InShowNotifications))
		return true;
	else return false;
}

bool UC3_RSP_FunctionLibrary::FL_InstantScreenshot_Ultra(UObject* WorldContextObject, FString Filename, bool MaskUsingCustomDepth, bool CaptureHDR, int32 Multiplier, int32 Res_X, int32 Res_Y, bool InShowNotifications)
{
	if (GetRSPManager(WorldContextObject)->InstantShot_Capture_Core(
		Filename,
		MaskUsingCustomDepth,
		CaptureHDR,
		Multiplier,
		Res_X,
		Res_Y,
		false,
		InShowNotifications))
		return true;
	else return false;
}



bool UC3_RSP_FunctionLibrary::FL_PathTracerShot_Lite(UObject* WorldContextObject, FString Filename)
{
	if (GetRSPManager(WorldContextObject)->PathTracerShot_Capture_Core(Filename, false, false, 1)) return true;
	else return false;
}

bool UC3_RSP_FunctionLibrary::FL_PathTracerShot_Pro(UObject* WorldContextObject, FString Filename, int32 Multiplier, int32 Res_X, int32 Res_Y, int DelayForSampling
                                                    //, bool InShowNotifications
)
{
	if (GetRSPManager(WorldContextObject)->PathTracerShot_Capture_Core(Filename, false, false, Multiplier, Res_X, Res_Y, DelayForSampling, true)) return true;
	else return false;
}

bool UC3_RSP_FunctionLibrary::FL_PathTracerShot_Ultra(UObject* WorldContextObject, FString Filename, bool MaskUsingCustomDepth, bool CaptureHDR, int32 Multiplier, int32 Res_X, int32 Res_Y, int DelayForSampling
                                                      //, bool InShowNotifications
)
{
	if (GetRSPManager(WorldContextObject)->PathTracerShot_Capture_Core(Filename, MaskUsingCustomDepth, CaptureHDR, Multiplier, Res_X, Res_Y, DelayForSampling, true)) return true;
	else return false;
}



FString UC3_RSP_FunctionLibrary::FL_RandomString(FString ValidChars, int32 NumChars)
{
	FString tempResultString;
	TArray<FString> tempCharArray;
	//TArray

	if (ValidChars.Len() > 0 && NumChars > 0)
	{
		tempCharArray = UKismetStringLibrary::GetCharacterArrayFromString(ValidChars);

		for (int32 i = 0; i < NumChars; i++)
		{
			tempResultString += tempCharArray[UKismetMathLibrary::RandomInteger(tempCharArray.Num())];
		}
		return tempResultString;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid ValidChars / NumChars"));

		return "Invalid";
	}
}

FString UC3_RSP_FunctionLibrary::FL_RandomString_Pro(int32 NumChars, bool UpperLetters, bool LowerLetters, bool Numbers)
{
	FString tempCharsPool;
	if (UpperLetters) tempCharsPool += "QWERTYUIOPASDFGHJKLZXCVBNM";
	if (LowerLetters) tempCharsPool += "qwertyuiopasdfghjklzxcvbnm";
	if (Numbers) tempCharsPool += "0123456789";

	return UC3_RSP_FunctionLibrary::FL_RandomString(tempCharsPool, NumChars);
}

void UC3_RSP_FunctionLibrary::FL_ShowAllNotifications(bool InShow)
{
	FSlateNotificationManager::Get().SetAllowNotifications(InShow);
}

void UC3_RSP_FunctionLibrary::FL_SolvePathTraceCrash(UObject* WorldContextObject, int32 InMaxDispatchSize, int32 InFlushDispatch)
{
	if (InMaxDispatchSize >= 0)
	{
		FString tempSizeCommand = TEXT("r.PathTracing.DispatchSize ");
		tempSizeCommand += FString::FromInt(InMaxDispatchSize);
		UKismetSystemLibrary::ExecuteConsoleCommand(WorldContextObject, tempSizeCommand);
	}

	if (InFlushDispatch >= 0)
	{
		FString tempFlushCommand = TEXT("r.PathTracing.FlushDispatch ");
		tempFlushCommand += FString::FromInt(InFlushDispatch);
		UKismetSystemLibrary::ExecuteConsoleCommand(WorldContextObject, tempFlushCommand);
	}
}

//bool UC3_RSP_FunctionLibrary::FL_SaveFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& DefaultFile, const FString& FileTypes, FString& OutFilenames)
//{
//	//FDesktopPlatformWindows temp1;
//
//	//TSharedPtr<SWindow> ParentWindow = FSlateApplication::Get().FindWidgetWindow(); //AsShared()
//	//void* ParentWindowHandle = (ParentWindow.IsValid() && ParentWindow->GetNativeWindow().IsValid()) ? ParentWindow->GetNativeWindow()->GetOSWindowHandle() : nullptr;
//
//	/*void* ParentWindowHandle2 ;
//
//	TArray<FString> temp1;
//
//	FDesktopPlatformModule::Get()->SaveFileDialog(ParentWindowHandle2, DialogTitle, DefaultPath, DefaultFile, FileTypes, 0x00, temp1);
//
//	if (temp1.Num() > 0) OutFilenames = temp1[0];*/
//
//	//IDesktopPlatform::SaveFileDialog()
//
//	return false;
//}



UTexture2D* UC3_RSP_FunctionLibrary::ConvertImageToTexture(const int32 InSizeX, const int32 InSizeY, const TArray<FColor>& InImageData)
{
	// Create a new texture
	UTexture2D* TempTexture = UTexture2D::CreateTransient(InSizeX, InSizeY, PF_B8G8R8A8);

	// Validate the texture
	if (!TempTexture || !TempTexture->GetPlatformData() || TempTexture->GetPlatformData()->Mips.Num() <= 0 ||  TempTexture->GetPlatformData()->Mips[0].BulkData.GetElementCount() <= 0)
	{
		UE_LOG(LogTemp, Error, TEXT("ConvertImageToTexture: Failed to create a new texture"));
		return nullptr;
	}

	// Fill the texture with the image data
	uint8* MipData = static_cast<uint8*>(TempTexture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE));
	FMemory::Memcpy(MipData, InImageData.GetData(), InImageData.Num() * sizeof(FColor));
	TempTexture->GetPlatformData()->Mips[0].BulkData.Unlock();

	// Update the texture
	TempTexture->UpdateResource();

	return TempTexture;
}

bool UC3_RSP_FunctionLibrary::SaveImageFileFromColorData(const FString& Filename, const int32 InSizeX, const int32 InSizeY, const TArray<FColor>& InImageData)
{
	// Validate the filename
	if (Filename.IsEmpty())
	{
		return false;
	}

	FImageUtils::SaveImageByExtension(*Filename, FImageView(InImageData.GetData(), InSizeX, InSizeY), 100);

	return true;
}

bool UC3_RSP_FunctionLibrary::IsValidFilename(const FString& InFilename)
{
	// Empty case
	if (InFilename.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("IsFilenameValid: Empty filename"));
		return false;
	}

	// Invalid characters
	if (InFilename.Contains(TEXT("?")) || InFilename.Contains(TEXT("*")) || InFilename.Contains(TEXT("\"")) || InFilename.Contains(TEXT("<")) || InFilename.Contains(TEXT(">")) || InFilename.Contains(TEXT("|")))
	{
		UE_LOG(LogTemp, Error, TEXT("IsFilenameValid: Invalid characters"));
		return false;
	}

	return true;
}

FString UC3_RSP_FunctionLibrary::TryCorrectFilename(const FString& InFilename)
{
	FString TempResult = InFilename;
	
	// Filename validation
	if (!IsValidFilename(InFilename))
	{
		UE_LOG(LogTemp, Error, TEXT("IsFilenameValid: Invalid filename"));
		return InFilename;
	}
	
	// Missing extension or invalid extension
	if (!InFilename.Contains(TEXT(".")) || InFilename.EndsWith(TEXT(".")))
	{
		UE_LOG(LogTemp, Error, TEXT("IsFilenameValid: Missing extension, now will auto assign to .png"));

		// Auto append ".png" at the end
		TempResult += TEXT(".png");
	}

	return TempResult;
}
