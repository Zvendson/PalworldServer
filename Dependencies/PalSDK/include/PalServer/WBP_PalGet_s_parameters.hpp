#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function WBP_PalGet_s.WBP_PalGet_s_C.DisplayCaptureMessage
// 0x0038 (0x0038 - 0x0000)
struct WBP_PalGet_s_C_DisplayCaptureMessage final
{
public:
	bool                                          IsFirstCapture;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0008(0x0018)()
	class FText                                   CallFunc_GetLocalizedText_ReturnValue_1;           // 0x0020(0x0018)()
};
static_assert(alignof(WBP_PalGet_s_C_DisplayCaptureMessage) == 0x000008, "Wrong alignment on WBP_PalGet_s_C_DisplayCaptureMessage");
static_assert(sizeof(WBP_PalGet_s_C_DisplayCaptureMessage) == 0x000038, "Wrong size on WBP_PalGet_s_C_DisplayCaptureMessage");
static_assert(offsetof(WBP_PalGet_s_C_DisplayCaptureMessage, IsFirstCapture) == 0x000000, "Member 'WBP_PalGet_s_C_DisplayCaptureMessage::IsFirstCapture' has a wrong offset!");
static_assert(offsetof(WBP_PalGet_s_C_DisplayCaptureMessage, CallFunc_GetLocalizedText_ReturnValue) == 0x000008, "Member 'WBP_PalGet_s_C_DisplayCaptureMessage::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGet_s_C_DisplayCaptureMessage, CallFunc_GetLocalizedText_ReturnValue_1) == 0x000020, "Member 'WBP_PalGet_s_C_DisplayCaptureMessage::CallFunc_GetLocalizedText_ReturnValue_1' has a wrong offset!");

// Function WBP_PalGet_s.WBP_PalGet_s_C.ExecuteUbergraph_WBP_PalGet_s
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalGet_s_C_ExecuteUbergraph_WBP_PalGet_s final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalGet_s_C_ExecuteUbergraph_WBP_PalGet_s) == 0x000008, "Wrong alignment on WBP_PalGet_s_C_ExecuteUbergraph_WBP_PalGet_s");
static_assert(sizeof(WBP_PalGet_s_C_ExecuteUbergraph_WBP_PalGet_s) == 0x000018, "Wrong size on WBP_PalGet_s_C_ExecuteUbergraph_WBP_PalGet_s");
static_assert(offsetof(WBP_PalGet_s_C_ExecuteUbergraph_WBP_PalGet_s, EntryPoint) == 0x000000, "Member 'WBP_PalGet_s_C_ExecuteUbergraph_WBP_PalGet_s::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalGet_s_C_ExecuteUbergraph_WBP_PalGet_s, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_PalGet_s_C_ExecuteUbergraph_WBP_PalGet_s::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGet_s_C_ExecuteUbergraph_WBP_PalGet_s, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'WBP_PalGet_s_C_ExecuteUbergraph_WBP_PalGet_s::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function WBP_PalGet_s.WBP_PalGet_s_C.SetAdditionalText
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalGet_s_C_SetAdditionalText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_PalGet_s_C_SetAdditionalText) == 0x000008, "Wrong alignment on WBP_PalGet_s_C_SetAdditionalText");
static_assert(sizeof(WBP_PalGet_s_C_SetAdditionalText) == 0x000018, "Wrong size on WBP_PalGet_s_C_SetAdditionalText");
static_assert(offsetof(WBP_PalGet_s_C_SetAdditionalText, Text) == 0x000000, "Member 'WBP_PalGet_s_C_SetAdditionalText::Text' has a wrong offset!");

// Function WBP_PalGet_s.WBP_PalGet_s_C.SetupByCaptureInfo
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalGet_s_C_SetupByCaptureInfo final
{
public:
	struct FPalUIPalCaptureInfo                   CaptureInfo;                                       // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedCharacterName_OutText;        // 0x0030(0x0018)()
};
static_assert(alignof(WBP_PalGet_s_C_SetupByCaptureInfo) == 0x000008, "Wrong alignment on WBP_PalGet_s_C_SetupByCaptureInfo");
static_assert(sizeof(WBP_PalGet_s_C_SetupByCaptureInfo) == 0x000048, "Wrong size on WBP_PalGet_s_C_SetupByCaptureInfo");
static_assert(offsetof(WBP_PalGet_s_C_SetupByCaptureInfo, CaptureInfo) == 0x000000, "Member 'WBP_PalGet_s_C_SetupByCaptureInfo::CaptureInfo' has a wrong offset!");
static_assert(offsetof(WBP_PalGet_s_C_SetupByCaptureInfo, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000028, "Member 'WBP_PalGet_s_C_SetupByCaptureInfo::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGet_s_C_SetupByCaptureInfo, CallFunc_GetLocalizedCharacterName_OutText) == 0x000030, "Member 'WBP_PalGet_s_C_SetupByCaptureInfo::CallFunc_GetLocalizedCharacterName_OutText' has a wrong offset!");

// Function WBP_PalGet_s.WBP_PalGet_s_C.SetupByTargetHandle
// 0x0050 (0x0050 - 0x0000)
struct WBP_PalGet_s_C_SetupByTargetHandle final
{
public:
	class UPalIndividualCharacterHandle*          Handle;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsVisibleLevel;                                    // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetNickName_outName;                      // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
};
static_assert(alignof(WBP_PalGet_s_C_SetupByTargetHandle) == 0x000008, "Wrong alignment on WBP_PalGet_s_C_SetupByTargetHandle");
static_assert(sizeof(WBP_PalGet_s_C_SetupByTargetHandle) == 0x000050, "Wrong size on WBP_PalGet_s_C_SetupByTargetHandle");
static_assert(offsetof(WBP_PalGet_s_C_SetupByTargetHandle, Handle) == 0x000000, "Member 'WBP_PalGet_s_C_SetupByTargetHandle::Handle' has a wrong offset!");
static_assert(offsetof(WBP_PalGet_s_C_SetupByTargetHandle, IsVisibleLevel) == 0x000008, "Member 'WBP_PalGet_s_C_SetupByTargetHandle::IsVisibleLevel' has a wrong offset!");
static_assert(offsetof(WBP_PalGet_s_C_SetupByTargetHandle, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'WBP_PalGet_s_C_SetupByTargetHandle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGet_s_C_SetupByTargetHandle, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000010, "Member 'WBP_PalGet_s_C_SetupByTargetHandle::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGet_s_C_SetupByTargetHandle, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'WBP_PalGet_s_C_SetupByTargetHandle::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalGet_s_C_SetupByTargetHandle, CallFunc_GetNickName_outName) == 0x000020, "Member 'WBP_PalGet_s_C_SetupByTargetHandle::CallFunc_GetNickName_outName' has a wrong offset!");
static_assert(offsetof(WBP_PalGet_s_C_SetupByTargetHandle, CallFunc_GetLevel_ReturnValue) == 0x000030, "Member 'WBP_PalGet_s_C_SetupByTargetHandle::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalGet_s_C_SetupByTargetHandle, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'WBP_PalGet_s_C_SetupByTargetHandle::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

