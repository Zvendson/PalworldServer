#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_AIActionPairCall_Petting.BP_AIActionPairCall_Petting_C.ActionAbort
// 0x0008 (0x0008 - 0x0000)
struct BP_AIActionPairCall_Petting_C_ActionAbort final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionPairCall_Petting_C_ActionAbort) == 0x000008, "Wrong alignment on BP_AIActionPairCall_Petting_C_ActionAbort");
static_assert(sizeof(BP_AIActionPairCall_Petting_C_ActionAbort) == 0x000008, "Wrong size on BP_AIActionPairCall_Petting_C_ActionAbort");
static_assert(offsetof(BP_AIActionPairCall_Petting_C_ActionAbort, ControlledPawn) == 0x000000, "Member 'BP_AIActionPairCall_Petting_C_ActionAbort::ControlledPawn' has a wrong offset!");

// Function BP_AIActionPairCall_Petting.BP_AIActionPairCall_Petting_C.ExecuteUbergraph_BP_AIActionPairCall_Petting
// 0x0020 (0x0020 - 0x0000)
struct BP_AIActionPairCall_Petting_C_ExecuteUbergraph_BP_AIActionPairCall_Petting final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMomoChyo_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectComponent*              CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionPairCall_Petting_C_ExecuteUbergraph_BP_AIActionPairCall_Petting) == 0x000008, "Wrong alignment on BP_AIActionPairCall_Petting_C_ExecuteUbergraph_BP_AIActionPairCall_Petting");
static_assert(sizeof(BP_AIActionPairCall_Petting_C_ExecuteUbergraph_BP_AIActionPairCall_Petting) == 0x000020, "Wrong size on BP_AIActionPairCall_Petting_C_ExecuteUbergraph_BP_AIActionPairCall_Petting");
static_assert(offsetof(BP_AIActionPairCall_Petting_C_ExecuteUbergraph_BP_AIActionPairCall_Petting, EntryPoint) == 0x000000, "Member 'BP_AIActionPairCall_Petting_C_ExecuteUbergraph_BP_AIActionPairCall_Petting::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCall_Petting_C_ExecuteUbergraph_BP_AIActionPairCall_Petting, CallFunc_IsMomoChyo_ReturnValue) == 0x000004, "Member 'BP_AIActionPairCall_Petting_C_ExecuteUbergraph_BP_AIActionPairCall_Petting::CallFunc_IsMomoChyo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCall_Petting_C_ExecuteUbergraph_BP_AIActionPairCall_Petting, K2Node_Event_ControlledPawn) == 0x000008, "Member 'BP_AIActionPairCall_Petting_C_ExecuteUbergraph_BP_AIActionPairCall_Petting::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCall_Petting_C_ExecuteUbergraph_BP_AIActionPairCall_Petting, CallFunc_GetCharacter_ReturnValue) == 0x000010, "Member 'BP_AIActionPairCall_Petting_C_ExecuteUbergraph_BP_AIActionPairCall_Petting::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCall_Petting_C_ExecuteUbergraph_BP_AIActionPairCall_Petting, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_AIActionPairCall_Petting_C_ExecuteUbergraph_BP_AIActionPairCall_Petting::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function BP_AIActionPairCall_Petting.BP_AIActionPairCall_Petting_C.IsMomoChyo
// 0x0020 (0x0020 - 0x0000)
struct BP_AIActionPairCall_Petting_C_IsMomoChyo final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameter_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionPairCall_Petting_C_IsMomoChyo) == 0x000008, "Wrong alignment on BP_AIActionPairCall_Petting_C_IsMomoChyo");
static_assert(sizeof(BP_AIActionPairCall_Petting_C_IsMomoChyo) == 0x000020, "Wrong size on BP_AIActionPairCall_Petting_C_IsMomoChyo");
static_assert(offsetof(BP_AIActionPairCall_Petting_C_IsMomoChyo, ReturnValue) == 0x000000, "Member 'BP_AIActionPairCall_Petting_C_IsMomoChyo::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCall_Petting_C_IsMomoChyo, CallFunc_GetCharacterParameter_ReturnValue) == 0x000008, "Member 'BP_AIActionPairCall_Petting_C_IsMomoChyo::CallFunc_GetCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCall_Petting_C_IsMomoChyo, CallFunc_GetCharacterID_ReturnValue) == 0x000010, "Member 'BP_AIActionPairCall_Petting_C_IsMomoChyo::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCall_Petting_C_IsMomoChyo, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000018, "Member 'BP_AIActionPairCall_Petting_C_IsMomoChyo::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCall_Petting_C_IsMomoChyo, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x000019, "Member 'BP_AIActionPairCall_Petting_C_IsMomoChyo::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCall_Petting_C_IsMomoChyo, CallFunc_BooleanOR_ReturnValue) == 0x00001A, "Member 'BP_AIActionPairCall_Petting_C_IsMomoChyo::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_AIActionPairCall_Petting.BP_AIActionPairCall_Petting_C.OnStartPair
// 0x0030 (0x0030 - 0x0000)
struct BP_AIActionPairCall_Petting_C_OnStartPair final
{
public:
	bool                                          CallFunc_IsMomoChyo_ReturnValue;                   // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalVisualEffectDynamicParameter       K2Node_MakeStruct_PalVisualEffectDynamicParameter; // 0x0008(0x0010)()
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectComponent*              CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectBase*                   CallFunc_AddVisualEffect_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionPairCall_Petting_C_OnStartPair) == 0x000008, "Wrong alignment on BP_AIActionPairCall_Petting_C_OnStartPair");
static_assert(sizeof(BP_AIActionPairCall_Petting_C_OnStartPair) == 0x000030, "Wrong size on BP_AIActionPairCall_Petting_C_OnStartPair");
static_assert(offsetof(BP_AIActionPairCall_Petting_C_OnStartPair, CallFunc_IsMomoChyo_ReturnValue) == 0x000000, "Member 'BP_AIActionPairCall_Petting_C_OnStartPair::CallFunc_IsMomoChyo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCall_Petting_C_OnStartPair, K2Node_MakeStruct_PalVisualEffectDynamicParameter) == 0x000008, "Member 'BP_AIActionPairCall_Petting_C_OnStartPair::K2Node_MakeStruct_PalVisualEffectDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCall_Petting_C_OnStartPair, CallFunc_GetCharacter_ReturnValue) == 0x000018, "Member 'BP_AIActionPairCall_Petting_C_OnStartPair::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCall_Petting_C_OnStartPair, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_AIActionPairCall_Petting_C_OnStartPair::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionPairCall_Petting_C_OnStartPair, CallFunc_AddVisualEffect_ReturnValue) == 0x000028, "Member 'BP_AIActionPairCall_Petting_C_OnStartPair::CallFunc_AddVisualEffect_ReturnValue' has a wrong offset!");

}

