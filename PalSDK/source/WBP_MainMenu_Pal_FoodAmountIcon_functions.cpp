#include "PalServer/Basic.hpp"

#include "PalServer/WBP_MainMenu_Pal_FoodAmountIcon_classes.hpp"
#include "PalServer/WBP_MainMenu_Pal_FoodAmountIcon_parameters.hpp"


namespace PalServer
{

// Function WBP_MainMenu_Pal_FoodAmountIcon.WBP_MainMenu_Pal_FoodAmountIcon_C.AnmEvent_Off
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_Pal_FoodAmountIcon_C::AnmEvent_Off()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Pal_FoodAmountIcon_C", "AnmEvent_Off");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_Pal_FoodAmountIcon.WBP_MainMenu_Pal_FoodAmountIcon_C.AnmEvent_On
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_Pal_FoodAmountIcon_C::AnmEvent_On()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Pal_FoodAmountIcon_C", "AnmEvent_On");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_Pal_FoodAmountIcon.WBP_MainMenu_Pal_FoodAmountIcon_C.ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmountIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_FoodAmountIcon_C::ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmountIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Pal_FoodAmountIcon_C", "ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmountIcon");

	Params::WBP_MainMenu_Pal_FoodAmountIcon_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmountIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

