#pragma once

#include "Basic.hpp"

#include "BP_MonsterBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_SoldierBee.BP_SoldierBee_C
// 0x0030 (0x0A90 - 0x0A60)
class ABP_SoldierBee_C final : public ABP_MonsterBase_C
{
public:
	class UPalFlyMeshHeightCtrlComponent*         PalFlyMeshHeightCtrl;                              // 0x0A60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsSphereComponent*           PalBodyPartsSphere2;                               // 0x0A68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsSphereComponent*           PalBodyPartsSphere1;                               // 0x0A70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule;                               // 0x0A78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsSphereComponent*           PalBodyPartsSphere;                                // 0x0A80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Weapon;                                            // 0x0A88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	class USkeletalMeshComponent* GetHandAttachMesh();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SoldierBee_C">();
	}
	static class ABP_SoldierBee_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SoldierBee_C>();
	}
};
static_assert(alignof(ABP_SoldierBee_C) == 0x000010, "Wrong alignment on ABP_SoldierBee_C");
static_assert(sizeof(ABP_SoldierBee_C) == 0x000A90, "Wrong size on ABP_SoldierBee_C");
static_assert(offsetof(ABP_SoldierBee_C, PalFlyMeshHeightCtrl) == 0x000A60, "Member 'ABP_SoldierBee_C::PalFlyMeshHeightCtrl' has a wrong offset!");
static_assert(offsetof(ABP_SoldierBee_C, PalBodyPartsSphere2) == 0x000A68, "Member 'ABP_SoldierBee_C::PalBodyPartsSphere2' has a wrong offset!");
static_assert(offsetof(ABP_SoldierBee_C, PalBodyPartsSphere1) == 0x000A70, "Member 'ABP_SoldierBee_C::PalBodyPartsSphere1' has a wrong offset!");
static_assert(offsetof(ABP_SoldierBee_C, PalBodyPartsCapsule) == 0x000A78, "Member 'ABP_SoldierBee_C::PalBodyPartsCapsule' has a wrong offset!");
static_assert(offsetof(ABP_SoldierBee_C, PalBodyPartsSphere) == 0x000A80, "Member 'ABP_SoldierBee_C::PalBodyPartsSphere' has a wrong offset!");
static_assert(offsetof(ABP_SoldierBee_C, Weapon) == 0x000A88, "Member 'ABP_SoldierBee_C::Weapon' has a wrong offset!");

}

