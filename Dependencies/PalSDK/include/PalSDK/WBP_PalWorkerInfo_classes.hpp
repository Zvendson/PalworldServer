#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "WBP_IndividualParameterBindWidget_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PalWorkerInfo.WBP_PalWorkerInfo_C
// 0x0120 (0x06D8 - 0x05B8)
class UWBP_PalWorkerInfo_C final : public UWBP_IndividualParameterBindWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_PalWorkerInfo_C;                // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Close;                                         // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Open;                                          // 0x05C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_PalWorkIcon;                         // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_HPGauge;                               // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_HungerGauge;                           // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_maxSanity;                                    // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_NowSanity;                                    // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_PalLV;                                        // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_PalLVNum;                                     // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_PalName;                                      // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_SANTitle;                                     // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_WorkerComment;                                // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_WorkTypeName;                                 // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*      WBP_MainMenu_Pal_Skill_Passive;                    // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*      WBP_MainMenu_Pal_Skill_Passive_1;                  // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*      WBP_MainMenu_Pal_Skill_Passive_2;                  // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*      WBP_MainMenu_Pal_Skill_Passive_3;                  // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_State_C*              WBP_MainMenu_Pal_State_0;                          // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_State_C*              WBP_MainMenu_Pal_State_1;                          // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_State_C*              WBP_MainMenu_Pal_State_2;                          // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterial*                              DefaultSanityTextMaterial;                         // 0x0660(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class UWBP_MainMenu_Pal_State_C*>      ConditionWidgetArray;                              // 0x0668(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*> PassiveSkillWidget;                                // 0x0678(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<EPalWorkSuitability, class UWBP_MainMenu_Pal_WorkIcon_C*> WorkSuitabilityWidgetMap;                          // 0x0688(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void AnmEvent_Close();
	void AnmEvent_Open();
	void Check_Valid_Work_Suitability(EPalWorkSuitability InWorkSuitability, bool* IsValid, EPalWorkSuitability* OutWorkSuitability);
	void ExecuteUbergraph_WBP_PalWorkerInfo(int32 EntryPoint);
	void OnInitialized();
	void OnUpdateCondition_Binded();
	void Setup(class UPalIndividualCharacterHandle* TargetHandle);
	void SetWorkerComment(class UPalIndividualCharacterHandle* TargetHandle);
	void SetWorkType(class UPalIndividualCharacterHandle* TargetHandle);
	void UpdateHP(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP);
	void UpdateHunger(double NowHunger, double NowMaxHunger);
	void UpdateLevel(int32 NewLevel);
	void UpdateNickName(const class FString& NewNickName);
	void UpdateSanity(double NowSanity, double NowMaxSanity);
	void Set_Work_Suitability(const TMap<EPalWorkSuitability, int32>& WorkSuitabilities);
	void SetPassiveSkill(TArray<class FName>& PassiveSkills);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalWorkerInfo_C">();
	}
	static class UWBP_PalWorkerInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalWorkerInfo_C>();
	}
};
static_assert(alignof(UWBP_PalWorkerInfo_C) == 0x000008, "Wrong alignment on UWBP_PalWorkerInfo_C");
static_assert(sizeof(UWBP_PalWorkerInfo_C) == 0x0006D8, "Wrong size on UWBP_PalWorkerInfo_C");
static_assert(offsetof(UWBP_PalWorkerInfo_C, UberGraphFrame_WBP_PalWorkerInfo_C) == 0x0005B8, "Member 'UWBP_PalWorkerInfo_C::UberGraphFrame_WBP_PalWorkerInfo_C' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, Anm_Close) == 0x0005C0, "Member 'UWBP_PalWorkerInfo_C::Anm_Close' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, Anm_Open) == 0x0005C8, "Member 'UWBP_PalWorkerInfo_C::Anm_Open' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, HorizontalBox_PalWorkIcon) == 0x0005D0, "Member 'UWBP_PalWorkerInfo_C::HorizontalBox_PalWorkIcon' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, ProgressBar_HPGauge) == 0x0005D8, "Member 'UWBP_PalWorkerInfo_C::ProgressBar_HPGauge' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, ProgressBar_HungerGauge) == 0x0005E0, "Member 'UWBP_PalWorkerInfo_C::ProgressBar_HungerGauge' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, Text_maxSanity) == 0x0005E8, "Member 'UWBP_PalWorkerInfo_C::Text_maxSanity' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, Text_NowSanity) == 0x0005F0, "Member 'UWBP_PalWorkerInfo_C::Text_NowSanity' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, Text_PalLV) == 0x0005F8, "Member 'UWBP_PalWorkerInfo_C::Text_PalLV' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, Text_PalLVNum) == 0x000600, "Member 'UWBP_PalWorkerInfo_C::Text_PalLVNum' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, Text_PalName) == 0x000608, "Member 'UWBP_PalWorkerInfo_C::Text_PalName' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, Text_SANTitle) == 0x000610, "Member 'UWBP_PalWorkerInfo_C::Text_SANTitle' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, Text_WorkerComment) == 0x000618, "Member 'UWBP_PalWorkerInfo_C::Text_WorkerComment' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, Text_WorkTypeName) == 0x000620, "Member 'UWBP_PalWorkerInfo_C::Text_WorkTypeName' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, WBP_MainMenu_Pal_Skill_Passive) == 0x000628, "Member 'UWBP_PalWorkerInfo_C::WBP_MainMenu_Pal_Skill_Passive' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, WBP_MainMenu_Pal_Skill_Passive_1) == 0x000630, "Member 'UWBP_PalWorkerInfo_C::WBP_MainMenu_Pal_Skill_Passive_1' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, WBP_MainMenu_Pal_Skill_Passive_2) == 0x000638, "Member 'UWBP_PalWorkerInfo_C::WBP_MainMenu_Pal_Skill_Passive_2' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, WBP_MainMenu_Pal_Skill_Passive_3) == 0x000640, "Member 'UWBP_PalWorkerInfo_C::WBP_MainMenu_Pal_Skill_Passive_3' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, WBP_MainMenu_Pal_State_0) == 0x000648, "Member 'UWBP_PalWorkerInfo_C::WBP_MainMenu_Pal_State_0' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, WBP_MainMenu_Pal_State_1) == 0x000650, "Member 'UWBP_PalWorkerInfo_C::WBP_MainMenu_Pal_State_1' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, WBP_MainMenu_Pal_State_2) == 0x000658, "Member 'UWBP_PalWorkerInfo_C::WBP_MainMenu_Pal_State_2' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, DefaultSanityTextMaterial) == 0x000660, "Member 'UWBP_PalWorkerInfo_C::DefaultSanityTextMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, ConditionWidgetArray) == 0x000668, "Member 'UWBP_PalWorkerInfo_C::ConditionWidgetArray' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, PassiveSkillWidget) == 0x000678, "Member 'UWBP_PalWorkerInfo_C::PassiveSkillWidget' has a wrong offset!");
static_assert(offsetof(UWBP_PalWorkerInfo_C, WorkSuitabilityWidgetMap) == 0x000688, "Member 'UWBP_PalWorkerInfo_C::WorkSuitabilityWidgetMap' has a wrong offset!");

}

