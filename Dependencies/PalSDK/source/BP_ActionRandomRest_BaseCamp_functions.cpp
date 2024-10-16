#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionRandomRest_BaseCamp_classes.hpp"
#include "PalSDK/BP_ActionRandomRest_BaseCamp_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionRandomRest_BaseCamp.BP_ActionRandomRest_BaseCamp_C.GetRandomRestInfo
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalRandomRestInfo               ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor)

struct FPalRandomRestInfo UBP_ActionRandomRest_BaseCamp_C::GetRandomRestInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionRandomRest_BaseCamp_C", "GetRandomRestInfo");

	Params::BP_ActionRandomRest_BaseCamp_C_GetRandomRestInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

