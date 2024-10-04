#include "PalServer/Basic.hpp"

#include "PalServer/WBP_InventoryListContent_classes.hpp"
#include "PalServer/WBP_InventoryListContent_parameters.hpp"


namespace PalServer
{

// Function WBP_InventoryListContent.WBP_InventoryListContent_C.AddWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          InWidgett                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryListContent_C::AddWidget(class UWidget* InWidgett)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryListContent_C", "AddWidget");

	Params::WBP_InventoryListContent_C_AddWidget Parms{};

	Parms.InWidgett = InWidgett;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryListContent.WBP_InventoryListContent_C.GetAllContents
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWidget*>                  Contents                                               (Parm, OutParm, ContainsInstancedReference)

void UWBP_InventoryListContent_C::GetAllContents(TArray<class UWidget*>* Contents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryListContent_C", "GetAllContents");

	Params::WBP_InventoryListContent_C_GetAllContents Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Contents != nullptr)
		*Contents = std::move(Parms.Contents);
}


// Function WBP_InventoryListContent.WBP_InventoryListContent_C.SetCategoryName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             CategoryName                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InventoryListContent_C::SetCategoryName(const class FText& CategoryName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryListContent_C", "SetCategoryName");

	Params::WBP_InventoryListContent_C_SetCategoryName Parms{};

	Parms.CategoryName = std::move(CategoryName);

	UObject::ProcessEvent(Func, &Parms);
}

}

