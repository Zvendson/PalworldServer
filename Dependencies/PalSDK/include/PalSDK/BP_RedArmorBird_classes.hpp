#pragma once

#include "Basic.hpp"

#include "BP_MonsterBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_RedArmorBird.BP_RedArmorBird_C
// 0x0040 (0x0AA0 - 0x0A60)
class ABP_RedArmorBird_C final : public ABP_MonsterBase_C
{
public:
	class UPalFlyMeshHeightCtrlComponent*         PalFlyMeshHeightCtrl;                              // 0x0A60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PalRideMarkerBiggerHorse_C*         BP_PalRideMarkerBiggerHorse;                       // 0x0A68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalSpeedCollisionComponent*            PalSpeedCollision1;                                // 0x0A70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule2;                              // 0x0A78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule1;                              // 0x0A80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsSphereComponent*           PalBodyPartsSphere;                                // 0x0A88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule;                               // 0x0A90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RedArmorBird_C">();
	}
	static class ABP_RedArmorBird_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RedArmorBird_C>();
	}
};
static_assert(alignof(ABP_RedArmorBird_C) == 0x000010, "Wrong alignment on ABP_RedArmorBird_C");
static_assert(sizeof(ABP_RedArmorBird_C) == 0x000AA0, "Wrong size on ABP_RedArmorBird_C");
static_assert(offsetof(ABP_RedArmorBird_C, PalFlyMeshHeightCtrl) == 0x000A60, "Member 'ABP_RedArmorBird_C::PalFlyMeshHeightCtrl' has a wrong offset!");
static_assert(offsetof(ABP_RedArmorBird_C, BP_PalRideMarkerBiggerHorse) == 0x000A68, "Member 'ABP_RedArmorBird_C::BP_PalRideMarkerBiggerHorse' has a wrong offset!");
static_assert(offsetof(ABP_RedArmorBird_C, PalSpeedCollision1) == 0x000A70, "Member 'ABP_RedArmorBird_C::PalSpeedCollision1' has a wrong offset!");
static_assert(offsetof(ABP_RedArmorBird_C, PalBodyPartsCapsule2) == 0x000A78, "Member 'ABP_RedArmorBird_C::PalBodyPartsCapsule2' has a wrong offset!");
static_assert(offsetof(ABP_RedArmorBird_C, PalBodyPartsCapsule1) == 0x000A80, "Member 'ABP_RedArmorBird_C::PalBodyPartsCapsule1' has a wrong offset!");
static_assert(offsetof(ABP_RedArmorBird_C, PalBodyPartsSphere) == 0x000A88, "Member 'ABP_RedArmorBird_C::PalBodyPartsSphere' has a wrong offset!");
static_assert(offsetof(ABP_RedArmorBird_C, PalBodyPartsCapsule) == 0x000A90, "Member 'ABP_RedArmorBird_C::PalBodyPartsCapsule' has a wrong offset!");

}

