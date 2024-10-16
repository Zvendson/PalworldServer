#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_BossBattle_BattleInfo_classes.hpp"
#include "PalSDK/WBP_BossBattle_BattleInfo_parameters.hpp"


namespace PalSDK
{

// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.ActUICombatResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalBossBattleCombatResult              CombatResult                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossBattle_BattleInfo_C::ActUICombatResult(EPalBossBattleCombatResult CombatResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossBattle_BattleInfo_C", "ActUICombatResult");

	Params::WBP_BossBattle_BattleInfo_C_ActUICombatResult Parms{};

	Parms.CombatResult = CombatResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.CloseTimer
// (BlueprintCallable, BlueprintEvent)

void UWBP_BossBattle_BattleInfo_C::CloseTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossBattle_BattleInfo_C", "CloseTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.CountDown_Raid
// (BlueprintCallable, BlueprintEvent)

void UWBP_BossBattle_BattleInfo_C::CountDown_Raid()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossBattle_BattleInfo_C", "CountDown_Raid");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.CountDown_TowerBoss
// (BlueprintCallable, BlueprintEvent)

void UWBP_BossBattle_BattleInfo_C::CountDown_TowerBoss()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossBattle_BattleInfo_C", "CountDown_TowerBoss");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.ExecuteUbergraph_WBP_BossBattle_BattleInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossBattle_BattleInfo_C::ExecuteUbergraph_WBP_BossBattle_BattleInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossBattle_BattleInfo_C", "ExecuteUbergraph_WBP_BossBattle_BattleInfo");

	Params::WBP_BossBattle_BattleInfo_C_ExecuteUbergraph_WBP_BossBattle_BattleInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.Finished_3EF5F8014E85067431DFCC89EED868D4
// (BlueprintCallable, BlueprintEvent)

void UWBP_BossBattle_BattleInfo_C::Finished_3EF5F8014E85067431DFCC89EED868D4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossBattle_BattleInfo_C", "Finished_3EF5F8014E85067431DFCC89EED868D4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.Finished_413432514DE4FC814BDA5192337698D2
// (BlueprintCallable, BlueprintEvent)

void UWBP_BossBattle_BattleInfo_C::Finished_413432514DE4FC814BDA5192337698D2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossBattle_BattleInfo_C", "Finished_413432514DE4FC814BDA5192337698D2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.Finished_8C451D0644B19738D91CB8BD4A008BD2
// (BlueprintCallable, BlueprintEvent)

void UWBP_BossBattle_BattleInfo_C::Finished_8C451D0644B19738D91CB8BD4A008BD2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossBattle_BattleInfo_C", "Finished_8C451D0644B19738D91CB8BD4A008BD2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.Finished_C4E7DBA04E1A39E6670703A0D0184F95
// (BlueprintCallable, BlueprintEvent)

void UWBP_BossBattle_BattleInfo_C::Finished_C4E7DBA04E1A39E6670703A0D0184F95()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossBattle_BattleInfo_C", "Finished_C4E7DBA04E1A39E6670703A0D0184F95");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.GetBossTower
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalBossTower*                    BossTower                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_BossBattle_BattleInfo_C::GetBossTower(class APalBossTower* BossTower)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossBattle_BattleInfo_C", "GetBossTower");

	Params::WBP_BossBattle_BattleInfo_C_GetBossTower Parms{};

	Parms.BossTower = BossTower;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.OnRaidBossBattleEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            CampID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalRaidBossBattleFinishType            EndType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossBattle_BattleInfo_C::OnRaidBossBattleEnd(const struct FGuid& CampID, EPalRaidBossBattleFinishType EndType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossBattle_BattleInfo_C", "OnRaidBossBattleEnd");

	Params::WBP_BossBattle_BattleInfo_C_OnRaidBossBattleEnd Parms{};

	Parms.CampID = std::move(CampID);
	Parms.EndType = EndType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.OnRaidBossBattleStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            CampID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossBattle_BattleInfo_C::OnRaidBossBattleStart(const struct FGuid& CampID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossBattle_BattleInfo_C", "OnRaidBossBattleStart");

	Params::WBP_BossBattle_BattleInfo_C_OnRaidBossBattleStart Parms{};

	Parms.CampID = std::move(CampID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C.StartCombatTimer
// (BlueprintCallable, BlueprintEvent)

void UWBP_BossBattle_BattleInfo_C::StartCombatTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossBattle_BattleInfo_C", "StartCombatTimer");

	UObject::ProcessEvent(Func, nullptr);
}

}

