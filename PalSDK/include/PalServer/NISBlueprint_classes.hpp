#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "NISBlueprint_structs.hpp"


namespace PalServer
{

// Class NISBlueprint.NISLibrary
// 0x0000 (0x0028 - 0x0028)
class UNISLibrary final : public UBlueprintFunctionLibrary
{
public:
	static EUNISMode GetDefaultNISMode();
	static float GetNISRecommendedScreenPercentage(EUNISMode NISMode);
	static void GetNISScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage);
	static TArray<EUNISMode> GetSupportedNISModes();
	static bool IsNISModeSupported(EUNISMode NISMode);
	static bool IsNISSupported();
	static void SetNISCustomScreenPercentage(float CustomScreenPercentage);
	static void SetNISMode(EUNISMode NISMode);
	static void SetNISSharpness(float Sharpness);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NISLibrary">();
	}
	static class UNISLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNISLibrary>();
	}
};
static_assert(alignof(UNISLibrary) == 0x000008, "Wrong alignment on UNISLibrary");
static_assert(sizeof(UNISLibrary) == 0x000028, "Wrong size on UNISLibrary");

}

