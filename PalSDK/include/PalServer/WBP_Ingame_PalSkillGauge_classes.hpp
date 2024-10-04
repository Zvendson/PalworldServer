#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C
// 0x0118 (0x0390 - 0x0278)
class UWBP_Ingame_PalSkillGauge_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Unlock;                                        // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Lock;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Activate_Keep;                                 // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Activate;                                      // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_InputHold;                                     // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_CoolTime_Over;                                 // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Disable;                                       // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Enable;                                        // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BPPalTextBlock_SkillCT;                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelGaugeCIrcle;                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelGaugeSq;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelKey;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconLock;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ActivateEff_LineBase;                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ActivateEff_LineFlare;                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Circle_ActiveEff;                            // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Circle_ActiveEff_1;                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 KeyGuideCircle;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 KeyGuideCircle_Sq;                                 // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalRetainerBox*                        PalRetainerBox;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_SkillTime;                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_SkillTime_Sq;                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ReticleCircle_00;                                  // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ReticleCircle_01;                                  // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_SkillName;                                    // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Ingame_PalSkill_Flight_C*          WBP_Ingame_PalSkill_Flight_Down;                   // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Ingame_PalSkill_Flight_C*          WBP_Ingame_PalSkill_Flight_UP;                     // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInputKeyGuideIcon_C*         WBP_PlayerInputKeyGuideIcon;                       // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsCoolDown;                                        // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_369[0x7];                                      // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceDynamic*>       SkillGaugeMaterials;                               // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       CoolDownGaugeMaterials;                            // 0x0380(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void AnmEvent_CoolDown();
	void AnmEvent_CoolDownComplated();
	void AnmEvent_InputHold();
	void AnmEvent_InputRelease();
	void AnmEvent_Lock();
	void AnmEvent_SkillEnable();
	void AnmEvent_StartSkill();
	void AnmEvent_Unlock();
	void AnmEvent_UsingSkill(bool TogglePlay);
	void ClearIcon();
	void Construct();
	void ExecuteUbergraph_WBP_Ingame_PalSkillGauge(int32 EntryPoint);
	void Hide_Key_Guide(bool Hide);
	void OnInputMethodChanged(ECommonInputType bNewInputType);
	void Set_Cool_Down_Gauge_Percent(double Now, double Max);
	void Set_Skill_Gauge_Percent(double Percent);
	void Set_Skill_Name(const class FText& SkillNameText);
	void Set_Skill_Name_Locked();
	void Setup_Icon_Texture();
	void ShowFlyKeyGuide(bool Show);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Ingame_PalSkillGauge_C">();
	}
	static class UWBP_Ingame_PalSkillGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Ingame_PalSkillGauge_C>();
	}
};
static_assert(alignof(UWBP_Ingame_PalSkillGauge_C) == 0x000008, "Wrong alignment on UWBP_Ingame_PalSkillGauge_C");
static_assert(sizeof(UWBP_Ingame_PalSkillGauge_C) == 0x000390, "Wrong size on UWBP_Ingame_PalSkillGauge_C");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Ingame_PalSkillGauge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, Anm_Unlock) == 0x000280, "Member 'UWBP_Ingame_PalSkillGauge_C::Anm_Unlock' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, Anm_Lock) == 0x000288, "Member 'UWBP_Ingame_PalSkillGauge_C::Anm_Lock' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, Anm_Activate_Keep) == 0x000290, "Member 'UWBP_Ingame_PalSkillGauge_C::Anm_Activate_Keep' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, Anm_Activate) == 0x000298, "Member 'UWBP_Ingame_PalSkillGauge_C::Anm_Activate' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, Anm_InputHold) == 0x0002A0, "Member 'UWBP_Ingame_PalSkillGauge_C::Anm_InputHold' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, Anm_CoolTime_Over) == 0x0002A8, "Member 'UWBP_Ingame_PalSkillGauge_C::Anm_CoolTime_Over' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, Anm_Disable) == 0x0002B0, "Member 'UWBP_Ingame_PalSkillGauge_C::Anm_Disable' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, Anm_Enable) == 0x0002B8, "Member 'UWBP_Ingame_PalSkillGauge_C::Anm_Enable' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, BPPalTextBlock_SkillCT) == 0x0002C0, "Member 'UWBP_Ingame_PalSkillGauge_C::BPPalTextBlock_SkillCT' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, CanvasPanelGaugeCIrcle) == 0x0002C8, "Member 'UWBP_Ingame_PalSkillGauge_C::CanvasPanelGaugeCIrcle' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, CanvasPanelGaugeSq) == 0x0002D0, "Member 'UWBP_Ingame_PalSkillGauge_C::CanvasPanelGaugeSq' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, CanvasPanelKey) == 0x0002D8, "Member 'UWBP_Ingame_PalSkillGauge_C::CanvasPanelKey' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, Icon) == 0x0002E0, "Member 'UWBP_Ingame_PalSkillGauge_C::Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, IconLock) == 0x0002E8, "Member 'UWBP_Ingame_PalSkillGauge_C::IconLock' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, Image_ActivateEff_LineBase) == 0x0002F0, "Member 'UWBP_Ingame_PalSkillGauge_C::Image_ActivateEff_LineBase' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, Image_ActivateEff_LineFlare) == 0x0002F8, "Member 'UWBP_Ingame_PalSkillGauge_C::Image_ActivateEff_LineFlare' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, Image_Circle_ActiveEff) == 0x000300, "Member 'UWBP_Ingame_PalSkillGauge_C::Image_Circle_ActiveEff' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, Image_Circle_ActiveEff_1) == 0x000308, "Member 'UWBP_Ingame_PalSkillGauge_C::Image_Circle_ActiveEff_1' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, KeyGuideCircle) == 0x000310, "Member 'UWBP_Ingame_PalSkillGauge_C::KeyGuideCircle' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, KeyGuideCircle_Sq) == 0x000318, "Member 'UWBP_Ingame_PalSkillGauge_C::KeyGuideCircle_Sq' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, PalRetainerBox) == 0x000320, "Member 'UWBP_Ingame_PalSkillGauge_C::PalRetainerBox' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, ProgressBar_SkillTime) == 0x000328, "Member 'UWBP_Ingame_PalSkillGauge_C::ProgressBar_SkillTime' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, ProgressBar_SkillTime_Sq) == 0x000330, "Member 'UWBP_Ingame_PalSkillGauge_C::ProgressBar_SkillTime_Sq' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, ReticleCircle_00) == 0x000338, "Member 'UWBP_Ingame_PalSkillGauge_C::ReticleCircle_00' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, ReticleCircle_01) == 0x000340, "Member 'UWBP_Ingame_PalSkillGauge_C::ReticleCircle_01' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, Text_SkillName) == 0x000348, "Member 'UWBP_Ingame_PalSkillGauge_C::Text_SkillName' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, WBP_Ingame_PalSkill_Flight_Down) == 0x000350, "Member 'UWBP_Ingame_PalSkillGauge_C::WBP_Ingame_PalSkill_Flight_Down' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, WBP_Ingame_PalSkill_Flight_UP) == 0x000358, "Member 'UWBP_Ingame_PalSkillGauge_C::WBP_Ingame_PalSkill_Flight_UP' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, WBP_PlayerInputKeyGuideIcon) == 0x000360, "Member 'UWBP_Ingame_PalSkillGauge_C::WBP_PlayerInputKeyGuideIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, IsCoolDown) == 0x000368, "Member 'UWBP_Ingame_PalSkillGauge_C::IsCoolDown' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, SkillGaugeMaterials) == 0x000370, "Member 'UWBP_Ingame_PalSkillGauge_C::SkillGaugeMaterials' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkillGauge_C, CoolDownGaugeMaterials) == 0x000380, "Member 'UWBP_Ingame_PalSkillGauge_C::CoolDownGaugeMaterials' has a wrong offset!");

}

