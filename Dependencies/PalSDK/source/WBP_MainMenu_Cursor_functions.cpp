#include "PalServer/Basic.hpp"

#include "PalServer/WBP_MainMenu_Cursor_classes.hpp"
#include "PalServer/WBP_MainMenu_Cursor_parameters.hpp"


namespace PalServer
{

// Function WBP_MainMenu_Cursor.WBP_MainMenu_Cursor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MainMenu_Cursor_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Cursor_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_Cursor.WBP_MainMenu_Cursor_C.ExecuteUbergraph_WBP_MainMenu_Cursor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Cursor_C::ExecuteUbergraph_WBP_MainMenu_Cursor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Cursor_C", "ExecuteUbergraph_WBP_MainMenu_Cursor");

	Params::WBP_MainMenu_Cursor_C_ExecuteUbergraph_WBP_MainMenu_Cursor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

