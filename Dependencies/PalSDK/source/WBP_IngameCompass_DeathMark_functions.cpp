#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_IngameCompass_DeathMark_classes.hpp"
#include "PalSDK/WBP_IngameCompass_DeathMark_parameters.hpp"


namespace PalSDK
{

// Function WBP_IngameCompass_DeathMark.WBP_IngameCompass_DeathMark_C.SetDistanceText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Length                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameCompass_DeathMark_C::SetDistanceText(double Length)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameCompass_DeathMark_C", "SetDistanceText");

	Params::WBP_IngameCompass_DeathMark_C_SetDistanceText Parms{};

	Parms.Length = Length;

	UObject::ProcessEvent(Func, &Parms);
}

}

