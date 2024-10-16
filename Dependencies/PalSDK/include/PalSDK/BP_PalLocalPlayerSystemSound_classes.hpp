#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalLocalPlayerSystemSound.BP_PalLocalPlayerSystemSound_C
// 0x0000 (0x0028 - 0x0028)
class UBP_PalLocalPlayerSystemSound_C final : public UPalGetWorldUObject
{
public:
	void OnChangeHunger(EPalStatusHungerType Current, EPalStatusHungerType Last);
	void SetupLocalPlayer(class APalPlayerCharacter* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalLocalPlayerSystemSound_C">();
	}
	static class UBP_PalLocalPlayerSystemSound_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalLocalPlayerSystemSound_C>();
	}
};
static_assert(alignof(UBP_PalLocalPlayerSystemSound_C) == 0x000008, "Wrong alignment on UBP_PalLocalPlayerSystemSound_C");
static_assert(sizeof(UBP_PalLocalPlayerSystemSound_C) == 0x000028, "Wrong size on UBP_PalLocalPlayerSystemSound_C");

}

