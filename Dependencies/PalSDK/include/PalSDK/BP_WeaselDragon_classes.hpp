#pragma once

#include "Basic.hpp"

#include "BP_MonsterBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_WeaselDragon.BP_WeaselDragon_C
// 0x0040 (0x0AA0 - 0x0A60)
class ABP_WeaselDragon_C : public ABP_MonsterBase_C
{
public:
	class UPalSpeedCollisionComponent*            PalSpeedCollision1;                                // 0x0A60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule5;                              // 0x0A68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule;                               // 0x0A70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule4;                              // 0x0A78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule3;                              // 0x0A80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule1;                              // 0x0A88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PalRideMarkerSaddle_C*              BP_PalRideMarkerSaddle;                            // 0x0A90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WeaselDragon_C">();
	}
	static class ABP_WeaselDragon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WeaselDragon_C>();
	}
};
static_assert(alignof(ABP_WeaselDragon_C) == 0x000010, "Wrong alignment on ABP_WeaselDragon_C");
static_assert(sizeof(ABP_WeaselDragon_C) == 0x000AA0, "Wrong size on ABP_WeaselDragon_C");
static_assert(offsetof(ABP_WeaselDragon_C, PalSpeedCollision1) == 0x000A60, "Member 'ABP_WeaselDragon_C::PalSpeedCollision1' has a wrong offset!");
static_assert(offsetof(ABP_WeaselDragon_C, PalBodyPartsCapsule5) == 0x000A68, "Member 'ABP_WeaselDragon_C::PalBodyPartsCapsule5' has a wrong offset!");
static_assert(offsetof(ABP_WeaselDragon_C, PalBodyPartsCapsule) == 0x000A70, "Member 'ABP_WeaselDragon_C::PalBodyPartsCapsule' has a wrong offset!");
static_assert(offsetof(ABP_WeaselDragon_C, PalBodyPartsCapsule4) == 0x000A78, "Member 'ABP_WeaselDragon_C::PalBodyPartsCapsule4' has a wrong offset!");
static_assert(offsetof(ABP_WeaselDragon_C, PalBodyPartsCapsule3) == 0x000A80, "Member 'ABP_WeaselDragon_C::PalBodyPartsCapsule3' has a wrong offset!");
static_assert(offsetof(ABP_WeaselDragon_C, PalBodyPartsCapsule1) == 0x000A88, "Member 'ABP_WeaselDragon_C::PalBodyPartsCapsule1' has a wrong offset!");
static_assert(offsetof(ABP_WeaselDragon_C, BP_PalRideMarkerSaddle) == 0x000A90, "Member 'ABP_WeaselDragon_C::BP_PalRideMarkerSaddle' has a wrong offset!");

}

