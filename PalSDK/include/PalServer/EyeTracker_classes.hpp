#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalServer
{

// Class EyeTracker.EyeTrackerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UEyeTrackerFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool GetGazeData(struct FEyeTrackerGazeData* OutGazeData);
	static bool GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData);
	static bool IsEyeTrackerConnected();
	static bool IsStereoGazeDataAvailable();
	static void SetEyeTrackedPlayer(class APlayerController* PlayerController);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EyeTrackerFunctionLibrary">();
	}
	static class UEyeTrackerFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEyeTrackerFunctionLibrary>();
	}
};
static_assert(alignof(UEyeTrackerFunctionLibrary) == 0x000008, "Wrong alignment on UEyeTrackerFunctionLibrary");
static_assert(sizeof(UEyeTrackerFunctionLibrary) == 0x000028, "Wrong size on UEyeTrackerFunctionLibrary");

}

