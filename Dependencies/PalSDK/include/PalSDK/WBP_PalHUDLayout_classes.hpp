#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PalHUDLayout.WBP_PalHUDLayout_C
// 0x0018 (0x03E0 - 0x03C8)
class UWBP_PalHUDLayout_C final : public UPalUIHUDLayoutBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           HUDCanvas;                                         // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           WorldHUDCanvas;                                    // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void AddHUD(class UPalUserWidget* Widget, const int32 ZOrder);
	void AddWorldHUD(class UPalUserWidgetWorldHUD* Widget);
	void ExecuteUbergraph_WBP_PalHUDLayout(int32 EntryPoint);
	void RemoveHUD(class UPalUserWidget* Widget);
	void RemoveWorldHUD(class UPalUserWidgetWorldHUD* Widget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalHUDLayout_C">();
	}
	static class UWBP_PalHUDLayout_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalHUDLayout_C>();
	}
};
static_assert(alignof(UWBP_PalHUDLayout_C) == 0x000008, "Wrong alignment on UWBP_PalHUDLayout_C");
static_assert(sizeof(UWBP_PalHUDLayout_C) == 0x0003E0, "Wrong size on UWBP_PalHUDLayout_C");
static_assert(offsetof(UWBP_PalHUDLayout_C, UberGraphFrame) == 0x0003C8, "Member 'UWBP_PalHUDLayout_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalHUDLayout_C, HUDCanvas) == 0x0003D0, "Member 'UWBP_PalHUDLayout_C::HUDCanvas' has a wrong offset!");
static_assert(offsetof(UWBP_PalHUDLayout_C, WorldHUDCanvas) == 0x0003D8, "Member 'UWBP_PalHUDLayout_C::WorldHUDCanvas' has a wrong offset!");

}

