#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_InventoryListContent.WBP_InventoryListContent_C
// 0x0038 (0x02B0 - 0x0278)
class UWBP_InventoryListContent_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       Anm_Create;                                        // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Select;                                        // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C_72;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InventoryListLine_C;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InventoryListLine_L;                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InventoryListLine_R;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               WrapBox_92;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void AddWidget(class UWidget* InWidgett);
	void GetAllContents(TArray<class UWidget*>* Contents);
	void SetCategoryName(const class FText& CategoryName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InventoryListContent_C">();
	}
	static class UWBP_InventoryListContent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InventoryListContent_C>();
	}
};
static_assert(alignof(UWBP_InventoryListContent_C) == 0x000008, "Wrong alignment on UWBP_InventoryListContent_C");
static_assert(sizeof(UWBP_InventoryListContent_C) == 0x0002B0, "Wrong size on UWBP_InventoryListContent_C");
static_assert(offsetof(UWBP_InventoryListContent_C, Anm_Create) == 0x000278, "Member 'UWBP_InventoryListContent_C::Anm_Create' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryListContent_C, Anm_Select) == 0x000280, "Member 'UWBP_InventoryListContent_C::Anm_Select' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryListContent_C, BP_PalTextBlock_C_72) == 0x000288, "Member 'UWBP_InventoryListContent_C::BP_PalTextBlock_C_72' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryListContent_C, InventoryListLine_C) == 0x000290, "Member 'UWBP_InventoryListContent_C::InventoryListLine_C' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryListContent_C, InventoryListLine_L) == 0x000298, "Member 'UWBP_InventoryListContent_C::InventoryListLine_L' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryListContent_C, InventoryListLine_R) == 0x0002A0, "Member 'UWBP_InventoryListContent_C::InventoryListLine_R' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryListContent_C, WrapBox_92) == 0x0002A8, "Member 'UWBP_InventoryListContent_C::WrapBox_92' has a wrong offset!");

}

