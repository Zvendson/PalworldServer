#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_BuildObject_Lamp_Base_classes.hpp"
#include "PalSDK/BP_BuildObject_Lamp_Base_parameters.hpp"


namespace PalSDK
{

// Function BP_BuildObject_Lamp_Base.BP_BuildObject_Lamp_Base_C.BP_OnSetConcreteModel
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   ConcreteModel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Lamp_Base_C::BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Lamp_Base_C", "BP_OnSetConcreteModel");

	Params::BP_BuildObject_Lamp_Base_C_BP_OnSetConcreteModel Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_Lamp_Base.BP_BuildObject_Lamp_Base_C.ExecuteUbergraph_BP_BuildObject_Lamp_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Lamp_Base_C::ExecuteUbergraph_BP_BuildObject_Lamp_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Lamp_Base_C", "ExecuteUbergraph_BP_BuildObject_Lamp_Base");

	Params::BP_BuildObject_Lamp_Base_C_ExecuteUbergraph_BP_BuildObject_Lamp_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_Lamp_Base.BP_BuildObject_Lamp_Base_C.OnReadySwitchModule
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelModuleBase*Module                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Lamp_Base_C::OnReadySwitchModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Lamp_Base_C", "OnReadySwitchModule");

	Params::BP_BuildObject_Lamp_Base_C_OnReadySwitchModule Parms{};

	Parms.Model = Model;
	Parms.Module = Module;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_Lamp_Base.BP_BuildObject_Lamp_Base_C.OnUpdateSwitchStateInternal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectSwitchModule*        SwitchModule                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Lamp_Base_C::OnUpdateSwitchStateInternal(class UPalMapObjectSwitchModule* SwitchModule)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Lamp_Base_C", "OnUpdateSwitchStateInternal");

	Params::BP_BuildObject_Lamp_Base_C_OnUpdateSwitchStateInternal Parms{};

	Parms.SwitchModule = SwitchModule;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_Lamp_Base.BP_BuildObject_Lamp_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BuildObject_Lamp_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Lamp_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_Lamp_Base.BP_BuildObject_Lamp_Base_C.SetActiveLight
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bActive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Lamp_Base_C::SetActiveLight(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Lamp_Base_C", "SetActiveLight");

	Params::BP_BuildObject_Lamp_Base_C_SetActiveLight Parms{};

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);
}

}

