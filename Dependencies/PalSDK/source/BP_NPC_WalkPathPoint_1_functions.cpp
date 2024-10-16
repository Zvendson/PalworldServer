#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_NPC_WalkPathPoint_1_classes.hpp"
#include "PalSDK/BP_NPC_WalkPathPoint_1_parameters.hpp"


namespace PalSDK
{

// Function BP_NPC_WalkPathPoint_1.BP_NPC_WalkPathPoint_1_C.ExecuteUbergraph_BP_NPC_WalkPathPoint_1
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_WalkPathPoint_1_C::ExecuteUbergraph_BP_NPC_WalkPathPoint_1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPC_WalkPathPoint_1_C", "ExecuteUbergraph_BP_NPC_WalkPathPoint_1");

	Params::BP_NPC_WalkPathPoint_1_C_ExecuteUbergraph_BP_NPC_WalkPathPoint_1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

