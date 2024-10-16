#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_WarningUI_classes.hpp"
#include "PalSDK/WBP_WarningUI_parameters.hpp"


namespace PalSDK
{

// Function WBP_WarningUI.WBP_WarningUI_C.Display Supply
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalSupplyInfo                   SupplyInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_WarningUI_C::Display_Supply(const struct FPalSupplyInfo& SupplyInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WarningUI_C", "Display Supply");

	Params::WBP_WarningUI_C_Display_Supply Parms{};

	Parms.SupplyInfo = std::move(SupplyInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WarningUI.WBP_WarningUI_C.DisplayServerNotice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           NoticeMessage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_WarningUI_C::DisplayServerNotice(const class FString& NoticeMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WarningUI_C", "DisplayServerNotice");

	Params::WBP_WarningUI_C_DisplayServerNotice Parms{};

	Parms.NoticeMessage = std::move(NoticeMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WarningUI.WBP_WarningUI_C.DisplayWarning
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalBaseCampModel*                TargetBaseCamp                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalInvaderDatabaseRow           ChosenInvaderData                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_WarningUI_C::DisplayWarning(class UPalBaseCampModel* TargetBaseCamp, const struct FPalInvaderDatabaseRow& ChosenInvaderData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WarningUI_C", "DisplayWarning");

	Params::WBP_WarningUI_C_DisplayWarning Parms{};

	Parms.TargetBaseCamp = TargetBaseCamp;
	Parms.ChosenInvaderData = std::move(ChosenInvaderData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WarningUI.WBP_WarningUI_C.ExecuteUbergraph_WBP_WarningUI
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WarningUI_C::ExecuteUbergraph_WBP_WarningUI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WarningUI_C", "ExecuteUbergraph_WBP_WarningUI");

	Params::WBP_WarningUI_C_ExecuteUbergraph_WBP_WarningUI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WarningUI.WBP_WarningUI_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_WarningUI_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WarningUI_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WarningUI.WBP_WarningUI_C.OnInvaderStart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalIncidentBroadcastParameter   Parameter                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_WarningUI_C::OnInvaderStart(const struct FPalIncidentBroadcastParameter& Parameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WarningUI_C", "OnInvaderStart");

	Params::WBP_WarningUI_C_OnInvaderStart Parms{};

	Parms.Parameter = std::move(Parameter);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WarningUI.WBP_WarningUI_C.OnReceivedServerNotice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           NoticeMessage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_WarningUI_C::OnReceivedServerNotice(const class FString& NoticeMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WarningUI_C", "OnReceivedServerNotice");

	Params::WBP_WarningUI_C_OnReceivedServerNotice Parms{};

	Parms.NoticeMessage = std::move(NoticeMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WarningUI.WBP_WarningUI_C.OnSupplyStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalSupplyInfo                   SupplyInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_WarningUI_C::OnSupplyStart(const struct FPalSupplyInfo& SupplyInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WarningUI_C", "OnSupplyStart");

	Params::WBP_WarningUI_C_OnSupplyStart Parms{};

	Parms.SupplyInfo = std::move(SupplyInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WarningUI.WBP_WarningUI_C.Play
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             TitleText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InfoText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// double                                  DisplayTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WarningUI_C::Play(const class FText& TitleText, const class FText& InfoText, double DisplayTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WarningUI_C", "Play");

	Params::WBP_WarningUI_C_Play Parms{};

	Parms.TitleText = std::move(TitleText);
	Parms.InfoText = std::move(InfoText);
	Parms.DisplayTime = DisplayTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WarningUI.WBP_WarningUI_C.RegisterEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_WarningUI_C::RegisterEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WarningUI_C", "RegisterEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WarningUI.WBP_WarningUI_C.WBP_WarningUI_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_WarningUI_C::WBP_WarningUI_AutoGenFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WarningUI_C", "WBP_WarningUI_AutoGenFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

