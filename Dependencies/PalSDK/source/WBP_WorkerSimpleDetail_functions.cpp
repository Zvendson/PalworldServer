#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_WorkerSimpleDetail_classes.hpp"
#include "PalSDK/WBP_WorkerSimpleDetail_parameters.hpp"


namespace PalSDK
{

// Function WBP_WorkerSimpleDetail.WBP_WorkerSimpleDetail_C.CloseSetup
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_WorkerSimpleDetail_C::CloseSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorkerSimpleDetail_C", "CloseSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WorkerSimpleDetail.WBP_WorkerSimpleDetail_C.OpenSetup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    TargetHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_WorkerSimpleDetail_C::OpenSetup(class UPalIndividualCharacterHandle* TargetHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WorkerSimpleDetail_C", "OpenSetup");

	Params::WBP_WorkerSimpleDetail_C_OpenSetup Parms{};

	Parms.TargetHandle = TargetHandle;

	UObject::ProcessEvent(Func, &Parms);
}

}

