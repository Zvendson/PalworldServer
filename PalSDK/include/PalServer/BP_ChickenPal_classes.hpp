#pragma once

#include "Basic.hpp"

#include "BP_MonsterBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ChickenPal.BP_ChickenPal_C
// 0x0010 (0x0A70 - 0x0A60)
class ABP_ChickenPal_C final : public ABP_MonsterBase_C
{
public:
	class UPalBodyPartsSphereComponent*           PalBodyPartsSphere1;                               // 0x0A60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsSphereComponent*           PalBodyPartsSphere;                                // 0x0A68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ChickenPal_C">();
	}
	static class ABP_ChickenPal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ChickenPal_C>();
	}
};
static_assert(alignof(ABP_ChickenPal_C) == 0x000010, "Wrong alignment on ABP_ChickenPal_C");
static_assert(sizeof(ABP_ChickenPal_C) == 0x000A70, "Wrong size on ABP_ChickenPal_C");
static_assert(offsetof(ABP_ChickenPal_C, PalBodyPartsSphere1) == 0x000A60, "Member 'ABP_ChickenPal_C::PalBodyPartsSphere1' has a wrong offset!");
static_assert(offsetof(ABP_ChickenPal_C, PalBodyPartsSphere) == 0x000A68, "Member 'ABP_ChickenPal_C::PalBodyPartsSphere' has a wrong offset!");

}

