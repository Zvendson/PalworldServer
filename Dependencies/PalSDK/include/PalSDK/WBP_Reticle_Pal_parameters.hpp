#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_Reticle_Pal.WBP_Reticle_Pal_C.ExecuteUbergraph_WBP_Reticle_Pal
// 0x0030 (0x0030 - 0x0000)
struct WBP_Reticle_Pal_C_ExecuteUbergraph_WBP_Reticle_Pal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Reticle_Pal_C_ExecuteUbergraph_WBP_Reticle_Pal) == 0x000008, "Wrong alignment on WBP_Reticle_Pal_C_ExecuteUbergraph_WBP_Reticle_Pal");
static_assert(sizeof(WBP_Reticle_Pal_C_ExecuteUbergraph_WBP_Reticle_Pal) == 0x000030, "Wrong size on WBP_Reticle_Pal_C_ExecuteUbergraph_WBP_Reticle_Pal");
static_assert(offsetof(WBP_Reticle_Pal_C_ExecuteUbergraph_WBP_Reticle_Pal, EntryPoint) == 0x000000, "Member 'WBP_Reticle_Pal_C_ExecuteUbergraph_WBP_Reticle_Pal::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_ExecuteUbergraph_WBP_Reticle_Pal, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_Reticle_Pal_C_ExecuteUbergraph_WBP_Reticle_Pal::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_ExecuteUbergraph_WBP_Reticle_Pal, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'WBP_Reticle_Pal_C_ExecuteUbergraph_WBP_Reticle_Pal::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_ExecuteUbergraph_WBP_Reticle_Pal, CallFunc_PlayAnimation_ReturnValue_2) == 0x000018, "Member 'WBP_Reticle_Pal_C_ExecuteUbergraph_WBP_Reticle_Pal::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_ExecuteUbergraph_WBP_Reticle_Pal, CallFunc_IsVisible_ReturnValue) == 0x000020, "Member 'WBP_Reticle_Pal_C_ExecuteUbergraph_WBP_Reticle_Pal::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_ExecuteUbergraph_WBP_Reticle_Pal, CallFunc_PlayAnimation_ReturnValue_3) == 0x000028, "Member 'WBP_Reticle_Pal_C_ExecuteUbergraph_WBP_Reticle_Pal::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");

// Function WBP_Reticle_Pal.WBP_Reticle_Pal_C.SetAssignableDetail
// 0x0050 (0x0050 - 0x0000)
struct WBP_Reticle_Pal_C_SetAssignableDetail final
{
public:
	struct FPalUIAimReticleMapObjectAssignableData AssignableData;                                    // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    MsgIdHandle;                                       // 0x0010(0x0010)(Edit, BlueprintVisible, NoDestructor)
	class FText                                   CallFunc_GetMapObjectName_outName;                 // 0x0020(0x0018)()
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0038(0x0018)()
};
static_assert(alignof(WBP_Reticle_Pal_C_SetAssignableDetail) == 0x000008, "Wrong alignment on WBP_Reticle_Pal_C_SetAssignableDetail");
static_assert(sizeof(WBP_Reticle_Pal_C_SetAssignableDetail) == 0x000050, "Wrong size on WBP_Reticle_Pal_C_SetAssignableDetail");
static_assert(offsetof(WBP_Reticle_Pal_C_SetAssignableDetail, AssignableData) == 0x000000, "Member 'WBP_Reticle_Pal_C_SetAssignableDetail::AssignableData' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_SetAssignableDetail, MsgIdHandle) == 0x000010, "Member 'WBP_Reticle_Pal_C_SetAssignableDetail::MsgIdHandle' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_SetAssignableDetail, CallFunc_GetMapObjectName_outName) == 0x000020, "Member 'WBP_Reticle_Pal_C_SetAssignableDetail::CallFunc_GetMapObjectName_outName' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_SetAssignableDetail, CallFunc_GetLocalizedText_ReturnValue) == 0x000038, "Member 'WBP_Reticle_Pal_C_SetAssignableDetail::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");

