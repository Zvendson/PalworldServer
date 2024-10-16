#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_BuildObject_OlympicCauldron_classes.hpp"
#include "PalSDK/BP_BuildObject_OlympicCauldron_parameters.hpp"


namespace PalSDK
{

// Function BP_BuildObject_OlympicCauldron.BP_BuildObject_OlympicCauldron_C.BP_OnSetConcreteModel
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   ConcreteModel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_OlympicCauldron_C::BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_OlympicCauldron_C", "BP_OnSetConcreteModel");

	Params::BP_BuildObject_OlympicCauldron_C_BP_OnSetConcreteModel Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_OlympicCauldron.BP_BuildObject_OlympicCauldron_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_OlympicCauldron_C::CustomEvent(class UPalMapObjectConcreteModelBase* Model)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_OlympicCauldron_C", "CustomEvent");

	Params::BP_BuildObject_OlympicCauldron_C_CustomEvent Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_OlympicCauldron.BP_BuildObject_OlympicCauldron_C.ExecuteUbergraph_BP_BuildObject_OlympicCauldron
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_OlympicCauldron_C::ExecuteUbergraph_BP_BuildObject_OlympicCauldron(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_OlympicCauldron_C", "ExecuteUbergraph_BP_BuildObject_OlympicCauldron");

	Params::BP_BuildObject_OlympicCauldron_C_ExecuteUbergraph_BP_BuildObject_OlympicCauldron Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_OlympicCauldron.BP_BuildObject_OlympicCauldron_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BuildObject_OlympicCauldron_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_OlympicCauldron_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_OlympicCauldron.BP_BuildObject_OlympicCauldron_C.SetActive_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_OlympicCauldron_C::SetActive_Internal(bool bOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_OlympicCauldron_C", "SetActive_Internal");

	Params::BP_BuildObject_OlympicCauldron_C_SetActive_Internal Parms{};

	Parms.bOn = bOn;

	UObject::ProcessEvent(Func, &Parms);
}

}

