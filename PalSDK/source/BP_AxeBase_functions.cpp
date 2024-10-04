#include "PalServer/Basic.hpp"

#include "PalServer/BP_AxeBase_classes.hpp"
#include "PalServer/BP_AxeBase_parameters.hpp"


namespace PalServer
{

// Function BP_AxeBase.BP_AxeBase_C.GetLeftHandTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform ABP_AxeBase_C::GetLeftHandTransform() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AxeBase_C", "GetLeftHandTransform");

	Params::BP_AxeBase_C_GetLeftHandTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

