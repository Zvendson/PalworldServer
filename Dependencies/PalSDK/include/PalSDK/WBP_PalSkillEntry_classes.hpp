#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PalSkillEntry.WBP_PalSkillEntry_C
// 0x0058 (0x02D0 - 0x0278)
class UWBP_PalSkillEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Pressing;                                          // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CoolDownFinished;                                  // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Activate;                                          // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                           CoolDownProgress;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_WazaName;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInputKeyGuideIcon_C*         WBP_PlayerInputKeyGuideIcon_Skill;                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UBP_PalTextBlock_C*>             WazaNametextArray;                                 // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class FName                                   InputActionName;                                   // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   OverridePadActionName;                             // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActivateEvent();
	void CoolFinish();
	void CoolStart();
	void CREATEDELEGATE_PROXYFUNCTION_0(float CoolRate);
	void ExecuteUbergraph_WBP_PalSkillEntry(int32 EntryPoint);
	void LongPress(bool Start);
	void OnInitialized();
	void SetSkillText(const class FText& SkillName);
	void Setup(class UPalActiveSkill* ActiveSkill);
	void ToggleVisibility(bool IsCooling);
	void Unbind(class UPalActiveSkill* ActiveSkill);
	void UpdateCoolDown(double Cool);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalSkillEntry_C">();
	}
	static class UWBP_PalSkillEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalSkillEntry_C>();
	}
};
static_assert(alignof(UWBP_PalSkillEntry_C) == 0x000008, "Wrong alignment on UWBP_PalSkillEntry_C");
static_assert(sizeof(UWBP_PalSkillEntry_C) == 0x0002D0, "Wrong size on UWBP_PalSkillEntry_C");
static_assert(offsetof(UWBP_PalSkillEntry_C, UberGraphFrame) == 0x000278, "Member 'UWBP_PalSkillEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkillEntry_C, Pressing) == 0x000280, "Member 'UWBP_PalSkillEntry_C::Pressing' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkillEntry_C, CoolDownFinished) == 0x000288, "Member 'UWBP_PalSkillEntry_C::CoolDownFinished' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkillEntry_C, Activate) == 0x000290, "Member 'UWBP_PalSkillEntry_C::Activate' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkillEntry_C, CoolDownProgress) == 0x000298, "Member 'UWBP_PalSkillEntry_C::CoolDownProgress' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkillEntry_C, Text_WazaName) == 0x0002A0, "Member 'UWBP_PalSkillEntry_C::Text_WazaName' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkillEntry_C, WBP_PlayerInputKeyGuideIcon_Skill) == 0x0002A8, "Member 'UWBP_PalSkillEntry_C::WBP_PlayerInputKeyGuideIcon_Skill' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkillEntry_C, WazaNametextArray) == 0x0002B0, "Member 'UWBP_PalSkillEntry_C::WazaNametextArray' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkillEntry_C, InputActionName) == 0x0002C0, "Member 'UWBP_PalSkillEntry_C::InputActionName' has a wrong offset!");
static_assert(offsetof(UWBP_PalSkillEntry_C, OverridePadActionName) == 0x0002C8, "Member 'UWBP_PalSkillEntry_C::OverridePadActionName' has a wrong offset!");

}

