#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_PalGet_s.WBP_PalGet_s_C
// 0x00B0 (0x0328 - 0x0278)
class UWBP_PalGet_s_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Close;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Open;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Title;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_0;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_1;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_2;                                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_3;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_4;                                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_5;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line;                                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_0;                                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_PalName;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Title;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AttentionEffect_C*                 WBP_AttentionEffect;                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LvNum_C*                           WBP_LvNum;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterIcon_C*          WBP_PalCommonCharacterIcon;                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    FirstCaptureMsgHandle;                             // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    CaptureMsgHandle;                                  // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void AnmEvent_Close();
	void AnmEvent_Open();
	void ClearAdditionalText();
	void DisplayCaptureMessage(bool IsFirstCapture);
	void ExecuteUbergraph_WBP_PalGet_s(int32 EntryPoint);
	void OnInitialized();
	void OnOpenAnimeFinished();
	void SetAdditionalText(const class FText& Text);
	void SetupByCaptureInfo(const struct FPalUIPalCaptureInfo& CaptureInfo);
	void SetupByTargetHandle(class UPalIndividualCharacterHandle* Handle, bool IsVisibleLevel);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalGet_s_C">();
	}
	static class UWBP_PalGet_s_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalGet_s_C>();
	}
};
static_assert(alignof(UWBP_PalGet_s_C) == 0x000008, "Wrong alignment on UWBP_PalGet_s_C");
static_assert(sizeof(UWBP_PalGet_s_C) == 0x000328, "Wrong size on UWBP_PalGet_s_C");
static_assert(offsetof(UWBP_PalGet_s_C, UberGraphFrame) == 0x000278, "Member 'UWBP_PalGet_s_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalGet_s_C, Anm_Close) == 0x000280, "Member 'UWBP_PalGet_s_C::Anm_Close' has a wrong offset!");
static_assert(offsetof(UWBP_PalGet_s_C, Anm_Open) == 0x000288, "Member 'UWBP_PalGet_s_C::Anm_Open' has a wrong offset!");
static_assert(offsetof(UWBP_PalGet_s_C, Canvas_Title) == 0x000290, "Member 'UWBP_PalGet_s_C::Canvas_Title' has a wrong offset!");
static_assert(offsetof(UWBP_PalGet_s_C, Dot_0) == 0x000298, "Member 'UWBP_PalGet_s_C::Dot_0' has a wrong offset!");
static_assert(offsetof(UWBP_PalGet_s_C, Dot_1) == 0x0002A0, "Member 'UWBP_PalGet_s_C::Dot_1' has a wrong offset!");
static_assert(offsetof(UWBP_PalGet_s_C, Dot_2) == 0x0002A8, "Member 'UWBP_PalGet_s_C::Dot_2' has a wrong offset!");
static_assert(offsetof(UWBP_PalGet_s_C, Dot_3) == 0x0002B0, "Member 'UWBP_PalGet_s_C::Dot_3' has a wrong offset!");
static_assert(offsetof(UWBP_PalGet_s_C, Dot_4) == 0x0002B8, "Member 'UWBP_PalGet_s_C::Dot_4' has a wrong offset!");
static_assert(offsetof(UWBP_PalGet_s_C, Dot_5) == 0x0002C0, "Member 'UWBP_PalGet_s_C::Dot_5' has a wrong offset!");
static_assert(offsetof(UWBP_PalGet_s_C, Line) == 0x0002C8, "Member 'UWBP_PalGet_s_C::Line' has a wrong offset!");
static_assert(offsetof(UWBP_PalGet_s_C, Line_0) == 0x0002D0, "Member 'UWBP_PalGet_s_C::Line_0' has a wrong offset!");
static_assert(offsetof(UWBP_PalGet_s_C, RetainerBox_0) == 0x0002D8, "Member 'UWBP_PalGet_s_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_PalGet_s_C, Text_PalName) == 0x0002E0, "Member 'UWBP_PalGet_s_C::Text_PalName' has a wrong offset!");
static_assert(offsetof(UWBP_PalGet_s_C, Text_Title) == 0x0002E8, "Member 'UWBP_PalGet_s_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UWBP_PalGet_s_C, WBP_AttentionEffect) == 0x0002F0, "Member 'UWBP_PalGet_s_C::WBP_AttentionEffect' has a wrong offset!");
static_assert(offsetof(UWBP_PalGet_s_C, WBP_LvNum) == 0x0002F8, "Member 'UWBP_PalGet_s_C::WBP_LvNum' has a wrong offset!");
static_assert(offsetof(UWBP_PalGet_s_C, WBP_PalCommonCharacterIcon) == 0x000300, "Member 'UWBP_PalGet_s_C::WBP_PalCommonCharacterIcon' has a wrong offset!");
static_assert(offsetof(UWBP_PalGet_s_C, FirstCaptureMsgHandle) == 0x000308, "Member 'UWBP_PalGet_s_C::FirstCaptureMsgHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalGet_s_C, CaptureMsgHandle) == 0x000318, "Member 'UWBP_PalGet_s_C::CaptureMsgHandle' has a wrong offset!");

}

