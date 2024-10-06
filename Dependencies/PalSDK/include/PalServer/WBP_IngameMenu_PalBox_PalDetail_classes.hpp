#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "UMG_structs.hpp"
#include "WBP_IndividualParameterBindWidget_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C
// 0x02A8 (0x0860 - 0x05B8)
class UWBP_IngameMenu_PalBox_PalDetail_C final : public UWBP_IndividualParameterBindWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_IngameMenu_PalBox_PalDetail_C;  // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Default_To_ToolTip;                            // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_LvText;                            // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_SoulRank;                          // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Base;                                       // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Base_ToolTip;                               // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Food;                                       // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Info;                                       // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Potencial;                             // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelDebuff;                                 // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelStatePalWork;                           // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Gauge_Exp;                                         // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Gauge_HP;                                          // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Gauge_Hunger;                                      // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Horizontal_WorkInfo;                               // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_PalWorkIcon;                         // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon_Locked;                                 // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Rare;                                        // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Strong;                                      // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PalStatus;                                         // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_AttackValue;                                  // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_DefenseValue;                                 // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_LevelValue;                                   // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_MaxHP;                                        // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_MaxHunger;                                    // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_maxSanity;                                    // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_NextExp;                                      // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_NowHP;                                        // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_NowHunger;                                    // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_NowSanity;                                    // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_PalName;                                      // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_PunishedLevel_Af;                             // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_PunishedLevel_Pre;                            // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_WorkTypeName;                                 // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_WorkValue;                                    // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_FoodAmount_C*         WBP_MainMenu_Pal_FoodAmount;                       // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Active_C*       WBP_MainMenu_Pal_Skill_Active_00;                  // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Active_C*       WBP_MainMenu_Pal_Skill_Active_01;                  // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Active_C*       WBP_MainMenu_Pal_Skill_Active_02;                  // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*      WBP_MainMenu_Pal_Skill_Passive;                    // 0x06F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*      WBP_MainMenu_Pal_Skill_Passive_1;                  // 0x06F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*      WBP_MainMenu_Pal_Skill_Passive_2;                  // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*      WBP_MainMenu_Pal_Skill_Passive_3;                  // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Unique_C*       WBP_MainMenu_Pal_Skill_Unique;                     // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_State_C*              WBP_MainMenu_Pal_State_0;                          // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_State_C*              WBP_MainMenu_Pal_State_1;                          // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_State_C*              WBP_MainMenu_Pal_State_2;                          // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_PalRarityStar_C*          WBP_MainMenu_PalRarityStar;                        // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_PalRarityStar_C*          WBP_MainMenu_PalRarityStar_1;                      // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_PalRarityStar_C*          WBP_MainMenu_PalRarityStar_2;                      // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_PalRarityStar_C*          WBP_MainMenu_PalRarityStar_3;                      // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_Pal_Potencial_C*              WBP_Menu_Pal_Potencial;                            // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NoData_C*                          WBP_NoData;                                        // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterIcon_C*          WBP_PalCommonCharacterIcon;                        // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalElementIcon_C*                  WBP_PalElementIcon;                                // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalElementIcon_C*                  WBP_PalElementIcon_1;                              // 0x0770(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalGenderIcon_C*                   WBP_PalGenderIcon;                                 // 0x0778(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StatusBuffTimerContainer_C*        WBP_StatusBuffTimerContainer;                      // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UPalIndividualCharacterHandle> LastDisplayedHandle;                               // 0x0788(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UWBP_MainMenu_Pal_Skill_Active_C*> WazaWidgetArray;                                   // 0x07B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                         SavedMaxHunger;                                    // 0x07C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CC[0x4];                                      // 0x07CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*> PassiveSkillWidgetArray;                           // 0x07D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_MainMenu_Pal_State_C*>      ConditionWidgetArray;                              // 0x07E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UMaterial*                              DefaultSanityFontMaterial;                         // 0x07F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         SavedMaxSanity;                                    // 0x07F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FC[0x4];                                      // 0x07FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_MainMenu_PalRarityStar_C*>  RarityWidgetArray;                                 // 0x0800(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<EPalWorkSuitability, class UWBP_MainMenu_Pal_WorkIcon_C*> WorkSuitabilityWidgetMap;                          // 0x0810(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void BindFromHandle(class UPalIndividualCharacterHandle* TargetHandle);
	void Check_Valid_Work_Suitability(EPalWorkSuitability InWorkSuitability, bool* IsValid, EPalWorkSuitability* OutWorkSuitability);
	void Construct();
	void ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail(int32 EntryPoint);
	void OnInitialized();
	void Set_Work_Suitability(const TMap<EPalWorkSuitability, int32>& WorkSuitabilities);
	void SetDetailMode(bool IsTip);
	void SetElementType(EPalElementType Type1, EPalElementType Type2);
	void SetEmpty();
	void SetFoodAmount(int32 FoodAmount);
	void SetGender(EPalGenderType GenderType);
	void SetPassiveSkill(TArray<class FName>& PassiveSkills);
	void SetRank(int32 Rank);
	void SetRarity(bool IsBoss, bool IsRare);
	void SetSoulRank(int32 Rank);
	void Update_Buff_Binded();
	void Update_Condition_Binded();
	void Update_Status_Parameter(class UPalIndividualCharacterParameter* IndividualParam);
	void UpdateActiveSkill_Binded(TArray<EPalWazaID>& ActiveSkills);
	void UpdateExp_Binded(int64 AddExp, int64 OldExp, double NowExpRate);
	void UpdateFavoriteBinded();
	void UpdateHP_Binded(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP);
	void UpdateHunger_Binded(double NowHunger, double NowMaxHunger);
	void UpdateLevel_Binded(int32 NewLevel);
	void UpdateNickName_Binded(const class FString& NewNickName);
	void UpdateSanity_Binded(double NowSanity, double NowMaxSanity);
	void UpdateSoulRank_Binded();
	void UpdateTalentBinded();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameMenu_PalBox_PalDetail_C">();
	}
	static class UWBP_IngameMenu_PalBox_PalDetail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameMenu_PalBox_PalDetail_C>();
	}
};
static_assert(alignof(UWBP_IngameMenu_PalBox_PalDetail_C) == 0x000008, "Wrong alignment on UWBP_IngameMenu_PalBox_PalDetail_C");
static_assert(sizeof(UWBP_IngameMenu_PalBox_PalDetail_C) == 0x000860, "Wrong size on UWBP_IngameMenu_PalBox_PalDetail_C");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, UberGraphFrame_WBP_IngameMenu_PalBox_PalDetail_C) == 0x0005B8, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::UberGraphFrame_WBP_IngameMenu_PalBox_PalDetail_C' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Anm_Default_To_ToolTip) == 0x0005C0, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Anm_Default_To_ToolTip' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, BP_PalTextBlock_LvText) == 0x0005C8, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::BP_PalTextBlock_LvText' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, BP_PalTextBlock_SoulRank) == 0x0005D0, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::BP_PalTextBlock_SoulRank' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Canvas_Base) == 0x0005D8, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Canvas_Base' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Canvas_Base_ToolTip) == 0x0005E0, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Canvas_Base_ToolTip' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Canvas_Food) == 0x0005E8, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Canvas_Food' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Canvas_Info) == 0x0005F0, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Canvas_Info' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, CanvasPanel_Potencial) == 0x0005F8, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::CanvasPanel_Potencial' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, CanvasPanelDebuff) == 0x000600, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::CanvasPanelDebuff' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, CanvasPanelStatePalWork) == 0x000608, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::CanvasPanelStatePalWork' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Gauge_Exp) == 0x000610, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Gauge_Exp' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Gauge_HP) == 0x000618, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Gauge_HP' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Gauge_Hunger) == 0x000620, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Gauge_Hunger' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Horizontal_WorkInfo) == 0x000628, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Horizontal_WorkInfo' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, HorizontalBox_PalWorkIcon) == 0x000630, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::HorizontalBox_PalWorkIcon' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Image_Icon_Locked) == 0x000638, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Image_Icon_Locked' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Image_Rare) == 0x000640, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Image_Rare' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Image_Strong) == 0x000648, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Image_Strong' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, PalStatus) == 0x000650, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::PalStatus' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Text_AttackValue) == 0x000658, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Text_AttackValue' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Text_DefenseValue) == 0x000660, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Text_DefenseValue' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Text_LevelValue) == 0x000668, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Text_LevelValue' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Text_MaxHP) == 0x000670, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Text_MaxHP' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Text_MaxHunger) == 0x000678, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Text_MaxHunger' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Text_maxSanity) == 0x000680, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Text_maxSanity' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Text_NextExp) == 0x000688, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Text_NextExp' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Text_NowHP) == 0x000690, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Text_NowHP' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Text_NowHunger) == 0x000698, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Text_NowHunger' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Text_NowSanity) == 0x0006A0, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Text_NowSanity' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Text_PalName) == 0x0006A8, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Text_PalName' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Text_PunishedLevel_Af) == 0x0006B0, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Text_PunishedLevel_Af' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Text_PunishedLevel_Pre) == 0x0006B8, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Text_PunishedLevel_Pre' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Text_WorkTypeName) == 0x0006C0, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Text_WorkTypeName' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, Text_WorkValue) == 0x0006C8, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::Text_WorkValue' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WBP_MainMenu_Pal_FoodAmount) == 0x0006D0, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WBP_MainMenu_Pal_FoodAmount' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WBP_MainMenu_Pal_Skill_Active_00) == 0x0006D8, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WBP_MainMenu_Pal_Skill_Active_00' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WBP_MainMenu_Pal_Skill_Active_01) == 0x0006E0, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WBP_MainMenu_Pal_Skill_Active_01' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WBP_MainMenu_Pal_Skill_Active_02) == 0x0006E8, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WBP_MainMenu_Pal_Skill_Active_02' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WBP_MainMenu_Pal_Skill_Passive) == 0x0006F0, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WBP_MainMenu_Pal_Skill_Passive' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WBP_MainMenu_Pal_Skill_Passive_1) == 0x0006F8, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WBP_MainMenu_Pal_Skill_Passive_1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WBP_MainMenu_Pal_Skill_Passive_2) == 0x000700, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WBP_MainMenu_Pal_Skill_Passive_2' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WBP_MainMenu_Pal_Skill_Passive_3) == 0x000708, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WBP_MainMenu_Pal_Skill_Passive_3' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WBP_MainMenu_Pal_Skill_Unique) == 0x000710, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WBP_MainMenu_Pal_Skill_Unique' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WBP_MainMenu_Pal_State_0) == 0x000718, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WBP_MainMenu_Pal_State_0' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WBP_MainMenu_Pal_State_1) == 0x000720, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WBP_MainMenu_Pal_State_1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WBP_MainMenu_Pal_State_2) == 0x000728, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WBP_MainMenu_Pal_State_2' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WBP_MainMenu_PalRarityStar) == 0x000730, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WBP_MainMenu_PalRarityStar' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WBP_MainMenu_PalRarityStar_1) == 0x000738, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WBP_MainMenu_PalRarityStar_1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WBP_MainMenu_PalRarityStar_2) == 0x000740, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WBP_MainMenu_PalRarityStar_2' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WBP_MainMenu_PalRarityStar_3) == 0x000748, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WBP_MainMenu_PalRarityStar_3' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WBP_Menu_Pal_Potencial) == 0x000750, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WBP_Menu_Pal_Potencial' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WBP_NoData) == 0x000758, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WBP_NoData' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WBP_PalCommonCharacterIcon) == 0x000760, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WBP_PalCommonCharacterIcon' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WBP_PalElementIcon) == 0x000768, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WBP_PalElementIcon' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WBP_PalElementIcon_1) == 0x000770, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WBP_PalElementIcon_1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WBP_PalGenderIcon) == 0x000778, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WBP_PalGenderIcon' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WBP_StatusBuffTimerContainer) == 0x000780, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WBP_StatusBuffTimerContainer' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, LastDisplayedHandle) == 0x000788, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::LastDisplayedHandle' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WazaWidgetArray) == 0x0007B8, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WazaWidgetArray' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, SavedMaxHunger) == 0x0007C8, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::SavedMaxHunger' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, PassiveSkillWidgetArray) == 0x0007D0, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::PassiveSkillWidgetArray' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, ConditionWidgetArray) == 0x0007E0, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::ConditionWidgetArray' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, DefaultSanityFontMaterial) == 0x0007F0, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::DefaultSanityFontMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, SavedMaxSanity) == 0x0007F8, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::SavedMaxSanity' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, RarityWidgetArray) == 0x000800, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::RarityWidgetArray' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalBox_PalDetail_C, WorkSuitabilityWidgetMap) == 0x000810, "Member 'UWBP_IngameMenu_PalBox_PalDetail_C::WorkSuitabilityWidgetMap' has a wrong offset!");

}

