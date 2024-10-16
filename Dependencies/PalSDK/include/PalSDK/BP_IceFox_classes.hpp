#pragma once

#include "Basic.hpp"

#include "BP_MonsterBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_IceFox.BP_IceFox_C
// 0x0030 (0x0A90 - 0x0A60)
class ABP_IceFox_C final : public ABP_MonsterBase_C
{
public:
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule3;                              // 0x0A60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsSphereComponent*           PalBodyPartsSphere;                                // 0x0A68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule;                               // 0x0A70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule2;                              // 0x0A78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule1;                              // 0x0A80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_IceFox_C">();
	}
	static class ABP_IceFox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_IceFox_C>();
	}
};
static_assert(alignof(ABP_IceFox_C) == 0x000010, "Wrong alignment on ABP_IceFox_C");
static_assert(sizeof(ABP_IceFox_C) == 0x000A90, "Wrong size on ABP_IceFox_C");
static_assert(offsetof(ABP_IceFox_C, PalBodyPartsCapsule3) == 0x000A60, "Member 'ABP_IceFox_C::PalBodyPartsCapsule3' has a wrong offset!");
static_assert(offsetof(ABP_IceFox_C, PalBodyPartsSphere) == 0x000A68, "Member 'ABP_IceFox_C::PalBodyPartsSphere' has a wrong offset!");
static_assert(offsetof(ABP_IceFox_C, PalBodyPartsCapsule) == 0x000A70, "Member 'ABP_IceFox_C::PalBodyPartsCapsule' has a wrong offset!");
static_assert(offsetof(ABP_IceFox_C, PalBodyPartsCapsule2) == 0x000A78, "Member 'ABP_IceFox_C::PalBodyPartsCapsule2' has a wrong offset!");
static_assert(offsetof(ABP_IceFox_C, PalBodyPartsCapsule1) == 0x000A80, "Member 'ABP_IceFox_C::PalBodyPartsCapsule1' has a wrong offset!");

}

