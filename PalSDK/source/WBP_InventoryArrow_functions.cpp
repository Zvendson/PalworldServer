#include "PalServer/Basic.hpp"

#include "PalServer/WBP_InventoryArrow_classes.hpp"
#include "PalServer/WBP_InventoryArrow_parameters.hpp"


namespace PalServer
{

// Function WBP_InventoryArrow.WBP_InventoryArrow_C.AnmEvent_Cursor
// (BlueprintCallable, BlueprintEvent)

void UWBP_InventoryArrow_C::AnmEvent_Cursor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryArrow_C", "AnmEvent_Cursor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryArrow.WBP_InventoryArrow_C.ExecuteUbergraph_WBP_InventoryArrow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryArrow_C::ExecuteUbergraph_WBP_InventoryArrow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryArrow_C", "ExecuteUbergraph_WBP_InventoryArrow");

	Params::WBP_InventoryArrow_C_ExecuteUbergraph_WBP_InventoryArrow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryArrow.WBP_InventoryArrow_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_InventoryArrow_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryArrow_C", "OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

