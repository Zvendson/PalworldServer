#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PalLogWidget_classes.hpp"
#include "PalServer/WBP_PalLogWidget_parameters.hpp"


namespace PalServer
{

// Function WBP_PalLogWidget.WBP_PalLogWidget_C.CheckImportantLog
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsRemoved                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLogWidget_C::CheckImportantLog(bool* IsRemoved)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLogWidget_C", "CheckImportantLog");

	Params::WBP_PalLogWidget_C_CheckImportantLog Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsRemoved != nullptr)
		*IsRemoved = Parms.IsRemoved;
}


// Function WBP_PalLogWidget.WBP_PalLogWidget_C.CheckRemoveLog
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPalLogWidgetBase*>        TargetArray                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    Removed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLogWidget_C::CheckRemoveLog(const TArray<class UPalLogWidgetBase*>& TargetArray, bool* Removed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLogWidget_C", "CheckRemoveLog");

	Params::WBP_PalLogWidget_C_CheckRemoveLog Parms{};

	Parms.TargetArray = std::move(TargetArray);

	UObject::ProcessEvent(Func, &Parms);

	if (Removed != nullptr)
		*Removed = Parms.Removed;
}


// Function WBP_PalLogWidget.WBP_PalLogWidget_C.CheckVeryImportantLog
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLogWidget_C::CheckVeryImportantLog(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLogWidget_C", "CheckVeryImportantLog");

	Params::WBP_PalLogWidget_C_CheckVeryImportantLog Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLogWidget.WBP_PalLogWidget_C.CREATEDELEGATE_PROXYFUNCTION_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalKillLogDisplayData           DeathLogDisplayData                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PalLogWidget_C::CREATEDELEGATE_PROXYFUNCTION_0(const struct FPalKillLogDisplayData& DeathLogDisplayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLogWidget_C", "CREATEDELEGATE_PROXYFUNCTION_0");

	Params::WBP_PalLogWidget_C_CREATEDELEGATE_PROXYFUNCTION_0 Parms{};

	Parms.DeathLogDisplayData = std::move(DeathLogDisplayData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLogWidget.WBP_PalLogWidget_C.CreateLogWidget
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           LogWidgeClass                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPalLogAdditionalData            AdditionalData                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UPalLogWidgetBase*                CreatedWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLogWidget_C::CreateLogWidget(class UClass* LogWidgeClass, const class FText& Text, const struct FPalLogAdditionalData& AdditionalData, class UPalLogWidgetBase** CreatedWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLogWidget_C", "CreateLogWidget");

	Params::WBP_PalLogWidget_C_CreateLogWidget Parms{};

	Parms.LogWidgeClass = LogWidgeClass;
	Parms.Text = std::move(Text);
	Parms.AdditionalData = std::move(AdditionalData);

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;
}


// Function WBP_PalLogWidget.WBP_PalLogWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalLogWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLogWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalLogWidget.WBP_PalLogWidget_C.DisplayNextVeryImportantLog
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalLogWidget_C::DisplayNextVeryImportantLog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLogWidget_C", "DisplayNextVeryImportantLog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalLogWidget.WBP_PalLogWidget_C.ExecuteUbergraph_WBP_PalLogWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLogWidget_C::ExecuteUbergraph_WBP_PalLogWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLogWidget_C", "ExecuteUbergraph_WBP_PalLogWidget");

	Params::WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLogWidget.WBP_PalLogWidget_C.On Added Normal Log
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             LogText                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FPalLogAdditionalData            LogAdditionalData                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PalLogWidget_C::On_Added_Normal_Log(const class FText& LogText, const struct FPalLogAdditionalData& LogAdditionalData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLogWidget_C", "On Added Normal Log");

	Params::WBP_PalLogWidget_C_On_Added_Normal_Log Parms{};

	Parms.LogText = std::move(LogText);
	Parms.LogAdditionalData = std::move(LogAdditionalData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLogWidget.WBP_PalLogWidget_C.OnAddedDeathLog
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalKillLogDisplayData           DeathLogDisplayData                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PalLogWidget_C::OnAddedDeathLog(const struct FPalKillLogDisplayData& DeathLogDisplayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLogWidget_C", "OnAddedDeathLog");

	Params::WBP_PalLogWidget_C_OnAddedDeathLog Parms{};

	Parms.DeathLogDisplayData = std::move(DeathLogDisplayData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLogWidget.WBP_PalLogWidget_C.OnAddedImportantLog
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             LogText                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FPalLogAdditionalData            LogAdditionalData                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PalLogWidget_C::OnAddedImportantLog(const class FText& LogText, const struct FPalLogAdditionalData& LogAdditionalData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLogWidget_C", "OnAddedImportantLog");

	Params::WBP_PalLogWidget_C_OnAddedImportantLog Parms{};

	Parms.LogText = std::move(LogText);
	Parms.LogAdditionalData = std::move(LogAdditionalData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLogWidget.WBP_PalLogWidget_C.OnAddedKillLog
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalKillLogDisplayData           KillLogData                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PalLogWidget_C::OnAddedKillLog(const struct FPalKillLogDisplayData& KillLogData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLogWidget_C", "OnAddedKillLog");

	Params::WBP_PalLogWidget_C_OnAddedKillLog Parms{};

	Parms.KillLogData = std::move(KillLogData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLogWidget.WBP_PalLogWidget_C.OnAddedVeryImportantLog
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            LogId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             LogText                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FPalLogAdditionalData            LogAdditionalData                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PalLogWidget_C::OnAddedVeryImportantLog(const struct FGuid& LogId, const class FText& LogText, const struct FPalLogAdditionalData& LogAdditionalData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLogWidget_C", "OnAddedVeryImportantLog");

	Params::WBP_PalLogWidget_C_OnAddedVeryImportantLog Parms{};

	Parms.LogId = std::move(LogId);
	Parms.LogText = std::move(LogText);
	Parms.LogAdditionalData = std::move(LogAdditionalData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLogWidget.WBP_PalLogWidget_C.OnDeathLogEnd
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Notice_Deathlog_C*           EndedLog                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLogWidget_C::OnDeathLogEnd(class UWBP_Notice_Deathlog_C* EndedLog)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLogWidget_C", "OnDeathLogEnd");

	Params::WBP_PalLogWidget_C_OnDeathLogEnd Parms{};

	Parms.EndedLog = EndedLog;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLogWidget.WBP_PalLogWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalLogWidget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLogWidget_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalLogWidget.WBP_PalLogWidget_C.OnKillLogEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Notice_Deathlog_C*           EndedLog                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLogWidget_C::OnKillLogEnd(class UWBP_Notice_Deathlog_C* EndedLog)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLogWidget_C", "OnKillLogEnd");

	Params::WBP_PalLogWidget_C_OnKillLogEnd Parms{};

	Parms.EndedLog = EndedLog;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLogWidget.WBP_PalLogWidget_C.OnRemovedVeryImportantLog
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            LogId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLogWidget_C::OnRemovedVeryImportantLog(const struct FGuid& LogId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLogWidget_C", "OnRemovedVeryImportantLog");

	Params::WBP_PalLogWidget_C_OnRemovedVeryImportantLog Parms{};

	Parms.LogId = std::move(LogId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLogWidget.WBP_PalLogWidget_C.SetupWidgetTranslation
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalLogWidgetBase*                TargetWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*                 RelationSlot                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLogWidget_C::SetupWidgetTranslation(class UPalLogWidgetBase* TargetWidget, class UCanvasPanelSlot* RelationSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLogWidget_C", "SetupWidgetTranslation");

	Params::WBP_PalLogWidget_C_SetupWidgetTranslation Parms{};

	Parms.TargetWidget = TargetWidget;
	Parms.RelationSlot = RelationSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLogWidget.WBP_PalLogWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLogWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLogWidget_C", "Tick");

	Params::WBP_PalLogWidget_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

