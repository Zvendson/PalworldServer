#pragma once

#include "Basic.hpp"

#include "Enum_ReticleCancel_DisplayType_structs.hpp"


namespace PalServer::Params
{

// Function WBP_Reticle_Cancel.WBP_Reticle_Cancel_C.ExecuteUbergraph_WBP_Reticle_Cancel
// 0x0070 (0x0070 - 0x0000)
struct WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_ReticleCancel_DisplayType                Temp_byte_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_ReticleCancel_DisplayType                Temp_byte_Variable_1;                              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_ReticleCancel_DisplayType                K2Node_CustomEvent_DisplayType;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x2];                                       // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default;                             // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_1;            // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0048(0x0018)()
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_2;            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default_1;                           // 0x0068(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel) == 0x000008, "Wrong alignment on WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel");
static_assert(sizeof(WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel) == 0x000070, "Wrong size on WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel");
static_assert(offsetof(WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel, EntryPoint) == 0x000000, "Member 'WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel, CallFunc_MakeLiteralName_ReturnValue) == 0x000004, "Member 'WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel, Temp_byte_Variable) == 0x00000C, "Member 'WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel, Temp_name_Variable) == 0x000010, "Member 'WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel, Temp_name_Variable_1) == 0x000018, "Member 'WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel, Temp_name_Variable_2) == 0x000020, "Member 'WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel, Temp_name_Variable_3) == 0x000028, "Member 'WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel, Temp_byte_Variable_1) == 0x000030, "Member 'WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel, K2Node_CustomEvent_DisplayType) == 0x000031, "Member 'WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel::K2Node_CustomEvent_DisplayType' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel, K2Node_Select_Default) == 0x000034, "Member 'WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel, CallFunc_MakeLiteralName_ReturnValue_1) == 0x00003C, "Member 'WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel::CallFunc_MakeLiteralName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel, CallFunc_GetLocalizedText_ReturnValue) == 0x000048, "Member 'WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel, CallFunc_MakeLiteralName_ReturnValue_2) == 0x000060, "Member 'WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel::CallFunc_MakeLiteralName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel, K2Node_Select_Default_1) == 0x000068, "Member 'WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_Reticle_Cancel.WBP_Reticle_Cancel_C.SetKeyGuideInfo
// 0x0001 (0x0001 - 0x0000)
struct WBP_Reticle_Cancel_C_SetKeyGuideInfo final
{
public:
	Enum_ReticleCancel_DisplayType                DisplayType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Reticle_Cancel_C_SetKeyGuideInfo) == 0x000001, "Wrong alignment on WBP_Reticle_Cancel_C_SetKeyGuideInfo");
static_assert(sizeof(WBP_Reticle_Cancel_C_SetKeyGuideInfo) == 0x000001, "Wrong size on WBP_Reticle_Cancel_C_SetKeyGuideInfo");
static_assert(offsetof(WBP_Reticle_Cancel_C_SetKeyGuideInfo, DisplayType) == 0x000000, "Member 'WBP_Reticle_Cancel_C_SetKeyGuideInfo::DisplayType' has a wrong offset!");

}

