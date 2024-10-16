#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MapObject_TreasureBox_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_MapObject_TreasureBox_OilrigGoal.BP_MapObject_TreasureBox_OilrigGoal_C
// 0x0010 (0x04C0 - 0x04B0)
class ABP_MapObject_TreasureBox_OilrigGoal_C final : public ABP_MapObject_TreasureBox_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_MapObject_TreasureBox_OilrigGoal_C; // 0x04B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsOpened;                                          // 0x04B8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MapObject_TreasureBox_OilrigGoal(int32 EntryPoint);
	void ReceiveBeginPlay();
	void SetupVisual(class UPalMapObjectConcreteModelBase* ConcreteModel);
	void TriggerOpen();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapObject_TreasureBox_OilrigGoal_C">();
	}
	static class ABP_MapObject_TreasureBox_OilrigGoal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapObject_TreasureBox_OilrigGoal_C>();
	}
};
static_assert(alignof(ABP_MapObject_TreasureBox_OilrigGoal_C) == 0x000008, "Wrong alignment on ABP_MapObject_TreasureBox_OilrigGoal_C");
static_assert(sizeof(ABP_MapObject_TreasureBox_OilrigGoal_C) == 0x0004C0, "Wrong size on ABP_MapObject_TreasureBox_OilrigGoal_C");
static_assert(offsetof(ABP_MapObject_TreasureBox_OilrigGoal_C, UberGraphFrame_BP_MapObject_TreasureBox_OilrigGoal_C) == 0x0004B0, "Member 'ABP_MapObject_TreasureBox_OilrigGoal_C::UberGraphFrame_BP_MapObject_TreasureBox_OilrigGoal_C' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_TreasureBox_OilrigGoal_C, IsOpened) == 0x0004B8, "Member 'ABP_MapObject_TreasureBox_OilrigGoal_C::IsOpened' has a wrong offset!");

}

