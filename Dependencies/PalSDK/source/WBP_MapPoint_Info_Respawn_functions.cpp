#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_MapPoint_Info_Respawn_classes.hpp"
#include "PalSDK/WBP_MapPoint_Info_Respawn_parameters.hpp"


namespace PalSDK
{

// Function WBP_MapPoint_Info_Respawn.WBP_MapPoint_Info_Respawn_C.AdjustSide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        TargetGeometry                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void UWBP_MapPoint_Info_Respawn_C::AdjustSide(const struct FGeometry& TargetGeometry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapPoint_Info_Respawn_C", "AdjustSide");

	Params::WBP_MapPoint_Info_Respawn_C_AdjustSide Parms{};

	Parms.TargetGeometry = std::move(TargetGeometry);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapPoint_Info_Respawn.WBP_MapPoint_Info_Respawn_C.ExecuteUbergraph_WBP_MapPoint_Info_Respawn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapPoint_Info_Respawn_C::ExecuteUbergraph_WBP_MapPoint_Info_Respawn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapPoint_Info_Respawn_C", "ExecuteUbergraph_WBP_MapPoint_Info_Respawn");

	Params::WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapPoint_Info_Respawn.WBP_MapPoint_Info_Respawn_C.SetPointInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PointId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsInitSelect                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapPoint_Info_Respawn_C::SetPointInfo(class FName PointId, bool IsInitSelect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapPoint_Info_Respawn_C", "SetPointInfo");

	Params::WBP_MapPoint_Info_Respawn_C_SetPointInfo Parms{};

	Parms.PointId = PointId;
	Parms.IsInitSelect = IsInitSelect;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapPoint_Info_Respawn.WBP_MapPoint_Info_Respawn_C.ToggleDisplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldDisplay                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapPoint_Info_Respawn_C::ToggleDisplay(bool ShouldDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapPoint_Info_Respawn_C", "ToggleDisplay");

	Params::WBP_MapPoint_Info_Respawn_C_ToggleDisplay Parms{};

	Parms.ShouldDisplay = ShouldDisplay;

	UObject::ProcessEvent(Func, &Parms);
}

}

