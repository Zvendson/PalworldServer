#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Action_Unique_VolcanicMonster_Ice_IceAttack_classes.hpp"
#include "PalSDK/BP_Action_Unique_VolcanicMonster_Ice_IceAttack_parameters.hpp"


namespace PalSDK
{

// Function BP_Action_Unique_VolcanicMonster_Ice_IceAttack.BP_Action_Unique_VolcanicMonster_Ice_IceAttack_C.GetEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_VolcanicMonster_Ice_IceAttack_C::GetEffect(class UClass** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_VolcanicMonster_Ice_IceAttack_C", "GetEffect");

	Params::BP_Action_Unique_VolcanicMonster_Ice_IceAttack_C_GetEffect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_Action_Unique_VolcanicMonster_Ice_IceAttack.BP_Action_Unique_VolcanicMonster_Ice_IceAttack_C.GetMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*                     NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_VolcanicMonster_Ice_IceAttack_C::GetMontage(class UAnimMontage** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_VolcanicMonster_Ice_IceAttack_C", "GetMontage");

	Params::BP_Action_Unique_VolcanicMonster_Ice_IceAttack_C_GetMontage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}

}

