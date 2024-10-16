#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_UIIndividualParameterInitializeWaiter_classes.hpp"
#include "PalSDK/BP_UIIndividualParameterInitializeWaiter_parameters.hpp"


namespace PalSDK
{

// Function BP_UIIndividualParameterInitializeWaiter.BP_UIIndividualParameterInitializeWaiter_C.CheckIndividual
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_UIIndividualParameterInitializeWaiter_C::CheckIndividual()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIIndividualParameterInitializeWaiter_C", "CheckIndividual");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UIIndividualParameterInitializeWaiter.BP_UIIndividualParameterInitializeWaiter_C.OnComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    TargetCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_UIIndividualParameterInitializeWaiter_C*SelfObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_UIIndividualParameterInitializeWaiter_C::OnComplete__DelegateSignature(class APalCharacter* TargetCharacter, class UBP_UIIndividualParameterInitializeWaiter_C* SelfObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIIndividualParameterInitializeWaiter_C", "OnComplete__DelegateSignature");

	Params::BP_UIIndividualParameterInitializeWaiter_C_OnComplete__DelegateSignature Parms{};

	Parms.TargetCharacter = TargetCharacter;
	Parms.SelfObject = SelfObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UIIndividualParameterInitializeWaiter.BP_UIIndividualParameterInitializeWaiter_C.OnCompleteInitiaize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_UIIndividualParameterInitializeWaiter_C::OnCompleteInitiaize(class APalCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIIndividualParameterInitializeWaiter_C", "OnCompleteInitiaize");

	Params::BP_UIIndividualParameterInitializeWaiter_C_OnCompleteInitiaize Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UIIndividualParameterInitializeWaiter.BP_UIIndividualParameterInitializeWaiter_C.Register
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    TargetCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_UIIndividualParameterInitializeWaiter_C::Register(class APalCharacter* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIIndividualParameterInitializeWaiter_C", "Register");

	Params::BP_UIIndividualParameterInitializeWaiter_C_Register Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);
}

}

