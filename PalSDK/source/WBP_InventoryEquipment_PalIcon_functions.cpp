#include "PalServer/Basic.hpp"

#include "PalServer/WBP_InventoryEquipment_PalIcon_classes.hpp"
#include "PalServer/WBP_InventoryEquipment_PalIcon_parameters.hpp"


namespace PalServer
{

// Function WBP_InventoryEquipment_PalIcon.WBP_InventoryEquipment_PalIcon_C.ExecuteUbergraph_WBP_InventoryEquipment_PalIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_PalIcon_C::ExecuteUbergraph_WBP_InventoryEquipment_PalIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_PalIcon_C", "ExecuteUbergraph_WBP_InventoryEquipment_PalIcon");

	Params::WBP_InventoryEquipment_PalIcon_C_ExecuteUbergraph_WBP_InventoryEquipment_PalIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryEquipment_PalIcon.WBP_InventoryEquipment_PalIcon_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             IconId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_PalIcon_C::Setup(class FName IconId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_PalIcon_C", "Setup");

	Params::WBP_InventoryEquipment_PalIcon_C_Setup Parms{};

	Parms.IconId = IconId;

	UObject::ProcessEvent(Func, &Parms);
}

}

