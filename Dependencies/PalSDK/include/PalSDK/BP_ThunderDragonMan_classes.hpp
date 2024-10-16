#pragma once

#include "Basic.hpp"

#include "BP_MonsterBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ThunderDragonMan.BP_ThunderDragonMan_C
// 0x0050 (0x0AB0 - 0x0A60)
class ABP_ThunderDragonMan_C final : public ABP_MonsterBase_C
{
public:
	class UBP_PalTimerPointLightComponent_C*      BP_PalTimerPointLightComponent;                    // 0x0A60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalSpeedCollisionComponent*            PalSpeedCollision1;                                // 0x0A68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule6;                              // 0x0A70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule1;                              // 0x0A78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule;                               // 0x0A80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule5;                              // 0x0A88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule4;                              // 0x0A90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule3;                              // 0x0A98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule2;                              // 0x0AA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>* OutComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ThunderDragonMan_C">();
	}
	static class ABP_ThunderDragonMan_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ThunderDragonMan_C>();
	}
};
static_assert(alignof(ABP_ThunderDragonMan_C) == 0x000010, "Wrong alignment on ABP_ThunderDragonMan_C");
static_assert(sizeof(ABP_ThunderDragonMan_C) == 0x000AB0, "Wrong size on ABP_ThunderDragonMan_C");
static_assert(offsetof(ABP_ThunderDragonMan_C, BP_PalTimerPointLightComponent) == 0x000A60, "Member 'ABP_ThunderDragonMan_C::BP_PalTimerPointLightComponent' has a wrong offset!");
static_assert(offsetof(ABP_ThunderDragonMan_C, PalSpeedCollision1) == 0x000A68, "Member 'ABP_ThunderDragonMan_C::PalSpeedCollision1' has a wrong offset!");
static_assert(offsetof(ABP_ThunderDragonMan_C, PalBodyPartsCapsule6) == 0x000A70, "Member 'ABP_ThunderDragonMan_C::PalBodyPartsCapsule6' has a wrong offset!");
static_assert(offsetof(ABP_ThunderDragonMan_C, PalBodyPartsCapsule1) == 0x000A78, "Member 'ABP_ThunderDragonMan_C::PalBodyPartsCapsule1' has a wrong offset!");
static_assert(offsetof(ABP_ThunderDragonMan_C, PalBodyPartsCapsule) == 0x000A80, "Member 'ABP_ThunderDragonMan_C::PalBodyPartsCapsule' has a wrong offset!");
static_assert(offsetof(ABP_ThunderDragonMan_C, PalBodyPartsCapsule5) == 0x000A88, "Member 'ABP_ThunderDragonMan_C::PalBodyPartsCapsule5' has a wrong offset!");
static_assert(offsetof(ABP_ThunderDragonMan_C, PalBodyPartsCapsule4) == 0x000A90, "Member 'ABP_ThunderDragonMan_C::PalBodyPartsCapsule4' has a wrong offset!");
static_assert(offsetof(ABP_ThunderDragonMan_C, PalBodyPartsCapsule3) == 0x000A98, "Member 'ABP_ThunderDragonMan_C::PalBodyPartsCapsule3' has a wrong offset!");
static_assert(offsetof(ABP_ThunderDragonMan_C, PalBodyPartsCapsule2) == 0x000AA0, "Member 'ABP_ThunderDragonMan_C::PalBodyPartsCapsule2' has a wrong offset!");

}

