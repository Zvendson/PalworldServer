#include "PalServer/Basic.hpp"

#include "PalServer/WBP_IngameCompass_CustomMarker_classes.hpp"
#include "PalServer/WBP_IngameCompass_CustomMarker_parameters.hpp"


namespace PalServer
{

// Function WBP_IngameCompass_CustomMarker.WBP_IngameCompass_CustomMarker_C.SetCustomMarkerTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   IconType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameCompass_CustomMarker_C::SetCustomMarkerTexture(int32 IconType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameCompass_CustomMarker_C", "SetCustomMarkerTexture");

	Params::WBP_IngameCompass_CustomMarker_C_SetCustomMarkerTexture Parms{};

	Parms.IconType = IconType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameCompass_CustomMarker.WBP_IngameCompass_CustomMarker_C.SetDistanceText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Length                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameCompass_CustomMarker_C::SetDistanceText(double Length)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameCompass_CustomMarker_C", "SetDistanceText");

	Params::WBP_IngameCompass_CustomMarker_C_SetDistanceText Parms{};

	Parms.Length = Length;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameCompass_CustomMarker.WBP_IngameCompass_CustomMarker_C.UpdateDistance
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_IngameCompass_CustomMarker_C::UpdateDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameCompass_CustomMarker_C", "UpdateDistance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameCompass_CustomMarker.WBP_IngameCompass_CustomMarker_C.UpdateVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InDistance                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameCompass_CustomMarker_C::UpdateVisibility(bool* InDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameCompass_CustomMarker_C", "UpdateVisibility");

	Params::WBP_IngameCompass_CustomMarker_C_UpdateVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InDistance != nullptr)
		*InDistance = Parms.InDistance;
}

}

