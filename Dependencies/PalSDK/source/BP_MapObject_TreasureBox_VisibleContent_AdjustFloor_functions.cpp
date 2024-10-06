#include "PalServer/Basic.hpp"

#include "PalServer/BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_classes.hpp"
#include "PalServer/BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_parameters.hpp"


namespace PalServer
{

// Function BP_MapObject_TreasureBox_VisibleContent_AdjustFloor.BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C.ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C::ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C", "ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor");

	Params::BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MapObject_TreasureBox_VisibleContent_AdjustFloor.BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

