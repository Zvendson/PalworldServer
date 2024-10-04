#include "PalServer/Basic.hpp"

#include "PalServer/WBP_MapPoint_Info_classes.hpp"
#include "PalServer/WBP_MapPoint_Info_parameters.hpp"


namespace PalServer
{

// Function WBP_MapPoint_Info.WBP_MapPoint_Info_C.AdjustSide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        TargetGeometry                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void UWBP_MapPoint_Info_C::AdjustSide(const struct FGeometry& TargetGeometry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapPoint_Info_C", "AdjustSide");

	Params::WBP_MapPoint_Info_C_AdjustSide Parms{};

	Parms.TargetGeometry = std::move(TargetGeometry);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapPoint_Info.WBP_MapPoint_Info_C.ExecuteUbergraph_WBP_MapPoint_Info
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapPoint_Info_C::ExecuteUbergraph_WBP_MapPoint_Info(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapPoint_Info_C", "ExecuteUbergraph_WBP_MapPoint_Info");

	Params::WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapPoint_Info.WBP_MapPoint_Info_C.SetBossInfo
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDefeated                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CharacterID                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapPoint_Info_C::SetBossInfo(bool IsDefeated, const class FName& CharacterID, int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapPoint_Info_C", "SetBossInfo");

	Params::WBP_MapPoint_Info_C_SetBossInfo Parms{};

	Parms.IsDefeated = IsDefeated;
	Parms.CharacterID = CharacterID;
	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapPoint_Info.WBP_MapPoint_Info_C.SetCampInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CanTeleport                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapPoint_Info_C::SetCampInfo(bool CanTeleport)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapPoint_Info_C", "SetCampInfo");

	Params::WBP_MapPoint_Info_C_SetCampInfo Parms{};

	Parms.CanTeleport = CanTeleport;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapPoint_Info.WBP_MapPoint_Info_C.SetFTInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             FTID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CanTeleport                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapPoint_Info_C::SetFTInfo(class FName FTID, bool CanTeleport)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapPoint_Info_C", "SetFTInfo");

	Params::WBP_MapPoint_Info_C_SetFTInfo Parms{};

	Parms.FTID = FTID;
	Parms.CanTeleport = CanTeleport;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapPoint_Info.WBP_MapPoint_Info_C.SetTowerBossInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalBossTower*                    BossTower                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CanTeleport                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapPoint_Info_C::SetTowerBossInfo(class APalBossTower* BossTower, bool CanTeleport)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapPoint_Info_C", "SetTowerBossInfo");

	Params::WBP_MapPoint_Info_C_SetTowerBossInfo Parms{};

	Parms.BossTower = BossTower;
	Parms.CanTeleport = CanTeleport;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapPoint_Info.WBP_MapPoint_Info_C.ToggleDisplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldDisplay                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapPoint_Info_C::ToggleDisplay(bool ShouldDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapPoint_Info_C", "ToggleDisplay");

	Params::WBP_MapPoint_Info_C_ToggleDisplay Parms{};

	Parms.ShouldDisplay = ShouldDisplay;

	UObject::ProcessEvent(Func, &Parms);
}

}

