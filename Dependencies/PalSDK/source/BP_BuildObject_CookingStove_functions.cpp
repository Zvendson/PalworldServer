#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_BuildObject_CookingStove_classes.hpp"
#include "PalSDK/BP_BuildObject_CookingStove_parameters.hpp"


namespace PalSDK
{

// Function BP_BuildObject_CookingStove.BP_BuildObject_CookingStove_C.ExecuteUbergraph_BP_BuildObject_CookingStove
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_CookingStove_C::ExecuteUbergraph_BP_BuildObject_CookingStove(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_CookingStove_C", "ExecuteUbergraph_BP_BuildObject_CookingStove");

	Params::BP_BuildObject_CookingStove_C_ExecuteUbergraph_BP_BuildObject_CookingStove Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_CookingStove.BP_BuildObject_CookingStove_C.OnAvailable_BlueprintImpl
// (Event, Protected, BlueprintEvent)

void ABP_BuildObject_CookingStove_C::OnAvailable_BlueprintImpl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_CookingStove_C", "OnAvailable_BlueprintImpl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_CookingStove.BP_BuildObject_CookingStove_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BuildObject_CookingStove_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_CookingStove_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_CookingStove.BP_BuildObject_CookingStove_C.SetActive_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_CookingStove_C::SetActive_Internal(bool bOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_CookingStove_C", "SetActive_Internal");

	Params::BP_BuildObject_CookingStove_C_SetActive_Internal Parms{};

	Parms.bOn = bOn;

	UObject::ProcessEvent(Func, &Parms);
}

}

