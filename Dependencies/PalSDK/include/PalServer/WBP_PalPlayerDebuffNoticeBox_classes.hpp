#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "E_PalUIPlayerDebuffNoticeType_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_PalPlayerDebuffNoticeBox.WBP_PalPlayerDebuffNoticeBox_C
// 0x0060 (0x0468 - 0x0408)
class UWBP_PalPlayerDebuffNoticeBox_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_Debuff;                              // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<E_PalUIPlayerDebuffNoticeType, class UWBP_DebuffNotice_C*> DisplayingDebuffWidget;                            // 0x0418(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void AddDebuffNotice(E_PalUIPlayerDebuffNoticeType DebuffType);
	void Destruct();
	void ExecuteUbergraph_WBP_PalPlayerDebuffNoticeBox(int32 EntryPoint);
	void RemoveDebuffNotice(E_PalUIPlayerDebuffNoticeType DebuffType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalPlayerDebuffNoticeBox_C">();
	}
	static class UWBP_PalPlayerDebuffNoticeBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalPlayerDebuffNoticeBox_C>();
	}
};
static_assert(alignof(UWBP_PalPlayerDebuffNoticeBox_C) == 0x000008, "Wrong alignment on UWBP_PalPlayerDebuffNoticeBox_C");
static_assert(sizeof(UWBP_PalPlayerDebuffNoticeBox_C) == 0x000468, "Wrong size on UWBP_PalPlayerDebuffNoticeBox_C");
static_assert(offsetof(UWBP_PalPlayerDebuffNoticeBox_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PalPlayerDebuffNoticeBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalPlayerDebuffNoticeBox_C, HorizontalBox_Debuff) == 0x000410, "Member 'UWBP_PalPlayerDebuffNoticeBox_C::HorizontalBox_Debuff' has a wrong offset!");
static_assert(offsetof(UWBP_PalPlayerDebuffNoticeBox_C, DisplayingDebuffWidget) == 0x000418, "Member 'UWBP_PalPlayerDebuffNoticeBox_C::DisplayingDebuffWidget' has a wrong offset!");

}

