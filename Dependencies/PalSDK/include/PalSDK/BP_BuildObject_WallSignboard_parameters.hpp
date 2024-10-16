#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_BuildObject_WallSignboard.BP_BuildObject_WallSignboard_C.ExecuteUbergraph_BP_BuildObject_WallSignboard
// 0x0078 (0x0078 - 0x0000)
struct BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUGCFilter_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const class FString& TextValue)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_TextValue;                      // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetWidget_ReturnValue;                    // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalMapObjectConcreteModelBase* Model)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Ingame_Signboard_3DText_C*         K2Node_DynamicCast_AsWBP_Ingame_Signboard_3DText;  // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalMapObjectConcreteModelBase*         K2Node_CustomEvent_Model;                          // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectSignboardModel*            K2Node_DynamicCast_AsPal_Map_Object_Signboard_Model; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSignboardText_ReturnValue;             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard) == 0x000008, "Wrong alignment on BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard");
static_assert(sizeof(BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard) == 0x000078, "Wrong size on BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard");
static_assert(offsetof(BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard, EntryPoint) == 0x000000, "Member 'BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard, CallFunc_IsUGCFilter_ReturnValue) == 0x000004, "Member 'BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard::CallFunc_IsUGCFilter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard, K2Node_CustomEvent_TextValue) == 0x000018, "Member 'BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard::K2Node_CustomEvent_TextValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard, CallFunc_GetWidget_ReturnValue) == 0x000028, "Member 'BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard::CallFunc_GetWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard, K2Node_CreateDelegate_OutputDelegate_1) == 0x000030, "Member 'BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard, K2Node_DynamicCast_AsWBP_Ingame_Signboard_3DText) == 0x000040, "Member 'BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard::K2Node_DynamicCast_AsWBP_Ingame_Signboard_3DText' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard, K2Node_CustomEvent_Model) == 0x000050, "Member 'BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard::K2Node_CustomEvent_Model' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard, K2Node_DynamicCast_AsPal_Map_Object_Signboard_Model) == 0x000058, "Member 'BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard::K2Node_DynamicCast_AsPal_Map_Object_Signboard_Model' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard, CallFunc_GetSignboardText_ReturnValue) == 0x000068, "Member 'BP_BuildObject_WallSignboard_C_ExecuteUbergraph_BP_BuildObject_WallSignboard::CallFunc_GetSignboardText_ReturnValue' has a wrong offset!");

// Function BP_BuildObject_WallSignboard.BP_BuildObject_WallSignboard_C.OnSetConcreteModel
// 0x0008 (0x0008 - 0x0000)
struct BP_BuildObject_WallSignboard_C_OnSetConcreteModel final
{
public:
	class UPalMapObjectConcreteModelBase*         Model;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_WallSignboard_C_OnSetConcreteModel) == 0x000008, "Wrong alignment on BP_BuildObject_WallSignboard_C_OnSetConcreteModel");
static_assert(sizeof(BP_BuildObject_WallSignboard_C_OnSetConcreteModel) == 0x000008, "Wrong size on BP_BuildObject_WallSignboard_C_OnSetConcreteModel");
static_assert(offsetof(BP_BuildObject_WallSignboard_C_OnSetConcreteModel, Model) == 0x000000, "Member 'BP_BuildObject_WallSignboard_C_OnSetConcreteModel::Model' has a wrong offset!");

// Function BP_BuildObject_WallSignboard.BP_BuildObject_WallSignboard_C.OnUpdateText
// 0x0010 (0x0010 - 0x0000)
struct BP_BuildObject_WallSignboard_C_OnUpdateText final
{
public:
	class FString                                 TextValue;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_WallSignboard_C_OnUpdateText) == 0x000008, "Wrong alignment on BP_BuildObject_WallSignboard_C_OnUpdateText");
static_assert(sizeof(BP_BuildObject_WallSignboard_C_OnUpdateText) == 0x000010, "Wrong size on BP_BuildObject_WallSignboard_C_OnUpdateText");
static_assert(offsetof(BP_BuildObject_WallSignboard_C_OnUpdateText, TextValue) == 0x000000, "Member 'BP_BuildObject_WallSignboard_C_OnUpdateText::TextValue' has a wrong offset!");

}

