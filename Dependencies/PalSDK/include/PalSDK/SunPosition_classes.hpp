#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// Class SunPosition.SunPositionFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USunPositionFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void GetSunPosition(float Latitude, float Longitude, float TimeZone, bool bIsDaylightSavingTime, int32 Year, int32 Month, int32 Day, int32 Hours, int32 Minutes, int32 Seconds, struct FSunPositionData* SunPositionData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SunPositionFunctionLibrary">();
	}
	static class USunPositionFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USunPositionFunctionLibrary>();
	}
};
static_assert(alignof(USunPositionFunctionLibrary) == 0x000008, "Wrong alignment on USunPositionFunctionLibrary");
static_assert(sizeof(USunPositionFunctionLibrary) == 0x000028, "Wrong size on USunPositionFunctionLibrary");

}

