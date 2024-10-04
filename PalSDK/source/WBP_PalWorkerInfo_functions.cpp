#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PalWorkerInfo_classes.hpp"
#include "PalServer/WBP_PalWorkerInfo_parameters.hpp"


namespace PalServer
{

// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.AnmEvent_Close
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalWorkerInfo_C::AnmEvent_Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "AnmEvent_Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.AnmEvent_Open
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalWorkerInfo_C::AnmEvent_Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "AnmEvent_Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.Check Valid Work Suitability
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPalWorkSuitability                     InWorkSuitability                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalWorkSuitability                     OutWorkSuitability                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalWorkerInfo_C::Check_Valid_Work_Suitability(EPalWorkSuitability InWorkSuitability, bool* IsValid, EPalWorkSuitability* OutWorkSuitability)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "Check Valid Work Suitability");

	Params::WBP_PalWorkerInfo_C_Check_Valid_Work_Suitability Parms{};

	Parms.InWorkSuitability = InWorkSuitability;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutWorkSuitability != nullptr)
		*OutWorkSuitability = Parms.OutWorkSuitability;
}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.ExecuteUbergraph_WBP_PalWorkerInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalWorkerInfo_C::ExecuteUbergraph_WBP_PalWorkerInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "ExecuteUbergraph_WBP_PalWorkerInfo");

	Params::WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalWorkerInfo_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.OnUpdateCondition_Binded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalWorkerInfo_C::OnUpdateCondition_Binded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "OnUpdateCondition_Binded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    TargetHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalWorkerInfo_C::Setup(class UPalIndividualCharacterHandle* TargetHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "Setup");

	Params::WBP_PalWorkerInfo_C_Setup Parms{};

	Parms.TargetHandle = TargetHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.SetWorkerComment
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    TargetHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalWorkerInfo_C::SetWorkerComment(class UPalIndividualCharacterHandle* TargetHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "SetWorkerComment");

	Params::WBP_PalWorkerInfo_C_SetWorkerComment Parms{};

	Parms.TargetHandle = TargetHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.SetWorkType
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    TargetHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalWorkerInfo_C::SetWorkType(class UPalIndividualCharacterHandle* TargetHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "SetWorkType");

	Params::WBP_PalWorkerInfo_C_SetWorkType Parms{};

	Parms.TargetHandle = TargetHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.UpdateHP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    NowMaxHP                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PalWorkerInfo_C::UpdateHP(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "UpdateHP");

	Params::WBP_PalWorkerInfo_C_UpdateHP Parms{};

	Parms.NowHP = std::move(NowHP);
	Parms.NowMaxHP = std::move(NowMaxHP);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.UpdateHunger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NowHunger                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  NowMaxHunger                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalWorkerInfo_C::UpdateHunger(double NowHunger, double NowMaxHunger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "UpdateHunger");

	Params::WBP_PalWorkerInfo_C_UpdateHunger Parms{};

	Parms.NowHunger = NowHunger;
	Parms.NowMaxHunger = NowMaxHunger;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.UpdateLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalWorkerInfo_C::UpdateLevel(int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "UpdateLevel");

	Params::WBP_PalWorkerInfo_C_UpdateLevel Parms{};

	Parms.NewLevel = NewLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.UpdateNickName
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           NewNickName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_PalWorkerInfo_C::UpdateNickName(const class FString& NewNickName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "UpdateNickName");

	Params::WBP_PalWorkerInfo_C_UpdateNickName Parms{};

	Parms.NewNickName = std::move(NewNickName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.UpdateSanity
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NowSanity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  NowMaxSanity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalWorkerInfo_C::UpdateSanity(double NowSanity, double NowMaxSanity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "UpdateSanity");

	Params::WBP_PalWorkerInfo_C_UpdateSanity Parms{};

	Parms.NowSanity = NowSanity;
	Parms.NowMaxSanity = NowMaxSanity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.Set Work Suitability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EPalWorkSuitability, int32>        WorkSuitabilities                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PalWorkerInfo_C::Set_Work_Suitability(const TMap<EPalWorkSuitability, int32>& WorkSuitabilities)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "Set Work Suitability");

	Params::WBP_PalWorkerInfo_C_Set_Work_Suitability Parms{};

	Parms.WorkSuitabilities = std::move(WorkSuitabilities);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.SetPassiveSkill
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     PassiveSkills                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PalWorkerInfo_C::SetPassiveSkill(TArray<class FName>& PassiveSkills)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "SetPassiveSkill");

	Params::WBP_PalWorkerInfo_C_SetPassiveSkill Parms{};

	Parms.PassiveSkills = std::move(PassiveSkills);

	UObject::ProcessEvent(Func, &Parms);

	PassiveSkills = std::move(Parms.PassiveSkills);
}

}

