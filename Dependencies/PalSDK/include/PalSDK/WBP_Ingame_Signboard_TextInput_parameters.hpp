#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_Ingame_Signboard_TextInput.WBP_Ingame_Signboard_TextInput_C.BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct WBP_Ingame_Signboard_TextInput_C_BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Signboard_TextInput_C_BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Ingame_Signboard_TextInput_C_BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextCommittedEvent__DelegateSignature");
static_assert(sizeof(WBP_Ingame_Signboard_TextInput_C_BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on WBP_Ingame_Signboard_TextInput_C_BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextCommittedEvent__DelegateSignature");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'WBP_Ingame_Signboard_TextInput_C_BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'WBP_Ingame_Signboard_TextInput_C_BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function WBP_Ingame_Signboard_TextInput.WBP_Ingame_Signboard_TextInput_C.BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WBP_Ingame_Signboard_TextInput_C_BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_Ingame_Signboard_TextInput_C_BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Ingame_Signboard_TextInput_C_BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature");
static_assert(sizeof(WBP_Ingame_Signboard_TextInput_C_BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature) == 0x000018, "Wrong size on WBP_Ingame_Signboard_TextInput_C_BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'WBP_Ingame_Signboard_TextInput_C_BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function WBP_Ingame_Signboard_TextInput.WBP_Ingame_Signboard_TextInput_C.ExecuteUbergraph_WBP_Ingame_Signboard_TextInput
// 0x0110 (0x0110 - 0x0000)
struct WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_Signboard*     K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Signboard; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue_1;                   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDDispatchParameter_Signboard*     K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Signboard_1; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0058(0x0018)()
	class FText                                   K2Node_ComponentBoundEvent_Text_1;                 // 0x0070(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x00A0(0x0018)(ConstParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CD[0x3];                                       // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Left_ReturnValue;                         // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00E0(0x0018)()
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue_2;                   // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_Signboard*     K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Signboard_2; // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput) == 0x000008, "Wrong alignment on WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput");
static_assert(sizeof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput) == 0x000110, "Wrong size on WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput, EntryPoint) == 0x000000, "Member 'WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput, CallFunc_GetParam_ReturnValue) == 0x000008, "Member 'WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput, K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Signboard) == 0x000010, "Member 'WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput::K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Signboard' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput, CallFunc_GetParam_ReturnValue_1) == 0x000020, "Member 'WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput::CallFunc_GetParam_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput, K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Signboard_1) == 0x000030, "Member 'WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput::K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Signboard_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput, CallFunc_GetText_ReturnValue) == 0x000058, "Member 'WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput, K2Node_ComponentBoundEvent_Text_1) == 0x000070, "Member 'WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput::K2Node_ComponentBoundEvent_Text_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput, K2Node_ComponentBoundEvent_CommitMethod) == 0x000088, "Member 'WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput, CallFunc_Conv_TextToString_ReturnValue) == 0x000090, "Member 'WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput, K2Node_ComponentBoundEvent_Text) == 0x0000A0, "Member 'WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0000B8, "Member 'WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput, CallFunc_Len_ReturnValue) == 0x0000C8, "Member 'WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput, CallFunc_Greater_IntInt_ReturnValue) == 0x0000CC, "Member 'WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput, CallFunc_Left_ReturnValue) == 0x0000D0, "Member 'WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput::CallFunc_Left_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000E0, "Member 'WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput, CallFunc_GetParam_ReturnValue_2) == 0x0000F8, "Member 'WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput::CallFunc_GetParam_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput, K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Signboard_2) == 0x000100, "Member 'WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput::K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Signboard_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput, K2Node_DynamicCast_bSuccess_2) == 0x000108, "Member 'WBP_Ingame_Signboard_TextInput_C_ExecuteUbergraph_WBP_Ingame_Signboard_TextInput::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function WBP_Ingame_Signboard_TextInput.WBP_Ingame_Signboard_TextInput_C.SetEnableConfirmButton
// 0x0018 (0x0018 - 0x0000)
struct WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_real_Variable;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_1;                              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton) == 0x000004, "Wrong alignment on WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton");
static_assert(sizeof(WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton) == 0x000018, "Wrong size on WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton, IsEnable) == 0x000000, "Member 'WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton::IsEnable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton, Temp_bool_Variable) == 0x000001, "Member 'WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton, Temp_real_Variable) == 0x000004, "Member 'WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton, Temp_real_Variable_1) == 0x000008, "Member 'WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton, Temp_bool_Variable_1) == 0x00000C, "Member 'WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton, K2Node_Select_Default) == 0x000010, "Member 'WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton, Temp_byte_Variable) == 0x000014, "Member 'WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton, Temp_byte_Variable_1) == 0x000015, "Member 'WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton, K2Node_Select_Default_1) == 0x000016, "Member 'WBP_Ingame_Signboard_TextInput_C_SetEnableConfirmButton::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_Ingame_Signboard_TextInput.WBP_Ingame_Signboard_TextInput_C.SetupInputAction
// 0x0014 (0x0014 - 0x0000)
struct WBP_Ingame_Signboard_TextInput_C_SetupInputAction final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue;        // 0x0010(0x0004)(NoDestructor)
};
static_assert(alignof(WBP_Ingame_Signboard_TextInput_C_SetupInputAction) == 0x000004, "Wrong alignment on WBP_Ingame_Signboard_TextInput_C_SetupInputAction");
static_assert(sizeof(WBP_Ingame_Signboard_TextInput_C_SetupInputAction) == 0x000014, "Wrong size on WBP_Ingame_Signboard_TextInput_C_SetupInputAction");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_SetupInputAction, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_Ingame_Signboard_TextInput_C_SetupInputAction::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_SetupInputAction, CallFunc_RegisterActionBinding_ReturnValue) == 0x000010, "Member 'WBP_Ingame_Signboard_TextInput_C_SetupInputAction::CallFunc_RegisterActionBinding_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_Signboard_TextInput.WBP_Ingame_Signboard_TextInput_C.BP_GetDesiredFocusTarget
// 0x0038 (0x0038 - 0x0000)
struct WBP_Ingame_Signboard_TextInput_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0008(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Signboard_TextInput_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_Ingame_Signboard_TextInput_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_Ingame_Signboard_TextInput_C_BP_GetDesiredFocusTarget) == 0x000038, "Wrong size on WBP_Ingame_Signboard_TextInput_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_Ingame_Signboard_TextInput_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_BP_GetDesiredFocusTarget, CallFunc_GetText_ReturnValue) == 0x000008, "Member 'WBP_Ingame_Signboard_TextInput_C_BP_GetDesiredFocusTarget::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_BP_GetDesiredFocusTarget, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'WBP_Ingame_Signboard_TextInput_C_BP_GetDesiredFocusTarget::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_BP_GetDesiredFocusTarget, CallFunc_Len_ReturnValue) == 0x000030, "Member 'WBP_Ingame_Signboard_TextInput_C_BP_GetDesiredFocusTarget::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Signboard_TextInput_C_BP_GetDesiredFocusTarget, CallFunc_Greater_IntInt_ReturnValue) == 0x000034, "Member 'WBP_Ingame_Signboard_TextInput_C_BP_GetDesiredFocusTarget::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

