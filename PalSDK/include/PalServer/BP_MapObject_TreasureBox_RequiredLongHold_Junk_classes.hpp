#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_MapObject_TreasureBox_RequiredLongHold_Junk.BP_MapObject_TreasureBox_RequiredLongHold_Junk_C
// 0x0018 (0x0450 - 0x0438)
class ABP_MapObject_TreasureBox_RequiredLongHold_Junk_C final : public APalMapObjectTreasureBox
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalInteractableSphereComponentNative*  BP_InteractableSphere;                             // 0x0440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        IndicatorOrigin;                                   // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapObject_TreasureBox_RequiredLongHold_Junk_C">();
	}
	static class ABP_MapObject_TreasureBox_RequiredLongHold_Junk_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapObject_TreasureBox_RequiredLongHold_Junk_C>();
	}
};
static_assert(alignof(ABP_MapObject_TreasureBox_RequiredLongHold_Junk_C) == 0x000008, "Wrong alignment on ABP_MapObject_TreasureBox_RequiredLongHold_Junk_C");
static_assert(sizeof(ABP_MapObject_TreasureBox_RequiredLongHold_Junk_C) == 0x000450, "Wrong size on ABP_MapObject_TreasureBox_RequiredLongHold_Junk_C");
static_assert(offsetof(ABP_MapObject_TreasureBox_RequiredLongHold_Junk_C, StaticMesh) == 0x000438, "Member 'ABP_MapObject_TreasureBox_RequiredLongHold_Junk_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_TreasureBox_RequiredLongHold_Junk_C, BP_InteractableSphere) == 0x000440, "Member 'ABP_MapObject_TreasureBox_RequiredLongHold_Junk_C::BP_InteractableSphere' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_TreasureBox_RequiredLongHold_Junk_C, IndicatorOrigin) == 0x000448, "Member 'ABP_MapObject_TreasureBox_RequiredLongHold_Junk_C::IndicatorOrigin' has a wrong offset!");

}

