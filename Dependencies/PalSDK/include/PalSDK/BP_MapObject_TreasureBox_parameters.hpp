#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "EPalTreasureBoxVisualType_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_MapObject_TreasureBox.BP_MapObject_TreasureBox_C.BP_OnSetConcreteModel
// 0x0008 (0x0008 - 0x0000)
struct BP_MapObject_TreasureBox_C_BP_OnSetConcreteModel final
{
public:
	class UPalMapObjectConcreteModelBase*         ConcreteModel;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_TreasureBox_C_BP_OnSetConcreteModel) == 0x000008, "Wrong alignment on BP_MapObject_TreasureBox_C_BP_OnSetConcreteModel");
static_assert(sizeof(BP_MapObject_TreasureBox_C_BP_OnSetConcreteModel) == 0x000008, "Wrong size on BP_MapObject_TreasureBox_C_BP_OnSetConcreteModel");
static_assert(offsetof(BP_MapObject_TreasureBox_C_BP_OnSetConcreteModel, ConcreteModel) == 0x000000, "Member 'BP_MapObject_TreasureBox_C_BP_OnSetConcreteModel::ConcreteModel' has a wrong offset!");

// Function BP_MapObject_TreasureBox.BP_MapObject_TreasureBox_C.ExecuteUbergraph_BP_MapObject_TreasureBox
// 0x0068 (0x0068 - 0x0000)
struct BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_AdjustActorToFloor_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_TreasureBoxVisual_Base_C*           K2Node_DynamicCast_AsBP_Treasure_Box_Visual_Base;  // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalMapObjectConcreteModelBase*         K2Node_Event_ConcreteModel;                        // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_TreasureBoxVisual_Base_C*           K2Node_DynamicCast_AsBP_Treasure_Box_Visual_Base_1; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox) == 0x000008, "Wrong alignment on BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox");
static_assert(sizeof(BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox) == 0x000068, "Wrong size on BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox");
static_assert(offsetof(BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox, EntryPoint) == 0x000000, "Member 'BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox, CallFunc_AdjustActorToFloor_ReturnValue) == 0x000008, "Member 'BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox::CallFunc_AdjustActorToFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox, CallFunc_HasAuthority_ReturnValue) == 0x000020, "Member 'BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox, CallFunc_HasAuthority_ReturnValue_1) == 0x000021, "Member 'BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox, CallFunc_IsValid_ReturnValue) == 0x000022, "Member 'BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox, K2Node_DynamicCast_AsBP_Treasure_Box_Visual_Base) == 0x000028, "Member 'BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox::K2Node_DynamicCast_AsBP_Treasure_Box_Visual_Base' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox, K2Node_Event_ConcreteModel) == 0x000038, "Member 'BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox::K2Node_Event_ConcreteModel' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox, K2Node_DynamicCast_AsBP_Treasure_Box_Visual_Base_1) == 0x000058, "Member 'BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox::K2Node_DynamicCast_AsBP_Treasure_Box_Visual_Base_1' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_MapObject_TreasureBox.BP_MapObject_TreasureBox_C.SetupVisual
// 0x0240 (0x0240 - 0x0000)
struct BP_MapObject_TreasureBox_C_SetupVisual final
{
public:
	class UPalMapObjectConcreteModelBase*         ConcreteModel;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectTreasureBoxModel*          ConcreteModel_0;                                   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalTreasureBoxVisualType                     VisualType;                                        // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalItemIDManager*                      ItemIDManager;                                     // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectTreasureBoxModel*          K2Node_DynamicCast_AsPal_Map_Object_Treasure_Box_Model; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalMapObjectTreasureGradeType                CallFunc_GetTreasureGradeType_ReturnValue;         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue;          // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDevelopmentBuild_ReturnValue;           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0080(0x0050)(HasGetValueTypeHash)
	class UClass*                                 CallFunc_Map_Find_Value;                           // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetClassDisplayName_ReturnValue;          // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0100(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0118(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0130(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0180(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01D0(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x01E0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01F0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0208(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0230(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_TreasureBox_C_SetupVisual) == 0x000008, "Wrong alignment on BP_MapObject_TreasureBox_C_SetupVisual");
static_assert(sizeof(BP_MapObject_TreasureBox_C_SetupVisual) == 0x000240, "Wrong size on BP_MapObject_TreasureBox_C_SetupVisual");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, ConcreteModel) == 0x000000, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::ConcreteModel' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, ConcreteModel_0) == 0x000008, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::ConcreteModel_0' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, VisualType) == 0x000010, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::VisualType' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, ItemIDManager) == 0x000018, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::ItemIDManager' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, K2Node_DynamicCast_AsPal_Map_Object_Treasure_Box_Model) == 0x000020, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::K2Node_DynamicCast_AsPal_Map_Object_Treasure_Box_Model' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, CallFunc_GetTreasureGradeType_ReturnValue) == 0x000048, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::CallFunc_GetTreasureGradeType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, CallFunc_Conv_VectorToString_ReturnValue) == 0x000050, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::CallFunc_Conv_VectorToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, CallFunc_IsDevelopmentBuild_ReturnValue) == 0x000060, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::CallFunc_IsDevelopmentBuild_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, K2Node_MakeStruct_FormatArgumentData) == 0x000080, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, CallFunc_Map_Find_Value) == 0x0000D0, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, CallFunc_Map_Find_ReturnValue) == 0x0000D8, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x0000E0, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, CallFunc_GetClassDisplayName_ReturnValue) == 0x0000F0, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::CallFunc_GetClassDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000100, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000118, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, K2Node_MakeStruct_FormatArgumentData_1) == 0x000130, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, K2Node_MakeStruct_FormatArgumentData_2) == 0x000180, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, K2Node_MakeArray_Array) == 0x0001D0, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, K2Node_MakeArray_Array_1) == 0x0001E0, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, CallFunc_Format_ReturnValue) == 0x0001F0, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, CallFunc_Format_ReturnValue_1) == 0x000208, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, CallFunc_Conv_TextToString_ReturnValue) == 0x000220, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_TreasureBox_C_SetupVisual, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000230, "Member 'BP_MapObject_TreasureBox_C_SetupVisual::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");

}

