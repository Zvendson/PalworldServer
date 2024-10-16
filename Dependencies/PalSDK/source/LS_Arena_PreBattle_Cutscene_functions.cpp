#include "PalSDK/Basic.hpp"

#include "PalSDK/LS_Arena_PreBattle_Cutscene_classes.hpp"
#include "PalSDK/LS_Arena_PreBattle_Cutscene_parameters.hpp"


namespace PalSDK
{

// Function LS_Arena_PreBattle_Cutscene.LS_Arena_PreBattle_Cutscene (Director BP)_C.ExecuteUbergraph_LS_Arena_PreBattle_Cutscene (Director BP)
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULS_Arena_PreBattle_Cutscene__Director_BP__C::ExecuteUbergraph_LS_Arena_PreBattle_Cutscene__Director_BP_(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LS_Arena_PreBattle_Cutscene (Director BP)_C", "ExecuteUbergraph_LS_Arena_PreBattle_Cutscene (Director BP)");

	Params::LS_Arena_PreBattle_Cutscene__Director_BP__C_ExecuteUbergraph_LS_Arena_PreBattle_Cutscene__Director_BP_ Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_Arena_PreBattle_Cutscene.LS_Arena_PreBattle_Cutscene (Director BP)_C.PreBattleEvent_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalArenaPreBattleCutsceneEvent*  PreBattleEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalArenaPlayerIndex                    PlayerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULS_Arena_PreBattle_Cutscene__Director_BP__C::PreBattleEvent_Event(class APalArenaPreBattleCutsceneEvent* PreBattleEvent, EPalArenaPlayerIndex PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LS_Arena_PreBattle_Cutscene (Director BP)_C", "PreBattleEvent_Event");

	Params::LS_Arena_PreBattle_Cutscene__Director_BP__C_PreBattleEvent_Event Parms{};

	Parms.PreBattleEvent = PreBattleEvent;
	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_Arena_PreBattle_Cutscene.LS_Arena_PreBattle_Cutscene (Director BP)_C.PreBattleEvent_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalArenaPreBattleCutsceneEvent*  PreBattleEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalArenaPlayerIndex                    PlayerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULS_Arena_PreBattle_Cutscene__Director_BP__C::PreBattleEvent_Event_0(class APalArenaPreBattleCutsceneEvent* PreBattleEvent, EPalArenaPlayerIndex PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LS_Arena_PreBattle_Cutscene (Director BP)_C", "PreBattleEvent_Event_0");

	Params::LS_Arena_PreBattle_Cutscene__Director_BP__C_PreBattleEvent_Event_0 Parms{};

	Parms.PreBattleEvent = PreBattleEvent;
	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_Arena_PreBattle_Cutscene.LS_Arena_PreBattle_Cutscene (Director BP)_C.SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene (Director BP)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalArenaPreBattleCutsceneEvent*  PreBattleEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULS_Arena_PreBattle_Cutscene__Director_BP__C::SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene__Director_BP_(class APalArenaPreBattleCutsceneEvent* PreBattleEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LS_Arena_PreBattle_Cutscene (Director BP)_C", "SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene (Director BP)");

	Params::LS_Arena_PreBattle_Cutscene__Director_BP__C_SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene__Director_BP_ Parms{};

	Parms.PreBattleEvent = PreBattleEvent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_Arena_PreBattle_Cutscene.LS_Arena_PreBattle_Cutscene (Director BP)_C.SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene (Director BP)_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalArenaPreBattleCutsceneEvent*  PreBattleEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULS_Arena_PreBattle_Cutscene__Director_BP__C::SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene__Director_BP__0(class APalArenaPreBattleCutsceneEvent* PreBattleEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LS_Arena_PreBattle_Cutscene (Director BP)_C", "SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene (Director BP)_0");

	Params::LS_Arena_PreBattle_Cutscene__Director_BP__C_SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene__Director_BP__0 Parms{};

	Parms.PreBattleEvent = PreBattleEvent;

	UObject::ProcessEvent(Func, &Parms);
}

}

