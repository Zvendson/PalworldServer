#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_IngameMenuConstruction_InfoItem.WBP_IngameMenuConstruction_InfoItem_C
// 0x0030 (0x02A8 - 0x0278)
class UWBP_IngameMenuConstruction_InfoItem_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       Anim_ON;                                           // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_ONToOFF;                                       // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C_2;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C_71;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Setup(class FName ID, int32 NeedNum, int32 HasNum);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameMenuConstruction_InfoItem_C">();
	}
	static class UWBP_IngameMenuConstruction_InfoItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameMenuConstruction_InfoItem_C>();
	}
};
static_assert(alignof(UWBP_IngameMenuConstruction_InfoItem_C) == 0x000008, "Wrong alignment on UWBP_IngameMenuConstruction_InfoItem_C");
static_assert(sizeof(UWBP_IngameMenuConstruction_InfoItem_C) == 0x0002A8, "Wrong size on UWBP_IngameMenuConstruction_InfoItem_C");
static_assert(offsetof(UWBP_IngameMenuConstruction_InfoItem_C, Anim_ON) == 0x000278, "Member 'UWBP_IngameMenuConstruction_InfoItem_C::Anim_ON' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenuConstruction_InfoItem_C, Anm_ONToOFF) == 0x000280, "Member 'UWBP_IngameMenuConstruction_InfoItem_C::Anm_ONToOFF' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenuConstruction_InfoItem_C, BP_PalTextBlock_C) == 0x000288, "Member 'UWBP_IngameMenuConstruction_InfoItem_C::BP_PalTextBlock_C' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenuConstruction_InfoItem_C, BP_PalTextBlock_C_2) == 0x000290, "Member 'UWBP_IngameMenuConstruction_InfoItem_C::BP_PalTextBlock_C_2' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenuConstruction_InfoItem_C, BP_PalTextBlock_C_71) == 0x000298, "Member 'UWBP_IngameMenuConstruction_InfoItem_C::BP_PalTextBlock_C_71' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenuConstruction_InfoItem_C, Icon) == 0x0002A0, "Member 'UWBP_IngameMenuConstruction_InfoItem_C::Icon' has a wrong offset!");

}

