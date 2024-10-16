#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_PalCutsceneCamera.BP_PalCutsceneCamera_C.DisplayLoadedBossDemoWidget
// 0x0070 (0x0070 - 0x0000)
struct BP_PalCutsceneCamera_C_DisplayLoadedBossDemoWidget final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   CallFunc_Map_Find_Value;                           // 0x0010(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_LoadClassAsset_Blocking_ReturnValue;      // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsWBP_Boss_Demo_Base;      // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_BossDemoBase_C*                    CallFunc_Create_ReturnValue;                       // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCutsceneCamera_C_DisplayLoadedBossDemoWidget) == 0x000008, "Wrong alignment on BP_PalCutsceneCamera_C_DisplayLoadedBossDemoWidget");
static_assert(sizeof(BP_PalCutsceneCamera_C_DisplayLoadedBossDemoWidget) == 0x000070, "Wrong size on BP_PalCutsceneCamera_C_DisplayLoadedBossDemoWidget");
static_assert(offsetof(BP_PalCutsceneCamera_C_DisplayLoadedBossDemoWidget, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_PalCutsceneCamera_C_DisplayLoadedBossDemoWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_DisplayLoadedBossDemoWidget, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000008, "Member 'BP_PalCutsceneCamera_C_DisplayLoadedBossDemoWidget::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_DisplayLoadedBossDemoWidget, CallFunc_Map_Find_Value) == 0x000010, "Member 'BP_PalCutsceneCamera_C_DisplayLoadedBossDemoWidget::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_DisplayLoadedBossDemoWidget, CallFunc_Map_Find_ReturnValue) == 0x000040, "Member 'BP_PalCutsceneCamera_C_DisplayLoadedBossDemoWidget::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_DisplayLoadedBossDemoWidget, CallFunc_LoadClassAsset_Blocking_ReturnValue) == 0x000048, "Member 'BP_PalCutsceneCamera_C_DisplayLoadedBossDemoWidget::CallFunc_LoadClassAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_DisplayLoadedBossDemoWidget, K2Node_ClassDynamicCast_AsWBP_Boss_Demo_Base) == 0x000050, "Member 'BP_PalCutsceneCamera_C_DisplayLoadedBossDemoWidget::K2Node_ClassDynamicCast_AsWBP_Boss_Demo_Base' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_DisplayLoadedBossDemoWidget, K2Node_ClassDynamicCast_bSuccess) == 0x000058, "Member 'BP_PalCutsceneCamera_C_DisplayLoadedBossDemoWidget::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_DisplayLoadedBossDemoWidget, CallFunc_Create_ReturnValue) == 0x000060, "Member 'BP_PalCutsceneCamera_C_DisplayLoadedBossDemoWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_DisplayLoadedBossDemoWidget, CallFunc_IsValid_ReturnValue_1) == 0x000068, "Member 'BP_PalCutsceneCamera_C_DisplayLoadedBossDemoWidget::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_PalCutsceneCamera.BP_PalCutsceneCamera_C.ExecuteUbergraph_BP_PalCutsceneCamera
// 0x00A8 (0x00A8 - 0x0000)
struct BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_BossDemoBase_C*                    K2Node_DynamicCast_AsWBP_Boss_Demo_Base;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UUserWidget* UserWidget)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCineCameraComponent*                   CallFunc_GetCineCameraComponent_ReturnValue;       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalBossType                                  K2Node_CustomEvent_BossType;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   CallFunc_Map_Find_Value;                           // 0x0048(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAsyncAction_CreateWidgetAsync*         CallFunc_CreateWidgetAsync_ReturnValue;            // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92[0x6];                                       // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            K2Node_CustomEvent_UserWidget;                     // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera) == 0x000008, "Wrong alignment on BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera");
static_assert(sizeof(BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera) == 0x0000A8, "Wrong size on BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera");
static_assert(offsetof(BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera, EntryPoint) == 0x000000, "Member 'BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera, Temp_object_Variable) == 0x000008, "Member 'BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera, K2Node_DynamicCast_AsWBP_Boss_Demo_Base) == 0x000010, "Member 'BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera::K2Node_DynamicCast_AsWBP_Boss_Demo_Base' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera, K2Node_Event_DeltaSeconds) == 0x000030, "Member 'BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera, K2Node_Event_EndPlayReason) == 0x000034, "Member 'BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera, CallFunc_GetCineCameraComponent_ReturnValue) == 0x000038, "Member 'BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera::CallFunc_GetCineCameraComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera, K2Node_CustomEvent_BossType) == 0x000040, "Member 'BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera::K2Node_CustomEvent_BossType' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera, CallFunc_Map_Find_Value) == 0x000048, "Member 'BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera, CallFunc_Map_Find_ReturnValue) == 0x000078, "Member 'BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000080, "Member 'BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera, CallFunc_CreateWidgetAsync_ReturnValue) == 0x000088, "Member 'BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera::CallFunc_CreateWidgetAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera, CallFunc_IsValid_ReturnValue_1) == 0x000090, "Member 'BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera, CallFunc_IsValid_ReturnValue_2) == 0x000091, "Member 'BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera, K2Node_CustomEvent_UserWidget) == 0x000098, "Member 'BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera::K2Node_CustomEvent_UserWidget' has a wrong offset!");
static_assert(offsetof(BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera, CallFunc_IsValid_ReturnValue_3) == 0x0000A0, "Member 'BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function BP_PalCutsceneCamera.BP_PalCutsceneCamera_C.OnComplete_42DB55244656A42BFC71E984CB1360D8
// 0x0008 (0x0008 - 0x0000)
struct BP_PalCutsceneCamera_C_OnComplete_42DB55244656A42BFC71E984CB1360D8 final
{
public:
	class UUserWidget*                            UserWidget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCutsceneCamera_C_OnComplete_42DB55244656A42BFC71E984CB1360D8) == 0x000008, "Wrong alignment on BP_PalCutsceneCamera_C_OnComplete_42DB55244656A42BFC71E984CB1360D8");
