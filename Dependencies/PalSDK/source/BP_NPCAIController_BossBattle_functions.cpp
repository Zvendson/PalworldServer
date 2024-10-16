#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_NPCAIController_BossBattle_classes.hpp"
#include "PalSDK/BP_NPCAIController_BossBattle_parameters.hpp"


namespace PalSDK
{

// Function BP_NPCAIController_BossBattle.BP_NPCAIController_BossBattle_C.ForceBattleStartToTarget Boss
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*              Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class APalPlayerCharacter*>      AllPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_NPCAIController_BossBattle_C::ForceBattleStartToTarget_Boss(class APalPlayerCharacter* Player, TArray<class APalPlayerCharacter*>& AllPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCAIController_BossBattle_C", "ForceBattleStartToTarget Boss");

	Params::BP_NPCAIController_BossBattle_C_ForceBattleStartToTarget_Boss Parms{};

	Parms.Player = Player;
	Parms.AllPlayer = std::move(AllPlayer);

	UObject::ProcessEvent(Func, &Parms);

	AllPlayer = std::move(Parms.AllPlayer);
}

}

