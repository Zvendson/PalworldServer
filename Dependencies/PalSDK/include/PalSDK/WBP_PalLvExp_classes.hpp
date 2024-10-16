#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "WBP_IndividualParameterBindWidget_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PalLvExp.WBP_PalLvExp_C
// 0x00E0 (0x0698 - 0x05B8)
class UWBP_PalLvExp_C final : public UWBP_IndividualParameterBindWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_PalLvExp_C;                     // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_GetSkill;                                      // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Close;                                         // 0x05C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_LVUP;                                          // 0x05D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Open;                                          // 0x05D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SkillEffBase;                                // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_Exp;                                   // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_AddExp;                                       // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_LvUP;                                         // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Skill;                                        // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LvNum_C*                           WBP_LvNum;                                         // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlotButton_C*    WBP_PalCommonCharacterSlotButton;                  // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        LevelUpAnimeDelay;                                 // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NewMoveAnimeDelay;                                 // 0x0628(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CloseAnimeDelay;                                   // 0x0630(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           LevelUpAnimeTimerHandle;                           // 0x0638(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           NewMoveAnimeTimerHandle;                           // 0x0640(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CloseAnimeTimerHandle;                             // 0x0648(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLevelUp;                                         // 0x0650(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNewMove;                                         // 0x0651(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDisplaying;                                      // 0x0652(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_653[0x1];                                      // 0x0653(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LastLevel;                                         // 0x0654(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    LevelUpMsgID;                                      // 0x0658(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    NewMoveMsgID;                                      // 0x0668(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FName                                   CachedCharacterID;                                 // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         StackExp;                                          // 0x0680(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EPalWazaID>                            NewWazaIDArray;                                    // 0x0688(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void AnmEvent_Close_UI();
	void AnmEvent_Levelup();
	void AnmEvent_NewMove(EPalWazaID NewWazaID);
	void AnmEvent_Open_UI();
	void BindFromHandle(class UPalIndividualCharacterHandle* TargetHandle);
	void BindFromSlot(class UPalIndividualCharacterSlot* TargetSlot);
	void ClearAnimeTimer();
	void ExecuteUbergraph_WBP_PalLvExp(int32 EntryPoint);
	void On_Update_Exp_Binded(int64 AddExp, int64 OldExp, double NowExpRate);
	void On_Update_Level_Binded(int32 NewLevel);
	void OnInitialized();
	void OnTriggerCloseAnime();
	void OnTriggerLevelUpAnime();
	void OnTriggerNewMoveAnime();
	void OnUpdateSlot(class UPalIndividualCharacterSlot* Slot_0, class UPalIndividualCharacterHandle* LastHandle);
	void Set_Exp_Percent(double Percent);
	void Set_Level(int32 Level);
	void SetAddExp(int64 AddExp);
	void SetupCloseAnimeTimer();
	void SetupLevelUpAnimeTimer();
	void SetupNewMoveAnimeTimer();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalLvExp_C">();
	}
	static class UWBP_PalLvExp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalLvExp_C>();
	}
};
static_assert(alignof(UWBP_PalLvExp_C) == 0x000008, "Wrong alignment on UWBP_PalLvExp_C");
static_assert(sizeof(UWBP_PalLvExp_C) == 0x000698, "Wrong size on UWBP_PalLvExp_C");
static_assert(offsetof(UWBP_PalLvExp_C, UberGraphFrame_WBP_PalLvExp_C) == 0x0005B8, "Member 'UWBP_PalLvExp_C::UberGraphFrame_WBP_PalLvExp_C' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, Anm_GetSkill) == 0x0005C0, "Member 'UWBP_PalLvExp_C::Anm_GetSkill' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, Anm_Close) == 0x0005C8, "Member 'UWBP_PalLvExp_C::Anm_Close' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, Anm_LVUP) == 0x0005D0, "Member 'UWBP_PalLvExp_C::Anm_LVUP' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, Anm_Open) == 0x0005D8, "Member 'UWBP_PalLvExp_C::Anm_Open' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, CanvasPanel_0) == 0x0005E0, "Member 'UWBP_PalLvExp_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, Image_SkillEffBase) == 0x0005E8, "Member 'UWBP_PalLvExp_C::Image_SkillEffBase' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, ProgressBar_Exp) == 0x0005F0, "Member 'UWBP_PalLvExp_C::ProgressBar_Exp' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, Text_AddExp) == 0x0005F8, "Member 'UWBP_PalLvExp_C::Text_AddExp' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, Text_LvUP) == 0x000600, "Member 'UWBP_PalLvExp_C::Text_LvUP' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, Text_Skill) == 0x000608, "Member 'UWBP_PalLvExp_C::Text_Skill' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, WBP_LvNum) == 0x000610, "Member 'UWBP_PalLvExp_C::WBP_LvNum' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, WBP_PalCommonCharacterSlotButton) == 0x000618, "Member 'UWBP_PalLvExp_C::WBP_PalCommonCharacterSlotButton' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, LevelUpAnimeDelay) == 0x000620, "Member 'UWBP_PalLvExp_C::LevelUpAnimeDelay' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, NewMoveAnimeDelay) == 0x000628, "Member 'UWBP_PalLvExp_C::NewMoveAnimeDelay' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, CloseAnimeDelay) == 0x000630, "Member 'UWBP_PalLvExp_C::CloseAnimeDelay' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, LevelUpAnimeTimerHandle) == 0x000638, "Member 'UWBP_PalLvExp_C::LevelUpAnimeTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, NewMoveAnimeTimerHandle) == 0x000640, "Member 'UWBP_PalLvExp_C::NewMoveAnimeTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, CloseAnimeTimerHandle) == 0x000648, "Member 'UWBP_PalLvExp_C::CloseAnimeTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, IsLevelUp) == 0x000650, "Member 'UWBP_PalLvExp_C::IsLevelUp' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, IsNewMove) == 0x000651, "Member 'UWBP_PalLvExp_C::IsNewMove' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, IsDisplaying) == 0x000652, "Member 'UWBP_PalLvExp_C::IsDisplaying' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, LastLevel) == 0x000654, "Member 'UWBP_PalLvExp_C::LastLevel' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, LevelUpMsgID) == 0x000658, "Member 'UWBP_PalLvExp_C::LevelUpMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, NewMoveMsgID) == 0x000668, "Member 'UWBP_PalLvExp_C::NewMoveMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, CachedCharacterID) == 0x000678, "Member 'UWBP_PalLvExp_C::CachedCharacterID' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, StackExp) == 0x000680, "Member 'UWBP_PalLvExp_C::StackExp' has a wrong offset!");
static_assert(offsetof(UWBP_PalLvExp_C, NewWazaIDArray) == 0x000688, "Member 'UWBP_PalLvExp_C::NewWazaIDArray' has a wrong offset!");

}

