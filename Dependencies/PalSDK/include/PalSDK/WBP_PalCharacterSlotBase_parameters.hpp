#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.BindActorEvent
// 0x0060 (0x0060 - 0x0000)
struct WBP_PalCharacterSlotBase_C_BindActorEvent final
{
public:
	class UPalIndividualCharacterHandle*          Handle;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_GetCurrentAction_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ActionEat_C*                        K2Node_DynamicCast_AsBP_Action_Eat;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ActionSleep_C*                      K2Node_DynamicCast_AsBP_Action_Sleep;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPalActionBase* Action, class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate;              // 0x004C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_BindActorEvent) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotBase_C_BindActorEvent");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_BindActorEvent) == 0x000060, "Wrong size on WBP_PalCharacterSlotBase_C_BindActorEvent");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindActorEvent, Handle) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_BindActorEvent::Handle' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindActorEvent, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000008, "Member 'WBP_PalCharacterSlotBase_C_BindActorEvent::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindActorEvent, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PalCharacterSlotBase_C_BindActorEvent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindActorEvent, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'WBP_PalCharacterSlotBase_C_BindActorEvent::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindActorEvent, CallFunc_GetCurrentAction_ReturnValue) == 0x000020, "Member 'WBP_PalCharacterSlotBase_C_BindActorEvent::CallFunc_GetCurrentAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindActorEvent, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'WBP_PalCharacterSlotBase_C_BindActorEvent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindActorEvent, K2Node_DynamicCast_AsBP_Action_Eat) == 0x000030, "Member 'WBP_PalCharacterSlotBase_C_BindActorEvent::K2Node_DynamicCast_AsBP_Action_Eat' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindActorEvent, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WBP_PalCharacterSlotBase_C_BindActorEvent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindActorEvent, K2Node_DynamicCast_AsBP_Action_Sleep) == 0x000040, "Member 'WBP_PalCharacterSlotBase_C_BindActorEvent::K2Node_DynamicCast_AsBP_Action_Sleep' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindActorEvent, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'WBP_PalCharacterSlotBase_C_BindActorEvent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindActorEvent, CallFunc_IsValid_ReturnValue_2) == 0x000049, "Member 'WBP_PalCharacterSlotBase_C_BindActorEvent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindActorEvent, K2Node_CreateDelegate_OutputDelegate) == 0x00004C, "Member 'WBP_PalCharacterSlotBase_C_BindActorEvent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.BindEvents
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalCharacterSlotBase_C_BindEvents final
{
public:
	TDelegate<void(class UPalIndividualCharacterSlot* Slot, class UPalIndividualCharacterHandle* LastHandle)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetHandle_ReturnValue;                    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_BindEvents) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotBase_C_BindEvents");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_BindEvents) == 0x000020, "Wrong size on WBP_PalCharacterSlotBase_C_BindEvents");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_BindEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindEvents, CallFunc_GetHandle_ReturnValue) == 0x000010, "Member 'WBP_PalCharacterSlotBase_C_BindEvents::CallFunc_GetHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindEvents, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_PalCharacterSlotBase_C_BindEvents::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindEvents, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'WBP_PalCharacterSlotBase_C_BindEvents::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.BindParameterEvent
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_PalCharacterSlotBase_C_BindParameterEvent final
{
public:
	class UPalIndividualCharacterHandle*          Handle;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBattleMode_ReturnValue;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFixedPoint64                          CallFunc_GetMaxHP_withBuff_ReturnValue;            // 0x0030(0x0008)(NoDestructor)
	int64                                         CallFunc_Convert_FixedPoint64ToInt64_ReturnValue;  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFixedPoint64                          CallFunc_GetHP_ReturnValue;                        // 0x0040(0x0008)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalCharacterParameterComponent* Parameter)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0068(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(float NowReviveTimer)>         K2Node_CreateDelegate_OutputDelegate_2;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bIsBattleMode)>           K2Node_CreateDelegate_OutputDelegate_3;            // 0x0088(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0098(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_BindParameterEvent) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotBase_C_BindParameterEvent");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_BindParameterEvent) == 0x0000A8, "Wrong size on WBP_PalCharacterSlotBase_C_BindParameterEvent");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindParameterEvent, Handle) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_BindParameterEvent::Handle' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindParameterEvent, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PalCharacterSlotBase_C_BindParameterEvent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindParameterEvent, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000018, "Member 'WBP_PalCharacterSlotBase_C_BindParameterEvent::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindParameterEvent, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000020, "Member 'WBP_PalCharacterSlotBase_C_BindParameterEvent::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindParameterEvent, CallFunc_GetBattleMode_ReturnValue) == 0x000028, "Member 'WBP_PalCharacterSlotBase_C_BindParameterEvent::CallFunc_GetBattleMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindParameterEvent, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'WBP_PalCharacterSlotBase_C_BindParameterEvent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindParameterEvent, CallFunc_GetMaxHP_withBuff_ReturnValue) == 0x000030, "Member 'WBP_PalCharacterSlotBase_C_BindParameterEvent::CallFunc_GetMaxHP_withBuff_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindParameterEvent, CallFunc_Convert_FixedPoint64ToInt64_ReturnValue) == 0x000038, "Member 'WBP_PalCharacterSlotBase_C_BindParameterEvent::CallFunc_Convert_FixedPoint64ToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindParameterEvent, CallFunc_GetHP_ReturnValue) == 0x000040, "Member 'WBP_PalCharacterSlotBase_C_BindParameterEvent::CallFunc_GetHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindParameterEvent, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'WBP_PalCharacterSlotBase_C_BindParameterEvent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindParameterEvent, CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1) == 0x000050, "Member 'WBP_PalCharacterSlotBase_C_BindParameterEvent::CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindParameterEvent, CallFunc_IsValid_ReturnValue_2) == 0x000058, "Member 'WBP_PalCharacterSlotBase_C_BindParameterEvent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindParameterEvent, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000060, "Member 'WBP_PalCharacterSlotBase_C_BindParameterEvent::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindParameterEvent, K2Node_CreateDelegate_OutputDelegate_1) == 0x000068, "Member 'WBP_PalCharacterSlotBase_C_BindParameterEvent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindParameterEvent, K2Node_CreateDelegate_OutputDelegate_2) == 0x000078, "Member 'WBP_PalCharacterSlotBase_C_BindParameterEvent::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindParameterEvent, K2Node_CreateDelegate_OutputDelegate_3) == 0x000088, "Member 'WBP_PalCharacterSlotBase_C_BindParameterEvent::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_BindParameterEvent, K2Node_CreateDelegate_OutputDelegate_4) == 0x000098, "Member 'WBP_PalCharacterSlotBase_C_BindParameterEvent::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.CheckTargetCondition
// 0x0028 (0x0028 - 0x0000)
struct WBP_PalCharacterSlotBase_C_CheckTargetCondition final
{
public:
	class UPalIndividualCharacterHandle*          CallFunc_GetHandle_ReturnValue;                    // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAssignedToAnyWork_ReturnValue;          // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_CheckTargetCondition) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotBase_C_CheckTargetCondition");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_CheckTargetCondition) == 0x000028, "Wrong size on WBP_PalCharacterSlotBase_C_CheckTargetCondition");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_CheckTargetCondition, CallFunc_GetHandle_ReturnValue) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_CheckTargetCondition::CallFunc_GetHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_CheckTargetCondition, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_PalCharacterSlotBase_C_CheckTargetCondition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_CheckTargetCondition, CallFunc_IsValid_ReturnValue_1) == 0x000009, "Member 'WBP_PalCharacterSlotBase_C_CheckTargetCondition::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_CheckTargetCondition, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000010, "Member 'WBP_PalCharacterSlotBase_C_CheckTargetCondition::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_CheckTargetCondition, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000018, "Member 'WBP_PalCharacterSlotBase_C_CheckTargetCondition::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_CheckTargetCondition, CallFunc_IsValid_ReturnValue_2) == 0x000020, "Member 'WBP_PalCharacterSlotBase_C_CheckTargetCondition::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_CheckTargetCondition, CallFunc_IsValid_ReturnValue_3) == 0x000021, "Member 'WBP_PalCharacterSlotBase_C_CheckTargetCondition::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_CheckTargetCondition, CallFunc_IsAssignedToAnyWork_ReturnValue) == 0x000022, "Member 'WBP_PalCharacterSlotBase_C_CheckTargetCondition::CallFunc_IsAssignedToAnyWork_ReturnValue' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.ExecuteUbergraph_WBP_PalCharacterSlotBase
// 0x0028 (0x0028 - 0x0000)
struct WBP_PalCharacterSlotBase_C_ExecuteUbergraph_WBP_PalCharacterSlotBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCharacterIconBase_C*            CallFunc_RegisterCharacterIconWidget_iconWidget;   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_ExecuteUbergraph_WBP_PalCharacterSlotBase) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotBase_C_ExecuteUbergraph_WBP_PalCharacterSlotBase");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_ExecuteUbergraph_WBP_PalCharacterSlotBase) == 0x000028, "Wrong size on WBP_PalCharacterSlotBase_C_ExecuteUbergraph_WBP_PalCharacterSlotBase");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_ExecuteUbergraph_WBP_PalCharacterSlotBase, EntryPoint) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_ExecuteUbergraph_WBP_PalCharacterSlotBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_ExecuteUbergraph_WBP_PalCharacterSlotBase, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_PalCharacterSlotBase_C_ExecuteUbergraph_WBP_PalCharacterSlotBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_ExecuteUbergraph_WBP_PalCharacterSlotBase, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'WBP_PalCharacterSlotBase_C_ExecuteUbergraph_WBP_PalCharacterSlotBase::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_ExecuteUbergraph_WBP_PalCharacterSlotBase, CallFunc_RegisterCharacterIconWidget_iconWidget) == 0x000020, "Member 'WBP_PalCharacterSlotBase_C_ExecuteUbergraph_WBP_PalCharacterSlotBase::CallFunc_RegisterCharacterIconWidget_iconWidget' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.GetIndividualHandle
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalCharacterSlotBase_C_GetIndividualHandle final
{
public:
	class UPalIndividualCharacterHandle*          Handle;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetHandle_ReturnValue;                    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_GetIndividualHandle) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotBase_C_GetIndividualHandle");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_GetIndividualHandle) == 0x000018, "Wrong size on WBP_PalCharacterSlotBase_C_GetIndividualHandle");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_GetIndividualHandle, Handle) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_GetIndividualHandle::Handle' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_GetIndividualHandle, CallFunc_GetHandle_ReturnValue) == 0x000008, "Member 'WBP_PalCharacterSlotBase_C_GetIndividualHandle::CallFunc_GetHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_GetIndividualHandle, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PalCharacterSlotBase_C_GetIndividualHandle::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.GetIndividualParameter
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalCharacterSlotBase_C_GetIndividualParameter final
{
public:
	class UPalIndividualCharacterParameter*       Parameter;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetIndividualHandle_Handle;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_GetIndividualParameter) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotBase_C_GetIndividualParameter");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_GetIndividualParameter) == 0x000020, "Wrong size on WBP_PalCharacterSlotBase_C_GetIndividualParameter");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_GetIndividualParameter, Parameter) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_GetIndividualParameter::Parameter' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_GetIndividualParameter, CallFunc_GetIndividualHandle_Handle) == 0x000008, "Member 'WBP_PalCharacterSlotBase_C_GetIndividualParameter::CallFunc_GetIndividualHandle_Handle' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_GetIndividualParameter, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PalCharacterSlotBase_C_GetIndividualParameter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_GetIndividualParameter, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000018, "Member 'WBP_PalCharacterSlotBase_C_GetIndividualParameter::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.GetIndividualSlot
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterSlotBase_C_GetIndividualSlot final
{
public:
	class UPalIndividualCharacterSlot*            Slot_0;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_GetIndividualSlot) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotBase_C_GetIndividualSlot");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_GetIndividualSlot) == 0x000008, "Wrong size on WBP_PalCharacterSlotBase_C_GetIndividualSlot");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_GetIndividualSlot, Slot_0) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_GetIndividualSlot::Slot_0' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.On Update HP
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalCharacterSlotBase_C_On_Update_HP final
{
public:
	struct FFixedPoint64                          NowHP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          NowMaxHP;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int64                                         CallFunc_Convert_FixedPoint64ToInt64_ReturnValue;  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_On_Update_HP) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotBase_C_On_Update_HP");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_On_Update_HP) == 0x000020, "Wrong size on WBP_PalCharacterSlotBase_C_On_Update_HP");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_On_Update_HP, NowHP) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_On_Update_HP::NowHP' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_On_Update_HP, NowMaxHP) == 0x000008, "Member 'WBP_PalCharacterSlotBase_C_On_Update_HP::NowMaxHP' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_On_Update_HP, CallFunc_Convert_FixedPoint64ToInt64_ReturnValue) == 0x000010, "Member 'WBP_PalCharacterSlotBase_C_On_Update_HP::CallFunc_Convert_FixedPoint64ToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_On_Update_HP, CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1) == 0x000018, "Member 'WBP_PalCharacterSlotBase_C_On_Update_HP::CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnNotifyBattleModeChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalCharacterSlotBase_C_OnNotifyBattleModeChanged__DelegateSignature final
{
public:
	bool                                          IsBattleMode;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_OnNotifyBattleModeChanged__DelegateSignature) == 0x000001, "Wrong alignment on WBP_PalCharacterSlotBase_C_OnNotifyBattleModeChanged__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_OnNotifyBattleModeChanged__DelegateSignature) == 0x000001, "Wrong size on WBP_PalCharacterSlotBase_C_OnNotifyBattleModeChanged__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnNotifyBattleModeChanged__DelegateSignature, IsBattleMode) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_OnNotifyBattleModeChanged__DelegateSignature::IsBattleMode' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnNotifyWorkDetail__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalCharacterSlotBase_C_OnNotifyWorkDetail__DelegateSignature final
{
public:
	bool                                          IsWorking;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_OnNotifyWorkDetail__DelegateSignature) == 0x000001, "Wrong alignment on WBP_PalCharacterSlotBase_C_OnNotifyWorkDetail__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_OnNotifyWorkDetail__DelegateSignature) == 0x000001, "Wrong size on WBP_PalCharacterSlotBase_C_OnNotifyWorkDetail__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnNotifyWorkDetail__DelegateSignature, IsWorking) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_OnNotifyWorkDetail__DelegateSignature::IsWorking' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnSetRarity__DelegateSignature
