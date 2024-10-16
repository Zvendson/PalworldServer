#pragma once

#include "Basic.hpp"

#include "BP_MonsterBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_WhiteTiger.BP_WhiteTiger_C
// 0x0060 (0x0AC0 - 0x0A60)
class ABP_WhiteTiger_C final : public ABP_MonsterBase_C
{
public:
	class UPalSpeedCollisionComponent*            PalSpeedCollision;                                 // 0x0A60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule7;                              // 0x0A68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule6;                              // 0x0A70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule5;                              // 0x0A78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule4;                              // 0x0A80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsSphereComponent*           PalBodyPartsSphere2;                               // 0x0A88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsSphereComponent*           PalBodyPartsSphere1;                               // 0x0A90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule3;                              // 0x0A98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule2;                              // 0x0AA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule1;                              // 0x0AA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule;                               // 0x0AB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsSphereComponent*           PalBodyPartsSphere;                                // 0x0AB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WhiteTiger_C">();
	}
	static class ABP_WhiteTiger_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WhiteTiger_C>();
	}
};
static_assert(alignof(ABP_WhiteTiger_C) == 0x000010, "Wrong alignment on ABP_WhiteTiger_C");
static_assert(sizeof(ABP_WhiteTiger_C) == 0x000AC0, "Wrong size on ABP_WhiteTiger_C");
static_assert(offsetof(ABP_WhiteTiger_C, PalSpeedCollision) == 0x000A60, "Member 'ABP_WhiteTiger_C::PalSpeedCollision' has a wrong offset!");
static_assert(offsetof(ABP_WhiteTiger_C, PalBodyPartsCapsule7) == 0x000A68, "Member 'ABP_WhiteTiger_C::PalBodyPartsCapsule7' has a wrong offset!");
static_assert(offsetof(ABP_WhiteTiger_C, PalBodyPartsCapsule6) == 0x000A70, "Member 'ABP_WhiteTiger_C::PalBodyPartsCapsule6' has a wrong offset!");
static_assert(offsetof(ABP_WhiteTiger_C, PalBodyPartsCapsule5) == 0x000A78, "Member 'ABP_WhiteTiger_C::PalBodyPartsCapsule5' has a wrong offset!");
static_assert(offsetof(ABP_WhiteTiger_C, PalBodyPartsCapsule4) == 0x000A80, "Member 'ABP_WhiteTiger_C::PalBodyPartsCapsule4' has a wrong offset!");
static_assert(offsetof(ABP_WhiteTiger_C, PalBodyPartsSphere2) == 0x000A88, "Member 'ABP_WhiteTiger_C::PalBodyPartsSphere2' has a wrong offset!");
static_assert(offsetof(ABP_WhiteTiger_C, PalBodyPartsSphere1) == 0x000A90, "Member 'ABP_WhiteTiger_C::PalBodyPartsSphere1' has a wrong offset!");
static_assert(offsetof(ABP_WhiteTiger_C, PalBodyPartsCapsule3) == 0x000A98, "Member 'ABP_WhiteTiger_C::PalBodyPartsCapsule3' has a wrong offset!");
static_assert(offsetof(ABP_WhiteTiger_C, PalBodyPartsCapsule2) == 0x000AA0, "Member 'ABP_WhiteTiger_C::PalBodyPartsCapsule2' has a wrong offset!");
static_assert(offsetof(ABP_WhiteTiger_C, PalBodyPartsCapsule1) == 0x000AA8, "Member 'ABP_WhiteTiger_C::PalBodyPartsCapsule1' has a wrong offset!");
static_assert(offsetof(ABP_WhiteTiger_C, PalBodyPartsCapsule) == 0x000AB0, "Member 'ABP_WhiteTiger_C::PalBodyPartsCapsule' has a wrong offset!");
static_assert(offsetof(ABP_WhiteTiger_C, PalBodyPartsSphere) == 0x000AB8, "Member 'ABP_WhiteTiger_C::PalBodyPartsSphere' has a wrong offset!");

}

