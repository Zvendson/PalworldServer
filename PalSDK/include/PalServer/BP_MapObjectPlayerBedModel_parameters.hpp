#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function BP_MapObjectPlayerBedModel.BP_MapObjectPlayerBedModel_C.BP_OnTriggerInteract_SleepPlayerBed
// 0x0080 (0x0080 - 0x0000)
struct BP_MapObjectPlayerBedModel_C_BP_OnTriggerInteract_SleepPlayerBed final
{
public:
	class AActor*                                 Other;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalInteractiveObjectIndicatorType            IndicatorType;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             MapObjectTransform;                                // 0x0010(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObjectPlayerBedModel_C_BP_OnTriggerInteract_SleepPlayerBed) == 0x000010, "Wrong alignment on BP_MapObjectPlayerBedModel_C_BP_OnTriggerInteract_SleepPlayerBed");
static_assert(sizeof(BP_MapObjectPlayerBedModel_C_BP_OnTriggerInteract_SleepPlayerBed) == 0x000080, "Wrong size on BP_MapObjectPlayerBedModel_C_BP_OnTriggerInteract_SleepPlayerBed");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_BP_OnTriggerInteract_SleepPlayerBed, Other) == 0x000000, "Member 'BP_MapObjectPlayerBedModel_C_BP_OnTriggerInteract_SleepPlayerBed::Other' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_BP_OnTriggerInteract_SleepPlayerBed, IndicatorType) == 0x000008, "Member 'BP_MapObjectPlayerBedModel_C_BP_OnTriggerInteract_SleepPlayerBed::IndicatorType' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_BP_OnTriggerInteract_SleepPlayerBed, MapObjectTransform) == 0x000010, "Member 'BP_MapObjectPlayerBedModel_C_BP_OnTriggerInteract_SleepPlayerBed::MapObjectTransform' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_BP_OnTriggerInteract_SleepPlayerBed, K2Node_SwitchEnum_CmpSuccess) == 0x000070, "Member 'BP_MapObjectPlayerBedModel_C_BP_OnTriggerInteract_SleepPlayerBed::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_MapObjectPlayerBedModel.BP_MapObjectPlayerBedModel_C.ExecuteUbergraph_BP_MapObjectPlayerBedModel
// 0x0340 (0x0340 - 0x0000)
struct BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_Other;                          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FActionDynamicParameter                K2Node_MakeStruct_ActionDynamicParameter;          // 0x0010(0x00E0)()
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSleepingInteractor_ReturnValue;         // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_102[0x6];                                      // 0x0102(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0108(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          K2Node_Event_CharacterHandle;                      // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_PlayActionParameter_ReturnValue;          // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0130(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetUpVector_ReturnValue;                  // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RotatorFromAxisAndAngle_ReturnValue;      // 0x01F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0208(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x0220(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0238(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x0250(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel) == 0x000010, "Wrong alignment on BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel");
static_assert(sizeof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel) == 0x000340, "Wrong size on BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel, EntryPoint) == 0x000000, "Member 'BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel, K2Node_CustomEvent_Other) == 0x000008, "Member 'BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel::K2Node_CustomEvent_Other' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel, K2Node_MakeStruct_ActionDynamicParameter) == 0x000010, "Member 'BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel::K2Node_MakeStruct_ActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel, CallFunc_GetComponentByClass_ReturnValue) == 0x0000F0, "Member 'BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel, K2Node_DynamicCast_AsPal_Character) == 0x0000F8, "Member 'BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel, CallFunc_IsSleepingInteractor_ReturnValue) == 0x000101, "Member 'BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel::CallFunc_IsSleepingInteractor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000108, "Member 'BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel, K2Node_Event_CharacterHandle) == 0x000110, "Member 'BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel::K2Node_Event_CharacterHandle' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel, CallFunc_IsValid_ReturnValue) == 0x000118, "Member 'BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000120, "Member 'BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel, CallFunc_PlayActionParameter_ReturnValue) == 0x000128, "Member 'BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel::CallFunc_PlayActionParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel, CallFunc_GetTransform_ReturnValue) == 0x000130, "Member 'BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel, CallFunc_BreakTransform_Location) == 0x000190, "Member 'BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel, CallFunc_BreakTransform_Rotation) == 0x0001A8, "Member 'BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel, CallFunc_BreakTransform_Scale) == 0x0001C0, "Member 'BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel, CallFunc_GetUpVector_ReturnValue) == 0x0001D8, "Member 'BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel::CallFunc_GetUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel, CallFunc_RotatorFromAxisAndAngle_ReturnValue) == 0x0001F0, "Member 'BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel::CallFunc_RotatorFromAxisAndAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000208, "Member 'BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel, CallFunc_ComposeRotators_ReturnValue) == 0x000220, "Member 'BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel, CallFunc_Add_VectorVector_ReturnValue) == 0x000238, "Member 'BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel, CallFunc_K2_SetActorLocationAndRotation_SweepHitResult) == 0x000250, "Member 'BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel::CallFunc_K2_SetActorLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel, CallFunc_K2_SetActorLocationAndRotation_ReturnValue) == 0x000338, "Member 'BP_MapObjectPlayerBedModel_C_ExecuteUbergraph_BP_MapObjectPlayerBedModel::CallFunc_K2_SetActorLocationAndRotation_ReturnValue' has a wrong offset!");

