#pragma once

#include "Basic.hpp"

#include "WBP_PalItemListBlock_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_EquipmentSelectListBlock.WBP_EquipmentSelectListBlock_C
// 0x0000 (0x04D0 - 0x04D0)
class UWBP_EquipmentSelectListBlock_C final : public UWBP_PalItemListBlock_C
{
public:
	void EditCreatedSlotWidget(class UWBP_PalItemSlotButtonBase_C* CreatedSlotWidget, class UWidget** EditedWidget);
	void GetAllItemSlotButtons(TArray<class UWBP_PalItemSlotButtonBase_C*>* SlotButtons);
	void GetFocusTarget(class UWidget** NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_EquipmentSelectListBlock_C">();
	}
	static class UWBP_EquipmentSelectListBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_EquipmentSelectListBlock_C>();
	}
};
static_assert(alignof(UWBP_EquipmentSelectListBlock_C) == 0x000008, "Wrong alignment on UWBP_EquipmentSelectListBlock_C");
static_assert(sizeof(UWBP_EquipmentSelectListBlock_C) == 0x0004D0, "Wrong size on UWBP_EquipmentSelectListBlock_C");

}

