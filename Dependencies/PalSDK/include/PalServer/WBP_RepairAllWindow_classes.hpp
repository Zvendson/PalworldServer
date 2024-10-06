#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_RepairAllWindow.WBP_RepairAllWindow_C
// 0x0018 (0x0448 - 0x0430)
class UWBP_RepairAllWindow_C final : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_35;                                          // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_RepairAll_C*            WBP_IngameMenu_RepairAll;                          // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__WBP_RepairAllWindow_WBP_IngameMenu_RepairAll_K2Node_ComponentBoundEvent_0_OnClickedButton__DelegateSignature(bool IsYes);
	void ExecuteUbergraph_WBP_RepairAllWindow(int32 EntryPoint);
	void OnSetup();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RepairAllWindow_C">();
	}
	static class UWBP_RepairAllWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RepairAllWindow_C>();
	}
};
static_assert(alignof(UWBP_RepairAllWindow_C) == 0x000008, "Wrong alignment on UWBP_RepairAllWindow_C");
static_assert(sizeof(UWBP_RepairAllWindow_C) == 0x000448, "Wrong size on UWBP_RepairAllWindow_C");
static_assert(offsetof(UWBP_RepairAllWindow_C, UberGraphFrame) == 0x000430, "Member 'UWBP_RepairAllWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_RepairAllWindow_C, Image_35) == 0x000438, "Member 'UWBP_RepairAllWindow_C::Image_35' has a wrong offset!");
static_assert(offsetof(UWBP_RepairAllWindow_C, WBP_IngameMenu_RepairAll) == 0x000440, "Member 'UWBP_RepairAllWindow_C::WBP_IngameMenu_RepairAll' has a wrong offset!");

}

