#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_Reticle_Cancel_classes.hpp"
#include "PalSDK/WBP_Reticle_Cancel_parameters.hpp"


namespace PalSDK
{

// Function WBP_Reticle_Cancel.WBP_Reticle_Cancel_C.ExecuteUbergraph_WBP_Reticle_Cancel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Reticle_Cancel_C::ExecuteUbergraph_WBP_Reticle_Cancel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Cancel_C", "ExecuteUbergraph_WBP_Reticle_Cancel");

	Params::WBP_Reticle_Cancel_C_ExecuteUbergraph_WBP_Reticle_Cancel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Reticle_Cancel.WBP_Reticle_Cancel_C.SetKeyGuideInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// Enum_ReticleCancel_DisplayType          DisplayType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Reticle_Cancel_C::SetKeyGuideInfo(Enum_ReticleCancel_DisplayType DisplayType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Cancel_C", "SetKeyGuideInfo");

	Params::WBP_Reticle_Cancel_C_SetKeyGuideInfo Parms{};

	Parms.DisplayType = DisplayType;

	UObject::ProcessEvent(Func, &Parms);
}

}

