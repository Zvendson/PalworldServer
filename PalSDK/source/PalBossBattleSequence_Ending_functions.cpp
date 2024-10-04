#include "PalServer/Basic.hpp"

#include "PalServer/PalBossBattleSequence_Ending_classes.hpp"
#include "PalServer/PalBossBattleSequence_Ending_parameters.hpp"


namespace PalServer
{

// Function PalBossBattleSequence_Ending.PalBossBattleSequence_Ending_C.ExecuteUbergraph_PalBossBattleSequence_Ending
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPalBossBattleSequence_Ending_C::ExecuteUbergraph_PalBossBattleSequence_Ending(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PalBossBattleSequence_Ending_C", "ExecuteUbergraph_PalBossBattleSequence_Ending");

	Params::PalBossBattleSequence_Ending_C_ExecuteUbergraph_PalBossBattleSequence_Ending Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PalBossBattleSequence_Ending.PalBossBattleSequence_Ending_C.Gift
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPalBossBattleSequence_Ending_C::Gift()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PalBossBattleSequence_Ending_C", "Gift");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PalBossBattleSequence_Ending.PalBossBattleSequence_Ending_C.OnBeginSequence
// (Event, Public, BlueprintEvent)

void UPalBossBattleSequence_Ending_C::OnBeginSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PalBossBattleSequence_Ending_C", "OnBeginSequence");

	UObject::ProcessEvent(Func, nullptr);
}

}

