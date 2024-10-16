#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_MapObject_TreasureBox_OilrigGoal.BP_MapObject_TreasureBox_OilrigGoal_C.ExecuteUbergraph_BP_MapObject_TreasureBox_OilrigGoal
// 0x0018 (0x0018 - 0x0000)
struct BP_MapObject_TreasureBox_OilrigGoal_C_ExecuteUbergraph_BP_MapObject_TreasureBox_OilrigGoal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_TreasureBoxVisual_Base_C*           K2Node_DynamicCast_AsBP_Treasure_Box_Visual_Base;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_TreasureBox_OilrigGoal_C_ExecuteUbergraph_BP_MapObject_TreasureBox_OilrigGoal) == 0x000008, "Wrong alignment on BP_MapObject_TreasureBox_OilrigGoal_C_ExecuteUbergraph_BP_MapObject_TreasureBox_OilrigGoal");
static_assert(sizeof(BP_MapObject_TreasureBox_OilrigGoal_C_ExecuteUbergraph_BP_MapObject_TreasureBox_OilrigGoal) == 0x000018, "Wrong size on BP_MapObject_TreasureBox_OilrigGoal_C_ExecuteUbergraph_BP_MapObject_TreasureBox_OilrigGoal");
static_assert(offsetof(BP_MapObject_TreasureBox_OilrigGoal_C_ExecuteUbergraph_BP_MapObject_TreasureBox_OilrigGoal, EntryPoint) == 0x000000, "Member 'BP_MapObject_TreasureBox_OilrigGoal_C_ExecuteUbergraph_BP_MapObject_TreasureBox_OilrigGoal::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_OilrigGoal_C_ExecuteUbergraph_BP_MapObject_TreasureBox_OilrigGoal, CallFunc_IsServer_ReturnValue) == 0x000004, "Member 'BP_MapObject_TreasureBox_OilrigGoal_C_ExecuteUbergraph_BP_MapObject_TreasureBox_OilrigGoal::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_OilrigGoal_C_ExecuteUbergraph_BP_MapObject_TreasureBox_OilrigGoal, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'BP_MapObject_TreasureBox_OilrigGoal_C_ExecuteUbergraph_BP_MapObject_TreasureBox_OilrigGoal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_OilrigGoal_C_ExecuteUbergraph_BP_MapObject_TreasureBox_OilrigGoal, K2Node_DynamicCast_AsBP_Treasure_Box_Visual_Base) == 0x000008, "Member 'BP_MapObject_TreasureBox_OilrigGoal_C_ExecuteUbergraph_BP_MapObject_TreasureBox_OilrigGoal::K2Node_DynamicCast_AsBP_Treasure_Box_Visual_Base' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_OilrigGoal_C_ExecuteUbergraph_BP_MapObject_TreasureBox_OilrigGoal, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_MapObject_TreasureBox_OilrigGoal_C_ExecuteUbergraph_BP_MapObject_TreasureBox_OilrigGoal::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_MapObject_TreasureBox_OilrigGoal.BP_MapObject_TreasureBox_OilrigGoal_C.SetupVisual
// 0x0008 (0x0008 - 0x0000)
struct BP_MapObject_TreasureBox_OilrigGoal_C_SetupVisual final
{
public:
	class UPalMapObjectConcreteModelBase*         ConcreteModel;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_TreasureBox_OilrigGoal_C_SetupVisual) == 0x000008, "Wrong alignment on BP_MapObject_TreasureBox_OilrigGoal_C_SetupVisual");
static_assert(sizeof(BP_MapObject_TreasureBox_OilrigGoal_C_SetupVisual) == 0x000008, "Wrong size on BP_MapObject_TreasureBox_OilrigGoal_C_SetupVisual");
static_assert(offsetof(BP_MapObject_TreasureBox_OilrigGoal_C_SetupVisual, ConcreteModel) == 0x000000, "Member 'BP_MapObject_TreasureBox_OilrigGoal_C_SetupVisual::ConcreteModel' has a wrong offset!");

}

