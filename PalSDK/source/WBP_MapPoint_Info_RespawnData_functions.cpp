#include "PalServer/Basic.hpp"

#include "PalServer/WBP_MapPoint_Info_RespawnData_classes.hpp"
#include "PalServer/WBP_MapPoint_Info_RespawnData_parameters.hpp"


namespace PalServer
{

// Function WBP_MapPoint_Info_RespawnData.WBP_MapPoint_Info_RespawnData_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MapPoint_Info_RespawnData_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapPoint_Info_RespawnData_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MapPoint_Info_RespawnData.WBP_MapPoint_Info_RespawnData_C.ExecuteUbergraph_WBP_MapPoint_Info_RespawnData
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapPoint_Info_RespawnData_C::ExecuteUbergraph_WBP_MapPoint_Info_RespawnData(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapPoint_Info_RespawnData_C", "ExecuteUbergraph_WBP_MapPoint_Info_RespawnData");

	Params::WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapPoint_Info_RespawnData.WBP_MapPoint_Info_RespawnData_C.SetRank
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rank                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapPoint_Info_RespawnData_C::SetRank(int32 Rank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapPoint_Info_RespawnData_C", "SetRank");

	Params::WBP_MapPoint_Info_RespawnData_C_SetRank Parms{};

	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);
}

}

