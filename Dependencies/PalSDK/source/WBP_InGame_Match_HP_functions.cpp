#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_InGame_Match_HP_classes.hpp"
#include "PalSDK/WBP_InGame_Match_HP_parameters.hpp"


namespace PalSDK
{

// Function WBP_InGame_Match_HP.WBP_InGame_Match_HP_C.ExecuteUbergraph_WBP_InGame_Match_HP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGame_Match_HP_C::ExecuteUbergraph_WBP_InGame_Match_HP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_HP_C", "ExecuteUbergraph_WBP_InGame_Match_HP");

	Params::WBP_InGame_Match_HP_C_ExecuteUbergraph_WBP_InGame_Match_HP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InGame_Match_HP.WBP_InGame_Match_HP_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InGame_Match_HP_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_HP_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGame_Match_HP.WBP_InGame_Match_HP_C.Setup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalArenaPlayerIndex                    LocalPlayerIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<EPalArenaPlayerIndex, struct FPalArenaPlayerInfo>PlayerInfoMap                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_InGame_Match_HP_C::Setup(EPalArenaPlayerIndex LocalPlayerIndex, const TMap<EPalArenaPlayerIndex, struct FPalArenaPlayerInfo>& PlayerInfoMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_HP_C", "Setup");

	Params::WBP_InGame_Match_HP_C_Setup Parms{};

	Parms.LocalPlayerIndex = LocalPlayerIndex;
	Parms.PlayerInfoMap = std::move(PlayerInfoMap);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InGame_Match_HP.WBP_InGame_Match_HP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGame_Match_HP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_HP_C", "Tick");

	Params::WBP_InGame_Match_HP_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InGame_Match_HP.WBP_InGame_Match_HP_C.Unbind
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGame_Match_HP_C::Unbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_HP_C", "Unbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGame_Match_HP.WBP_InGame_Match_HP_C.UpdatePlayerHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    MaxHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_InGame_Match_HP_C::UpdatePlayerHP(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& MaxHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_HP_C", "UpdatePlayerHP");

	Params::WBP_InGame_Match_HP_C_UpdatePlayerHP Parms{};

	Parms.NowHP = std::move(NowHP);
	Parms.MaxHP = std::move(MaxHP);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InGame_Match_HP.WBP_InGame_Match_HP_C.UpdateRivalHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    MaxHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_InGame_Match_HP_C::UpdateRivalHP(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& MaxHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_HP_C", "UpdateRivalHP");

	Params::WBP_InGame_Match_HP_C_UpdateRivalHP Parms{};

	Parms.NowHP = std::move(NowHP);
	Parms.MaxHP = std::move(MaxHP);

	UObject::ProcessEvent(Func, &Parms);
}

}