// 0x0002 (0x0002 - 0x0000)
struct WBP_PalCharacterSlotBase_C_OnSetRarity__DelegateSignature final
{
public:
	bool                                          IsBoss;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRare;                                            // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_OnSetRarity__DelegateSignature) == 0x000001, "Wrong alignment on WBP_PalCharacterSlotBase_C_OnSetRarity__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_OnSetRarity__DelegateSignature) == 0x000002, "Wrong size on WBP_PalCharacterSlotBase_C_OnSetRarity__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnSetRarity__DelegateSignature, IsBoss) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_OnSetRarity__DelegateSignature::IsBoss' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnSetRarity__DelegateSignature, IsRare) == 0x000001, "Member 'WBP_PalCharacterSlotBase_C_OnSetRarity__DelegateSignature::IsRare' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnSyncIndividualParameter
// 0x0080 (0x0080 - 0x0000)
struct WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter final
{
public:
	struct FPalInstanceID                         InstanceId;                                        // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidInstanceID_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetHandle_ReturnValue;                    // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue; // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRarePal_ReturnValue;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsBoss_ReturnValue;                    // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FPalInstanceID& InstanceId)> K2Node_CreateDelegate_OutputDelegate;              // 0x0068(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter) == 0x000080, "Wrong size on WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter, InstanceId) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter::InstanceId' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter, CallFunc_IsValidInstanceID_ReturnValue) == 0x000030, "Member 'WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter::CallFunc_IsValidInstanceID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000038, "Member 'WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter, CallFunc_GetHandle_ReturnValue) == 0x000040, "Member 'WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter::CallFunc_GetHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter, CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue) == 0x000048, "Member 'WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter::CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter, CallFunc_BooleanAND_ReturnValue) == 0x000049, "Member 'WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000050, "Member 'WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter, CallFunc_IsRarePal_ReturnValue) == 0x000058, "Member 'WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter::CallFunc_IsRarePal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter, CallFunc_GetCharacterID_ReturnValue) == 0x00005C, "Member 'WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter, CallFunc_GetIsBoss_ReturnValue) == 0x000064, "Member 'WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter::CallFunc_GetIsBoss_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter, K2Node_CreateDelegate_OutputDelegate) == 0x000068, "Member 'WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter, CallFunc_GetCharacterManager_ReturnValue) == 0x000078, "Member 'WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnTargetBattleModeChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalCharacterSlotBase_C_OnTargetBattleModeChanged final
{
public:
	bool                                          bIsBattleMode;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_OnTargetBattleModeChanged) == 0x000001, "Wrong alignment on WBP_PalCharacterSlotBase_C_OnTargetBattleModeChanged");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_OnTargetBattleModeChanged) == 0x000001, "Wrong size on WBP_PalCharacterSlotBase_C_OnTargetBattleModeChanged");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnTargetBattleModeChanged, bIsBattleMode) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_OnTargetBattleModeChanged::bIsBattleMode' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnTargetCharacterActionNotify
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalCharacterSlotBase_C_OnTargetCharacterActionNotify final
{
public:
	const class UPalActionBase*                   Action;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   NotifyName;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_OnTargetCharacterActionNotify) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotBase_C_OnTargetCharacterActionNotify");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_OnTargetCharacterActionNotify) == 0x000018, "Wrong size on WBP_PalCharacterSlotBase_C_OnTargetCharacterActionNotify");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnTargetCharacterActionNotify, Action) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_OnTargetCharacterActionNotify::Action' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnTargetCharacterActionNotify, NotifyName) == 0x000008, "Member 'WBP_PalCharacterSlotBase_C_OnTargetCharacterActionNotify::NotifyName' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnTargetCharacterActionNotify, K2Node_SwitchName_CmpSuccess) == 0x000010, "Member 'WBP_PalCharacterSlotBase_C_OnTargetCharacterActionNotify::K2Node_SwitchName_CmpSuccess' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnTargetCharacterUpdateHP__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalCharacterSlotBase_C_OnTargetCharacterUpdateHP__DelegateSignature final
{
public:
	int64                                         NowHP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         NowMaxHP;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_OnTargetCharacterUpdateHP__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotBase_C_OnTargetCharacterUpdateHP__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_OnTargetCharacterUpdateHP__DelegateSignature) == 0x000010, "Wrong size on WBP_PalCharacterSlotBase_C_OnTargetCharacterUpdateHP__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnTargetCharacterUpdateHP__DelegateSignature, NowHP) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_OnTargetCharacterUpdateHP__DelegateSignature::NowHP' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnTargetCharacterUpdateHP__DelegateSignature, NowMaxHP) == 0x000008, "Member 'WBP_PalCharacterSlotBase_C_OnTargetCharacterUpdateHP__DelegateSignature::NowMaxHP' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnUpdateReviveTimer__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterSlotBase_C_OnUpdateReviveTimer__DelegateSignature final
{
public:
	double                                        NowTimer;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_OnUpdateReviveTimer__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotBase_C_OnUpdateReviveTimer__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_OnUpdateReviveTimer__DelegateSignature) == 0x000008, "Wrong size on WBP_PalCharacterSlotBase_C_OnUpdateReviveTimer__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateReviveTimer__DelegateSignature, NowTimer) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateReviveTimer__DelegateSignature::NowTimer' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnUpdateReviveTimer_Internal
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalCharacterSlotBase_C_OnUpdateReviveTimer_Internal final
{
public:
	float                                         NowReviveTimer;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CallDelegate_NowTimer_ImplicitCast;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_OnUpdateReviveTimer_Internal) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotBase_C_OnUpdateReviveTimer_Internal");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_OnUpdateReviveTimer_Internal) == 0x000010, "Wrong size on WBP_PalCharacterSlotBase_C_OnUpdateReviveTimer_Internal");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateReviveTimer_Internal, NowReviveTimer) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateReviveTimer_Internal::NowReviveTimer' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateReviveTimer_Internal, K2Node_CallDelegate_NowTimer_ImplicitCast) == 0x000008, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateReviveTimer_Internal::K2Node_CallDelegate_NowTimer_ImplicitCast' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnUpdateSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterSlotBase_C_OnUpdateSlot__DelegateSignature final
{
public:
	class UPalIndividualCharacterSlot*            TargetSlot_0;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_OnUpdateSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotBase_C_OnUpdateSlot__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_OnUpdateSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_PalCharacterSlotBase_C_OnUpdateSlot__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateSlot__DelegateSignature, TargetSlot_0) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateSlot__DelegateSignature::TargetSlot_0' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnUpdateSlot_Internal
