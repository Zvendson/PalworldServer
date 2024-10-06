#include "PalServer/Basic.hpp"

#include "PalServer/WBP_BattleEntry_Info_classes.hpp"
#include "PalServer/WBP_BattleEntry_Info_parameters.hpp"


namespace PalServer
{

// Function WBP_BattleEntry_Info.WBP_BattleEntry_Info_C.ExecuteUbergraph_WBP_BattleEntry_Info
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleEntry_Info_C::ExecuteUbergraph_WBP_BattleEntry_Info(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleEntry_Info_C", "ExecuteUbergraph_WBP_BattleEntry_Info");

	Params::WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BattleEntry_Info.WBP_BattleEntry_Info_C.Finished_DCF333D941FA61FD2550718E81C65E72
// (BlueprintCallable, BlueprintEvent)

void UWBP_BattleEntry_Info_C::Finished_DCF333D941FA61FD2550718E81C65E72()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleEntry_Info_C", "Finished_DCF333D941FA61FD2550718E81C65E72");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BattleEntry_Info.WBP_BattleEntry_Info_C.SetEntryInfo
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             BossType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalBossBattleDifficulty                Difficulty                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APalPlayerCharacter*>      EntryPlayers                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_BattleEntry_Info_C::SetEntryInfo(class FName BossType, EPalBossBattleDifficulty Difficulty, const TArray<class APalPlayerCharacter*>& EntryPlayers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleEntry_Info_C", "SetEntryInfo");

	Params::WBP_BattleEntry_Info_C_SetEntryInfo Parms{};

	Parms.BossType = BossType;
	Parms.Difficulty = Difficulty;
	Parms.EntryPlayers = std::move(EntryPlayers);

	UObject::ProcessEvent(Func, &Parms);
}

}

