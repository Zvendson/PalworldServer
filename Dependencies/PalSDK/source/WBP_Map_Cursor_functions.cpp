#include "PalServer/Basic.hpp"

#include "PalServer/WBP_Map_Cursor_classes.hpp"
#include "PalServer/WBP_Map_Cursor_parameters.hpp"


namespace PalServer
{

// Function WBP_Map_Cursor.WBP_Map_Cursor_C.AnmEvent_Focus
// (BlueprintCallable, BlueprintEvent)

void UWBP_Map_Cursor_C::AnmEvent_Focus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Cursor_C", "AnmEvent_Focus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Cursor.WBP_Map_Cursor_C.AnmEvent_Loop
// (BlueprintCallable, BlueprintEvent)

void UWBP_Map_Cursor_C::AnmEvent_Loop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Cursor_C", "AnmEvent_Loop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Cursor.WBP_Map_Cursor_C.AnmEvent_Reset
// (BlueprintCallable, BlueprintEvent)

void UWBP_Map_Cursor_C::AnmEvent_Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Cursor_C", "AnmEvent_Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Cursor.WBP_Map_Cursor_C.AnmEvent_Unfocus
// (BlueprintCallable, BlueprintEvent)

void UWBP_Map_Cursor_C::AnmEvent_Unfocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Cursor_C", "AnmEvent_Unfocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Cursor.WBP_Map_Cursor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Map_Cursor_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Cursor_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Cursor.WBP_Map_Cursor_C.ExecuteUbergraph_WBP_Map_Cursor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Cursor_C::ExecuteUbergraph_WBP_Map_Cursor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Cursor_C", "ExecuteUbergraph_WBP_Map_Cursor");

	Params::WBP_Map_Cursor_C_ExecuteUbergraph_WBP_Map_Cursor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