// 0x0090 (0x0090 - 0x0000)
struct WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal final
{
public:
	class UPalIndividualCharacterSlot*            Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          LastHandle;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetHandle_ReturnValue;                    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalInstanceID& InstanceId)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetHandle_ReturnValue_1;                  // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalInstanceID                         CallFunc_GetIndividualID_ReturnValue;              // 0x0048(0x0030)(HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidInstanceID_ReturnValue;            // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRarePal_ReturnValue;                    // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_83[0x1];                                       // 0x0083(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x0084(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsBoss_ReturnValue;                    // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal) == 0x000090, "Wrong size on WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal, Slot_0) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal::Slot_0' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal, LastHandle) == 0x000008, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal::LastHandle' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal, CallFunc_GetHandle_ReturnValue) == 0x000010, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal::CallFunc_GetHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal, CallFunc_GetCharacterManager_ReturnValue) == 0x000028, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000030, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal, CallFunc_GetHandle_ReturnValue_1) == 0x000038, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal::CallFunc_GetHandle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal, CallFunc_IsValid_ReturnValue_1) == 0x000041, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal, CallFunc_GetIndividualID_ReturnValue) == 0x000048, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal::CallFunc_GetIndividualID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000078, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal, CallFunc_IsValidInstanceID_ReturnValue) == 0x000080, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal::CallFunc_IsValidInstanceID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal, CallFunc_IsValid_ReturnValue_2) == 0x000081, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal, CallFunc_IsRarePal_ReturnValue) == 0x000082, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal::CallFunc_IsRarePal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal, CallFunc_GetCharacterID_ReturnValue) == 0x000084, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal, CallFunc_GetIsBoss_ReturnValue) == 0x00008C, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal::CallFunc_GetIsBoss_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal, CallFunc_IsEmpty_ReturnValue) == 0x00008D, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal, CallFunc_IsValid_ReturnValue_3) == 0x00008E, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnUpdateWorkId__DelegateSignature
