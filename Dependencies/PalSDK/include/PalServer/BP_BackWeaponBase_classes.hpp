#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_BackWeaponBase.BP_BackWeaponBase_C
// 0x0010 (0x0318 - 0x0308)
class ABP_BackWeaponBase_C : public APalBackWeaponBase
{
public:
	class USkeletalMeshComponent*                 MainMesh;                                          // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BackWeaponBase_C">();
	}
	static class ABP_BackWeaponBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BackWeaponBase_C>();
	}
};
static_assert(alignof(ABP_BackWeaponBase_C) == 0x000008, "Wrong alignment on ABP_BackWeaponBase_C");
static_assert(sizeof(ABP_BackWeaponBase_C) == 0x000318, "Wrong size on ABP_BackWeaponBase_C");
static_assert(offsetof(ABP_BackWeaponBase_C, MainMesh) == 0x000308, "Member 'ABP_BackWeaponBase_C::MainMesh' has a wrong offset!");
static_assert(offsetof(ABP_BackWeaponBase_C, DefaultSceneRoot) == 0x000310, "Member 'ABP_BackWeaponBase_C::DefaultSceneRoot' has a wrong offset!");

}

