#include "PalServer/Basic.hpp"

#include "PalServer/WBP_EquipmentSelectListBlock_classes.hpp"
#include "PalServer/WBP_EquipmentSelectListBlock_parameters.hpp"


namespace PalServer
{

// Function WBP_EquipmentSelectListBlock.WBP_EquipmentSelectListBlock_C.EditCreatedSlotWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalItemSlotButtonBase_C*     CreatedSlotWidget                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          EditedWidget                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_EquipmentSelectListBlock_C::EditCreatedSlotWidget(class UWBP_PalItemSlotButtonBase_C* CreatedSlotWidget, class UWidget** EditedWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EquipmentSelectListBlock_C", "EditCreatedSlotWidget");

	Params::WBP_EquipmentSelectListBlock_C_EditCreatedSlotWidget Parms{};

	Parms.CreatedSlotWidget = CreatedSlotWidget;

	UObject::ProcessEvent(Func, &Parms);

	if (EditedWidget != nullptr)
		*EditedWidget = Parms.EditedWidget;
}


// Function WBP_EquipmentSelectListBlock.WBP_EquipmentSelectListBlock_C.GetAllItemSlotButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWBP_PalItemSlotButtonBase_C*>SlotButtons                                            (Parm, OutParm, ContainsInstancedReference)

void UWBP_EquipmentSelectListBlock_C::GetAllItemSlotButtons(TArray<class UWBP_PalItemSlotButtonBase_C*>* SlotButtons)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EquipmentSelectListBlock_C", "GetAllItemSlotButtons");

	Params::WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SlotButtons != nullptr)
		*SlotButtons = std::move(Parms.SlotButtons);
}


// Function WBP_EquipmentSelectListBlock.WBP_EquipmentSelectListBlock_C.GetFocusTarget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          NewParam                                               (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_EquipmentSelectListBlock_C::GetFocusTarget(class UWidget** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EquipmentSelectListBlock_C", "GetFocusTarget");

	Params::WBP_EquipmentSelectListBlock_C_GetFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}

}

