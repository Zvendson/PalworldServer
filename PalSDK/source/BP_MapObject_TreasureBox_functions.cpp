#include "PalServer/Basic.hpp"

#include "PalServer/BP_MapObject_TreasureBox_classes.hpp"
#include "PalServer/BP_MapObject_TreasureBox_parameters.hpp"


namespace PalServer
{

// Function BP_MapObject_TreasureBox.BP_MapObject_TreasureBox_C.BP_OnSetConcreteModel
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   ConcreteModel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_TreasureBox_C::BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_C", "BP_OnSetConcreteModel");

	Params::BP_MapObject_TreasureBox_C_BP_OnSetConcreteModel Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_TreasureBox.BP_MapObject_TreasureBox_C.ExecuteUbergraph_BP_MapObject_TreasureBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_TreasureBox_C::ExecuteUbergraph_BP_MapObject_TreasureBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_C", "ExecuteUbergraph_BP_MapObject_TreasureBox");

	Params::BP_MapObject_TreasureBox_C_ExecuteUbergraph_BP_MapObject_TreasureBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_TreasureBox.BP_MapObject_TreasureBox_C.OnFinishOpenVisual
// (BlueprintCallable, BlueprintEvent)

void ABP_MapObject_TreasureBox_C::OnFinishOpenVisual()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_C", "OnFinishOpenVisual");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapObject_TreasureBox.BP_MapObject_TreasureBox_C.OnNotifiedStartOpen
// (BlueprintCallable, BlueprintEvent)

void ABP_MapObject_TreasureBox_C::OnNotifiedStartOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_C", "OnNotifiedStartOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapObject_TreasureBox.BP_MapObject_TreasureBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MapObject_TreasureBox_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapObject_TreasureBox.BP_MapObject_TreasureBox_C.SetupVisual
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   ConcreteModel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_TreasureBox_C::SetupVisual(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_C", "SetupVisual");

	Params::BP_MapObject_TreasureBox_C_SetupVisual Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_TreasureBox.BP_MapObject_TreasureBox_C.TriggerOpen
// (Event, Protected, BlueprintEvent)

void ABP_MapObject_TreasureBox_C::TriggerOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_C", "TriggerOpen");

	UObject::ProcessEvent(Func, nullptr);
}

}

