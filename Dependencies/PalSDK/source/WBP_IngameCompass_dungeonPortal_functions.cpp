#include "PalServer/Basic.hpp"

#include "PalServer/WBP_IngameCompass_dungeonPortal_classes.hpp"
#include "PalServer/WBP_IngameCompass_dungeonPortal_parameters.hpp"


namespace PalServer
{

// Function WBP_IngameCompass_dungeonPortal.WBP_IngameCompass_dungeonPortal_C.SetDistanceText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Length                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameCompass_dungeonPortal_C::SetDistanceText(double Length)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameCompass_dungeonPortal_C", "SetDistanceText");

	Params::WBP_IngameCompass_dungeonPortal_C_SetDistanceText Parms{};

	Parms.Length = Length;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameCompass_dungeonPortal.WBP_IngameCompass_dungeonPortal_C.SetupTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        SoftTexture                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_IngameCompass_dungeonPortal_C::SetupTexture(TSoftObjectPtr<class UTexture2D> SoftTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameCompass_dungeonPortal_C", "SetupTexture");

	Params::WBP_IngameCompass_dungeonPortal_C_SetupTexture Parms{};

	Parms.SoftTexture = SoftTexture;

	UObject::ProcessEvent(Func, &Parms);
}

}