// Function WBP_Reticle_Pal.WBP_Reticle_Pal_C.SetOtomoDeadDetail
// 0x00D8 (0x00D8 - 0x0000)
struct WBP_Reticle_Pal_C_SetOtomoDeadDetail final
{
public:
	class UPalIndividualCharacterParameter*       TargetIndividualParameter;                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetNickName_outName;                      // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0090(0x0010)(ReferenceParm)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x00A0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00B8(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Reticle_Pal_C_SetOtomoDeadDetail) == 0x000008, "Wrong alignment on WBP_Reticle_Pal_C_SetOtomoDeadDetail");
static_assert(sizeof(WBP_Reticle_Pal_C_SetOtomoDeadDetail) == 0x0000D8, "Wrong size on WBP_Reticle_Pal_C_SetOtomoDeadDetail");
static_assert(offsetof(WBP_Reticle_Pal_C_SetOtomoDeadDetail, TargetIndividualParameter) == 0x000000, "Member 'WBP_Reticle_Pal_C_SetOtomoDeadDetail::TargetIndividualParameter' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_SetOtomoDeadDetail, Temp_byte_Variable) == 0x000008, "Member 'WBP_Reticle_Pal_C_SetOtomoDeadDetail::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_SetOtomoDeadDetail, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'WBP_Reticle_Pal_C_SetOtomoDeadDetail::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_SetOtomoDeadDetail, CallFunc_IsDead_ReturnValue) == 0x00000A, "Member 'WBP_Reticle_Pal_C_SetOtomoDeadDetail::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_SetOtomoDeadDetail, CallFunc_GetNickName_outName) == 0x000010, "Member 'WBP_Reticle_Pal_C_SetOtomoDeadDetail::CallFunc_GetNickName_outName' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_SetOtomoDeadDetail, Temp_byte_Variable_1) == 0x000020, "Member 'WBP_Reticle_Pal_C_SetOtomoDeadDetail::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_SetOtomoDeadDetail, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'WBP_Reticle_Pal_C_SetOtomoDeadDetail::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_SetOtomoDeadDetail, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'WBP_Reticle_Pal_C_SetOtomoDeadDetail::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_SetOtomoDeadDetail, K2Node_MakeArray_Array) == 0x000090, "Member 'WBP_Reticle_Pal_C_SetOtomoDeadDetail::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_SetOtomoDeadDetail, CallFunc_GetLocalizedTextFromHandle_Text) == 0x0000A0, "Member 'WBP_Reticle_Pal_C_SetOtomoDeadDetail::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_SetOtomoDeadDetail, CallFunc_Format_ReturnValue) == 0x0000B8, "Member 'WBP_Reticle_Pal_C_SetOtomoDeadDetail::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_SetOtomoDeadDetail, Temp_bool_Variable) == 0x0000D0, "Member 'WBP_Reticle_Pal_C_SetOtomoDeadDetail::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_SetOtomoDeadDetail, K2Node_Select_Default) == 0x0000D1, "Member 'WBP_Reticle_Pal_C_SetOtomoDeadDetail::K2Node_Select_Default' has a wrong offset!");

// Function WBP_Reticle_Pal.WBP_Reticle_Pal_C.SetThrowableableDetail
// 0x0060 (0x0060 - 0x0000)
struct WBP_Reticle_Pal_C_SetThrowableableDetail final
{
public:
	struct FPalUIAimReticleMapObjectThrowableData ThrowableData;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FDataTableRowHandle                    MsgIdHandle;                                       // 0x0010(0x0010)(Edit, BlueprintVisible, NoDestructor)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetMapObjectName_outName;                 // 0x0030(0x0018)()
	class FText                                   CallFunc_EnumToLocalizedText_ReturnValue;          // 0x0048(0x0018)()
};
static_assert(alignof(WBP_Reticle_Pal_C_SetThrowableableDetail) == 0x000008, "Wrong alignment on WBP_Reticle_Pal_C_SetThrowableableDetail");
static_assert(sizeof(WBP_Reticle_Pal_C_SetThrowableableDetail) == 0x000060, "Wrong size on WBP_Reticle_Pal_C_SetThrowableableDetail");
static_assert(offsetof(WBP_Reticle_Pal_C_SetThrowableableDetail, ThrowableData) == 0x000000, "Member 'WBP_Reticle_Pal_C_SetThrowableableDetail::ThrowableData' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_SetThrowableableDetail, MsgIdHandle) == 0x000010, "Member 'WBP_Reticle_Pal_C_SetThrowableableDetail::MsgIdHandle' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_SetThrowableableDetail, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000020, "Member 'WBP_Reticle_Pal_C_SetThrowableableDetail::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_SetThrowableableDetail, CallFunc_GetMapObjectName_outName) == 0x000030, "Member 'WBP_Reticle_Pal_C_SetThrowableableDetail::CallFunc_GetMapObjectName_outName' has a wrong offset!");
static_assert(offsetof(WBP_Reticle_Pal_C_SetThrowableableDetail, CallFunc_EnumToLocalizedText_ReturnValue) == 0x000048, "Member 'WBP_Reticle_Pal_C_SetThrowableableDetail::CallFunc_EnumToLocalizedText_ReturnValue' has a wrong offset!");

// Function WBP_Reticle_Pal.WBP_Reticle_Pal_C.SetVisibilityAssignableDetail
// 0x0001 (0x0001 - 0x0000)
struct WBP_Reticle_Pal_C_SetVisibilityAssignableDetail final
{
public:
	ESlateVisibility                              NewVisibility;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Reticle_Pal_C_SetVisibilityAssignableDetail) == 0x000001, "Wrong alignment on WBP_Reticle_Pal_C_SetVisibilityAssignableDetail");
static_assert(sizeof(WBP_Reticle_Pal_C_SetVisibilityAssignableDetail) == 0x000001, "Wrong size on WBP_Reticle_Pal_C_SetVisibilityAssignableDetail");
static_assert(offsetof(WBP_Reticle_Pal_C_SetVisibilityAssignableDetail, NewVisibility) == 0x000000, "Member 'WBP_Reticle_Pal_C_SetVisibilityAssignableDetail::NewVisibility' has a wrong offset!");

}