// 0x0014 (0x0014 - 0x0000)
struct WBP_PalCharacterSlotBase_C_OnUpdateWorkId__DelegateSignature final
{
public:
	struct FGuid                                  WorkId;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFixedAssign;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_OnUpdateWorkId__DelegateSignature) == 0x000004, "Wrong alignment on WBP_PalCharacterSlotBase_C_OnUpdateWorkId__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_OnUpdateWorkId__DelegateSignature) == 0x000014, "Wrong size on WBP_PalCharacterSlotBase_C_OnUpdateWorkId__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateWorkId__DelegateSignature, WorkId) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateWorkId__DelegateSignature::WorkId' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateWorkId__DelegateSignature, IsFixedAssign) == 0x000010, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateWorkId__DelegateSignature::IsFixedAssign' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnUpdateWorkId_Internal
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalCharacterSlotBase_C_OnUpdateWorkId_Internal final
{
public:
	class UPalCharacterParameterComponent*        Parameter;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_GetWorkId_ReturnValue;                    // 0x0008(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAssignedFixed_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_OnUpdateWorkId_Internal) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotBase_C_OnUpdateWorkId_Internal");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_OnUpdateWorkId_Internal) == 0x000020, "Wrong size on WBP_PalCharacterSlotBase_C_OnUpdateWorkId_Internal");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateWorkId_Internal, Parameter) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateWorkId_Internal::Parameter' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateWorkId_Internal, CallFunc_GetWorkId_ReturnValue) == 0x000008, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateWorkId_Internal::CallFunc_GetWorkId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_OnUpdateWorkId_Internal, CallFunc_IsAssignedFixed_ReturnValue) == 0x000018, "Member 'WBP_PalCharacterSlotBase_C_OnUpdateWorkId_Internal::CallFunc_IsAssignedFixed_ReturnValue' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.RegisterCharacterIconWidget
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterSlotBase_C_RegisterCharacterIconWidget final
{
public:
	class UWBP_PalCharacterIconBase_C*            IconWidget;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_RegisterCharacterIconWidget) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotBase_C_RegisterCharacterIconWidget");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_RegisterCharacterIconWidget) == 0x000008, "Wrong size on WBP_PalCharacterSlotBase_C_RegisterCharacterIconWidget");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_RegisterCharacterIconWidget, IconWidget) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_RegisterCharacterIconWidget::IconWidget' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.Setup
// 0x0098 (0x0098 - 0x0000)
struct WBP_PalCharacterSlotBase_C_Setup final
{
public:
	class UPalIndividualCharacterSlot*            NewTargetSlot;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetHandle_ReturnValue;                    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalInstanceID& InstanceId)> K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetHandle_ReturnValue_1;                  // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalInstanceID                         CallFunc_GetIndividualID_ReturnValue;              // 0x0050(0x0030)(HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidInstanceID_ReturnValue;            // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRarePal_ReturnValue;                    // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B[0x1];                                       // 0x008B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x008C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsBoss_ReturnValue;                    // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0096(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_Setup) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotBase_C_Setup");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_Setup) == 0x000098, "Wrong size on WBP_PalCharacterSlotBase_C_Setup");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_Setup, NewTargetSlot) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_Setup::NewTargetSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_PalCharacterSlotBase_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_Setup, CallFunc_GetHandle_ReturnValue) == 0x000010, "Member 'WBP_PalCharacterSlotBase_C_Setup::CallFunc_GetHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_Setup, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000018, "Member 'WBP_PalCharacterSlotBase_C_Setup::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'WBP_PalCharacterSlotBase_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_Setup, CallFunc_GetCharacterManager_ReturnValue) == 0x000030, "Member 'WBP_PalCharacterSlotBase_C_Setup::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'WBP_PalCharacterSlotBase_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_Setup, CallFunc_GetHandle_ReturnValue_1) == 0x000040, "Member 'WBP_PalCharacterSlotBase_C_Setup::CallFunc_GetHandle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_Setup, CallFunc_IsValid_ReturnValue_2) == 0x000048, "Member 'WBP_PalCharacterSlotBase_C_Setup::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_Setup, CallFunc_IsValid_ReturnValue_3) == 0x000049, "Member 'WBP_PalCharacterSlotBase_C_Setup::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_Setup, CallFunc_GetIndividualID_ReturnValue) == 0x000050, "Member 'WBP_PalCharacterSlotBase_C_Setup::CallFunc_GetIndividualID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_Setup, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000080, "Member 'WBP_PalCharacterSlotBase_C_Setup::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_Setup, CallFunc_IsValidInstanceID_ReturnValue) == 0x000088, "Member 'WBP_PalCharacterSlotBase_C_Setup::CallFunc_IsValidInstanceID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_Setup, CallFunc_IsValid_ReturnValue_4) == 0x000089, "Member 'WBP_PalCharacterSlotBase_C_Setup::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_Setup, CallFunc_IsRarePal_ReturnValue) == 0x00008A, "Member 'WBP_PalCharacterSlotBase_C_Setup::CallFunc_IsRarePal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_Setup, CallFunc_GetCharacterID_ReturnValue) == 0x00008C, "Member 'WBP_PalCharacterSlotBase_C_Setup::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_Setup, CallFunc_GetIsBoss_ReturnValue) == 0x000094, "Member 'WBP_PalCharacterSlotBase_C_Setup::CallFunc_GetIsBoss_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_Setup, CallFunc_IsValid_ReturnValue_5) == 0x000095, "Member 'WBP_PalCharacterSlotBase_C_Setup::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_Setup, CallFunc_IsEmpty_ReturnValue) == 0x000096, "Member 'WBP_PalCharacterSlotBase_C_Setup::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.UnbindActorEvent
// 0x0030 (0x0030 - 0x0000)
struct WBP_PalCharacterSlotBase_C_UnbindActorEvent final
{
public:
	class UPalIndividualCharacterHandle*          Handle;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalActionBase* Action, class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_UnbindActorEvent) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotBase_C_UnbindActorEvent");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_UnbindActorEvent) == 0x000030, "Wrong size on WBP_PalCharacterSlotBase_C_UnbindActorEvent");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_UnbindActorEvent, Handle) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_UnbindActorEvent::Handle' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_UnbindActorEvent, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PalCharacterSlotBase_C_UnbindActorEvent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_UnbindActorEvent, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000018, "Member 'WBP_PalCharacterSlotBase_C_UnbindActorEvent::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_UnbindActorEvent, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'WBP_PalCharacterSlotBase_C_UnbindActorEvent::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_UnbindActorEvent, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'WBP_PalCharacterSlotBase_C_UnbindActorEvent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_UnbindActorEvent, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'WBP_PalCharacterSlotBase_C_UnbindActorEvent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.UnbindEvents
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalCharacterSlotBase_C_UnbindEvents final
{
public:
	TDelegate<void(class UPalIndividualCharacterSlot* Slot, class UPalIndividualCharacterHandle* LastHandle)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetHandle_ReturnValue;                    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_UnbindEvents) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotBase_C_UnbindEvents");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_UnbindEvents) == 0x000020, "Wrong size on WBP_PalCharacterSlotBase_C_UnbindEvents");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_UnbindEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_UnbindEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_UnbindEvents, CallFunc_GetHandle_ReturnValue) == 0x000010, "Member 'WBP_PalCharacterSlotBase_C_UnbindEvents::CallFunc_GetHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_UnbindEvents, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_PalCharacterSlotBase_C_UnbindEvents::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.UnbindParameterEvent
// 0x0088 (0x0088 - 0x0000)
struct WBP_PalCharacterSlotBase_C_UnbindParameterEvent final
{
public:
	class UPalIndividualCharacterHandle*          Handle;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalCharacterParameterComponent* Parameter)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(float NowReviveTimer)>         K2Node_CreateDelegate_OutputDelegate_2;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bIsBattleMode)>           K2Node_CreateDelegate_OutputDelegate_3;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0074(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotBase_C_UnbindParameterEvent) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotBase_C_UnbindParameterEvent");
