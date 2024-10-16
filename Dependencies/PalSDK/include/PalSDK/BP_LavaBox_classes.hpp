#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_LavaBox.BP_LavaBox_C
// 0x0010 (0x02A0 - 0x0290)
class ABP_LavaBox_C final : public AActor
{
public:
	class UPalLavaBoxComponent*                   PalLavaBox;                                        // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LavaBox_C">();
	}
	static class ABP_LavaBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LavaBox_C>();
	}
};
static_assert(alignof(ABP_LavaBox_C) == 0x000008, "Wrong alignment on ABP_LavaBox_C");
static_assert(sizeof(ABP_LavaBox_C) == 0x0002A0, "Wrong size on ABP_LavaBox_C");
static_assert(offsetof(ABP_LavaBox_C, PalLavaBox) == 0x000290, "Member 'ABP_LavaBox_C::PalLavaBox' has a wrong offset!");
static_assert(offsetof(ABP_LavaBox_C, DefaultSceneRoot) == 0x000298, "Member 'ABP_LavaBox_C::DefaultSceneRoot' has a wrong offset!");

}

