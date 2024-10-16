#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_LevelObject_GoddessStatue.BP_LevelObject_GoddessStatue_C
// 0x0030 (0x02F0 - 0x02C0)
class ABP_LevelObject_GoddessStatue_C final : public APalLevelObjectCharacterStatusOperator
{
public:
	class UPalLimitVolumeBoxComponent*            PalLimitVolumeBox;                                 // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_GoddessStatue_Glow;                             // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        IndicatorOrigin;                                   // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableCapsule_C*              BP_InteractableCapsule;                            // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LevelObject_GoddessStatue_C">();
	}
	static class ABP_LevelObject_GoddessStatue_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LevelObject_GoddessStatue_C>();
	}
};
static_assert(alignof(ABP_LevelObject_GoddessStatue_C) == 0x000008, "Wrong alignment on ABP_LevelObject_GoddessStatue_C");
static_assert(sizeof(ABP_LevelObject_GoddessStatue_C) == 0x0002F0, "Wrong size on ABP_LevelObject_GoddessStatue_C");
static_assert(offsetof(ABP_LevelObject_GoddessStatue_C, PalLimitVolumeBox) == 0x0002C0, "Member 'ABP_LevelObject_GoddessStatue_C::PalLimitVolumeBox' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_GoddessStatue_C, NS_GoddessStatue_Glow) == 0x0002C8, "Member 'ABP_LevelObject_GoddessStatue_C::NS_GoddessStatue_Glow' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_GoddessStatue_C, IndicatorOrigin) == 0x0002D0, "Member 'ABP_LevelObject_GoddessStatue_C::IndicatorOrigin' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_GoddessStatue_C, BP_InteractableCapsule) == 0x0002D8, "Member 'ABP_LevelObject_GoddessStatue_C::BP_InteractableCapsule' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_GoddessStatue_C, Mesh) == 0x0002E0, "Member 'ABP_LevelObject_GoddessStatue_C::Mesh' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_GoddessStatue_C, Root) == 0x0002E8, "Member 'ABP_LevelObject_GoddessStatue_C::Root' has a wrong offset!");

}

