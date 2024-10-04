#include "PalServer/Basic.hpp"

#include "PalServer/WBP_Notice_Deathlog_classes.hpp"
#include "PalServer/WBP_Notice_Deathlog_parameters.hpp"


namespace PalServer
{

// Function WBP_Notice_Deathlog.WBP_Notice_Deathlog_C.CheckDisplay_Long
// (BlueprintCallable, BlueprintEvent)

void UWBP_Notice_Deathlog_C::CheckDisplay_Long()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notice_Deathlog_C", "CheckDisplay_Long");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Notice_Deathlog.WBP_Notice_Deathlog_C.CheckDisplay_Short
// (BlueprintCallable, BlueprintEvent)

void UWBP_Notice_Deathlog_C::CheckDisplay_Short()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notice_Deathlog_C", "CheckDisplay_Short");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Notice_Deathlog.WBP_Notice_Deathlog_C.ExecuteUbergraph_WBP_Notice_Deathlog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Notice_Deathlog_C::ExecuteUbergraph_WBP_Notice_Deathlog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notice_Deathlog_C", "ExecuteUbergraph_WBP_Notice_Deathlog");

	Params::WBP_Notice_Deathlog_C_ExecuteUbergraph_WBP_Notice_Deathlog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Notice_Deathlog.WBP_Notice_Deathlog_C.Finished_594550FE491318B188D5B8A2D194C1DB
// (BlueprintCallable, BlueprintEvent)

void UWBP_Notice_Deathlog_C::Finished_594550FE491318B188D5B8A2D194C1DB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notice_Deathlog_C", "Finished_594550FE491318B188D5B8A2D194C1DB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Notice_Deathlog.WBP_Notice_Deathlog_C.GetDeathResonText
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPalKillLogDisplayType                  KillLogType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReasonText                                             (Parm, OutParm)

void UWBP_Notice_Deathlog_C::GetDeathResonText(EPalKillLogDisplayType KillLogType, class FText* ReasonText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notice_Deathlog_C", "GetDeathResonText");

	Params::WBP_Notice_Deathlog_C_GetDeathResonText Parms{};

	Parms.KillLogType = KillLogType;

	UObject::ProcessEvent(Func, &Parms);

	if (ReasonText != nullptr)
		*ReasonText = std::move(Parms.ReasonText);
}


// Function WBP_Notice_Deathlog.WBP_Notice_Deathlog_C.MakeDeathLogText
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalKillLogDisplayData           DisplayData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             AttackerName                                           (Parm, OutParm)
// class FText                             DefenderName                                           (Parm, OutParm)
// class FText                             Reason                                                 (Parm, OutParm)

void UWBP_Notice_Deathlog_C::MakeDeathLogText(const struct FPalKillLogDisplayData& DisplayData, class FText* AttackerName, class FText* DefenderName, class FText* Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notice_Deathlog_C", "MakeDeathLogText");

	Params::WBP_Notice_Deathlog_C_MakeDeathLogText Parms{};

	Parms.DisplayData = std::move(DisplayData);

	UObject::ProcessEvent(Func, &Parms);

	if (AttackerName != nullptr)
		*AttackerName = std::move(Parms.AttackerName);

	if (DefenderName != nullptr)
		*DefenderName = std::move(Parms.DefenderName);

	if (Reason != nullptr)
		*Reason = std::move(Parms.Reason);
}


// Function WBP_Notice_Deathlog.WBP_Notice_Deathlog_C.MakeKillLogText
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalKillLogDisplayData           DisplayData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             AttackerName                                           (Parm, OutParm)
// class FText                             DefenderName                                           (Parm, OutParm)
// class FText                             Reason                                                 (Parm, OutParm)

void UWBP_Notice_Deathlog_C::MakeKillLogText(const struct FPalKillLogDisplayData& DisplayData, class FText* AttackerName, class FText* DefenderName, class FText* Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notice_Deathlog_C", "MakeKillLogText");

	Params::WBP_Notice_Deathlog_C_MakeKillLogText Parms{};

	Parms.DisplayData = std::move(DisplayData);

	UObject::ProcessEvent(Func, &Parms);

	if (AttackerName != nullptr)
		*AttackerName = std::move(Parms.AttackerName);

	if (DefenderName != nullptr)
		*DefenderName = std::move(Parms.DefenderName);

	if (Reason != nullptr)
		*Reason = std::move(Parms.Reason);
}


// Function WBP_Notice_Deathlog.WBP_Notice_Deathlog_C.OnDeathLogEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Notice_Deathlog_C*           EndedLog                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Notice_Deathlog_C::OnDeathLogEnd__DelegateSignature(class UWBP_Notice_Deathlog_C* EndedLog)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notice_Deathlog_C", "OnDeathLogEnd__DelegateSignature");

	Params::WBP_Notice_Deathlog_C_OnDeathLogEnd__DelegateSignature Parms{};

	Parms.EndedLog = EndedLog;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Notice_Deathlog.WBP_Notice_Deathlog_C.SetDisplayTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  ShortDisplayTime                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  LongDisplayTime                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Notice_Deathlog_C::SetDisplayTime(double ShortDisplayTime, double LongDisplayTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notice_Deathlog_C", "SetDisplayTime");

	Params::WBP_Notice_Deathlog_C_SetDisplayTime Parms{};

	Parms.ShortDisplayTime = ShortDisplayTime;
	Parms.LongDisplayTime = LongDisplayTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Notice_Deathlog.WBP_Notice_Deathlog_C.SetDisplayTimeType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsShort                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Notice_Deathlog_C::SetDisplayTimeType(bool IsShort)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notice_Deathlog_C", "SetDisplayTimeType");

	Params::WBP_Notice_Deathlog_C_SetDisplayTimeType Parms{};

	Parms.IsShort = IsShort;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Notice_Deathlog.WBP_Notice_Deathlog_C.SetupAsDeathLog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalKillLogDisplayData           DeathLogDisplayData                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Notice_Deathlog_C::SetupAsDeathLog(const struct FPalKillLogDisplayData& DeathLogDisplayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notice_Deathlog_C", "SetupAsDeathLog");

	Params::WBP_Notice_Deathlog_C_SetupAsDeathLog Parms{};

	Parms.DeathLogDisplayData = std::move(DeathLogDisplayData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Notice_Deathlog.WBP_Notice_Deathlog_C.SetupAsKillLog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalKillLogDisplayData           KillLogDIsplayData                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Notice_Deathlog_C::SetupAsKillLog(const struct FPalKillLogDisplayData& KillLogDIsplayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notice_Deathlog_C", "SetupAsKillLog");

	Params::WBP_Notice_Deathlog_C_SetupAsKillLog Parms{};

	Parms.KillLogDIsplayData = std::move(KillLogDIsplayData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Notice_Deathlog.WBP_Notice_Deathlog_C.SetupIcon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalKillLogDisplayData           DisplayData                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Notice_Deathlog_C::SetupIcon(const struct FPalKillLogDisplayData& DisplayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Notice_Deathlog_C", "SetupIcon");

	Params::WBP_Notice_Deathlog_C_SetupIcon Parms{};

	Parms.DisplayData = std::move(DisplayData);

	UObject::ProcessEvent(Func, &Parms);
}

}

