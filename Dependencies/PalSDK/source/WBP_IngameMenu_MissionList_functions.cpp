#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_IngameMenu_MissionList_classes.hpp"
#include "PalSDK/WBP_IngameMenu_MissionList_parameters.hpp"


namespace PalSDK
{

// Function WBP_IngameMenu_MissionList.WBP_IngameMenu_MissionList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IngameMenu_MissionList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_MissionList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameMenu_MissionList.WBP_IngameMenu_MissionList_C.ExecuteUbergraph_WBP_IngameMenu_MissionList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_MissionList_C::ExecuteUbergraph_WBP_IngameMenu_MissionList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_MissionList_C", "ExecuteUbergraph_WBP_IngameMenu_MissionList");

	Params::WBP_IngameMenu_MissionList_C_ExecuteUbergraph_WBP_IngameMenu_MissionList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_MissionList.WBP_IngameMenu_MissionList_C.SetDisplayMax
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_MissionList_C::SetDisplayMax(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_MissionList_C", "SetDisplayMax");

	Params::WBP_IngameMenu_MissionList_C_SetDisplayMax Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_MissionList.WBP_IngameMenu_MissionList_C.SetMissionInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   NowProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_MissionList_C::SetMissionInfo(const class FText& Text, int32 NowProgress, int32 MaxProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_MissionList_C", "SetMissionInfo");

	Params::WBP_IngameMenu_MissionList_C_SetMissionInfo Parms{};

	Parms.Text = std::move(Text);
	Parms.NowProgress = NowProgress;
	Parms.MaxProgress = MaxProgress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameMenu_MissionList.WBP_IngameMenu_MissionList_C.ToggleCheckMark
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_MissionList_C::ToggleCheckMark(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameMenu_MissionList_C", "ToggleCheckMark");

	Params::WBP_IngameMenu_MissionList_C_ToggleCheckMark Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}

}

