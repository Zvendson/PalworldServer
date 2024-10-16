#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_IngameFlyEff_classes.hpp"
#include "PalSDK/WBP_IngameFlyEff_parameters.hpp"


namespace PalSDK
{

// Function WBP_IngameFlyEff.WBP_IngameFlyEff_C.EnableEff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*                    Character_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameFlyEff_C::EnableEff(bool IsEnable, class APalCharacter* Character_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameFlyEff_C", "EnableEff");

	Params::WBP_IngameFlyEff_C_EnableEff Parms{};

	Parms.IsEnable = IsEnable;
	Parms.Character_0 = Character_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameFlyEff.WBP_IngameFlyEff_C.ExecuteUbergraph_WBP_IngameFlyEff
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameFlyEff_C::ExecuteUbergraph_WBP_IngameFlyEff(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameFlyEff_C", "ExecuteUbergraph_WBP_IngameFlyEff");

	Params::WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameFlyEff.WBP_IngameFlyEff_C.UpdateEff
// (BlueprintCallable, BlueprintEvent)

void UWBP_IngameFlyEff_C::UpdateEff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameFlyEff_C", "UpdateEff");

	UObject::ProcessEvent(Func, nullptr);
}

}

