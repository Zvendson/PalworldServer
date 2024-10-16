#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FPalUIPalInfoDisplayData_structs.hpp"
#include "EPalUIPalInfoType_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PalInfo.WBP_PalInfo_C
// 0x0170 (0x03E8 - 0x0278)
class UWBP_PalInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_TextToBonus;                                   // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_BonusToText;                                   // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Close;                                         // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Open;                                          // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Passive;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                 RichText_Info;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*      WBP_MainMenu_Pal_Skill_Passive;                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*      WBP_MainMenu_Pal_Skill_Passive_1;                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*      WBP_MainMenu_Pal_Skill_Passive_2;                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*      WBP_MainMenu_Pal_Skill_Passive_3;                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Paldex_Task_C*                     WBP_Paldex_Task;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalGet_s_C*                        WBP_PalGet_s;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsDisplaying;                                      // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E1[0x7];                                      // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           StackedCharacterId;                                // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*> PassiveSkillWidgetArray;                           // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FFPalUIPalInfoDisplayData>      StackedGetInfo;                                    // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EPalUIPalInfoType, double>               DisplayTimeMap;                                    // 0x0318(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                           CloseTimerHandle;                                  // 0x0368(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    CaptureTitleMagId;                                 // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    FirstCaptureTitleMagId;                            // 0x0380(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    FirstActivatedTitleMagId;                          // 0x0390(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                           DetailChangeTimer;                                 // 0x03A0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAfterOpenedBonusActivate;                        // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A9[0x7];                                      // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFPalUIPalInfoDisplayData              DisplayingGetInfo;                                 // 0x03B0(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void AnmEvent_BonusToDesc();
	void AnmEvent_DescToBonus(bool AlreadyBonusCompleted);
	void AnmEvent_ForceBonus();
	void AnmEvent_ForceDesc();
	void AnmEvent_OpenAndSetTimer(EPalUIPalInfoType InfoType, bool AlreadyBonusCompleted);
	void ClearPassiveList();
	void Create_Default_Get_Info(const struct FPalUIPalCaptureInfo& CaptureInfo, struct FFPalUIPalInfoDisplayData* GetInfoData, bool* IsSuccessed);
	void DisplayFirstActivatedInfo(class APalCharacter* Character);
	void DisplayPassiveSkill(TArray<class FName>& PassiveList);
	void DisplayShorDesc(class FName CharacterID);
	void ExecuteUbergraph_WBP_PalInfo(int32 EntryPoint);
	void Finished_8AC905F6491806EF04F1E58EE1398650();
	void Finished_DDDBAAA14AFFC8A46E31C0A4BCAC3C07();
	void OnDescToBonus();
	void OnInitialized();
	void Setup(const struct FFPalUIPalInfoDisplayData& GetInfo);
	void SetupCapturePalInfo(const struct FPalUIPalCaptureInfo& CaptureInfo);
	void SetupFirstActivatedPalInfo(class UPalIndividualCharacterHandle* Handle);
	void TryDisplayNextInfoEvent();
	void TryDIsplayStackedCharacter(bool* Displayed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalInfo_C">();
	}
	static class UWBP_PalInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalInfo_C>();
	}
};
static_assert(alignof(UWBP_PalInfo_C) == 0x000008, "Wrong alignment on UWBP_PalInfo_C");
static_assert(sizeof(UWBP_PalInfo_C) == 0x0003E8, "Wrong size on UWBP_PalInfo_C");
static_assert(offsetof(UWBP_PalInfo_C, UberGraphFrame) == 0x000278, "Member 'UWBP_PalInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, Anm_TextToBonus) == 0x000280, "Member 'UWBP_PalInfo_C::Anm_TextToBonus' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, Anm_BonusToText) == 0x000288, "Member 'UWBP_PalInfo_C::Anm_BonusToText' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, Anm_Close) == 0x000290, "Member 'UWBP_PalInfo_C::Anm_Close' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, Anm_Open) == 0x000298, "Member 'UWBP_PalInfo_C::Anm_Open' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, Canvas_Passive) == 0x0002A0, "Member 'UWBP_PalInfo_C::Canvas_Passive' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, RichText_Info) == 0x0002A8, "Member 'UWBP_PalInfo_C::RichText_Info' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, WBP_MainMenu_Pal_Skill_Passive) == 0x0002B0, "Member 'UWBP_PalInfo_C::WBP_MainMenu_Pal_Skill_Passive' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, WBP_MainMenu_Pal_Skill_Passive_1) == 0x0002B8, "Member 'UWBP_PalInfo_C::WBP_MainMenu_Pal_Skill_Passive_1' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, WBP_MainMenu_Pal_Skill_Passive_2) == 0x0002C0, "Member 'UWBP_PalInfo_C::WBP_MainMenu_Pal_Skill_Passive_2' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, WBP_MainMenu_Pal_Skill_Passive_3) == 0x0002C8, "Member 'UWBP_PalInfo_C::WBP_MainMenu_Pal_Skill_Passive_3' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, WBP_Paldex_Task) == 0x0002D0, "Member 'UWBP_PalInfo_C::WBP_Paldex_Task' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, WBP_PalGet_s) == 0x0002D8, "Member 'UWBP_PalInfo_C::WBP_PalGet_s' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, IsDisplaying) == 0x0002E0, "Member 'UWBP_PalInfo_C::IsDisplaying' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, StackedCharacterId) == 0x0002E8, "Member 'UWBP_PalInfo_C::StackedCharacterId' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, PassiveSkillWidgetArray) == 0x0002F8, "Member 'UWBP_PalInfo_C::PassiveSkillWidgetArray' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, StackedGetInfo) == 0x000308, "Member 'UWBP_PalInfo_C::StackedGetInfo' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, DisplayTimeMap) == 0x000318, "Member 'UWBP_PalInfo_C::DisplayTimeMap' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, CloseTimerHandle) == 0x000368, "Member 'UWBP_PalInfo_C::CloseTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, CaptureTitleMagId) == 0x000370, "Member 'UWBP_PalInfo_C::CaptureTitleMagId' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, FirstCaptureTitleMagId) == 0x000380, "Member 'UWBP_PalInfo_C::FirstCaptureTitleMagId' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, FirstActivatedTitleMagId) == 0x000390, "Member 'UWBP_PalInfo_C::FirstActivatedTitleMagId' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, DetailChangeTimer) == 0x0003A0, "Member 'UWBP_PalInfo_C::DetailChangeTimer' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, IsAfterOpenedBonusActivate) == 0x0003A8, "Member 'UWBP_PalInfo_C::IsAfterOpenedBonusActivate' has a wrong offset!");
static_assert(offsetof(UWBP_PalInfo_C, DisplayingGetInfo) == 0x0003B0, "Member 'UWBP_PalInfo_C::DisplayingGetInfo' has a wrong offset!");

}

