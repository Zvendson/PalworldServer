#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas
// 0x0198 (0x0198 - 0x0000)
struct WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FPalOptionUISettings& PrevSettings, struct FPalOptionUISettings& NewSettings)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0018(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue; // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0068(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92[0x6];                                       // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalInsideBaseCampCheckComponent*       CallFunc_GetComponentByClass_ReturnValue;          // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalBaseCampModel* Model)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x00A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBaseCampModel*                      CallFunc_GetInsideBaseCampModel_ReturnValue;       // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BA[0x2];                                       // 0x00BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x00BC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_1;                   // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalInsideBaseCampCheckComponent*       CallFunc_GetComponentByClass_ReturnValue_1;        // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBaseCampModel*                      CallFunc_GetInsideBaseCampModel_ReturnValue_1;     // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalQuestData* UpdatedQuest)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0108(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalQuestManager*                       CallFunc_GetQuestManager_ReturnValue;              // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x3];                                      // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPalQuestData* CompletedQuest)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x012C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsVisible;                      // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13D[0x3];                                      // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPalBaseCampWorkerDirectionBattleType BattleType)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x0140(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_151[0x7];                                      // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalOptionSubsystem*                    CallFunc_GetOptionSubsystem_ReturnValue;           // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_BaseCampTaskChecker_C*              CallFunc_SpawnObject_ReturnValue;                  // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalOptionUISettings                   CallFunc_GetUISettings_ReturnValue;                // 0x0170(0x001C)(ConstParm, NoDestructor)
	uint8                                         Pad_18C[0x4];                                      // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SetRemainTimer_remainTime_ImplicitCast;   // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas) == 0x000008, "Wrong alignment on WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas");
static_assert(sizeof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas) == 0x000198, "Wrong size on WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, EntryPoint) == 0x000000, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, Temp_byte_Variable) == 0x000014, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, K2Node_Event_MyGeometry) == 0x000018, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, K2Node_Event_InDeltaTime) == 0x000058, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, Temp_bool_Variable) == 0x00005C, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue) == 0x000060, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000064, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, K2Node_CreateDelegate_OutputDelegate_1) == 0x000068, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, K2Node_CreateDelegate_OutputDelegate_2) == 0x000078, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, CallFunc_GetPalmi_ReturnValue) == 0x000088, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, Temp_byte_Variable_1) == 0x000090, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, CallFunc_IsValid_ReturnValue) == 0x000091, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, CallFunc_GetComponentByClass_ReturnValue) == 0x000098, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000A0, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, CallFunc_GetInsideBaseCampModel_ReturnValue) == 0x0000B0, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::CallFunc_GetInsideBaseCampModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, CallFunc_IsValid_ReturnValue_1) == 0x0000B8, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, CallFunc_IsValid_ReturnValue_2) == 0x0000B9, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000BC, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, CallFunc_GetPalmi_ReturnValue_1) == 0x0000D0, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::CallFunc_GetPalmi_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, CallFunc_IsValid_ReturnValue_3) == 0x0000D8, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, CallFunc_GetComponentByClass_ReturnValue_1) == 0x0000E0, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, CallFunc_IsValid_ReturnValue_4) == 0x0000E8, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, CallFunc_GetInsideBaseCampModel_ReturnValue_1) == 0x0000F0, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::CallFunc_GetInsideBaseCampModel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, CallFunc_IsValid_ReturnValue_5) == 0x0000F8, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000100, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, K2Node_CreateDelegate_OutputDelegate_5) == 0x000108, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, CallFunc_IsValid_ReturnValue_6) == 0x000118, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, CallFunc_GetQuestManager_ReturnValue) == 0x000120, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, CallFunc_IsValid_ReturnValue_7) == 0x000128, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, K2Node_CreateDelegate_OutputDelegate_6) == 0x00012C, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, K2Node_CustomEvent_IsVisible) == 0x00013C, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::K2Node_CustomEvent_IsVisible' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, K2Node_CreateDelegate_OutputDelegate_7) == 0x000140, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, K2Node_Select_Default) == 0x000150, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, CallFunc_GetOptionSubsystem_ReturnValue) == 0x000158, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::CallFunc_GetOptionSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, CallFunc_IsValid_ReturnValue_8) == 0x000160, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, CallFunc_SpawnObject_ReturnValue) == 0x000168, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, CallFunc_GetUISettings_ReturnValue) == 0x000170, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::CallFunc_GetUISettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas, CallFunc_SetRemainTimer_remainTime_ImplicitCast) == 0x000190, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas::CallFunc_SetRemainTimer_remainTime_ImplicitCast' has a wrong offset!");

// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.On Enter Base Camp
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp final
{
public:
	class UPalBaseCampModel*                      Model;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_GetLocalPlayerGroupID_ReturnValue;        // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_GetGroupIdBelongTo_ReturnValue;           // 0x0018(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_GetId_ReturnValue;                        // 0x0028(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GuidGuid_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInStage_ReturnValue;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalBaseCampModel* Model)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0068(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBaseCampModel*                      CallFunc_GetInsideBaseCampModel_ReturnValue;       // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0084(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0098(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp) == 0x000008, "Wrong alignment on WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp");
static_assert(sizeof(WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp) == 0x0000A0, "Wrong size on WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp, Model) == 0x000000, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp::Model' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp, CallFunc_GetLocalPlayerGroupID_ReturnValue) == 0x000008, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp::CallFunc_GetLocalPlayerGroupID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp, CallFunc_GetGroupIdBelongTo_ReturnValue) == 0x000018, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp::CallFunc_GetGroupIdBelongTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp, CallFunc_GetId_ReturnValue) == 0x000028, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp::CallFunc_GetId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp, CallFunc_EqualEqual_GuidGuid_ReturnValue) == 0x000038, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp::CallFunc_EqualEqual_GuidGuid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000040, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp, CallFunc_IsInStage_ReturnValue) == 0x000058, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp::CallFunc_IsInStage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000060, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp, K2Node_CreateDelegate_OutputDelegate_1) == 0x000068, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp, CallFunc_GetInsideBaseCampModel_ReturnValue) == 0x000078, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp::CallFunc_GetInsideBaseCampModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp, K2Node_CreateDelegate_OutputDelegate_2) == 0x000084, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000098, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");

// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.On Enter Pal Box Area
// 0x0010 (0x0010 - 0x0000)
struct WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Pal_Box_Area final
{
public:
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInStage_ReturnValue;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Pal_Box_Area) == 0x000008, "Wrong alignment on WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Pal_Box_Area");
static_assert(sizeof(WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Pal_Box_Area) == 0x000010, "Wrong size on WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Pal_Box_Area");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Pal_Box_Area, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000000, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Pal_Box_Area::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Pal_Box_Area, CallFunc_IsInStage_ReturnValue) == 0x000008, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Pal_Box_Area::CallFunc_IsInStage_ReturnValue' has a wrong offset!");

// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.On Leave Base Camp
// 0x0028 (0x0028 - 0x0000)
struct WBP_QuestAndBaseCampInfoCanvas_C_On_Leave_Base_Camp final
{
public:
	TDelegate<void(class UPalBaseCampModel* Model)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBaseCampManager*                    CallFunc_GetBaseCampManager_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBaseCampModel*                      CallFunc_TryGetModel_OutModel;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetModel_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuestAndBaseCampInfoCanvas_C_On_Leave_Base_Camp) == 0x000008, "Wrong alignment on WBP_QuestAndBaseCampInfoCanvas_C_On_Leave_Base_Camp");
