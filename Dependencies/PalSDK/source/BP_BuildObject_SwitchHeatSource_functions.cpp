#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_BuildObject_SwitchHeatSource_classes.hpp"
#include "PalSDK/BP_BuildObject_SwitchHeatSource_parameters.hpp"


namespace PalSDK
{

// Function BP_BuildObject_SwitchHeatSource.BP_BuildObject_SwitchHeatSource_C.BP_OnSetConcreteModel
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   ConcreteModel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_SwitchHeatSource_C::BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_SwitchHeatSource_C", "BP_OnSetConcreteModel");

	Params::BP_BuildObject_SwitchHeatSource_C_BP_OnSetConcreteModel Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_SwitchHeatSource.BP_BuildObject_SwitchHeatSource_C.ExecuteUbergraph_BP_BuildObject_SwitchHeatSource
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_SwitchHeatSource_C::ExecuteUbergraph_BP_BuildObject_SwitchHeatSource(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_SwitchHeatSource_C", "ExecuteUbergraph_BP_BuildObject_SwitchHeatSource");

	Params::BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_SwitchHeatSource.BP_BuildObject_SwitchHeatSource_C.OnAvailableConcreteModel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_SwitchHeatSource_C::OnAvailableConcreteModel(class UPalMapObjectConcreteModelBase* Model)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_SwitchHeatSource_C", "OnAvailableConcreteModel");

	Params::BP_BuildObject_SwitchHeatSource_C_OnAvailableConcreteModel Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_SwitchHeatSource.BP_BuildObject_SwitchHeatSource_C.OnReadySwitchModule
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelModuleBase*Module                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_SwitchHeatSource_C::OnReadySwitchModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_SwitchHeatSource_C", "OnReadySwitchModule");

	Params::BP_BuildObject_SwitchHeatSource_C_OnReadySwitchModule Parms{};

	Parms.Model = Model;
	Parms.Module = Module;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_SwitchHeatSource.BP_BuildObject_SwitchHeatSource_C.OnUpdateSwitch
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectSwitchModule*        Module                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_SwitchHeatSource_C::OnUpdateSwitch(class UPalMapObjectSwitchModule* Module)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_SwitchHeatSource_C", "OnUpdateSwitch");

	Params::BP_BuildObject_SwitchHeatSource_C_OnUpdateSwitch Parms{};

	Parms.Module = Module;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_SwitchHeatSource.BP_BuildObject_SwitchHeatSource_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BuildObject_SwitchHeatSource_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_SwitchHeatSource_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

