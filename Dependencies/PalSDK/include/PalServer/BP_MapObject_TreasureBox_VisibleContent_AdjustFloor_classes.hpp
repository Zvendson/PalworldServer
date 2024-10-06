#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MapObject_TreasureBox_VisibleContent_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_MapObject_TreasureBox_VisibleContent_AdjustFloor.BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C
// 0x0008 (0x0418 - 0x0410)
class ABP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C final : public ABP_MapObject_TreasureBox_VisibleContent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C; // 0x0410(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C">();
	}
	static class ABP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C>();
	}
};
static_assert(alignof(ABP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C) == 0x000008, "Wrong alignment on ABP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C");
static_assert(sizeof(ABP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C) == 0x000418, "Wrong size on ABP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C");
static_assert(offsetof(ABP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C, UberGraphFrame_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C) == 0x000410, "Member 'ABP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C::UberGraphFrame_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C' has a wrong offset!");

}