static_assert(sizeof(WBP_PalCharacterSlotBase_C_UnbindParameterEvent) == 0x000088, "Wrong size on WBP_PalCharacterSlotBase_C_UnbindParameterEvent");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_UnbindParameterEvent, Handle) == 0x000000, "Member 'WBP_PalCharacterSlotBase_C_UnbindParameterEvent::Handle' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_UnbindParameterEvent, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PalCharacterSlotBase_C_UnbindParameterEvent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_UnbindParameterEvent, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_PalCharacterSlotBase_C_UnbindParameterEvent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_UnbindParameterEvent, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000020, "Member 'WBP_PalCharacterSlotBase_C_UnbindParameterEvent::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_UnbindParameterEvent, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'WBP_PalCharacterSlotBase_C_UnbindParameterEvent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_UnbindParameterEvent, CallFunc_IsValid_ReturnValue_2) == 0x000029, "Member 'WBP_PalCharacterSlotBase_C_UnbindParameterEvent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_UnbindParameterEvent, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000030, "Member 'WBP_PalCharacterSlotBase_C_UnbindParameterEvent::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_UnbindParameterEvent, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000038, "Member 'WBP_PalCharacterSlotBase_C_UnbindParameterEvent::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_UnbindParameterEvent, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'WBP_PalCharacterSlotBase_C_UnbindParameterEvent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_UnbindParameterEvent, CallFunc_IsValid_ReturnValue_3) == 0x000050, "Member 'WBP_PalCharacterSlotBase_C_UnbindParameterEvent::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_UnbindParameterEvent, K2Node_CreateDelegate_OutputDelegate_2) == 0x000054, "Member 'WBP_PalCharacterSlotBase_C_UnbindParameterEvent::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_UnbindParameterEvent, K2Node_CreateDelegate_OutputDelegate_3) == 0x000064, "Member 'WBP_PalCharacterSlotBase_C_UnbindParameterEvent::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotBase_C_UnbindParameterEvent, K2Node_CreateDelegate_OutputDelegate_4) == 0x000074, "Member 'WBP_PalCharacterSlotBase_C_UnbindParameterEvent::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");

}

