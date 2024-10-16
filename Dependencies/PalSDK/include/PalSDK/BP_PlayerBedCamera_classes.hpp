#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PlayerBedCamera.BP_PlayerBedCamera_C
// 0x0000 (0x09A0 - 0x09A0)
class ABP_PlayerBedCamera_C final : public ACameraActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerBedCamera_C">();
	}
	static class ABP_PlayerBedCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerBedCamera_C>();
	}
};
static_assert(alignof(ABP_PlayerBedCamera_C) == 0x000010, "Wrong alignment on ABP_PlayerBedCamera_C");
static_assert(sizeof(ABP_PlayerBedCamera_C) == 0x0009A0, "Wrong size on ABP_PlayerBedCamera_C");

}