// Function BP_MapObjectPlayerBedModel.BP_MapObjectPlayerBedModel_C.IsSleepingInteractor
// 0x0028 (0x0028 - 0x0000)
struct BP_MapObjectPlayerBedModel_C_IsSleepingInteractor final
{
public:
	class APalCharacter*                          Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionBase*                         CallFunc_GetCurrentAction_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObjectPlayerBedModel_C_IsSleepingInteractor) == 0x000008, "Wrong alignment on BP_MapObjectPlayerBedModel_C_IsSleepingInteractor");
static_assert(sizeof(BP_MapObjectPlayerBedModel_C_IsSleepingInteractor) == 0x000028, "Wrong size on BP_MapObjectPlayerBedModel_C_IsSleepingInteractor");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_IsSleepingInteractor, Character) == 0x000000, "Member 'BP_MapObjectPlayerBedModel_C_IsSleepingInteractor::Character' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_IsSleepingInteractor, ReturnValue) == 0x000008, "Member 'BP_MapObjectPlayerBedModel_C_IsSleepingInteractor::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_IsSleepingInteractor, CallFunc_GetCurrentAction_ReturnValue) == 0x000010, "Member 'BP_MapObjectPlayerBedModel_C_IsSleepingInteractor::CallFunc_GetCurrentAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_IsSleepingInteractor, CallFunc_GetObjectClass_ReturnValue) == 0x000018, "Member 'BP_MapObjectPlayerBedModel_C_IsSleepingInteractor::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_IsSleepingInteractor, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000020, "Member 'BP_MapObjectPlayerBedModel_C_IsSleepingInteractor::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");

// Function BP_MapObjectPlayerBedModel.BP_MapObjectPlayerBedModel_C.OnBeginSleep
// 0x0008 (0x0008 - 0x0000)
struct BP_MapObjectPlayerBedModel_C_OnBeginSleep final
{
public:
	class AActor*                                 Other;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObjectPlayerBedModel_C_OnBeginSleep) == 0x000008, "Wrong alignment on BP_MapObjectPlayerBedModel_C_OnBeginSleep");
static_assert(sizeof(BP_MapObjectPlayerBedModel_C_OnBeginSleep) == 0x000008, "Wrong size on BP_MapObjectPlayerBedModel_C_OnBeginSleep");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_OnBeginSleep, Other) == 0x000000, "Member 'BP_MapObjectPlayerBedModel_C_OnBeginSleep::Other' has a wrong offset!");

// Function BP_MapObjectPlayerBedModel.BP_MapObjectPlayerBedModel_C.PutPlayerToSleep
// 0x0008 (0x0008 - 0x0000)
struct BP_MapObjectPlayerBedModel_C_PutPlayerToSleep final
{
public:
	class UPalIndividualCharacterHandle*          CharacterHandle;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObjectPlayerBedModel_C_PutPlayerToSleep) == 0x000008, "Wrong alignment on BP_MapObjectPlayerBedModel_C_PutPlayerToSleep");
static_assert(sizeof(BP_MapObjectPlayerBedModel_C_PutPlayerToSleep) == 0x000008, "Wrong size on BP_MapObjectPlayerBedModel_C_PutPlayerToSleep");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_PutPlayerToSleep, CharacterHandle) == 0x000000, "Member 'BP_MapObjectPlayerBedModel_C_PutPlayerToSleep::CharacterHandle' has a wrong offset!");

// Function BP_MapObjectPlayerBedModel.BP_MapObjectPlayerBedModel_C.Setup
// 0x0030 (0x0030 - 0x0000)
struct BP_MapObjectPlayerBedModel_C_Setup final
{
public:
	struct FVector                                FixPos;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               BedRotate;                                         // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MapObjectPlayerBedModel_C_Setup) == 0x000008, "Wrong alignment on BP_MapObjectPlayerBedModel_C_Setup");
static_assert(sizeof(BP_MapObjectPlayerBedModel_C_Setup) == 0x000030, "Wrong size on BP_MapObjectPlayerBedModel_C_Setup");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_Setup, FixPos) == 0x000000, "Member 'BP_MapObjectPlayerBedModel_C_Setup::FixPos' has a wrong offset!");
static_assert(offsetof(BP_MapObjectPlayerBedModel_C_Setup, BedRotate) == 0x000018, "Member 'BP_MapObjectPlayerBedModel_C_Setup::BedRotate' has a wrong offset!");

}

