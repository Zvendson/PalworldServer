#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_LevelObject_OilField.BP_LevelObject_OilField_C
// 0x0028 (0x02D8 - 0x02B0)
class ABP_LevelObject_OilField_C final : public APalLevelObjectItemProvider
{
public:
	class UStaticMeshComponent*                   SM_VFX_OilField_00_TF;                             // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal_Oil;                                         // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_OilLeak_00;                                     // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LevelObject_OilField_C">();
	}
	static class ABP_LevelObject_OilField_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LevelObject_OilField_C>();
	}
};
static_assert(alignof(ABP_LevelObject_OilField_C) == 0x000008, "Wrong alignment on ABP_LevelObject_OilField_C");
static_assert(sizeof(ABP_LevelObject_OilField_C) == 0x0002D8, "Wrong size on ABP_LevelObject_OilField_C");
static_assert(offsetof(ABP_LevelObject_OilField_C, SM_VFX_OilField_00_TF) == 0x0002B0, "Member 'ABP_LevelObject_OilField_C::SM_VFX_OilField_00_TF' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_OilField_C, Decal_Oil) == 0x0002B8, "Member 'ABP_LevelObject_OilField_C::Decal_Oil' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_OilField_C, NS_OilLeak_00) == 0x0002C0, "Member 'ABP_LevelObject_OilField_C::NS_OilLeak_00' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_OilField_C, StaticMesh) == 0x0002C8, "Member 'ABP_LevelObject_OilField_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_OilField_C, DefaultSceneRoot) == 0x0002D0, "Member 'ABP_LevelObject_OilField_C::DefaultSceneRoot' has a wrong offset!");

}

