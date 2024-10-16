#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PalItemSlotDragDropIcon_classes.hpp"
#include "PalSDK/WBP_PalItemSlotDragDropIcon_parameters.hpp"


namespace PalSDK
{

// Function WBP_PalItemSlotDragDropIcon.WBP_PalItemSlotDragDropIcon_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             StaticItemId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DisplayNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalItemSlotDragDropIcon_C::Setup(class FName StaticItemId, int32 DisplayNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalItemSlotDragDropIcon_C", "Setup");

	Params::WBP_PalItemSlotDragDropIcon_C_Setup Parms{};

	Parms.StaticItemId = StaticItemId;
	Parms.DisplayNum = DisplayNum;

	UObject::ProcessEvent(Func, &Parms);
}

}

