#pragma once

#include "Basic.hpp"

#include "BP_BuildObject_WeaponFactoryBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_WeaponFactory_Dirty_01.BP_BuildObject_WeaponFactory_Dirty_01_C
// 0x0008 (0x0680 - 0x0678)
class ABP_BuildObject_WeaponFactory_Dirty_01_C final : public ABP_BuildObject_WeaponFactoryBase_C
{
public:
	class USceneComponent*                        Root_0;                                            // 0x0678(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_WeaponFactory_Dirty_01_C">();
	}
	static class ABP_BuildObject_WeaponFactory_Dirty_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_WeaponFactory_Dirty_01_C>();
	}
};
static_assert(alignof(ABP_BuildObject_WeaponFactory_Dirty_01_C) == 0x000008, "Wrong alignment on ABP_BuildObject_WeaponFactory_Dirty_01_C");
static_assert(sizeof(ABP_BuildObject_WeaponFactory_Dirty_01_C) == 0x000680, "Wrong size on ABP_BuildObject_WeaponFactory_Dirty_01_C");
static_assert(offsetof(ABP_BuildObject_WeaponFactory_Dirty_01_C, Root_0) == 0x000678, "Member 'ABP_BuildObject_WeaponFactory_Dirty_01_C::Root_0' has a wrong offset!");

}

