#pragma once

#include "Basic.hpp"

#include "BP_MonsterBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_LilyQueen.BP_LilyQueen_C
// 0x0020 (0x0A80 - 0x0A60)
class ABP_LilyQueen_C final : public ABP_MonsterBase_C
{
public:
	class UPalFlyMeshHeightCtrlComponent*         PalFlyMeshHeightCtrl;                              // 0x0A60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsSphereComponent*           PalBodyPartsSphere1;                               // 0x0A68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsSphereComponent*           PalBodyPartsSphere;                                // 0x0A70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LilyQueen_C">();
	}
	static class ABP_LilyQueen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LilyQueen_C>();
	}
};
static_assert(alignof(ABP_LilyQueen_C) == 0x000010, "Wrong alignment on ABP_LilyQueen_C");
static_assert(sizeof(ABP_LilyQueen_C) == 0x000A80, "Wrong size on ABP_LilyQueen_C");
static_assert(offsetof(ABP_LilyQueen_C, PalFlyMeshHeightCtrl) == 0x000A60, "Member 'ABP_LilyQueen_C::PalFlyMeshHeightCtrl' has a wrong offset!");
static_assert(offsetof(ABP_LilyQueen_C, PalBodyPartsSphere1) == 0x000A68, "Member 'ABP_LilyQueen_C::PalBodyPartsSphere1' has a wrong offset!");
static_assert(offsetof(ABP_LilyQueen_C, PalBodyPartsSphere) == 0x000A70, "Member 'ABP_LilyQueen_C::PalBodyPartsSphere' has a wrong offset!");

}

