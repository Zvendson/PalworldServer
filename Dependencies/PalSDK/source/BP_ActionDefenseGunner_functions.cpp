#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionDefenseGunner_classes.hpp"
#include "PalSDK/BP_ActionDefenseGunner_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionDefenseGunner.BP_ActionDefenseGunner_C.ExecuteUbergraph_BP_ActionDefenseGunner
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDefenseGunner_C::ExecuteUbergraph_BP_ActionDefenseGunner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDefenseGunner_C", "ExecuteUbergraph_BP_ActionDefenseGunner");

	Params::BP_ActionDefenseGunner_C_ExecuteUbergraph_BP_ActionDefenseGunner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionDefenseGunner.BP_ActionDefenseGunner_C.FindMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     Montage                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Exist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDefenseGunner_C::FindMontage(class UAnimMontage** Montage, bool* Exist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDefenseGunner_C", "FindMontage");

	Params::BP_ActionDefenseGunner_C_FindMontage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Montage != nullptr)
		*Montage = Parms.Montage;

	if (Exist != nullptr)
		*Exist = Parms.Exist;
}


// Function BP_ActionDefenseGunner.BP_ActionDefenseGunner_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionDefenseGunner_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDefenseGunner_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDefenseGunner.BP_ActionDefenseGunner_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionDefenseGunner_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDefenseGunner_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

