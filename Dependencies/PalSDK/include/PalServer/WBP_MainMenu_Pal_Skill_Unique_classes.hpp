#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_MainMenu_Pal_Skill_Unique.WBP_MainMenu_Pal_Skill_Unique_C
// 0x0038 (0x02B0 - 0x0278)
class UWBP_MainMenu_Pal_Skill_Unique_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       Anm_NormalToFocus;                                 // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_63;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SkillBase;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_WazaLv;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_WazaLvNum;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_WazaName;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonButton_C*                 WBP_PalCommonButton;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetupBySaveParameter(const struct FPalIndividualCharacterSaveParameter& Parameter, bool ShowLv);
	void SetupFromHandle(class UPalIndividualCharacterHandle* IndividualHandle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MainMenu_Pal_Skill_Unique_C">();
	}
	static class UWBP_MainMenu_Pal_Skill_Unique_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MainMenu_Pal_Skill_Unique_C>();
	}
};
static_assert(alignof(UWBP_MainMenu_Pal_Skill_Unique_C) == 0x000008, "Wrong alignment on UWBP_MainMenu_Pal_Skill_Unique_C");
static_assert(sizeof(UWBP_MainMenu_Pal_Skill_Unique_C) == 0x0002B0, "Wrong size on UWBP_MainMenu_Pal_Skill_Unique_C");
static_assert(offsetof(UWBP_MainMenu_Pal_Skill_Unique_C, Anm_NormalToFocus) == 0x000278, "Member 'UWBP_MainMenu_Pal_Skill_Unique_C::Anm_NormalToFocus' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_Skill_Unique_C, Image_63) == 0x000280, "Member 'UWBP_MainMenu_Pal_Skill_Unique_C::Image_63' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_Skill_Unique_C, SkillBase) == 0x000288, "Member 'UWBP_MainMenu_Pal_Skill_Unique_C::SkillBase' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_Skill_Unique_C, Text_WazaLv) == 0x000290, "Member 'UWBP_MainMenu_Pal_Skill_Unique_C::Text_WazaLv' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_Skill_Unique_C, Text_WazaLvNum) == 0x000298, "Member 'UWBP_MainMenu_Pal_Skill_Unique_C::Text_WazaLvNum' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_Skill_Unique_C, Text_WazaName) == 0x0002A0, "Member 'UWBP_MainMenu_Pal_Skill_Unique_C::Text_WazaName' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_Skill_Unique_C, WBP_PalCommonButton) == 0x0002A8, "Member 'UWBP_MainMenu_Pal_Skill_Unique_C::WBP_PalCommonButton' has a wrong offset!");

}