static_assert(sizeof(BP_PalCutsceneCamera_C_OnComplete_42DB55244656A42BFC71E984CB1360D8) == 0x000008, "Wrong size on BP_PalCutsceneCamera_C_OnComplete_42DB55244656A42BFC71E984CB1360D8");
static_assert(offsetof(BP_PalCutsceneCamera_C_OnComplete_42DB55244656A42BFC71E984CB1360D8, UserWidget) == 0x000000, "Member 'BP_PalCutsceneCamera_C_OnComplete_42DB55244656A42BFC71E984CB1360D8::UserWidget' has a wrong offset!");

// Function BP_PalCutsceneCamera.BP_PalCutsceneCamera_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_PalCutsceneCamera_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCutsceneCamera_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_PalCutsceneCamera_C_ReceiveEndPlay");
static_assert(sizeof(BP_PalCutsceneCamera_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_PalCutsceneCamera_C_ReceiveEndPlay");
static_assert(offsetof(BP_PalCutsceneCamera_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_PalCutsceneCamera_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_PalCutsceneCamera.BP_PalCutsceneCamera_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PalCutsceneCamera_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCutsceneCamera_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PalCutsceneCamera_C_ReceiveTick");
static_assert(sizeof(BP_PalCutsceneCamera_C_ReceiveTick) == 0x000004, "Wrong size on BP_PalCutsceneCamera_C_ReceiveTick");
static_assert(offsetof(BP_PalCutsceneCamera_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PalCutsceneCamera_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_PalCutsceneCamera.BP_PalCutsceneCamera_C.StartLoadBossDemoWidgetAsync
// 0x0001 (0x0001 - 0x0000)
struct BP_PalCutsceneCamera_C_StartLoadBossDemoWidgetAsync final
{
public:
	EPalBossType                                  BossType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCutsceneCamera_C_StartLoadBossDemoWidgetAsync) == 0x000001, "Wrong alignment on BP_PalCutsceneCamera_C_StartLoadBossDemoWidgetAsync");
static_assert(sizeof(BP_PalCutsceneCamera_C_StartLoadBossDemoWidgetAsync) == 0x000001, "Wrong size on BP_PalCutsceneCamera_C_StartLoadBossDemoWidgetAsync");
static_assert(offsetof(BP_PalCutsceneCamera_C_StartLoadBossDemoWidgetAsync, BossType) == 0x000000, "Member 'BP_PalCutsceneCamera_C_StartLoadBossDemoWidgetAsync::BossType' has a wrong offset!");

}

