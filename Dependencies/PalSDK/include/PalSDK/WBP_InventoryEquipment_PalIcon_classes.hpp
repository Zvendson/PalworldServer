#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_InventoryEquipment_PalIcon.WBP_InventoryEquipment_PalIcon_C
// 0x0018 (0x0290 - 0x0278)
class UWBP_InventoryEquipment_PalIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 IconPal;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DynamicMaterial;                                   // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_InventoryEquipment_PalIcon(int32 EntryPoint);
	void Setup(class FName IconId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InventoryEquipment_PalIcon_C">();
	}
	static class UWBP_InventoryEquipment_PalIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InventoryEquipment_PalIcon_C>();
	}
};
static_assert(alignof(UWBP_InventoryEquipment_PalIcon_C) == 0x000008, "Wrong alignment on UWBP_InventoryEquipment_PalIcon_C");
static_assert(sizeof(UWBP_InventoryEquipment_PalIcon_C) == 0x000290, "Wrong size on UWBP_InventoryEquipment_PalIcon_C");
static_assert(offsetof(UWBP_InventoryEquipment_PalIcon_C, UberGraphFrame) == 0x000278, "Member 'UWBP_InventoryEquipment_PalIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryEquipment_PalIcon_C, IconPal) == 0x000280, "Member 'UWBP_InventoryEquipment_PalIcon_C::IconPal' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryEquipment_PalIcon_C, DynamicMaterial) == 0x000288, "Member 'UWBP_InventoryEquipment_PalIcon_C::DynamicMaterial' has a wrong offset!");

}

