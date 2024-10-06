#include "PalServer/Basic.hpp"

#include "PalServer/WBP_CompassIcon_ForPal_classes.hpp"
#include "PalServer/WBP_CompassIcon_ForPal_parameters.hpp"


namespace PalServer
{

// Function WBP_CompassIcon_ForPal.WBP_CompassIcon_ForPal_C.ExecuteUbergraph_WBP_CompassIcon_ForPal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CompassIcon_ForPal_C::ExecuteUbergraph_WBP_CompassIcon_ForPal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CompassIcon_ForPal_C", "ExecuteUbergraph_WBP_CompassIcon_ForPal");

	Params::WBP_CompassIcon_ForPal_C_ExecuteUbergraph_WBP_CompassIcon_ForPal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CompassIcon_ForPal.WBP_CompassIcon_ForPal_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CompassIcon_ForPal_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CompassIcon_ForPal_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CompassIcon_ForPal.WBP_CompassIcon_ForPal_C.SetupTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        SoftTexture                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_CompassIcon_ForPal_C::SetupTexture(TSoftObjectPtr<class UTexture2D> SoftTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CompassIcon_ForPal_C", "SetupTexture");

	Params::WBP_CompassIcon_ForPal_C_SetupTexture Parms{};

	Parms.SoftTexture = SoftTexture;

	UObject::ProcessEvent(Func, &Parms);
}

}

