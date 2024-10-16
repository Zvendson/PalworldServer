#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_UIIndividualParameterInitializeWaiter.BP_UIIndividualParameterInitializeWaiter_C.CheckIndividual
// 0x0018 (0x0018 - 0x0000)
struct BP_UIIndividualParameterInitializeWaiter_C_CheckIndividual final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_GetIndividualCharacterParameterByActor_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIIndividualParameterInitializeWaiter_C_CheckIndividual) == 0x000008, "Wrong alignment on BP_UIIndividualParameterInitializeWaiter_C_CheckIndividual");
static_assert(sizeof(BP_UIIndividualParameterInitializeWaiter_C_CheckIndividual) == 0x000018, "Wrong size on BP_UIIndividualParameterInitializeWaiter_C_CheckIndividual");
static_assert(offsetof(BP_UIIndividualParameterInitializeWaiter_C_CheckIndividual, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_UIIndividualParameterInitializeWaiter_C_CheckIndividual::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIIndividualParameterInitializeWaiter_C_CheckIndividual, CallFunc_GetIndividualCharacterParameterByActor_ReturnValue) == 0x000008, "Member 'BP_UIIndividualParameterInitializeWaiter_C_CheckIndividual::CallFunc_GetIndividualCharacterParameterByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIIndividualParameterInitializeWaiter_C_CheckIndividual, CallFunc_IsValid_ReturnValue_1) == 0x000010, "Member 'BP_UIIndividualParameterInitializeWaiter_C_CheckIndividual::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_UIIndividualParameterInitializeWaiter.BP_UIIndividualParameterInitializeWaiter_C.OnComplete__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_UIIndividualParameterInitializeWaiter_C_OnComplete__DelegateSignature final
{
public:
	class APalCharacter*                          TargetCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_UIIndividualParameterInitializeWaiter_C* SelfObject;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIIndividualParameterInitializeWaiter_C_OnComplete__DelegateSignature) == 0x000008, "Wrong alignment on BP_UIIndividualParameterInitializeWaiter_C_OnComplete__DelegateSignature");
static_assert(sizeof(BP_UIIndividualParameterInitializeWaiter_C_OnComplete__DelegateSignature) == 0x000010, "Wrong size on BP_UIIndividualParameterInitializeWaiter_C_OnComplete__DelegateSignature");
static_assert(offsetof(BP_UIIndividualParameterInitializeWaiter_C_OnComplete__DelegateSignature, TargetCharacter) == 0x000000, "Member 'BP_UIIndividualParameterInitializeWaiter_C_OnComplete__DelegateSignature::TargetCharacter' has a wrong offset!");
static_assert(offsetof(BP_UIIndividualParameterInitializeWaiter_C_OnComplete__DelegateSignature, SelfObject) == 0x000008, "Member 'BP_UIIndividualParameterInitializeWaiter_C_OnComplete__DelegateSignature::SelfObject' has a wrong offset!");

// Function BP_UIIndividualParameterInitializeWaiter.BP_UIIndividualParameterInitializeWaiter_C.OnCompleteInitiaize
// 0x0028 (0x0028 - 0x0000)
struct BP_UIIndividualParameterInitializeWaiter_C_OnCompleteInitiaize final
{
public:
	class APalCharacter*                          Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APalCharacter* InCharacter)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIIndividualParameterInitializeWaiter_C_OnCompleteInitiaize) == 0x000008, "Wrong alignment on BP_UIIndividualParameterInitializeWaiter_C_OnCompleteInitiaize");
static_assert(sizeof(BP_UIIndividualParameterInitializeWaiter_C_OnCompleteInitiaize) == 0x000028, "Wrong size on BP_UIIndividualParameterInitializeWaiter_C_OnCompleteInitiaize");
static_assert(offsetof(BP_UIIndividualParameterInitializeWaiter_C_OnCompleteInitiaize, Character) == 0x000000, "Member 'BP_UIIndividualParameterInitializeWaiter_C_OnCompleteInitiaize::Character' has a wrong offset!");
static_assert(offsetof(BP_UIIndividualParameterInitializeWaiter_C_OnCompleteInitiaize, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_UIIndividualParameterInitializeWaiter_C_OnCompleteInitiaize::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_UIIndividualParameterInitializeWaiter_C_OnCompleteInitiaize, CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue) == 0x000018, "Member 'BP_UIIndividualParameterInitializeWaiter_C_OnCompleteInitiaize::CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIIndividualParameterInitializeWaiter_C_OnCompleteInitiaize, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_UIIndividualParameterInitializeWaiter_C_OnCompleteInitiaize::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_UIIndividualParameterInitializeWaiter.BP_UIIndividualParameterInitializeWaiter_C.Register
// 0x0038 (0x0038 - 0x0000)
struct BP_UIIndividualParameterInitializeWaiter_C_Register final
{
public:
	class APalCharacter*                          TargetCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APalCharacter* InCharacter)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UIIndividualParameterInitializeWaiter_C_Register) == 0x000008, "Wrong alignment on BP_UIIndividualParameterInitializeWaiter_C_Register");
static_assert(sizeof(BP_UIIndividualParameterInitializeWaiter_C_Register) == 0x000038, "Wrong size on BP_UIIndividualParameterInitializeWaiter_C_Register");
static_assert(offsetof(BP_UIIndividualParameterInitializeWaiter_C_Register, TargetCharacter) == 0x000000, "Member 'BP_UIIndividualParameterInitializeWaiter_C_Register::TargetCharacter' has a wrong offset!");
static_assert(offsetof(BP_UIIndividualParameterInitializeWaiter_C_Register, CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue) == 0x000008, "Member 'BP_UIIndividualParameterInitializeWaiter_C_Register::CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIIndividualParameterInitializeWaiter_C_Register, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_UIIndividualParameterInitializeWaiter_C_Register::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_UIIndividualParameterInitializeWaiter_C_Register, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'BP_UIIndividualParameterInitializeWaiter_C_Register::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_UIIndividualParameterInitializeWaiter_C_Register, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000030, "Member 'BP_UIIndividualParameterInitializeWaiter_C_Register::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

}

