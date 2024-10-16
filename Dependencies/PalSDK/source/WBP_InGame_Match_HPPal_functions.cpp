#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_InGame_Match_HPPal_classes.hpp"
#include "PalSDK/WBP_InGame_Match_HPPal_parameters.hpp"


namespace PalSDK
{

// Function WBP_InGame_Match_HPPal.WBP_InGame_Match_HPPal_C.BindFromHandle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    TargetHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InGame_Match_HPPal_C::BindFromHandle(class UPalIndividualCharacterHandle* TargetHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_HPPal_C", "BindFromHandle");

	Params::WBP_InGame_Match_HPPal_C_BindFromHandle Parms{};

	Parms.TargetHandle = TargetHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InGame_Match_HPPal.WBP_InGame_Match_HPPal_C.CheckState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  HPPercent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDead                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGame_Match_HPPal_C::CheckState(double HPPercent, bool IsDead)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_HPPal_C", "CheckState");

	Params::WBP_InGame_Match_HPPal_C_CheckState Parms{};

	Parms.HPPercent = HPPercent;
	Parms.IsDead = IsDead;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InGame_Match_HPPal.WBP_InGame_Match_HPPal_C.ExecuteUbergraph_WBP_InGame_Match_HPPal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGame_Match_HPPal_C::ExecuteUbergraph_WBP_InGame_Match_HPPal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_HPPal_C", "ExecuteUbergraph_WBP_InGame_Match_HPPal");

	Params::WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InGame_Match_HPPal.WBP_InGame_Match_HPPal_C.On Update HP Binded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    NowMaxHP                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_InGame_Match_HPPal_C::On_Update_HP_Binded(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_HPPal_C", "On Update HP Binded");

	Params::WBP_InGame_Match_HPPal_C_On_Update_HP_Binded Parms{};

	Parms.NowHP = std::move(NowHP);
	Parms.NowMaxHP = std::move(NowMaxHP);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InGame_Match_HPPal.WBP_InGame_Match_HPPal_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InGame_Match_HPPal_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_HPPal_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGame_Match_HPPal.WBP_InGame_Match_HPPal_C.SetIsRival
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsRival                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGame_Match_HPPal_C::SetIsRival(bool IsRival)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_HPPal_C", "SetIsRival");

	Params::WBP_InGame_Match_HPPal_C_SetIsRival Parms{};

	Parms.IsRival = IsRival;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InGame_Match_HPPal.WBP_InGame_Match_HPPal_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGame_Match_HPPal_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_HPPal_C", "Tick");

	Params::WBP_InGame_Match_HPPal_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

