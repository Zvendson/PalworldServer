#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_IngameCompass_camp_classes.hpp"
#include "PalSDK/WBP_IngameCompass_camp_parameters.hpp"


namespace PalSDK
{

// Function WBP_IngameCompass_camp.WBP_IngameCompass_camp_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IngameCompass_camp_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameCompass_camp_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameCompass_camp.WBP_IngameCompass_camp_C.ExecuteUbergraph_WBP_IngameCompass_camp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameCompass_camp_C::ExecuteUbergraph_WBP_IngameCompass_camp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameCompass_camp_C", "ExecuteUbergraph_WBP_IngameCompass_camp");

	Params::WBP_IngameCompass_camp_C_ExecuteUbergraph_WBP_IngameCompass_camp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameCompass_camp.WBP_IngameCompass_camp_C.SetDistanceText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Length                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameCompass_camp_C::SetDistanceText(double Length)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameCompass_camp_C", "SetDistanceText");

	Params::WBP_IngameCompass_camp_C_SetDistanceText Parms{};

	Parms.Length = Length;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameCompass_camp.WBP_IngameCompass_camp_C.SetupTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        SoftTexture                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_IngameCompass_camp_C::SetupTexture(TSoftObjectPtr<class UTexture2D> SoftTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameCompass_camp_C", "SetupTexture");

	Params::WBP_IngameCompass_camp_C_SetupTexture Parms{};

	Parms.SoftTexture = SoftTexture;

	UObject::ProcessEvent(Func, &Parms);
}

}

