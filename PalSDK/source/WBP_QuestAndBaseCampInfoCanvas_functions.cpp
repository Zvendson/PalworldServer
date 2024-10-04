#include "PalServer/Basic.hpp"

#include "PalServer/WBP_QuestAndBaseCampInfoCanvas_classes.hpp"
#include "PalServer/WBP_QuestAndBaseCampInfoCanvas_parameters.hpp"


namespace PalServer
{

// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_QuestAndBaseCampInfoCanvas_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_QuestAndBaseCampInfoCanvas_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestAndBaseCampInfoCanvas_C::ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas");

	Params::WBP_QuestAndBaseCampInfoCanvas_C_ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.HideBaseCampInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QuestAndBaseCampInfoCanvas_C::HideBaseCampInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "HideBaseCampInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.On Enter Base Camp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalBaseCampModel*                Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestAndBaseCampInfoCanvas_C::On_Enter_Base_Camp(class UPalBaseCampModel* Model)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "On Enter Base Camp");

	Params::WBP_QuestAndBaseCampInfoCanvas_C_On_Enter_Base_Camp Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.On Enter Pal Box Area
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QuestAndBaseCampInfoCanvas_C::On_Enter_Pal_Box_Area()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "On Enter Pal Box Area");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.On Leave Base Camp
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QuestAndBaseCampInfoCanvas_C::On_Leave_Base_Camp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "On Leave Base Camp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.On Update Tutorial Quest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalQuestData*                    UpdatedQuest                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestAndBaseCampInfoCanvas_C::On_Update_Tutorial_Quest(class UPalQuestData* UpdatedQuest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "On Update Tutorial Quest");

	Params::WBP_QuestAndBaseCampInfoCanvas_C_On_Update_Tutorial_Quest Parms{};

	Parms.UpdatedQuest = UpdatedQuest;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.OnChangedUISettings
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalOptionUISettings             PrevSettings                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FPalOptionUISettings             NewSettings                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWBP_QuestAndBaseCampInfoCanvas_C::OnChangedUISettings(const struct FPalOptionUISettings& PrevSettings, const struct FPalOptionUISettings& NewSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "OnChangedUISettings");

	Params::WBP_QuestAndBaseCampInfoCanvas_C_OnChangedUISettings Parms{};

	Parms.PrevSettings = std::move(PrevSettings);
	Parms.NewSettings = std::move(NewSettings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.OnCompleteTutorialQuest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalQuestData*                    CompletedQuest                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestAndBaseCampInfoCanvas_C::OnCompleteTutorialQuest(class UPalQuestData* CompletedQuest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "OnCompleteTutorialQuest");

	Params::WBP_QuestAndBaseCampInfoCanvas_C_OnCompleteTutorialQuest Parms{};

	Parms.CompletedQuest = CompletedQuest;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_QuestAndBaseCampInfoCanvas_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.OnLeavePalBoxArea
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QuestAndBaseCampInfoCanvas_C::OnLeavePalBoxArea()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "OnLeavePalBoxArea");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.OnSetup_AfterCreatedPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_QuestAndBaseCampInfoCanvas_C::OnSetup_AfterCreatedPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "OnSetup_AfterCreatedPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.OnTimer_CollectWorkerDirectorModel
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QuestAndBaseCampInfoCanvas_C::OnTimer_CollectWorkerDirectorModel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "OnTimer_CollectWorkerDirectorModel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.OnUpdateBaseCampDetail
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QuestAndBaseCampInfoCanvas_C::OnUpdateBaseCampDetail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "OnUpdateBaseCampDetail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.OnUpdateBaseCampWorkHard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalBaseCampPassiveEffectWorkHardType   WorkHardType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestAndBaseCampInfoCanvas_C::OnUpdateBaseCampWorkHard(EPalBaseCampPassiveEffectWorkHardType WorkHardType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "OnUpdateBaseCampWorkHard");

	Params::WBP_QuestAndBaseCampInfoCanvas_C_OnUpdateBaseCampWorkHard Parms{};

	Parms.WorkHardType = WorkHardType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.OnUpdateWorkerBattleType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalBaseCampWorkerDirectionBattleType   BattleType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestAndBaseCampInfoCanvas_C::OnUpdateWorkerBattleType(EPalBaseCampWorkerDirectionBattleType BattleType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "OnUpdateWorkerBattleType");

	Params::WBP_QuestAndBaseCampInfoCanvas_C_OnUpdateWorkerBattleType Parms{};

	Parms.BattleType = BattleType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.SetVerticalBoxVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisible_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestAndBaseCampInfoCanvas_C::SetVerticalBoxVisible(bool IsVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "SetVerticalBoxVisible");

	Params::WBP_QuestAndBaseCampInfoCanvas_C_SetVerticalBoxVisible Parms{};

	Parms.IsVisible_0 = IsVisible_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.ShowBaseCampInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QuestAndBaseCampInfoCanvas_C::ShowBaseCampInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "ShowBaseCampInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.ShowLevelUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalBaseCampModel*                Model                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestAndBaseCampInfoCanvas_C::ShowLevelUp(class UPalBaseCampModel* Model)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "ShowLevelUp");

	Params::WBP_QuestAndBaseCampInfoCanvas_C_ShowLevelUp Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestAndBaseCampInfoCanvas_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "Tick");

	Params::WBP_QuestAndBaseCampInfoCanvas_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.TraceWorkerPal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_QuestAndBaseCampInfoCanvas_C::TraceWorkerPal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "TraceWorkerPal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.UpdateItemDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_QuestAndBaseCampInfoCanvas_C::UpdateItemDetail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "UpdateItemDetail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.UpdatePalDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_QuestAndBaseCampInfoCanvas_C::UpdatePalDetail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "UpdatePalDetail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.UpdateTask
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_QuestAndBaseCampInfoCanvas_C::UpdateTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "UpdateTask");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C.UpdateWindowBorder
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QuestAndBaseCampInfoCanvas_C::UpdateWindowBorder()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuestAndBaseCampInfoCanvas_C", "UpdateWindowBorder");

	UObject::ProcessEvent(Func, nullptr);
}

}

