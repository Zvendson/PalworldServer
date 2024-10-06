#include "PalServer/Basic.hpp"

#include "PalServer/WBP_MainMenu_Pal_FoodAmount_classes.hpp"
#include "PalServer/WBP_MainMenu_Pal_FoodAmount_parameters.hpp"


namespace PalServer
{

// Function WBP_MainMenu_Pal_FoodAmount.WBP_MainMenu_Pal_FoodAmount_C.ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_FoodAmount_C::ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Pal_FoodAmount_C", "ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount");

	Params::WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_Pal_FoodAmount.WBP_MainMenu_Pal_FoodAmount_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MainMenu_Pal_FoodAmount_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Pal_FoodAmount_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_Pal_FoodAmount.WBP_MainMenu_Pal_FoodAmount_C.SetFoodAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   FoodAmount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_FoodAmount_C::SetFoodAmount(int32 FoodAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Pal_FoodAmount_C", "SetFoodAmount");

	Params::WBP_MainMenu_Pal_FoodAmount_C_SetFoodAmount Parms{};

	Parms.FoodAmount = FoodAmount;

	UObject::ProcessEvent(Func, &Parms);
}

}

