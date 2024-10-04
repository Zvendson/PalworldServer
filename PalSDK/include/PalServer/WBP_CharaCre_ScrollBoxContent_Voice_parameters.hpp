#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.ApplyMakeInfo
// 0x0168 (0x0168 - 0x0000)
struct WBP_CharaCre_ScrollBoxContent_Voice_C_ApplyMakeInfo final
{
public:
	struct FPalPlayerDataCharacterMakeInfo        MakeInfo;                                          // 0x0000(0x0150)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_154[0x4];                                      // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CharaCre_BodyTypeButton_C*         CallFunc_Array_Get_Item;                           // 0x0158(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContent_Voice_C_ApplyMakeInfo) == 0x000008, "Wrong alignment on WBP_CharaCre_ScrollBoxContent_Voice_C_ApplyMakeInfo");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContent_Voice_C_ApplyMakeInfo) == 0x000168, "Wrong size on WBP_CharaCre_ScrollBoxContent_Voice_C_ApplyMakeInfo");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_ApplyMakeInfo, MakeInfo) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_ApplyMakeInfo::MakeInfo' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_ApplyMakeInfo, CallFunc_Subtract_IntInt_ReturnValue) == 0x000150, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_ApplyMakeInfo::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_ApplyMakeInfo, CallFunc_Array_Get_Item) == 0x000158, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_ApplyMakeInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_ApplyMakeInfo, CallFunc_IsValid_ReturnValue) == 0x000160, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_ApplyMakeInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_ApplyMakeInfo, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000161, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_ApplyMakeInfo::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice
// 0x0048 (0x0048 - 0x0000)
struct WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_CharaCre_BodyTypeButton_C* Widget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharaCre_BodyTypeButton_C*         CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice) == 0x000008, "Wrong alignment on WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice) == 0x000048, "Wrong size on WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice, EntryPoint) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000008, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice, CallFunc_Create_ReturnValue) == 0x000020, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice, CallFunc_AddChild_ReturnValue) == 0x000028, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice, CallFunc_Array_Add_ReturnValue) == 0x000030, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice, Temp_int_Variable) == 0x000034, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00003C, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice, CallFunc_Add_IntInt_ReturnValue_1) == 0x000040, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.GetRestoreFocusTarget
// 0x0010 (0x0010 - 0x0000)
struct WBP_CharaCre_ScrollBoxContent_Voice_C_GetRestoreFocusTarget final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetTopFocusTarget_Widget;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContent_Voice_C_GetRestoreFocusTarget) == 0x000008, "Wrong alignment on WBP_CharaCre_ScrollBoxContent_Voice_C_GetRestoreFocusTarget");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContent_Voice_C_GetRestoreFocusTarget) == 0x000010, "Wrong size on WBP_CharaCre_ScrollBoxContent_Voice_C_GetRestoreFocusTarget");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_GetRestoreFocusTarget, Widget) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_GetRestoreFocusTarget::Widget' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_GetRestoreFocusTarget, CallFunc_GetTopFocusTarget_Widget) == 0x000008, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_GetRestoreFocusTarget::CallFunc_GetTopFocusTarget_Widget' has a wrong offset!");

// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.OnChangedVoiceID__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_CharaCre_ScrollBoxContent_Voice_C_OnChangedVoiceID__DelegateSignature final
{
public:
	int32                                         VoiceID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContent_Voice_C_OnChangedVoiceID__DelegateSignature) == 0x000004, "Wrong alignment on WBP_CharaCre_ScrollBoxContent_Voice_C_OnChangedVoiceID__DelegateSignature");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContent_Voice_C_OnChangedVoiceID__DelegateSignature) == 0x000004, "Wrong size on WBP_CharaCre_ScrollBoxContent_Voice_C_OnChangedVoiceID__DelegateSignature");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_OnChangedVoiceID__DelegateSignature, VoiceID) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_OnChangedVoiceID__DelegateSignature::VoiceID' has a wrong offset!");

// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.OnClickedVoiceTypeButton
// 0x0018 (0x0018 - 0x0000)
struct WBP_CharaCre_ScrollBoxContent_Voice_C_OnClickedVoiceTypeButton final
{
public:
	class UWBP_CharaCre_BodyTypeButton_C*         Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContent_Voice_C_OnClickedVoiceTypeButton) == 0x000008, "Wrong alignment on WBP_CharaCre_ScrollBoxContent_Voice_C_OnClickedVoiceTypeButton");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContent_Voice_C_OnClickedVoiceTypeButton) == 0x000018, "Wrong size on WBP_CharaCre_ScrollBoxContent_Voice_C_OnClickedVoiceTypeButton");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_OnClickedVoiceTypeButton, Widget) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_OnClickedVoiceTypeButton::Widget' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_OnClickedVoiceTypeButton, CallFunc_Array_Find_ReturnValue) == 0x000008, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_OnClickedVoiceTypeButton::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_OnClickedVoiceTypeButton, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_OnClickedVoiceTypeButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_OnClickedVoiceTypeButton, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_OnClickedVoiceTypeButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.Play Sample Voice
// 0x00E8 (0x00E8 - 0x0000)
struct WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice final
{
public:
	int32                                         VoiceID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0010(0x0050)(HasGetValueTypeHash)
	int32                                         CallFunc_Map_Find_Value;                           // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0078(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Find_Value_1;                         // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A5[0x3];                                       // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Contains_ReturnValue;                 // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AD[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00B0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalSoundOptions                       K2Node_MakeStruct_PalSoundOptions;                 // 0x00B4(0x0004)(NoDestructor)
	class UAkAudioEvent*                          CallFunc_Array_Get_Item;                           // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D2[0x2];                                       // 0x00D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalSoundPlayer*                        CallFunc_GetSoundPlayer_ReturnValue;               // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySound_ReturnValue;                    // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice) == 0x000008, "Wrong alignment on WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice) == 0x0000E8, "Wrong size on WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice, VoiceID) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice::VoiceID' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000008, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice, K2Node_MakeStruct_FormatArgumentData) == 0x000010, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice, CallFunc_Map_Find_Value) == 0x000060, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice, CallFunc_Map_Find_ReturnValue) == 0x000064, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice, K2Node_MakeArray_Array) == 0x000068, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice, CallFunc_Format_ReturnValue) == 0x000078, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice, CallFunc_Conv_TextToString_ReturnValue) == 0x000090, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice, CallFunc_Map_Find_Value_1) == 0x0000A0, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice, CallFunc_Map_Find_ReturnValue_1) == 0x0000A4, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice, CallFunc_Add_IntInt_ReturnValue) == 0x0000A8, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice, CallFunc_Map_Contains_ReturnValue) == 0x0000AC, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice::CallFunc_Map_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice, Temp_int_Variable) == 0x0000B0, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice, K2Node_MakeStruct_PalSoundOptions) == 0x0000B4, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice::K2Node_MakeStruct_PalSoundOptions' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice, CallFunc_Array_Get_Item) == 0x0000B8, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice, CallFunc_Array_Length_ReturnValue) == 0x0000C0, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice, CallFunc_GetHUDService_ReturnValue) == 0x0000C8, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000D0, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice, CallFunc_IsValid_ReturnValue) == 0x0000D1, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice, CallFunc_SelectInt_ReturnValue) == 0x0000D4, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice, CallFunc_GetSoundPlayer_ReturnValue) == 0x0000D8, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice::CallFunc_GetSoundPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice, CallFunc_PlaySound_ReturnValue) == 0x0000E0, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_Play_Sample_Voice::CallFunc_PlaySound_ReturnValue' has a wrong offset!");

// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.GetTopFocusTarget
// 0x0010 (0x0010 - 0x0000)
struct WBP_CharaCre_ScrollBoxContent_Voice_C_GetTopFocusTarget final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharaCre_BodyTypeButton_C*         CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContent_Voice_C_GetTopFocusTarget) == 0x000008, "Wrong alignment on WBP_CharaCre_ScrollBoxContent_Voice_C_GetTopFocusTarget");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContent_Voice_C_GetTopFocusTarget) == 0x000010, "Wrong size on WBP_CharaCre_ScrollBoxContent_Voice_C_GetTopFocusTarget");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_GetTopFocusTarget, Widget) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_GetTopFocusTarget::Widget' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContent_Voice_C_GetTopFocusTarget, CallFunc_Array_Get_Item) == 0x000008, "Member 'WBP_CharaCre_ScrollBoxContent_Voice_C_GetTopFocusTarget::CallFunc_Array_Get_Item' has a wrong offset!");

}

