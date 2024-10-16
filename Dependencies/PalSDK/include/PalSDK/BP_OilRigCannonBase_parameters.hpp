#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_OilRigCannonBase.BP_OilRigCannonBase_C.Stop Animation
// 0x0018 (0x0018 - 0x0000)
struct BP_OilRigCannonBase_C_Stop_Animation final
{
public:
	class AActor*                                 Other;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalInteractiveObjectIndicatorType            IndicatorType;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilRigCannonBase_C_Stop_Animation) == 0x000008, "Wrong alignment on BP_OilRigCannonBase_C_Stop_Animation");
static_assert(sizeof(BP_OilRigCannonBase_C_Stop_Animation) == 0x000018, "Wrong size on BP_OilRigCannonBase_C_Stop_Animation");
static_assert(offsetof(BP_OilRigCannonBase_C_Stop_Animation, Other) == 0x000000, "Member 'BP_OilRigCannonBase_C_Stop_Animation::Other' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannonBase_C_Stop_Animation, IndicatorType) == 0x000008, "Member 'BP_OilRigCannonBase_C_Stop_Animation::IndicatorType' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannonBase_C_Stop_Animation, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_OilRigCannonBase_C_Stop_Animation::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function BP_OilRigCannonBase.BP_OilRigCannonBase_C.Start Animation
// 0x0120 (0x0120 - 0x0000)
struct BP_OilRigCannonBase_C_Start_Animation final
{
public:
	class AActor*                                 Other;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalInteractiveObjectIndicatorType            IndicatorType;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActionDynamicParameter                K2Node_MakeStruct_ActionDynamicParameter;          // 0x0030(0x00E0)()
	class UPalActionBase*                         CallFunc_PlayActionByTypeParameter_ReturnValue;    // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilRigCannonBase_C_Start_Animation) == 0x000010, "Wrong alignment on BP_OilRigCannonBase_C_Start_Animation");
static_assert(sizeof(BP_OilRigCannonBase_C_Start_Animation) == 0x000120, "Wrong size on BP_OilRigCannonBase_C_Start_Animation");
static_assert(offsetof(BP_OilRigCannonBase_C_Start_Animation, Other) == 0x000000, "Member 'BP_OilRigCannonBase_C_Start_Animation::Other' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannonBase_C_Start_Animation, IndicatorType) == 0x000008, "Member 'BP_OilRigCannonBase_C_Start_Animation::IndicatorType' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannonBase_C_Start_Animation, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_OilRigCannonBase_C_Start_Animation::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannonBase_C_Start_Animation, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000018, "Member 'BP_OilRigCannonBase_C_Start_Animation::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannonBase_C_Start_Animation, K2Node_MakeStruct_ActionDynamicParameter) == 0x000030, "Member 'BP_OilRigCannonBase_C_Start_Animation::K2Node_MakeStruct_ActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannonBase_C_Start_Animation, CallFunc_PlayActionByTypeParameter_ReturnValue) == 0x000110, "Member 'BP_OilRigCannonBase_C_Start_Animation::CallFunc_PlayActionByTypeParameter_ReturnValue' has a wrong offset!");

// Function BP_OilRigCannonBase.BP_OilRigCannonBase_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_OilRigCannonBase_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilRigCannonBase_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_OilRigCannonBase_C_ReceiveTick");
static_assert(sizeof(BP_OilRigCannonBase_C_ReceiveTick) == 0x000004, "Wrong size on BP_OilRigCannonBase_C_ReceiveTick");
static_assert(offsetof(BP_OilRigCannonBase_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_OilRigCannonBase_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_OilRigCannonBase.BP_OilRigCannonBase_C.Interact Completed
// 0x0030 (0x0030 - 0x0000)
struct BP_OilRigCannonBase_C_Interact_Completed final
{
public:
	class AActor*                                 Other;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalInteractiveObjectIndicatorType            IndicatorType;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerController*                   CallFunc_GetPalPlayerController_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilRigCannonBase_C_Interact_Completed) == 0x000008, "Wrong alignment on BP_OilRigCannonBase_C_Interact_Completed");
static_assert(sizeof(BP_OilRigCannonBase_C_Interact_Completed) == 0x000030, "Wrong size on BP_OilRigCannonBase_C_Interact_Completed");
static_assert(offsetof(BP_OilRigCannonBase_C_Interact_Completed, Other) == 0x000000, "Member 'BP_OilRigCannonBase_C_Interact_Completed::Other' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannonBase_C_Interact_Completed, IndicatorType) == 0x000008, "Member 'BP_OilRigCannonBase_C_Interact_Completed::IndicatorType' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannonBase_C_Interact_Completed, K2Node_DynamicCast_AsPal_Player_Character) == 0x000010, "Member 'BP_OilRigCannonBase_C_Interact_Completed::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannonBase_C_Interact_Completed, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_OilRigCannonBase_C_Interact_Completed::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannonBase_C_Interact_Completed, CallFunc_GetPalPlayerController_ReturnValue) == 0x000020, "Member 'BP_OilRigCannonBase_C_Interact_Completed::CallFunc_GetPalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannonBase_C_Interact_Completed, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_OilRigCannonBase_C_Interact_Completed::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannonBase_C_Interact_Completed, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'BP_OilRigCannonBase_C_Interact_Completed::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_OilRigCannonBase.BP_OilRigCannonBase_C.ExecuteUbergraph_BP_OilRigCannonBase
// 0x0058 (0x0058 - 0x0000)
struct BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IPalInteractiveObjectIndicatorInterface> CallFunc_SetIndicatorInterface_InIndicatorInterface_CastInput; // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TDelegate<void(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDestroyedWeapon_ReturnValue;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase) == 0x000008, "Wrong alignment on BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase");
static_assert(sizeof(BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase) == 0x000058, "Wrong size on BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase");
static_assert(offsetof(BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase, EntryPoint) == 0x000000, "Member 'BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase, CallFunc_SetIndicatorInterface_InIndicatorInterface_CastInput) == 0x000008, "Member 'BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase::CallFunc_SetIndicatorInterface_InIndicatorInterface_CastInput' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase, K2Node_CreateDelegate_OutputDelegate_2) == 0x000038, "Member 'BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase, K2Node_Event_DeltaSeconds) == 0x00004C, "Member 'BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase, CallFunc_IsDestroyedWeapon_ReturnValue) == 0x000050, "Member 'BP_OilRigCannonBase_C_ExecuteUbergraph_BP_OilRigCannonBase::CallFunc_IsDestroyedWeapon_ReturnValue' has a wrong offset!");

// Function BP_OilRigCannonBase.BP_OilRigCannonBase_C.GetIndicatorType
// 0x0002 (0x0002 - 0x0000)
struct BP_OilRigCannonBase_C_GetIndicatorType final
{
public:
	EPalInteractiveObjectIndicatorType            ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDestroyedWeapon_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilRigCannonBase_C_GetIndicatorType) == 0x000001, "Wrong alignment on BP_OilRigCannonBase_C_GetIndicatorType");
static_assert(sizeof(BP_OilRigCannonBase_C_GetIndicatorType) == 0x000002, "Wrong size on BP_OilRigCannonBase_C_GetIndicatorType");
static_assert(offsetof(BP_OilRigCannonBase_C_GetIndicatorType, ReturnValue) == 0x000000, "Member 'BP_OilRigCannonBase_C_GetIndicatorType::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannonBase_C_GetIndicatorType, CallFunc_IsDestroyedWeapon_ReturnValue) == 0x000001, "Member 'BP_OilRigCannonBase_C_GetIndicatorType::CallFunc_IsDestroyedWeapon_ReturnValue' has a wrong offset!");

}