static_assert(sizeof(WBP_QuestAndBaseCampInfoCanvas_C_On_Leave_Base_Camp) == 0x000028, "Wrong size on WBP_QuestAndBaseCampInfoCanvas_C_On_Leave_Base_Camp");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Leave_Base_Camp, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Leave_Base_Camp::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Leave_Base_Camp, CallFunc_GetBaseCampManager_ReturnValue) == 0x000010, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Leave_Base_Camp::CallFunc_GetBaseCampManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Leave_Base_Camp, CallFunc_TryGetModel_OutModel) == 0x000018, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Leave_Base_Camp::CallFunc_TryGetModel_OutModel' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Leave_Base_Camp, CallFunc_TryGetModel_ReturnValue) == 0x000020, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Leave_Base_Camp::CallFunc_TryGetModel_ReturnValue' has a wrong offset!");

// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.On Update Tutorial Quest
// 0x0018 (0x0018 - 0x0000)
struct WBP_QuestAndBaseCampInfoCanvas_C_On_Update_Tutorial_Quest final
{
public:
	class UPalQuestData*                          UpdatedQuest;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B[0x1];                                        // 0x000B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNowDisplayQuestWidgetNum_Num;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuestAndBaseCampInfoCanvas_C_On_Update_Tutorial_Quest) == 0x000008, "Wrong alignment on WBP_QuestAndBaseCampInfoCanvas_C_On_Update_Tutorial_Quest");
static_assert(sizeof(WBP_QuestAndBaseCampInfoCanvas_C_On_Update_Tutorial_Quest) == 0x000018, "Wrong size on WBP_QuestAndBaseCampInfoCanvas_C_On_Update_Tutorial_Quest");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Update_Tutorial_Quest, UpdatedQuest) == 0x000000, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Update_Tutorial_Quest::UpdatedQuest' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Update_Tutorial_Quest, Temp_bool_Variable) == 0x000008, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Update_Tutorial_Quest::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Update_Tutorial_Quest, Temp_byte_Variable) == 0x000009, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Update_Tutorial_Quest::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Update_Tutorial_Quest, Temp_byte_Variable_1) == 0x00000A, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Update_Tutorial_Quest::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Update_Tutorial_Quest, CallFunc_GetNowDisplayQuestWidgetNum_Num) == 0x00000C, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Update_Tutorial_Quest::CallFunc_GetNowDisplayQuestWidgetNum_Num' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Update_Tutorial_Quest, CallFunc_Greater_IntInt_ReturnValue) == 0x000010, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Update_Tutorial_Quest::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Update_Tutorial_Quest, CallFunc_BooleanAND_ReturnValue) == 0x000011, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Update_Tutorial_Quest::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_On_Update_Tutorial_Quest, K2Node_Select_Default) == 0x000012, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_On_Update_Tutorial_Quest::K2Node_Select_Default' has a wrong offset!");

// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.OnChangedUISettings
// 0x0068 (0x0068 - 0x0000)
struct WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings final
{
public:
	struct FPalOptionUISettings                   PrevSettings;                                      // 0x0000(0x001C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FPalOptionUISettings                   NewSettings;                                       // 0x001C(0x001C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          AllComplete;                                       // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNowDisplayQuestWidgetNum_Num;          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalQuestManager*                       CallFunc_GetQuestManager_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAllQuestComplete_ReturnValue;           // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings) == 0x000008, "Wrong alignment on WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings");
static_assert(sizeof(WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings) == 0x000068, "Wrong size on WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings, PrevSettings) == 0x000000, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings::PrevSettings' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings, NewSettings) == 0x00001C, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings::NewSettings' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings, AllComplete) == 0x000038, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings::AllComplete' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings, Temp_byte_Variable) == 0x000039, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings, Temp_byte_Variable_1) == 0x00003A, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings, Temp_bool_Variable) == 0x00003B, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings, CallFunc_Not_PreBool_ReturnValue) == 0x00003C, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000040, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings, CallFunc_GetNowDisplayQuestWidgetNum_Num) == 0x00004C, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings::CallFunc_GetNowDisplayQuestWidgetNum_Num' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings, CallFunc_Greater_IntInt_ReturnValue) == 0x000050, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings, CallFunc_GetQuestManager_ReturnValue) == 0x000058, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings, CallFunc_BooleanAND_ReturnValue) == 0x000060, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings, CallFunc_IsValid_ReturnValue_1) == 0x000061, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings, CallFunc_BooleanAND_ReturnValue_1) == 0x000062, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings, CallFunc_IsAllQuestComplete_ReturnValue) == 0x000063, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings::CallFunc_IsAllQuestComplete_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings, K2Node_Select_Default) == 0x000064, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings::K2Node_Select_Default' has a wrong offset!");

// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.OnCompleteTutorialQuest
// 0x0030 (0x0030 - 0x0000)
struct WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest final
{
public:
	class UPalQuestData*                          CompletedQuest;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalQuestManager*                       CallFunc_GetQuestManager_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAllQuestComplete_ReturnValue;           // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest) == 0x000008, "Wrong alignment on WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest");
static_assert(sizeof(WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest) == 0x000030, "Wrong size on WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest, CompletedQuest) == 0x000000, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest::CompletedQuest' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest, Temp_byte_Variable) == 0x000008, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest, Temp_byte_Variable_1) == 0x000009, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest, Temp_bool_Variable) == 0x00000A, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000010, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest, CallFunc_GetQuestManager_ReturnValue) == 0x000020, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest, CallFunc_IsAllQuestComplete_ReturnValue) == 0x000029, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest::CallFunc_IsAllQuestComplete_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest, CallFunc_BooleanOR_ReturnValue) == 0x00002A, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest, K2Node_Select_Default) == 0x00002B, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest::K2Node_Select_Default' has a wrong offset!");

// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.OnTimer_CollectWorkerDirectorModel
// 0x0003 (0x0003 - 0x0000)
struct WBP_QuestAndBaseCampInfoCanvas_C_OnTimer_CollectWorkerDirectorModel final
{
public:
	EPalBaseCampPassiveEffectWorkHardType         CallFunc_GetWorkHardType_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsExistWorkHardModel_ReturnValue;         // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsExistWorkerDirectorModel_ReturnValue;   // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuestAndBaseCampInfoCanvas_C_OnTimer_CollectWorkerDirectorModel) == 0x000001, "Wrong alignment on WBP_QuestAndBaseCampInfoCanvas_C_OnTimer_CollectWorkerDirectorModel");
static_assert(sizeof(WBP_QuestAndBaseCampInfoCanvas_C_OnTimer_CollectWorkerDirectorModel) == 0x000003, "Wrong size on WBP_QuestAndBaseCampInfoCanvas_C_OnTimer_CollectWorkerDirectorModel");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnTimer_CollectWorkerDirectorModel, CallFunc_GetWorkHardType_ReturnValue) == 0x000000, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnTimer_CollectWorkerDirectorModel::CallFunc_GetWorkHardType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnTimer_CollectWorkerDirectorModel, CallFunc_IsExistWorkHardModel_ReturnValue) == 0x000001, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnTimer_CollectWorkerDirectorModel::CallFunc_IsExistWorkHardModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnTimer_CollectWorkerDirectorModel, CallFunc_IsExistWorkerDirectorModel_ReturnValue) == 0x000002, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnTimer_CollectWorkerDirectorModel::CallFunc_IsExistWorkerDirectorModel_ReturnValue' has a wrong offset!");

// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.OnUpdateBaseCampWorkHard
// 0x0002 (0x0002 - 0x0000)
struct WBP_QuestAndBaseCampInfoCanvas_C_OnUpdateBaseCampWorkHard final
{
public:
	EPalBaseCampPassiveEffectWorkHardType         WorkHardType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsExistWorkHardModel_ReturnValue;         // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuestAndBaseCampInfoCanvas_C_OnUpdateBaseCampWorkHard) == 0x000001, "Wrong alignment on WBP_QuestAndBaseCampInfoCanvas_C_OnUpdateBaseCampWorkHard");
static_assert(sizeof(WBP_QuestAndBaseCampInfoCanvas_C_OnUpdateBaseCampWorkHard) == 0x000002, "Wrong size on WBP_QuestAndBaseCampInfoCanvas_C_OnUpdateBaseCampWorkHard");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnUpdateBaseCampWorkHard, WorkHardType) == 0x000000, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnUpdateBaseCampWorkHard::WorkHardType' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnUpdateBaseCampWorkHard, CallFunc_IsExistWorkHardModel_ReturnValue) == 0x000001, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnUpdateBaseCampWorkHard::CallFunc_IsExistWorkHardModel_ReturnValue' has a wrong offset!");

// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.OnUpdateWorkerBattleType
// 0x0001 (0x0001 - 0x0000)
struct WBP_QuestAndBaseCampInfoCanvas_C_OnUpdateWorkerBattleType final
{
public:
	EPalBaseCampWorkerDirectionBattleType         BattleType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuestAndBaseCampInfoCanvas_C_OnUpdateWorkerBattleType) == 0x000001, "Wrong alignment on WBP_QuestAndBaseCampInfoCanvas_C_OnUpdateWorkerBattleType");
static_assert(sizeof(WBP_QuestAndBaseCampInfoCanvas_C_OnUpdateWorkerBattleType) == 0x000001, "Wrong size on WBP_QuestAndBaseCampInfoCanvas_C_OnUpdateWorkerBattleType");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_OnUpdateWorkerBattleType, BattleType) == 0x000000, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_OnUpdateWorkerBattleType::BattleType' has a wrong offset!");

// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.SetVerticalBoxVisible
// 0x0001 (0x0001 - 0x0000)
struct WBP_QuestAndBaseCampInfoCanvas_C_SetVerticalBoxVisible final
{
public:
	bool                                          IsVisible_0;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuestAndBaseCampInfoCanvas_C_SetVerticalBoxVisible) == 0x000001, "Wrong alignment on WBP_QuestAndBaseCampInfoCanvas_C_SetVerticalBoxVisible");
static_assert(sizeof(WBP_QuestAndBaseCampInfoCanvas_C_SetVerticalBoxVisible) == 0x000001, "Wrong size on WBP_QuestAndBaseCampInfoCanvas_C_SetVerticalBoxVisible");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_SetVerticalBoxVisible, IsVisible_0) == 0x000000, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_SetVerticalBoxVisible::IsVisible_0' has a wrong offset!");

// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.ShowLevelUp
// 0x0018 (0x0018 - 0x0000)
struct WBP_QuestAndBaseCampInfoCanvas_C_ShowLevelUp final
{
public:
	class UPalBaseCampModel*                      Model;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuestAndBaseCampInfoCanvas_C_ShowLevelUp) == 0x000008, "Wrong alignment on WBP_QuestAndBaseCampInfoCanvas_C_ShowLevelUp");
static_assert(sizeof(WBP_QuestAndBaseCampInfoCanvas_C_ShowLevelUp) == 0x000018, "Wrong size on WBP_QuestAndBaseCampInfoCanvas_C_ShowLevelUp");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ShowLevelUp, Model) == 0x000000, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ShowLevelUp::Model' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ShowLevelUp, CallFunc_GetLevel_ReturnValue) == 0x000008, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ShowLevelUp::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_ShowLevelUp, CallFunc_GetHUDService_ReturnValue) == 0x000010, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_ShowLevelUp::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");

// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_QuestAndBaseCampInfoCanvas_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuestAndBaseCampInfoCanvas_C_Tick) == 0x000008, "Wrong alignment on WBP_QuestAndBaseCampInfoCanvas_C_Tick");
static_assert(sizeof(WBP_QuestAndBaseCampInfoCanvas_C_Tick) == 0x000048, "Wrong size on WBP_QuestAndBaseCampInfoCanvas_C_Tick");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.TraceWorkerPal
// 0x02C0 (0x02C0 - 0x0000)
struct WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal final
{
public:
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ConstParm, ReferenceParm)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetOwningPlayerCameraManager_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x00B0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x019A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19B[0x1];                                      // 0x019B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A4[0x4];                                      // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0208(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0210(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0218(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23C[0x4];                                      // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0258(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalMonsterCharacter*                   K2Node_DynamicCast_AsPal_Monster_Character;        // 0x0270(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBaseCampPal_ReturnValue;                // 0x0279(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27A[0x6];                                      // 0x027A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class APalMonsterCharacter>    CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0280(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x02B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal) == 0x000008, "Wrong alignment on WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal");
static_assert(sizeof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal) == 0x0002C0, "Wrong size on WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_GetPalmi_ReturnValue) == 0x000000, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, K2Node_MakeArray_Array) == 0x000008, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000018, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000020, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, K2Node_DynamicCast_AsPal_Character) == 0x000038, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000041, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_GetOwningPlayerCameraManager_ReturnValue) == 0x000048, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_GetOwningPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_GetActorForwardVector_ReturnValue) == 0x000050, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000068, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000080, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_Add_VectorVector_ReturnValue) == 0x000098, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_LineTraceSingle_OutHit) == 0x0000B0, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_LineTraceSingle_ReturnValue) == 0x000198, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_BreakHitResult_bBlockingHit) == 0x000199, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_BreakHitResult_bInitialOverlap) == 0x00019A, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_BreakHitResult_Time) == 0x00019C, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_BreakHitResult_Distance) == 0x0001A0, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_BreakHitResult_Location) == 0x0001A8, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_BreakHitResult_ImpactPoint) == 0x0001C0, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_BreakHitResult_Normal) == 0x0001D8, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_BreakHitResult_ImpactNormal) == 0x0001F0, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_BreakHitResult_PhysMat) == 0x000208, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_BreakHitResult_HitActor) == 0x000210, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_BreakHitResult_HitComponent) == 0x000218, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_BreakHitResult_HitBoneName) == 0x000220, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_BreakHitResult_BoneName) == 0x000228, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_BreakHitResult_HitItem) == 0x000230, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_BreakHitResult_ElementIndex) == 0x000234, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_BreakHitResult_FaceIndex) == 0x000238, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_BreakHitResult_TraceStart) == 0x000240, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_BreakHitResult_TraceEnd) == 0x000258, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, K2Node_DynamicCast_AsPal_Monster_Character) == 0x000270, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::K2Node_DynamicCast_AsPal_Monster_Character' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, K2Node_DynamicCast_bSuccess_1) == 0x000278, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_IsBaseCampPal_ReturnValue) == 0x000279, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_IsBaseCampPal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000280, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0002B0, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x0002B8, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_TraceWorkerPal::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");

// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.UpdateItemDetail
// 0x0098 (0x0098 - 0x0000)
struct WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPalDataTableRowName_ItemData>  CallFunc_Map_Keys_Keys;                            // 0x0010(0x0010)(ReferenceParm)
	struct FPalDataTableRowName_ItemData          CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalInsideBaseCampUI_DisplayItemInfo   CallFunc_Map_Find_Value;                           // 0x002C(0x0001)(NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F[0x1];                                       // 0x002F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, int64>                      CallFunc_CheckItemNum_outItemNumMap;               // 0x0030(0x0050)()
	int64                                         CallFunc_CheckItemNum_outFoodNum;                  // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Map_Find_Value_1;                         // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail) == 0x000008, "Wrong alignment on WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail");
static_assert(sizeof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail) == 0x000098, "Wrong size on WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail, CallFunc_Map_Keys_Keys) == 0x000010, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail, CallFunc_Map_Find_Value) == 0x00002C, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail, CallFunc_Map_Find_ReturnValue) == 0x00002D, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail, CallFunc_Less_IntInt_ReturnValue) == 0x00002E, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail, CallFunc_CheckItemNum_outItemNumMap) == 0x000030, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail::CallFunc_CheckItemNum_outItemNumMap' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail, CallFunc_CheckItemNum_outFoodNum) == 0x000080, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail::CallFunc_CheckItemNum_outFoodNum' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail, CallFunc_Map_Find_Value_1) == 0x000088, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail, CallFunc_Map_Find_ReturnValue_1) == 0x000090, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdateItemDetail::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");

// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.UpdatePalDetail
// 0x0020 (0x0020 - 0x0000)
struct WBP_QuestAndBaseCampInfoCanvas_C_UpdatePalDetail final
{
public:
	int32                                         CallFunc_GetBaseCampPalBedCount_ReturnValue;       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPalIndividualCharacterSlot*>    CallFunc_GetBaseCampPalSlots_outSlots;             // 0x0008(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuestAndBaseCampInfoCanvas_C_UpdatePalDetail) == 0x000008, "Wrong alignment on WBP_QuestAndBaseCampInfoCanvas_C_UpdatePalDetail");
static_assert(sizeof(WBP_QuestAndBaseCampInfoCanvas_C_UpdatePalDetail) == 0x000020, "Wrong size on WBP_QuestAndBaseCampInfoCanvas_C_UpdatePalDetail");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdatePalDetail, CallFunc_GetBaseCampPalBedCount_ReturnValue) == 0x000000, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdatePalDetail::CallFunc_GetBaseCampPalBedCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdatePalDetail, CallFunc_GetBaseCampPalSlots_outSlots) == 0x000008, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdatePalDetail::CallFunc_GetBaseCampPalSlots_outSlots' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdatePalDetail, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdatePalDetail::CallFunc_Array_Length_ReturnValue' has a wrong offset!");

// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.UpdateTask
// 0x0098 (0x0098 - 0x0000)
struct WBP_QuestAndBaseCampInfoCanvas_C_UpdateTask final
{
public:
	struct FPalBaseCampTaskDataSet                CallFunc_GetTaskData_outTaskData;                  // 0x0000(0x0028)()
	bool                                          CallFunc_GetTaskData_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalBaseCampTaskCheckedData            CallFunc_CheckTask_outCheckedData;                 // 0x0030(0x0060)()
	bool                                          CallFunc_CheckTask_ReturnValue;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateTask) == 0x000008, "Wrong alignment on WBP_QuestAndBaseCampInfoCanvas_C_UpdateTask");
static_assert(sizeof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateTask) == 0x000098, "Wrong size on WBP_QuestAndBaseCampInfoCanvas_C_UpdateTask");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateTask, CallFunc_GetTaskData_outTaskData) == 0x000000, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdateTask::CallFunc_GetTaskData_outTaskData' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateTask, CallFunc_GetTaskData_ReturnValue) == 0x000028, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdateTask::CallFunc_GetTaskData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateTask, CallFunc_CheckTask_outCheckedData) == 0x000030, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdateTask::CallFunc_CheckTask_outCheckedData' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateTask, CallFunc_CheckTask_ReturnValue) == 0x000090, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdateTask::CallFunc_CheckTask_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateTask, CallFunc_IsValid_ReturnValue) == 0x000091, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdateTask::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.UpdateWindowBorder
// 0x0005 (0x0005 - 0x0000)
struct WBP_QuestAndBaseCampInfoCanvas_C_UpdateWindowBorder final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateWindowBorder) == 0x000001, "Wrong alignment on WBP_QuestAndBaseCampInfoCanvas_C_UpdateWindowBorder");
static_assert(sizeof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateWindowBorder) == 0x000005, "Wrong size on WBP_QuestAndBaseCampInfoCanvas_C_UpdateWindowBorder");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateWindowBorder, Temp_bool_Variable) == 0x000000, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdateWindowBorder::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateWindowBorder, Temp_byte_Variable) == 0x000001, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdateWindowBorder::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateWindowBorder, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdateWindowBorder::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateWindowBorder, CallFunc_IsVisible_ReturnValue) == 0x000003, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdateWindowBorder::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QuestAndBaseCampInfoCanvas_C_UpdateWindowBorder, K2Node_Select_Default) == 0x000004, "Member 'WBP_QuestAndBaseCampInfoCanvas_C_UpdateWindowBorder::K2Node_Select_Default' has a wrong offset!");

}

