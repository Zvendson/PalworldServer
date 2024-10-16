#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_BuildObject_Crusher_classes.hpp"
#include "PalSDK/BP_BuildObject_Crusher_parameters.hpp"


namespace PalSDK
{

// Function BP_BuildObject_Crusher.BP_BuildObject_Crusher_C.ExecuteUbergraph_BP_BuildObject_Crusher
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Crusher_C::ExecuteUbergraph_BP_BuildObject_Crusher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Crusher_C", "ExecuteUbergraph_BP_BuildObject_Crusher");

	Params::BP_BuildObject_Crusher_C_ExecuteUbergraph_BP_BuildObject_Crusher Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_Crusher.BP_BuildObject_Crusher_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BuildObject_Crusher_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Crusher_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_Crusher.BP_BuildObject_Crusher_C.RotateMill
// (BlueprintCallable, BlueprintEvent)

void ABP_BuildObject_Crusher_C::RotateMill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Crusher_C", "RotateMill");

	UObject::ProcessEvent(Func, nullptr);
}

}

