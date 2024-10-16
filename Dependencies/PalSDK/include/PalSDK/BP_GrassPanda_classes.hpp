#pragma once

#include "Basic.hpp"

#include "BP_MonsterBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_GrassPanda.BP_GrassPanda_C
// 0x0040 (0x0AA0 - 0x0A60)
class ABP_GrassPanda_C final : public ABP_MonsterBase_C
{
public:
	class UPalSpeedCollisionComponent*            PalSpeedCollision;                                 // 0x0A60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsSphereComponent*           PalBodyPartsSphere1;                               // 0x0A68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsSphereComponent*           PalBodyPartsSphere;                                // 0x0A70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule1;                              // 0x0A78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   PalShooter;                                        // 0x0A80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalRideMarkerComponent*                PalRideMarker;                                     // 0x0A88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule;                               // 0x0A90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GrassPanda_C">();
	}
	static class ABP_GrassPanda_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GrassPanda_C>();
	}
};
static_assert(alignof(ABP_GrassPanda_C) == 0x000010, "Wrong alignment on ABP_GrassPanda_C");
static_assert(sizeof(ABP_GrassPanda_C) == 0x000AA0, "Wrong size on ABP_GrassPanda_C");
static_assert(offsetof(ABP_GrassPanda_C, PalSpeedCollision) == 0x000A60, "Member 'ABP_GrassPanda_C::PalSpeedCollision' has a wrong offset!");
static_assert(offsetof(ABP_GrassPanda_C, PalBodyPartsSphere1) == 0x000A68, "Member 'ABP_GrassPanda_C::PalBodyPartsSphere1' has a wrong offset!");
static_assert(offsetof(ABP_GrassPanda_C, PalBodyPartsSphere) == 0x000A70, "Member 'ABP_GrassPanda_C::PalBodyPartsSphere' has a wrong offset!");
static_assert(offsetof(ABP_GrassPanda_C, PalBodyPartsCapsule1) == 0x000A78, "Member 'ABP_GrassPanda_C::PalBodyPartsCapsule1' has a wrong offset!");
static_assert(offsetof(ABP_GrassPanda_C, PalShooter) == 0x000A80, "Member 'ABP_GrassPanda_C::PalShooter' has a wrong offset!");
static_assert(offsetof(ABP_GrassPanda_C, PalRideMarker) == 0x000A88, "Member 'ABP_GrassPanda_C::PalRideMarker' has a wrong offset!");
static_assert(offsetof(ABP_GrassPanda_C, PalBodyPartsCapsule) == 0x000A90, "Member 'ABP_GrassPanda_C::PalBodyPartsCapsule' has a wrong offset!");

}

