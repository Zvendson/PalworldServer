#pragma once

#include "Basic.hpp"

#include "BP_MonsterBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_GrassRabbitMan.BP_GrassRabbitMan_C
// 0x0040 (0x0AA0 - 0x0A60)
class ABP_GrassRabbitMan_C final : public ABP_MonsterBase_C
{
public:
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule6;                              // 0x0A60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule;                               // 0x0A68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule5;                              // 0x0A70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule4;                              // 0x0A78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule3;                              // 0x0A80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule2;                              // 0x0A88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule1;                              // 0x0A90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GrassRabbitMan_C">();
	}
	static class ABP_GrassRabbitMan_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GrassRabbitMan_C>();
	}
};
static_assert(alignof(ABP_GrassRabbitMan_C) == 0x000010, "Wrong alignment on ABP_GrassRabbitMan_C");
static_assert(sizeof(ABP_GrassRabbitMan_C) == 0x000AA0, "Wrong size on ABP_GrassRabbitMan_C");
static_assert(offsetof(ABP_GrassRabbitMan_C, PalBodyPartsCapsule6) == 0x000A60, "Member 'ABP_GrassRabbitMan_C::PalBodyPartsCapsule6' has a wrong offset!");
static_assert(offsetof(ABP_GrassRabbitMan_C, PalBodyPartsCapsule) == 0x000A68, "Member 'ABP_GrassRabbitMan_C::PalBodyPartsCapsule' has a wrong offset!");
static_assert(offsetof(ABP_GrassRabbitMan_C, PalBodyPartsCapsule5) == 0x000A70, "Member 'ABP_GrassRabbitMan_C::PalBodyPartsCapsule5' has a wrong offset!");
static_assert(offsetof(ABP_GrassRabbitMan_C, PalBodyPartsCapsule4) == 0x000A78, "Member 'ABP_GrassRabbitMan_C::PalBodyPartsCapsule4' has a wrong offset!");
static_assert(offsetof(ABP_GrassRabbitMan_C, PalBodyPartsCapsule3) == 0x000A80, "Member 'ABP_GrassRabbitMan_C::PalBodyPartsCapsule3' has a wrong offset!");
static_assert(offsetof(ABP_GrassRabbitMan_C, PalBodyPartsCapsule2) == 0x000A88, "Member 'ABP_GrassRabbitMan_C::PalBodyPartsCapsule2' has a wrong offset!");
static_assert(offsetof(ABP_GrassRabbitMan_C, PalBodyPartsCapsule1) == 0x000A90, "Member 'ABP_GrassRabbitMan_C::PalBodyPartsCapsule1' has a wrong offset!");

}

