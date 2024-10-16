#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_MapObject_TreasureBox_OilrigGoal_classes.hpp"
#include "PalSDK/BP_MapObject_TreasureBox_OilrigGoal_parameters.hpp"


namespace PalSDK
{

// Function BP_MapObject_TreasureBox_OilrigGoal.BP_MapObject_TreasureBox_OilrigGoal_C.ExecuteUbergraph_BP_MapObject_TreasureBox_OilrigGoal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_TreasureBox_OilrigGoal_C::ExecuteUbergraph_BP_MapObject_TreasureBox_OilrigGoal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_OilrigGoal_C", "ExecuteUbergraph_BP_MapObject_TreasureBox_OilrigGoal");

	Params::BP_MapObject_TreasureBox_OilrigGoal_C_ExecuteUbergraph_BP_MapObject_TreasureBox_OilrigGoal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_TreasureBox_OilrigGoal.BP_MapObject_TreasureBox_OilrigGoal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MapObject_TreasureBox_OilrigGoal_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_OilrigGoal_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MapObject_TreasureBox_OilrigGoal.BP_MapObject_TreasureBox_OilrigGoal_C.SetupVisual
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*   ConcreteModel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_TreasureBox_OilrigGoal_C::SetupVisual(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_OilrigGoal_C", "SetupVisual");

	Params::BP_MapObject_TreasureBox_OilrigGoal_C_SetupVisual Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_TreasureBox_OilrigGoal.BP_MapObject_TreasureBox_OilrigGoal_C.TriggerOpen
// (Event, Protected, BlueprintEvent)

void ABP_MapObject_TreasureBox_OilrigGoal_C::TriggerOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_OilrigGoal_C", "TriggerOpen");

	UObject::ProcessEvent(Func, nullptr);
}

}

