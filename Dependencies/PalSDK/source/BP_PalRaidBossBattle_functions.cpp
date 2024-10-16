#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalRaidBossBattle_classes.hpp"
#include "PalSDK/BP_PalRaidBossBattle_parameters.hpp"


namespace PalSDK
{

// Function BP_PalRaidBossBattle.BP_PalRaidBossBattle_C.ExecuteUbergraph_BP_PalRaidBossBattle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalRaidBossBattle_C::ExecuteUbergraph_BP_PalRaidBossBattle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRaidBossBattle_C", "ExecuteUbergraph_BP_PalRaidBossBattle");

	Params::BP_PalRaidBossBattle_C_ExecuteUbergraph_BP_PalRaidBossBattle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

