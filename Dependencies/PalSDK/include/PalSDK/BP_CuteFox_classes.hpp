#pragma once

#include "Basic.hpp"

#include "BP_MonsterBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_CuteFox.BP_CuteFox_C
// 0x0020 (0x0A80 - 0x0A60)
class ABP_CuteFox_C : public ABP_MonsterBase_C
{
public:
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule1;                              // 0x0A60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule;                               // 0x0A68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsSphereComponent*           PalBodyPartsSphere;                                // 0x0A70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CuteFox_C">();
	}
	static class ABP_CuteFox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CuteFox_C>();
	}
};
static_assert(alignof(ABP_CuteFox_C) == 0x000010, "Wrong alignment on ABP_CuteFox_C");
static_assert(sizeof(ABP_CuteFox_C) == 0x000A80, "Wrong size on ABP_CuteFox_C");
static_assert(offsetof(ABP_CuteFox_C, PalBodyPartsCapsule1) == 0x000A60, "Member 'ABP_CuteFox_C::PalBodyPartsCapsule1' has a wrong offset!");
static_assert(offsetof(ABP_CuteFox_C, PalBodyPartsCapsule) == 0x000A68, "Member 'ABP_CuteFox_C::PalBodyPartsCapsule' has a wrong offset!");
static_assert(offsetof(ABP_CuteFox_C, PalBodyPartsSphere) == 0x000A70, "Member 'ABP_CuteFox_C::PalBodyPartsSphere' has a wrong offset!");

}

