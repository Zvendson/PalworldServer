#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_BuildObject_Light_FirePlace01_classes.hpp"
#include "PalSDK/BP_BuildObject_Light_FirePlace01_parameters.hpp"


namespace PalSDK
{

// Function BP_BuildObject_Light_FirePlace01.BP_BuildObject_Light_FirePlace01_C.ExecuteUbergraph_BP_BuildObject_Light_FirePlace01
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Light_FirePlace01_C::ExecuteUbergraph_BP_BuildObject_Light_FirePlace01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Light_FirePlace01_C", "ExecuteUbergraph_BP_BuildObject_Light_FirePlace01");

	Params::BP_BuildObject_Light_FirePlace01_C_ExecuteUbergraph_BP_BuildObject_Light_FirePlace01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_Light_FirePlace01.BP_BuildObject_Light_FirePlace01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BuildObject_Light_FirePlace01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Light_FirePlace01_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_Light_FirePlace01.BP_BuildObject_Light_FirePlace01_C.SetActiveLight
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bActive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Light_FirePlace01_C::SetActiveLight(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Light_FirePlace01_C", "SetActiveLight");

	Params::BP_BuildObject_Light_FirePlace01_C_SetActiveLight Parms{};

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);
}

}

