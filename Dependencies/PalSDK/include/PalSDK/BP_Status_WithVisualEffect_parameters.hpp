#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.ExecuteUbergraph_BP_Status_WithVisualEffect
// 0x0100 (0x0100 - 0x0000)
struct BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalStatusComponent* StatusComponent, EPalStatusID StatusId, class UPalStatusBase* Status)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalDeadInfo& DeadInfo)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectComponent*              CallFunc_GetComponentByClass_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPalVisualEffectDynamicParameter       K2Node_MakeStruct_PalVisualEffectDynamicParameter; // 0x0038(0x0010)()
	class UPalVisualEffectBase*                   CallFunc_AddVisualEffect_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStatusComponent*                    CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStatusComponent*                    CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_3;                   // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectComponent*              CallFunc_GetComponentByClass_ReturnValue_3;        // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	const class UPalStatusComponent*              K2Node_CustomEvent_StatusComponent;                // 0x0080(0x0008)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalStatusID                                  K2Node_CustomEvent_StatusID;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalStatusBase*                         K2Node_CustomEvent_Status;                         // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_4;                   // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDeadInfo                           K2Node_CustomEvent_DeadInfo;                       // 0x00A8(0x0050)(NoDestructor)
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue_4;        // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect) == 0x000008, "Wrong alignment on BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect");
static_assert(sizeof(BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect) == 0x000100, "Wrong size on BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect, EntryPoint) == 0x000000, "Member 'BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect, K2Node_Event_DeltaTime) == 0x000004, "Member 'BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect, CallFunc_GetOwner_ReturnValue) == 0x000028, "Member 'BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect, CallFunc_GetComponentByClass_ReturnValue) == 0x000030, "Member 'BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect, K2Node_MakeStruct_PalVisualEffectDynamicParameter) == 0x000038, "Member 'BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect::K2Node_MakeStruct_PalVisualEffectDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect, CallFunc_AddVisualEffect_ReturnValue) == 0x000048, "Member 'BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect::CallFunc_AddVisualEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect, CallFunc_GetOwner_ReturnValue_1) == 0x000050, "Member 'BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000058, "Member 'BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect, CallFunc_GetOwner_ReturnValue_2) == 0x000060, "Member 'BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000068, "Member 'BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect, CallFunc_GetOwner_ReturnValue_3) == 0x000070, "Member 'BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect::CallFunc_GetOwner_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect, CallFunc_GetComponentByClass_ReturnValue_3) == 0x000078, "Member 'BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect::CallFunc_GetComponentByClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect, K2Node_CustomEvent_StatusComponent) == 0x000080, "Member 'BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect::K2Node_CustomEvent_StatusComponent' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect, K2Node_CustomEvent_StatusID) == 0x000088, "Member 'BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect::K2Node_CustomEvent_StatusID' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect, K2Node_CustomEvent_Status) == 0x000090, "Member 'BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect::K2Node_CustomEvent_Status' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect, K2Node_SwitchEnum_CmpSuccess) == 0x000098, "Member 'BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect, CallFunc_GetOwner_ReturnValue_4) == 0x0000A0, "Member 'BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect::CallFunc_GetOwner_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect, K2Node_CustomEvent_DeadInfo) == 0x0000A8, "Member 'BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect::K2Node_CustomEvent_DeadInfo' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect, CallFunc_GetComponentByClass_ReturnValue_4) == 0x0000F8, "Member 'BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect::CallFunc_GetComponentByClass_ReturnValue_4' has a wrong offset!");

// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.HasSelfPalElement
// 0x0020 (0x0020 - 0x0000)
struct BP_Status_WithVisualEffect_C_HasSelfPalElement final
{
public:
	EPalElementType                               MyElement;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Has;                                               // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasElementType_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_WithVisualEffect_C_HasSelfPalElement) == 0x000008, "Wrong alignment on BP_Status_WithVisualEffect_C_HasSelfPalElement");
static_assert(sizeof(BP_Status_WithVisualEffect_C_HasSelfPalElement) == 0x000020, "Wrong size on BP_Status_WithVisualEffect_C_HasSelfPalElement");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HasSelfPalElement, MyElement) == 0x000000, "Member 'BP_Status_WithVisualEffect_C_HasSelfPalElement::MyElement' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HasSelfPalElement, Has) == 0x000001, "Member 'BP_Status_WithVisualEffect_C_HasSelfPalElement::Has' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HasSelfPalElement, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_Status_WithVisualEffect_C_HasSelfPalElement::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HasSelfPalElement, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_Status_WithVisualEffect_C_HasSelfPalElement::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HasSelfPalElement, CallFunc_HasElementType_ReturnValue) == 0x000018, "Member 'BP_Status_WithVisualEffect_C_HasSelfPalElement::CallFunc_HasElementType_ReturnValue' has a wrong offset!");

// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.HideReAddEffect
// 0x0080 (0x0080 - 0x0000)
struct BP_Status_WithVisualEffect_C_HideReAddEffect final
{
public:
	bool                                          bNeedHide;                                         // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalVisualEffectDynamicParameter       K2Node_MakeStruct_PalVisualEffectDynamicParameter; // 0x0008(0x0010)()
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectComponent*              CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectBase*                   CallFunc_AddVisualEffect_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectComponent*              CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetActiveActorFlag_ReturnValue;           // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOtomo_ReturnValue;                      // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_3;                   // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_3;        // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsCapturedProcessing_ReturnValue;      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_WithVisualEffect_C_HideReAddEffect) == 0x000008, "Wrong alignment on BP_Status_WithVisualEffect_C_HideReAddEffect");
static_assert(sizeof(BP_Status_WithVisualEffect_C_HideReAddEffect) == 0x000080, "Wrong size on BP_Status_WithVisualEffect_C_HideReAddEffect");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffect, bNeedHide) == 0x000000, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffect::bNeedHide' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffect, K2Node_MakeStruct_PalVisualEffectDynamicParameter) == 0x000008, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffect::K2Node_MakeStruct_PalVisualEffectDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffect, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffect::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffect, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffect::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffect, CallFunc_GetOwner_ReturnValue_1) == 0x000028, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffect::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffect, CallFunc_AddVisualEffect_ReturnValue) == 0x000030, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffect::CallFunc_AddVisualEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffect, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000038, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffect::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffect, CallFunc_GetOwner_ReturnValue_2) == 0x000040, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffect::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffect, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000048, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffect::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffect, K2Node_DynamicCast_AsPal_Character) == 0x000050, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffect::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffect, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffect, CallFunc_IsValid_ReturnValue) == 0x000059, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffect, CallFunc_GetActiveActorFlag_ReturnValue) == 0x00005A, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffect::CallFunc_GetActiveActorFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffect, CallFunc_Not_PreBool_ReturnValue) == 0x00005B, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffect::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffect, CallFunc_IsOtomo_ReturnValue) == 0x00005C, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffect::CallFunc_IsOtomo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffect, CallFunc_GetOwner_ReturnValue_3) == 0x000060, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffect::CallFunc_GetOwner_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffect, CallFunc_BooleanAND_ReturnValue) == 0x000068, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffect::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffect, CallFunc_GetComponentByClass_ReturnValue_3) == 0x000070, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffect::CallFunc_GetComponentByClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffect, CallFunc_GetIsCapturedProcessing_ReturnValue) == 0x000078, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffect::CallFunc_GetIsCapturedProcessing_ReturnValue' has a wrong offset!");

// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.HideReAddEffectWhenInActiveOtomo
// 0x0060 (0x0060 - 0x0000)
struct BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo final
{
public:
	struct FPalVisualEffectDynamicParameter       K2Node_MakeStruct_PalVisualEffectDynamicParameter; // 0x0000(0x0010)()
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectComponent*              CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectComponent*              CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectBase*                   CallFunc_AddVisualEffect_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetActiveActorFlag_ReturnValue;           // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOtomo_ReturnValue;                      // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo) == 0x000008, "Wrong alignment on BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo");
static_assert(sizeof(BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo) == 0x000060, "Wrong size on BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo, K2Node_MakeStruct_PalVisualEffectDynamicParameter) == 0x000000, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo::K2Node_MakeStruct_PalVisualEffectDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo, CallFunc_GetOwner_ReturnValue_1) == 0x000018, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000028, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo, CallFunc_AddVisualEffect_ReturnValue) == 0x000030, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo::CallFunc_AddVisualEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo, CallFunc_Not_PreBool_ReturnValue) == 0x000038, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo, CallFunc_GetOwner_ReturnValue_2) == 0x000040, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000048, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo, K2Node_DynamicCast_AsPal_Character) == 0x000050, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo, CallFunc_IsValid_ReturnValue) == 0x000059, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo, CallFunc_GetActiveActorFlag_ReturnValue) == 0x00005A, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo::CallFunc_GetActiveActorFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo, CallFunc_IsOtomo_ReturnValue) == 0x00005B, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo::CallFunc_IsOtomo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo, CallFunc_BooleanAND_ReturnValue) == 0x00005C, "Member 'BP_Status_WithVisualEffect_C_HideReAddEffectWhenInActiveOtomo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.IsIgnoreElement
// 0x0020 (0x0020 - 0x0000)
struct BP_Status_WithVisualEffect_C_IsIgnoreElement final
{
public:
	EPalAdditionalEffectType                      AddEffect;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ignore;                                            // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsIgnoreElementStatus_ReturnValue;        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_WithVisualEffect_C_IsIgnoreElement) == 0x000008, "Wrong alignment on BP_Status_WithVisualEffect_C_IsIgnoreElement");
static_assert(sizeof(BP_Status_WithVisualEffect_C_IsIgnoreElement) == 0x000020, "Wrong size on BP_Status_WithVisualEffect_C_IsIgnoreElement");
static_assert(offsetof(BP_Status_WithVisualEffect_C_IsIgnoreElement, AddEffect) == 0x000000, "Member 'BP_Status_WithVisualEffect_C_IsIgnoreElement::AddEffect' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_IsIgnoreElement, Ignore) == 0x000001, "Member 'BP_Status_WithVisualEffect_C_IsIgnoreElement::Ignore' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_IsIgnoreElement, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_Status_WithVisualEffect_C_IsIgnoreElement::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_IsIgnoreElement, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_Status_WithVisualEffect_C_IsIgnoreElement::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_IsIgnoreElement, CallFunc_IsIgnoreElementStatus_ReturnValue) == 0x000018, "Member 'BP_Status_WithVisualEffect_C_IsIgnoreElement::CallFunc_IsIgnoreElementStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_IsIgnoreElement, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'BP_Status_WithVisualEffect_C_IsIgnoreElement::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.ResetDamageDown
// 0x0020 (0x0020 - 0x0000)
struct BP_Status_WithVisualEffect_C_ResetDamageDown final
{
public:
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_WithVisualEffect_C_ResetDamageDown) == 0x000008, "Wrong alignment on BP_Status_WithVisualEffect_C_ResetDamageDown");
static_assert(sizeof(BP_Status_WithVisualEffect_C_ResetDamageDown) == 0x000020, "Wrong size on BP_Status_WithVisualEffect_C_ResetDamageDown");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ResetDamageDown, CallFunc_GetOwner_ReturnValue) == 0x000000, "Member 'BP_Status_WithVisualEffect_C_ResetDamageDown::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ResetDamageDown, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000008, "Member 'BP_Status_WithVisualEffect_C_ResetDamageDown::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ResetDamageDown, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_Status_WithVisualEffect_C_ResetDamageDown::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ResetDamageDown, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000018, "Member 'BP_Status_WithVisualEffect_C_ResetDamageDown::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.ResetDamageUp
// 0x0020 (0x0020 - 0x0000)
struct BP_Status_WithVisualEffect_C_ResetDamageUp final
{
public:
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_WithVisualEffect_C_ResetDamageUp) == 0x000008, "Wrong alignment on BP_Status_WithVisualEffect_C_ResetDamageUp");
static_assert(sizeof(BP_Status_WithVisualEffect_C_ResetDamageUp) == 0x000020, "Wrong size on BP_Status_WithVisualEffect_C_ResetDamageUp");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ResetDamageUp, CallFunc_GetOwner_ReturnValue) == 0x000000, "Member 'BP_Status_WithVisualEffect_C_ResetDamageUp::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ResetDamageUp, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000008, "Member 'BP_Status_WithVisualEffect_C_ResetDamageUp::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ResetDamageUp, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_Status_WithVisualEffect_C_ResetDamageUp::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_ResetDamageUp, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000018, "Member 'BP_Status_WithVisualEffect_C_ResetDamageUp::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.SetDamageDown
// 0x0018 (0x0018 - 0x0000)
struct BP_Status_WithVisualEffect_C_SetDamageDown final
{
public:
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_WithVisualEffect_C_SetDamageDown) == 0x000008, "Wrong alignment on BP_Status_WithVisualEffect_C_SetDamageDown");
static_assert(sizeof(BP_Status_WithVisualEffect_C_SetDamageDown) == 0x000018, "Wrong size on BP_Status_WithVisualEffect_C_SetDamageDown");
static_assert(offsetof(BP_Status_WithVisualEffect_C_SetDamageDown, CallFunc_GetOwner_ReturnValue) == 0x000000, "Member 'BP_Status_WithVisualEffect_C_SetDamageDown::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_SetDamageDown, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000008, "Member 'BP_Status_WithVisualEffect_C_SetDamageDown::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_SetDamageDown, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_Status_WithVisualEffect_C_SetDamageDown::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.SetDamageUp
// 0x0018 (0x0018 - 0x0000)
struct BP_Status_WithVisualEffect_C_SetDamageUp final
{
public:
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_WithVisualEffect_C_SetDamageUp) == 0x000008, "Wrong alignment on BP_Status_WithVisualEffect_C_SetDamageUp");
static_assert(sizeof(BP_Status_WithVisualEffect_C_SetDamageUp) == 0x000018, "Wrong size on BP_Status_WithVisualEffect_C_SetDamageUp");
static_assert(offsetof(BP_Status_WithVisualEffect_C_SetDamageUp, CallFunc_GetOwner_ReturnValue) == 0x000000, "Member 'BP_Status_WithVisualEffect_C_SetDamageUp::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_SetDamageUp, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000008, "Member 'BP_Status_WithVisualEffect_C_SetDamageUp::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C_SetDamageUp, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_Status_WithVisualEffect_C_SetDamageUp::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.TickStatus
// 0x0004 (0x0004 - 0x0000)
struct BP_Status_WithVisualEffect_C_TickStatus final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_WithVisualEffect_C_TickStatus) == 0x000004, "Wrong alignment on BP_Status_WithVisualEffect_C_TickStatus");
static_assert(sizeof(BP_Status_WithVisualEffect_C_TickStatus) == 0x000004, "Wrong size on BP_Status_WithVisualEffect_C_TickStatus");
static_assert(offsetof(BP_Status_WithVisualEffect_C_TickStatus, DeltaTime) == 0x000000, "Member 'BP_Status_WithVisualEffect_C_TickStatus::DeltaTime' has a wrong offset!");

// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.カスタムイベント_Dead
// 0x0050 (0x0050 - 0x0000)
struct BP_Status_WithVisualEffect_C__________________________Dead final
{
public:
	struct FPalDeadInfo                           DeadInfo;                                          // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(BP_Status_WithVisualEffect_C__________________________Dead) == 0x000008, "Wrong alignment on BP_Status_WithVisualEffect_C__________________________Dead");
static_assert(sizeof(BP_Status_WithVisualEffect_C__________________________Dead) == 0x000050, "Wrong size on BP_Status_WithVisualEffect_C__________________________Dead");
static_assert(offsetof(BP_Status_WithVisualEffect_C__________________________Dead, DeadInfo) == 0x000000, "Member 'BP_Status_WithVisualEffect_C__________________________Dead::DeadInfo' has a wrong offset!");

// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.カスタムイベント_OtherStatusAdd
// 0x0018 (0x0018 - 0x0000)
struct BP_Status_WithVisualEffect_C__________________________OtherStatusAdd final
{
public:
	const class UPalStatusComponent*              StatusComponent;                                   // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalStatusID                                  StatusId_0;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalStatusBase*                         Status;                                            // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_WithVisualEffect_C__________________________OtherStatusAdd) == 0x000008, "Wrong alignment on BP_Status_WithVisualEffect_C__________________________OtherStatusAdd");
static_assert(sizeof(BP_Status_WithVisualEffect_C__________________________OtherStatusAdd) == 0x000018, "Wrong size on BP_Status_WithVisualEffect_C__________________________OtherStatusAdd");
static_assert(offsetof(BP_Status_WithVisualEffect_C__________________________OtherStatusAdd, StatusComponent) == 0x000000, "Member 'BP_Status_WithVisualEffect_C__________________________OtherStatusAdd::StatusComponent' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C__________________________OtherStatusAdd, StatusId_0) == 0x000008, "Member 'BP_Status_WithVisualEffect_C__________________________OtherStatusAdd::StatusId_0' has a wrong offset!");
static_assert(offsetof(BP_Status_WithVisualEffect_C__________________________OtherStatusAdd, Status) == 0x000010, "Member 'BP_Status_WithVisualEffect_C__________________________OtherStatusAdd::Status' has a wrong offset!");

}

