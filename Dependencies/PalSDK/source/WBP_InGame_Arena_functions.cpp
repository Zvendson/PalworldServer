#include "PalServer/Basic.hpp"

#include "PalServer/WBP_InGame_Arena_classes.hpp"
#include "PalServer/WBP_InGame_Arena_parameters.hpp"


namespace PalServer
{

// Function WBP_InGame_Arena.WBP_InGame_Arena_C.DrawUI
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGame_Arena_C::DrawUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Arena_C", "DrawUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGame_Arena.WBP_InGame_Arena_C.ExecuteUbergraph_WBP_InGame_Arena
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGame_Arena_C::ExecuteUbergraph_WBP_InGame_Arena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Arena_C", "ExecuteUbergraph_WBP_InGame_Arena");

	Params::WBP_InGame_Arena_C_ExecuteUbergraph_WBP_InGame_Arena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InGame_Arena.WBP_InGame_Arena_C.Finished_768F02F4466EDA7C23960580EBC813FD
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGame_Arena_C::Finished_768F02F4466EDA7C23960580EBC813FD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Arena_C", "Finished_768F02F4466EDA7C23960580EBC813FD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGame_Arena.WBP_InGame_Arena_C.Finished_7F5F79824D29F484AC06A58453CB091A
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGame_Arena_C::Finished_7F5F79824D29F484AC06A58453CB091A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Arena_C", "Finished_7F5F79824D29F484AC06A58453CB091A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGame_Arena.WBP_InGame_Arena_C.Finished_C631FD5D4353912F9F507C91C9B4CBB7
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGame_Arena_C::Finished_C631FD5D4353912F9F507C91C9B4CBB7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Arena_C", "Finished_C631FD5D4353912F9F507C91C9B4CBB7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGame_Arena.WBP_InGame_Arena_C.Finished_F607615543D9F7F46B1668A5448DE853
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGame_Arena_C::Finished_F607615543D9F7F46B1668A5448DE853()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Arena_C", "Finished_F607615543D9F7F46B1668A5448DE853");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGame_Arena.WBP_InGame_Arena_C.OnArenaSequenceStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalArenaSequencer*               ArenaSequence                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InGame_Arena_C::OnArenaSequenceStart(class UPalArenaSequencer* ArenaSequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Arena_C", "OnArenaSequenceStart");

	Params::WBP_InGame_Arena_C_OnArenaSequenceStart Parms{};

	Parms.ArenaSequence = ArenaSequence;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InGame_Arena.WBP_InGame_Arena_C.OnExitArena
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGame_Arena_C::OnExitArena()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Arena_C", "OnExitArena");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGame_Arena.WBP_InGame_Arena_C.OnSequenceStageChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGame_Arena_C::OnSequenceStageChanged(int32 CurrentIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Arena_C", "OnSequenceStageChanged");

	Params::WBP_InGame_Arena_C_OnSequenceStageChanged Parms{};

	Parms.CurrentIndex = CurrentIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InGame_Arena.WBP_InGame_Arena_C.ReadyUI
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGame_Arena_C::ReadyUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Arena_C", "ReadyUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGame_Arena.WBP_InGame_Arena_C.WinUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           WinnerName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_InGame_Arena_C::WinUI(const class FString& WinnerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Arena_C", "WinUI");

	Params::WBP_InGame_Arena_C_WinUI Parms{};

	Parms.WinnerName = std::move(WinnerName);

	UObject::ProcessEvent(Func, &Parms);
}

}

