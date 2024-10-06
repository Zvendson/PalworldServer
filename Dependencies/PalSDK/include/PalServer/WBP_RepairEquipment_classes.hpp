#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_RepairEquipment.WBP_RepairEquipment_C
// 0x0090 (0x04C8 - 0x0438)
class UWBP_RepairEquipment_C final : public UPalUIRepairItemBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0438(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                      CircularThrobber_20;                               // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_13;                                          // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Repairing;                                 // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_Repair_C*               WBP_IngameMenu_Repair;                             // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UPalItemSlot*>                   RepairTargetItemSlots;                             // 0x0460(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPalDataTableRowName_UIInputAction     RepairInputAction;                                 // 0x0470(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   RepairInputActionHandle;                           // 0x0478(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_47C[0x4];                                      // 0x047C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    RepairFailedMsgID;                                 // 0x0480(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                           RepairTimeoutTimerhandle;                          // 0x0490(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     RepairAllInputAction;                              // 0x0498(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UPalItemSlot*>                   CollectedAllRepairableSlotArray;                   // 0x04A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FPalStaticItemIdAndNum>         CollectedAllRepairMaterials;                       // 0x04B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          CanAllRepair;                                      // 0x04C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_0_OnClickedCloseButton__DelegateSignature();
	void BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_1_OnClickedAnyItemSlot__DelegateSignature(class UPalItemSlot* ItemSlot);
	void BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_2_OnClickedRepairButton__DelegateSignature();
	void BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_3_OnClickedRepairAllButton__DelegateSignature();
	void Construct();
	void Destruct();
	void EndRepair(bool IsSuccess);
	void ExecuteUbergraph_WBP_RepairEquipment(int32 EntryPoint);
	void OnClosedRepairAllWindow(class UPalHUDDispatchParameterBase* Param_0);
	void OnRecievedRepairResult(bool IsSuccess);
	void OnSetup();
	void OnTimer_TimeoutRepair();
	void OpenRepairAllWindow();
	void RefreshRepairable();
	void Setup();
	void StartRepair();
	void TryRepairAll();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RepairEquipment_C">();
	}
	static class UWBP_RepairEquipment_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RepairEquipment_C>();
	}
};
static_assert(alignof(UWBP_RepairEquipment_C) == 0x000008, "Wrong alignment on UWBP_RepairEquipment_C");
static_assert(sizeof(UWBP_RepairEquipment_C) == 0x0004C8, "Wrong size on UWBP_RepairEquipment_C");
static_assert(offsetof(UWBP_RepairEquipment_C, UberGraphFrame) == 0x000438, "Member 'UWBP_RepairEquipment_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_RepairEquipment_C, CircularThrobber_20) == 0x000440, "Member 'UWBP_RepairEquipment_C::CircularThrobber_20' has a wrong offset!");
static_assert(offsetof(UWBP_RepairEquipment_C, Image_13) == 0x000448, "Member 'UWBP_RepairEquipment_C::Image_13' has a wrong offset!");
static_assert(offsetof(UWBP_RepairEquipment_C, Overlay_Repairing) == 0x000450, "Member 'UWBP_RepairEquipment_C::Overlay_Repairing' has a wrong offset!");
static_assert(offsetof(UWBP_RepairEquipment_C, WBP_IngameMenu_Repair) == 0x000458, "Member 'UWBP_RepairEquipment_C::WBP_IngameMenu_Repair' has a wrong offset!");
static_assert(offsetof(UWBP_RepairEquipment_C, RepairTargetItemSlots) == 0x000460, "Member 'UWBP_RepairEquipment_C::RepairTargetItemSlots' has a wrong offset!");
static_assert(offsetof(UWBP_RepairEquipment_C, RepairInputAction) == 0x000470, "Member 'UWBP_RepairEquipment_C::RepairInputAction' has a wrong offset!");
static_assert(offsetof(UWBP_RepairEquipment_C, RepairInputActionHandle) == 0x000478, "Member 'UWBP_RepairEquipment_C::RepairInputActionHandle' has a wrong offset!");
static_assert(offsetof(UWBP_RepairEquipment_C, RepairFailedMsgID) == 0x000480, "Member 'UWBP_RepairEquipment_C::RepairFailedMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_RepairEquipment_C, RepairTimeoutTimerhandle) == 0x000490, "Member 'UWBP_RepairEquipment_C::RepairTimeoutTimerhandle' has a wrong offset!");
static_assert(offsetof(UWBP_RepairEquipment_C, RepairAllInputAction) == 0x000498, "Member 'UWBP_RepairEquipment_C::RepairAllInputAction' has a wrong offset!");
static_assert(offsetof(UWBP_RepairEquipment_C, CollectedAllRepairableSlotArray) == 0x0004A0, "Member 'UWBP_RepairEquipment_C::CollectedAllRepairableSlotArray' has a wrong offset!");
static_assert(offsetof(UWBP_RepairEquipment_C, CollectedAllRepairMaterials) == 0x0004B0, "Member 'UWBP_RepairEquipment_C::CollectedAllRepairMaterials' has a wrong offset!");
static_assert(offsetof(UWBP_RepairEquipment_C, CanAllRepair) == 0x0004C0, "Member 'UWBP_RepairEquipment_C::CanAllRepair' has a wrong offset!");

}

