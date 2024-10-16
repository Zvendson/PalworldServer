#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_Paldex_Task_classes.hpp"
#include "PalSDK/WBP_Paldex_Task_parameters.hpp"


namespace PalSDK
{

// Function WBP_Paldex_Task.WBP_Paldex_Task_C.AnmEvent_Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    AlreadyCompletedBonus                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_Task_C::AnmEvent_Activate(bool AlreadyCompletedBonus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Paldex_Task_C", "AnmEvent_Activate");

	Params::WBP_Paldex_Task_C_AnmEvent_Activate Parms{};

	Parms.AlreadyCompletedBonus = AlreadyCompletedBonus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Paldex_Task.WBP_Paldex_Task_C.AnmEvent_Flash
// (BlueprintCallable, BlueprintEvent)

void UWBP_Paldex_Task_C::AnmEvent_Flash()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Paldex_Task_C", "AnmEvent_Flash");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Paldex_Task.WBP_Paldex_Task_C.ExecuteUbergraph_WBP_Paldex_Task
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_Task_C::ExecuteUbergraph_WBP_Paldex_Task(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Paldex_Task_C", "ExecuteUbergraph_WBP_Paldex_Task");

	Params::WBP_Paldex_Task_C_ExecuteUbergraph_WBP_Paldex_Task Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Paldex_Task.WBP_Paldex_Task_C.GetBonusExpMsg
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   CaptureCount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Text                                                   (Parm, OutParm)

void UWBP_Paldex_Task_C::GetBonusExpMsg(int32 CaptureCount, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Paldex_Task_C", "GetBonusExpMsg");

	Params::WBP_Paldex_Task_C_GetBonusExpMsg Parms{};

	Parms.CaptureCount = CaptureCount;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function WBP_Paldex_Task.WBP_Paldex_Task_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Paldex_Task_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Paldex_Task_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Paldex_Task.WBP_Paldex_Task_C.PreSetup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   BonusCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DisplayExp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_Task_C::PreSetup(class FName CharacterID, int32 BonusCount, int32 DisplayExp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Paldex_Task_C", "PreSetup");

	Params::WBP_Paldex_Task_C_PreSetup Parms{};

	Parms.CharacterID = CharacterID;
	Parms.BonusCount = BonusCount;
	Parms.DisplayExp = DisplayExp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Paldex_Task.WBP_Paldex_Task_C.SetupBonusCountText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BonusCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_Task_C::SetupBonusCountText(int32 BonusCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Paldex_Task_C", "SetupBonusCountText");

	Params::WBP_Paldex_Task_C_SetupBonusCountText Parms{};

	Parms.BonusCount = BonusCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Paldex_Task.WBP_Paldex_Task_C.SetupForMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BonusCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_Task_C::SetupForMenu(int32 BonusCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Paldex_Task_C", "SetupForMenu");

	Params::WBP_Paldex_Task_C_SetupForMenu Parms{};

	Parms.BonusCount = BonusCount;

	UObject::ProcessEvent(Func, &Parms);
}

}

