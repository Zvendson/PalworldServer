#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_Warning.WBP_Warning_C
// 0x0080 (0x02F8 - 0x0278)
class UWBP_Warning_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Close;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Open;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Base;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_Red;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C_122;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_260;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_L;                                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_R;                                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineFlare_L;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineFlare_R;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SubLine_L;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SubLine_R;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SubLineFlare_L;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SubLineFlare_R;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void AnmEvent_Close();
	void AnmEvent_Open(double DisplayTime);
	void ExecuteUbergraph_WBP_Warning(int32 EntryPoint);
	void SetInfoText(const class FText& Text);
	void SetTitleText(const class FText& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Warning_C">();
	}
	static class UWBP_Warning_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Warning_C>();
	}
};
static_assert(alignof(UWBP_Warning_C) == 0x000008, "Wrong alignment on UWBP_Warning_C");
static_assert(sizeof(UWBP_Warning_C) == 0x0002F8, "Wrong size on UWBP_Warning_C");
static_assert(offsetof(UWBP_Warning_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Warning_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Warning_C, Anm_Close) == 0x000280, "Member 'UWBP_Warning_C::Anm_Close' has a wrong offset!");
static_assert(offsetof(UWBP_Warning_C, Anm_Open) == 0x000288, "Member 'UWBP_Warning_C::Anm_Open' has a wrong offset!");
static_assert(offsetof(UWBP_Warning_C, Base) == 0x000290, "Member 'UWBP_Warning_C::Base' has a wrong offset!");
static_assert(offsetof(UWBP_Warning_C, Base_Red) == 0x000298, "Member 'UWBP_Warning_C::Base_Red' has a wrong offset!");
static_assert(offsetof(UWBP_Warning_C, BP_PalTextBlock_C) == 0x0002A0, "Member 'UWBP_Warning_C::BP_PalTextBlock_C' has a wrong offset!");
static_assert(offsetof(UWBP_Warning_C, BP_PalTextBlock_C_122) == 0x0002A8, "Member 'UWBP_Warning_C::BP_PalTextBlock_C_122' has a wrong offset!");
static_assert(offsetof(UWBP_Warning_C, Image_260) == 0x0002B0, "Member 'UWBP_Warning_C::Image_260' has a wrong offset!");
static_assert(offsetof(UWBP_Warning_C, Line_L) == 0x0002B8, "Member 'UWBP_Warning_C::Line_L' has a wrong offset!");
static_assert(offsetof(UWBP_Warning_C, Line_R) == 0x0002C0, "Member 'UWBP_Warning_C::Line_R' has a wrong offset!");
static_assert(offsetof(UWBP_Warning_C, LineFlare_L) == 0x0002C8, "Member 'UWBP_Warning_C::LineFlare_L' has a wrong offset!");
static_assert(offsetof(UWBP_Warning_C, LineFlare_R) == 0x0002D0, "Member 'UWBP_Warning_C::LineFlare_R' has a wrong offset!");
static_assert(offsetof(UWBP_Warning_C, SubLine_L) == 0x0002D8, "Member 'UWBP_Warning_C::SubLine_L' has a wrong offset!");
static_assert(offsetof(UWBP_Warning_C, SubLine_R) == 0x0002E0, "Member 'UWBP_Warning_C::SubLine_R' has a wrong offset!");
static_assert(offsetof(UWBP_Warning_C, SubLineFlare_L) == 0x0002E8, "Member 'UWBP_Warning_C::SubLineFlare_L' has a wrong offset!");
static_assert(offsetof(UWBP_Warning_C, SubLineFlare_R) == 0x0002F0, "Member 'UWBP_Warning_C::SubLineFlare_R' has a wrong offset!");

}

