#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_Ingame_Signboard_3DText_classes.hpp"
#include "PalSDK/WBP_Ingame_Signboard_3DText_parameters.hpp"


namespace PalSDK
{

// Function WBP_Ingame_Signboard_3DText.WBP_Ingame_Signboard_3DText_C.ExecuteUbergraph_WBP_Ingame_Signboard_3DText
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Signboard_3DText_C::ExecuteUbergraph_WBP_Ingame_Signboard_3DText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Signboard_3DText_C", "ExecuteUbergraph_WBP_Ingame_Signboard_3DText");

	Params::WBP_Ingame_Signboard_3DText_C_ExecuteUbergraph_WBP_Ingame_Signboard_3DText Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Signboard_3DText.WBP_Ingame_Signboard_3DText_C.UpdateText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Ingame_Signboard_3DText_C::UpdateText(const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Signboard_3DText_C", "UpdateText");

	Params::WBP_Ingame_Signboard_3DText_C_UpdateText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

}

