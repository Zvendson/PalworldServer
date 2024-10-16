#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_BuildObject_CampFire_classes.hpp"
#include "PalSDK/BP_BuildObject_CampFire_parameters.hpp"


namespace PalSDK
{

// Function BP_BuildObject_CampFire.BP_BuildObject_CampFire_C.ExecuteUbergraph_BP_BuildObject_CampFire
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_CampFire_C::ExecuteUbergraph_BP_BuildObject_CampFire(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_CampFire_C", "ExecuteUbergraph_BP_BuildObject_CampFire");

	Params::BP_BuildObject_CampFire_C_ExecuteUbergraph_BP_BuildObject_CampFire Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_CampFire.BP_BuildObject_CampFire_C.OnAvailable_BlueprintImpl
// (Event, Protected, BlueprintEvent)

void ABP_BuildObject_CampFire_C::OnAvailable_BlueprintImpl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_CampFire_C", "OnAvailable_BlueprintImpl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_CampFire.BP_BuildObject_CampFire_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BuildObject_CampFire_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_CampFire_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_CampFire.BP_BuildObject_CampFire_C.SetActive_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_CampFire_C::SetActive_Internal(bool bOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_CampFire_C", "SetActive_Internal");

	Params::BP_BuildObject_CampFire_C_SetActive_Internal Parms{};

	Parms.bOn = bOn;

	UObject::ProcessEvent(Func, &Parms);
}

}

