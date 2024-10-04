#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PalLoupe_classes.hpp"
#include "PalServer/WBP_PalLoupe_parameters.hpp"


namespace PalServer
{

// Function WBP_PalLoupe.WBP_PalLoupe_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalLoupe_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLoupe_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalLoupe.WBP_PalLoupe_C.ExecuteUbergraph_WBP_PalLoupe
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLoupe_C::ExecuteUbergraph_WBP_PalLoupe(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLoupe_C", "ExecuteUbergraph_WBP_PalLoupe");

	Params::WBP_PalLoupe_C_ExecuteUbergraph_WBP_PalLoupe Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLoupe.WBP_PalLoupe_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalLoupe_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLoupe_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalLoupe.WBP_PalLoupe_C.SetTargetPal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      TargetSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLoupe_C::SetTargetPal(class UPalIndividualCharacterSlot* TargetSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLoupe_C", "SetTargetPal");

	Params::WBP_PalLoupe_C_SetTargetPal Parms{};

	Parms.TargetSlot = TargetSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLoupe.WBP_PalLoupe_C.UpdateHP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    NowMaxHP                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PalLoupe_C::UpdateHP(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLoupe_C", "UpdateHP");

	Params::WBP_PalLoupe_C_UpdateHP Parms{};

	Parms.NowHP = std::move(NowHP);
	Parms.NowMaxHP = std::move(NowMaxHP);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLoupe.WBP_PalLoupe_C.UpdateHunger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NowHunger                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  NowMaxHunger                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLoupe_C::UpdateHunger(double NowHunger, double NowMaxHunger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLoupe_C", "UpdateHunger");

	Params::WBP_PalLoupe_C_UpdateHunger Parms{};

	Parms.NowHunger = NowHunger;
	Parms.NowMaxHunger = NowMaxHunger;

	UObject::ProcessEvent(Func, &Parms);
}

}

