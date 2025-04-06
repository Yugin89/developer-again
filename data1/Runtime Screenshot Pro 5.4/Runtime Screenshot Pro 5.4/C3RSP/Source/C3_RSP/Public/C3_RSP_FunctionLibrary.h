// Copyright © 2022 Cyrus365, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "C3_RSP_ManagerBase.h"
#include "C3_RSP_Struct.h"

#include "C3_RSP_FunctionLibrary.generated.h"

/**
 *
 */
UCLASS()
class C3_RSP_API UC3_RSP_FunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:

	//~~~~~~~~~~~~~~~~~~~
	// RSP MANAGER BASED FUNCTION
	//~~~~~~~~~~~~~~~~~~~

	/**
	* *INTERNAL USE ONLY*
	* Get RSP manager for more advanced usage.
	*/
	UFUNCTION(BlueprintPure, Category = "Cyrus 365|Runtime Screenshot Pro|Render Pro",
		meta = (DisplayName = "Get RSP Manager", Keywords = "Get RSP", WorldContext = "WorldContextObject"))
		static AC3_RSP_ManagerBase* GetRSPManager(const UObject* WorldContextObject);

	/**
	* Set rendering method.
	* Raster:			The normal method. Can be Lumen if you using UE5 & enabled in Project Settings.
	* RTX:			Fully Ray Tracing. Turn everything to ray tracing. Need to enable "Support Hardware Ray Tracing" before.
	* Path Tracing:	Need to enable "Support Hardware Ray Tracing" before.
	*/
	UFUNCTION(BlueprintCallable, Category = "Cyrus 365|Runtime Screenshot Pro|Render Pro",
		meta = (DisplayName = "Set Rendering Method", Keywords = "Rendering Method, RSP", WorldContext = "WorldContextObject"))
		static void FL_SetRenderingMethod(const UObject* WorldContextObject, UPARAM(DisplayName = "Method") ERSP_RenderingMethod InMethod = ERSP_RenderingMethod::Raster);

	/** Enable the Path Tracer. Need to enable "Support Hardware Ray Tracing" before. */
	UFUNCTION(BlueprintCallable, Category = "Cyrus 365|Runtime Screenshot Pro|Render Pro",
		meta = (DisplayName = "Enable Path Tracer", Keywords = "Path Tracer, RSP", WorldContext = "WorldContextObject"))
		static void FL_EnablePathTracer(const UObject* WorldContextObject, bool Enable = true, bool ProgressDisplay = true, bool Denoiser = true);



	/**
	* Take a quick screenshot with 1x resolution. The easiest & lite way to screenshot.
	* @Param Filename - The whole file path. Not only the screenshot name.
	* Example:  C:/_Workspace/Cyrus365/screenshot1.png
	*/
	UFUNCTION(BlueprintCallable, Category = "Cyrus 365|Runtime Screenshot Pro|Screenshot",
		meta = (DisplayName = "Instant Screenshot (Lite)", Keywords = "Screenshot, RSP", WorldContext = "WorldContextObject"))
		static bool FL_InstantScreenshot_Lite(UObject* WorldContextObject, UPARAM(DisplayName = "Full Filename") FString Filename = TEXT("D:/Folder/screenshot.png"));

	/**
	* Can set resolution multiplier or exact resolution parameter for screenshot.
	* Set either Multiplier or Resolution.
	* @Param Filename - The whole file path. Not only the screenshot name.
	* Example:  C:/_Workspace/Cyrus365/screenshot1.png
	* @Param Multiplier - For screen multiplier. E.g. 1x / 2x / 3x... Set either Multiplier or Resolution. *** If you set multiplier, the Resolution must be -1. ***
	* @Param Res_X - Exact resolution X. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***
	* @Param Res_Y - Exact resolution Y. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***
	* @Param InShowNotifications - Show the notifications when captured in Unreal Editor?
	*/
	UFUNCTION(BlueprintCallable, Category = "Cyrus 365|Runtime Screenshot Pro|Screenshot",
		meta = (DisplayName = "Instant Screenshot (Pro)", Keywords = "Screenshot, RSP", WorldContext = "WorldContextObject", AdvancedDisplay = "Res_X, Res_Y"))
		static bool FL_InstantScreenshot_Pro(UObject* WorldContextObject, UPARAM(DisplayName = "Full Filename") FString Filename = TEXT("D:/Folder/screenshot.png"), int32 Multiplier = 1, int32 Res_X = -1, int32 Res_Y = -1
			, UPARAM(DisplayName = "Show Notifications") bool InShowNotifications = false
		);

	/**
	* Can set all parameter for screenshot.
	* Set either Multiplier or Resolution.
	* @Param Filename - The whole file path. Not only the screenshot name.
	* Example:  C:/_Workspace/Cyrus365/screenshot1.png
	* @Param Multiplier - For screen multiplier. E.g. 1x / 2x / 3x... Set either Multiplier or Resolution. *** If you set multiplier, the Resolution must be -1. ***
	* @Param Res_X - Exact resolution X. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***
	* @Param Res_Y - Exact resolution Y. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***
	* @Param InShowNotifications - Show the notifications when captured in Unreal Editor?
	*/
	UFUNCTION(BlueprintCallable, Category = "Cyrus 365|Runtime Screenshot Pro|Screenshot",
		meta = (DisplayName = "Instant Screenshot (Ultra)", Keywords = "Screenshot, RSP", WorldContext = "WorldContextObject", AdvancedDisplay = "Res_X, Res_Y"))
		static bool FL_InstantScreenshot_Ultra(UObject* WorldContextObject, UPARAM(DisplayName = "Full Filename") FString Filename = TEXT("D:/Folder/screenshot.png"), bool MaskUsingCustomDepth = false, bool CaptureHDR = false, int32 Multiplier = 1, int32 Res_X = -1, int32 Res_Y = -1
			, UPARAM(DisplayName = "Show Notifications") bool InShowNotifications = false
		);

	/**
	* Take a quick screenshot for path tracer rendering with 1x resolution. The easiest & lite way to screenshot.
	* @Param Filename - The whole file path. Not only the screenshot name.
	* Example:  C:/_Workspace/Cyrus365/screenshot1.png
	*/
	UFUNCTION(BlueprintCallable, Category = "Cyrus 365|Runtime Screenshot Pro|Screenshot",
		meta = (DisplayName = "Path Tracer Screenshot (Lite)", Keywords = "Screenshot, RSP", WorldContext = "WorldContextObject"))
		static bool FL_PathTracerShot_Lite(UObject* WorldContextObject, UPARAM(DisplayName = "Full Filename") FString Filename = TEXT("D:/Folder/screenshot.png"));

	/**
	* Take a screenshot for path tracer rendering.
	* Set either Multiplier or Resolution.
	* @Param Filename - The whole file path. Not only the screenshot name.
	* Example:  C:/_Workspace/Cyrus365/screenshot1.png
	* @Param Multiplier - For screen multiplier. E.g. 1x / 2x / 3x... Set either Multiplier or Resolution. *** If you set multiplier, the Resolution must be -1. ***
	* @Param Res_X - Exact resolution X. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***
	* @Param Res_Y - Exact resolution Y. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***
	* @Param InShowNotifications - Show the notifications when captured in Unreal Editor?
	*/
	UFUNCTION(BlueprintCallable, Category = "Cyrus 365|Runtime Screenshot Pro|Screenshot",
		meta = (DisplayName = "Path Tracer Screenshot (Pro)", Keywords = "Screenshot, RSP", WorldContext = "WorldContextObject", AdvancedDisplay = "Res_X, Res_Y, InShowNotifications"))
		static bool FL_PathTracerShot_Pro(UObject* WorldContextObject, UPARAM(DisplayName = "Full Filename") FString Filename = TEXT("D:/Folder/screenshot.png"), int32 Multiplier = 1, int32 Res_X = -1, int32 Res_Y = -1, int DelayForSampling = -1
			//, UPARAM(DisplayName = "Show Notifications") bool InShowNotifications = false
			);

	/**
	* Take a screenshot for path tracer rendering. Can set all parameter for screenshot.
	* Set either Multiplier or Resolution.
	* @Param Filename - The whole file path. Not only the screenshot name.
	* Example:  C:/_Workspace/Cyrus365/screenshot1.png
	* @Param Multiplier - For screen multiplier. E.g. 1x / 2x / 3x... Set either Multiplier or Resolution. *** If you set multiplier, the Resolution must be -1. ***
	* @Param Res_X - Exact resolution X. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***
	* @Param Res_Y - Exact resolution Y. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***
	* @Param InShowNotifications - Show the notifications when captured in Unreal Editor?
	*/
	UFUNCTION(BlueprintCallable, Category = "Cyrus 365|Runtime Screenshot Pro|Screenshot",
		meta = (DisplayName = "Path Tracer Screenshot (Ultra)", Keywords = "Screenshot, RSP", WorldContext = "WorldContextObject", AdvancedDisplay = "Res_X, Res_Y, InShowNotifications"))
		static bool FL_PathTracerShot_Ultra(UObject* WorldContextObject,
			UPARAM(DisplayName = "Full Filename") FString Filename = TEXT("D:/Folder/screenshot.png"), bool MaskUsingCustomDepth = false, bool CaptureHDR = false, int32 Multiplier = 1, int32 Res_X = -1, int32 Res_Y = -1, int DelayForSampling = -1
			//, UPARAM(DisplayName = "Show Notifications") bool InShowNotifications = false
			);



	//~~~~~~~~~~~~~~~~~~~
	// STATIC BASED FUNCTION
	//~~~~~~~~~~~~~~~~~~~

	/** Let Lumen use hardware ray tracing. */
	UFUNCTION(BlueprintCallable, Category = "Cyrus 365|Runtime Screenshot Pro|Render Pro",
		meta = (DisplayName = "Lumen Use Hardware Raytracing", Keywords = "Hardware Raytracing, RSP", WorldContext = "WorldContextObject"))
		static void FL_LumenUseHardwareRaytracing(const UObject* WorldContextObject, UPARAM(DisplayName = "Use Hardware?") bool UseHardware);

	/**
	* Solution for "D3D Device Removed Crashes". Higher value result less chance to get this error.
	* @Param InMaxDispatchSize - Controls the maximum width and height in pixels for the path-traced render. If this value is lower than your viewport or image resolution, the render may take place in several steps, which increases the amount of times Windows can verify that the GPU is still responsive. The system default is 2048.
	* @Param InFlushDispatch - Controls how frequently to flush the command list during the path tracing process. Setting this to 1 gives Windows more chances to verify the GPU is still responsive. By system default, this is set to 2.
	*/
	UFUNCTION(BlueprintCallable, Category = "Cyrus 365|Runtime Screenshot Pro|Render Pro",
		meta = (DisplayName = "Solve Path Trace Crash", Keywords = "Pixels, RSP, D3D Device Removed Crashes", WorldContext = "WorldContextObject"))
		static void FL_SolvePathTraceCrash(UObject* WorldContextObject, UPARAM(DisplayName = "Max Dispatch Size") int32 InMaxDispatchSize = 8000, UPARAM(DisplayName = "Flush Dispatch") int32 InFlushDispatch = 1);

	/**
	 * Get random string from "Valid Chars". If you input more same Char, it will have more chance to show up.
	 */
	UFUNCTION(BlueprintPure, Category = "Cyrus 365|Runtime Screenshot Pro|Misc",
		meta = (DisplayName = "Random String", Keywords = "Random String, RSP"))
		static UPARAM(DisplayName = "Result") FString FL_RandomString(FString ValidChars, int32 NumChars = 1);

	/**
	 * Smart random string. Use RandomString() as base.
	 */
	UFUNCTION(BlueprintPure, Category = "Cyrus 365|Runtime Screenshot Pro|Misc",
		meta = (DisplayName = "Random String (Pro)", Keywords = "Random String, RSP"))
		static UPARAM(DisplayName = "Result") FString FL_RandomString_Pro(int32 NumChars = 1, bool UpperLetters = true, bool LowerLetters = true, bool Numbers = true);

	/*UFUNCTION(BlueprintCallable, Category = "Cyrus 365|Runtime Screenshot Pro|Misc",
		meta = (DisplayName = "Open File Dialog", Keywords = "Open File, Folder, Directory, RSP"))
		static bool FL_SaveFileDialog(const FString& DialogTitle, const FString& DefaultPath,
			const FString& DefaultFile, const FString& FileTypes, FString& OutFilenames);*/

	/**
	 * *WARNING, USE CAREFULLY* Set to show all notification when screenshot was ended.
	 * * It will disable all notification! Not only this screenshot notification! *
	 */
	UFUNCTION(BlueprintCallable, Category = "Cyrus 365|Runtime Screenshot Pro|Misc",
		meta = (DisplayName = "Show All Notifications Pop Up", Keywords = "RSP, Notification"))
		static void FL_ShowAllNotifications(UPARAM(DisplayName = "Show") const bool InShow = true);

	/**
	 * Convert the image data to a texture.
	 */
	 UFUNCTION(BlueprintCallable, Category = "Cyrus 365|Runtime Screenshot Pro|Misc",
		meta = (DisplayName = "Convert Image To Texture", Keywords = "RSP"))
	static UTexture2D* ConvertImageToTexture(const int32 InSizeX, const int32 InSizeY, const TArray<FColor>& InImageData);

	UFUNCTION(BlueprintCallable, Category = "Cyrus 365|Runtime Screenshot Pro|Misc",
		meta = (DisplayName = "Save Image File from Color Data", Keywords = "RSP"))
	static bool SaveImageFileFromColorData(const FString& Filename, const int32 InSizeX, const int32 InSizeY, const TArray<FColor>& InImageData);

	/**
	 * Validate the filename. If the filename is invalid, it will return false. And it will auto correct the filename.
	 * @param InFilename 
	 * @return 
	 */
	UFUNCTION(BlueprintCallable, Category = "Cyrus 365|Runtime Screenshot Pro|Misc", DisplayName = "Is Valid Filename",
		meta = (Keywords = "RSP"))
	static bool IsValidFilename(UPARAM(DisplayName = "Filename") const FString& InFilename);
	
	/**
	 * Validate the filename. If the filename is invalid, it will return false. And it will auto correct the filename.
	 * @param InFilename 
	 * @return 
	 */
	UFUNCTION(BlueprintCallable, Category = "Cyrus 365|Runtime Screenshot Pro|Misc", DisplayName = "Try Correct Filename",
		meta = (Keywords = "RSP"))
	static FString TryCorrectFilename(UPARAM(DisplayName = "Filename") const FString& InFilename);
};
