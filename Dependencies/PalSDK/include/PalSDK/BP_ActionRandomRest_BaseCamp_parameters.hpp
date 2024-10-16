#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_ActionRandomRest_BaseCamp.BP_ActionRandomRest_BaseCamp_C.GetRandomRestInfo
// 0x0078 (0x0078 - 0x0000)
struct BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo final
{
public:
	struct FPalRandomRestInfo                     ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm, NoDestructor)
	class UAnimMontage*                           EatAnimMontage;                                    // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  StaticCharacterParameter;                          // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalActionType                                Temp_byte_Variable;                                // 0x0028(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAnimMontage*>                   K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ConstParm, ReferenceParm)
	struct FPalRandomRestInfo                     CallFunc_GetRandomRestInfoWithOption_ReturnValue;  // 0x0040(0x0018)(NoDestructor)
	class UAnimMontage*                           CallFunc_Map_Find_Value;                           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo) == 0x000008, "Wrong alignment on BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo");
static_assert(sizeof(BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo) == 0x000078, "Wrong size on BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo");
static_assert(offsetof(BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo, ReturnValue) == 0x000000, "Member 'BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo, EatAnimMontage) == 0x000018, "Member 'BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo::EatAnimMontage' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo, StaticCharacterParameter) == 0x000020, "Member 'BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo::StaticCharacterParameter' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo, Temp_byte_Variable) == 0x000028, "Member 'BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo, K2Node_MakeArray_Array) == 0x000030, "Member 'BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo, CallFunc_GetRandomRestInfoWithOption_ReturnValue) == 0x000040, "Member 'BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo::CallFunc_GetRandomRestInfoWithOption_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo, CallFunc_Map_Find_Value) == 0x000058, "Member 'BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo, CallFunc_Map_Find_ReturnValue) == 0x000060, "Member 'BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo, CallFunc_GetActionCharacter_ReturnValue) == 0x000068, "Member 'BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo, CallFunc_GetComponentByClass_ReturnValue) == 0x000070, "Member 'BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

}

