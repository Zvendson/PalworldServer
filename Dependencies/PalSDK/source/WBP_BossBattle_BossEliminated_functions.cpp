#include "PalServer/Basic.hpp"

#include "PalServer/WBP_BossBattle_BossEliminated_classes.hpp"
#include "PalServer/WBP_BossBattle_BossEliminated_parameters.hpp"


namespace PalServer
{

// Function WBP_BossBattle_BossEliminated.WBP_BossBattle_BossEliminated_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_BossBattle_BossEliminated_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossBattle_BossEliminated_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BossBattle_BossEliminated.WBP_BossBattle_BossEliminated_C.ExecuteUbergraph_WBP_BossBattle_BossEliminated
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossBattle_BossEliminated_C::ExecuteUbergraph_WBP_BossBattle_BossEliminated(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossBattle_BossEliminated_C", "ExecuteUbergraph_WBP_BossBattle_BossEliminated");

	Params::WBP_BossBattle_BossEliminated_C_ExecuteUbergraph_WBP_BossBattle_BossEliminated Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

