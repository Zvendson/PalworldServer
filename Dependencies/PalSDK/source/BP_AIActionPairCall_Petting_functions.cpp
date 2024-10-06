#include "PalServer/Basic.hpp"

#include "PalServer/BP_AIActionPairCall_Petting_classes.hpp"
#include "PalServer/BP_AIActionPairCall_Petting_parameters.hpp"


namespace PalServer
{

// Function BP_AIActionPairCall_Petting.BP_AIActionPairCall_Petting_C.ActionAbort
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionPairCall_Petting_C::ActionAbort(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionPairCall_Petting_C", "ActionAbort");

	Params::BP_AIActionPairCall_Petting_C_ActionAbort Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionPairCall_Petting.BP_AIActionPairCall_Petting_C.ExecuteUbergraph_BP_AIActionPairCall_Petting
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionPairCall_Petting_C::ExecuteUbergraph_BP_AIActionPairCall_Petting(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionPairCall_Petting_C", "ExecuteUbergraph_BP_AIActionPairCall_Petting");

	Params::BP_AIActionPairCall_Petting_C_ExecuteUbergraph_BP_AIActionPairCall_Petting Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionPairCall_Petting.BP_AIActionPairCall_Petting_C.IsMomoChyo
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AIActionPairCall_Petting_C::IsMomoChyo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionPairCall_Petting_C", "IsMomoChyo");

	Params::BP_AIActionPairCall_Petting_C_IsMomoChyo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AIActionPairCall_Petting.BP_AIActionPairCall_Petting_C.OnFinish
// (BlueprintCallable, BlueprintEvent)

void UBP_AIActionPairCall_Petting_C::OnFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionPairCall_Petting_C", "OnFinish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIActionPairCall_Petting.BP_AIActionPairCall_Petting_C.OnStartPair
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_AIActionPairCall_Petting_C::OnStartPair()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionPairCall_Petting_C", "OnStartPair");

	UObject::ProcessEvent(Func, nullptr);
}

}

