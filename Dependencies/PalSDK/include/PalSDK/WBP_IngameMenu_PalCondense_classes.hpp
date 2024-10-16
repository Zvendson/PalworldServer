#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_IngameMenu_PalCondense.WBP_IngameMenu_PalCondense_C
// 0x01F8 (0x0640 - 0x0448)
class UWBP_IngameMenu_PalCondense_C final : public UPalUIPalBoxBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0448(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_SelectFull;                                    // 0x0450(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_SelectMaterialPal;                             // 0x0458(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_SelectMainPal;                                 // 0x0460(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelGet;                                    // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_PalWorkIcon;                         // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_Extract;                               // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_LevelValue;                                   // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_PalExtractNum;                                // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_PalName;                                      // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_RegisterPalNumValue;                          // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_StatusNum_AftAtk;                             // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_StatusNum_AftDef;                             // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_StatusNum_AftHp;                              // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_StatusNum_PreDef;                             // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_StatusNum_PrevAtk;                            // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_StatusNum_PrevHP;                             // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BoxPalList_C*                      WBP_BoxPalList;                                    // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_C*                    WBP_CommonButton;                                  // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_PalDetail_C*     WBP_IngameMenu_PalBox_PalDetail;                   // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Unique_C*       WBP_MainMenu_Pal_Skill_Unique;                     // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_PalRarityStar_C*          WBP_MainMenu_PalRarityStar_0;                      // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_PalRarityStar_C*          WBP_MainMenu_PalRarityStar_1;                      // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_PalRarityStar_C*          WBP_MainMenu_PalRarityStar_2;                      // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_PalRarityStar_C*          WBP_MainMenu_PalRarityStar_3;                      // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                        WBP_Menu_btn;                                      // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterIcon_C*          WBP_PalCommonCharacterIcon;                        // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlotButton_C*    WBP_PalCommonCharacterSlotButton;                  // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlotButton_C*    WBP_PalCommonCharacterSlotButton_1;                // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlotButton_C*    WBP_PalCommonCharacterSlotButton_2;                // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlotButton_C*    WBP_PalCommonCharacterSlotButton_3;                // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlotButton_C*    WBP_PalCommonCharacterSlotButton_4;                // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                 WBP_PalKeyGuideIcon_211;                           // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    BoxNameMsgID;                                      // 0x0550(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ConfirmMsgID;                                      // 0x0560(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    SuccessMsgID;                                      // 0x0570(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	class UPalUIPalCharacterRankUpModel*          Model;                                             // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FName                                   InputActionControllerInvokeName;                   // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_PalCommonCharacterSlotButton_C*> PartyPalSlots;                                     // 0x0590(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_MainMenu_PalRarityStar_C*>  RarityStars;                                       // 0x05A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UPalIndividualCharacterHandle*          BasePalHandle;                                     // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlotButton_C*    BasePalSlot;                                       // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_PalCommonCharacterSlotButton_C*> CurrentConsumePalSlots;                            // 0x05C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          CanInvoke;                                         // 0x05D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D1[0x7];                                      // 0x05D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPalIndividualCharacterSlot*>    TempSlots;                                         // 0x05D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                    HighRankMsgID;                                     // 0x05E8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    MaxRankMsgID;                                      // 0x05F8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	int32                                         WarningLevel;                                      // 0x0608(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60C[0x4];                                      // 0x060C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    OverflowRankUpExpMsgID;                            // 0x0610(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	int32                                         CurrentTribeCount;                                 // 0x0620(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_624[0x4];                                      // 0x0624(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   DialogText;                                        // 0x0628(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ActionInvokeRankUp();
	void BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_10_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_6_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
	void BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_7_OnUpdatedPage__DelegateSignature(int32 NowPage);
	void BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_8_OnCreatedNewSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* NewSlot);
	void BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_K2Node_ComponentBoundEvent_9_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void BndEvt__WBP_IngameMenu_PalCondense_WBP_CommonButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__WBP_IngameMenu_PalCondense_WBP_Menu_btn_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature();
	void Cancel_Condense();
	void ConfirmInvokeRankUp();
	void ConfirmSuccess(bool bResult);
	void Destruct();
	void ExecuteUbergraph_WBP_IngameMenu_PalCondense(int32 EntryPoint);
	void Get_Consumeable_Pal();
	void GetWarningLevel();
	void MaxRankConfirm(bool bResult);
	void OnCancelAction();
	void OnClickSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot_0, EPalItemSlotPressType PressType);
	void OnHoverPalSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot_0);
	void OnSetup();
	void OnUnhoverPalSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot_0);
	void PreConstruct(bool IsDesignTime);
	void RankupSuccessed(int32 NewRank, int32 OldRank);
	void ReceiveConfirmInvokeRankup(bool IsConfirmed);
	void ReceiveConfirmOverflowRankUpExp(bool bResult);
	void SetBasePal(class UPalIndividualCharacterHandle* IndividualHandle);
	void SetRank(int32 Rank, int32 ToRank);
	void Setup();
	void SetupBoxSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot_0);
	void SetWorkSuitability(class UPalIndividualCharacterParameter* IndividualParam);
	void UpdateBaseCharacterSimulateStatus();
	void UpdateGauge();
	void UpdateSimulation();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameMenu_PalCondense_C">();
	}
	static class UWBP_IngameMenu_PalCondense_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameMenu_PalCondense_C>();
	}
};
static_assert(alignof(UWBP_IngameMenu_PalCondense_C) == 0x000008, "Wrong alignment on UWBP_IngameMenu_PalCondense_C");
static_assert(sizeof(UWBP_IngameMenu_PalCondense_C) == 0x000640, "Wrong size on UWBP_IngameMenu_PalCondense_C");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, UberGraphFrame) == 0x000448, "Member 'UWBP_IngameMenu_PalCondense_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, Anm_SelectFull) == 0x000450, "Member 'UWBP_IngameMenu_PalCondense_C::Anm_SelectFull' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, Anm_SelectMaterialPal) == 0x000458, "Member 'UWBP_IngameMenu_PalCondense_C::Anm_SelectMaterialPal' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, Anm_SelectMainPal) == 0x000460, "Member 'UWBP_IngameMenu_PalCondense_C::Anm_SelectMainPal' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, CanvasPanelGet) == 0x000468, "Member 'UWBP_IngameMenu_PalCondense_C::CanvasPanelGet' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, HorizontalBox_PalWorkIcon) == 0x000470, "Member 'UWBP_IngameMenu_PalCondense_C::HorizontalBox_PalWorkIcon' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, ProgressBar_Extract) == 0x000478, "Member 'UWBP_IngameMenu_PalCondense_C::ProgressBar_Extract' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, Text_LevelValue) == 0x000480, "Member 'UWBP_IngameMenu_PalCondense_C::Text_LevelValue' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, Text_PalExtractNum) == 0x000488, "Member 'UWBP_IngameMenu_PalCondense_C::Text_PalExtractNum' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, Text_PalName) == 0x000490, "Member 'UWBP_IngameMenu_PalCondense_C::Text_PalName' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, Text_RegisterPalNumValue) == 0x000498, "Member 'UWBP_IngameMenu_PalCondense_C::Text_RegisterPalNumValue' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, Text_StatusNum_AftAtk) == 0x0004A0, "Member 'UWBP_IngameMenu_PalCondense_C::Text_StatusNum_AftAtk' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, Text_StatusNum_AftDef) == 0x0004A8, "Member 'UWBP_IngameMenu_PalCondense_C::Text_StatusNum_AftDef' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, Text_StatusNum_AftHp) == 0x0004B0, "Member 'UWBP_IngameMenu_PalCondense_C::Text_StatusNum_AftHp' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, Text_StatusNum_PreDef) == 0x0004B8, "Member 'UWBP_IngameMenu_PalCondense_C::Text_StatusNum_PreDef' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, Text_StatusNum_PrevAtk) == 0x0004C0, "Member 'UWBP_IngameMenu_PalCondense_C::Text_StatusNum_PrevAtk' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, Text_StatusNum_PrevHP) == 0x0004C8, "Member 'UWBP_IngameMenu_PalCondense_C::Text_StatusNum_PrevHP' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, WBP_BoxPalList) == 0x0004D0, "Member 'UWBP_IngameMenu_PalCondense_C::WBP_BoxPalList' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, WBP_CommonButton) == 0x0004D8, "Member 'UWBP_IngameMenu_PalCondense_C::WBP_CommonButton' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, WBP_IngameMenu_PalBox_PalDetail) == 0x0004E0, "Member 'UWBP_IngameMenu_PalCondense_C::WBP_IngameMenu_PalBox_PalDetail' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, WBP_MainMenu_Pal_Skill_Unique) == 0x0004E8, "Member 'UWBP_IngameMenu_PalCondense_C::WBP_MainMenu_Pal_Skill_Unique' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, WBP_MainMenu_PalRarityStar_0) == 0x0004F0, "Member 'UWBP_IngameMenu_PalCondense_C::WBP_MainMenu_PalRarityStar_0' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, WBP_MainMenu_PalRarityStar_1) == 0x0004F8, "Member 'UWBP_IngameMenu_PalCondense_C::WBP_MainMenu_PalRarityStar_1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, WBP_MainMenu_PalRarityStar_2) == 0x000500, "Member 'UWBP_IngameMenu_PalCondense_C::WBP_MainMenu_PalRarityStar_2' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, WBP_MainMenu_PalRarityStar_3) == 0x000508, "Member 'UWBP_IngameMenu_PalCondense_C::WBP_MainMenu_PalRarityStar_3' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, WBP_Menu_btn) == 0x000510, "Member 'UWBP_IngameMenu_PalCondense_C::WBP_Menu_btn' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, WBP_PalCommonCharacterIcon) == 0x000518, "Member 'UWBP_IngameMenu_PalCondense_C::WBP_PalCommonCharacterIcon' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, WBP_PalCommonCharacterSlotButton) == 0x000520, "Member 'UWBP_IngameMenu_PalCondense_C::WBP_PalCommonCharacterSlotButton' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, WBP_PalCommonCharacterSlotButton_1) == 0x000528, "Member 'UWBP_IngameMenu_PalCondense_C::WBP_PalCommonCharacterSlotButton_1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, WBP_PalCommonCharacterSlotButton_2) == 0x000530, "Member 'UWBP_IngameMenu_PalCondense_C::WBP_PalCommonCharacterSlotButton_2' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, WBP_PalCommonCharacterSlotButton_3) == 0x000538, "Member 'UWBP_IngameMenu_PalCondense_C::WBP_PalCommonCharacterSlotButton_3' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, WBP_PalCommonCharacterSlotButton_4) == 0x000540, "Member 'UWBP_IngameMenu_PalCondense_C::WBP_PalCommonCharacterSlotButton_4' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, WBP_PalKeyGuideIcon_211) == 0x000548, "Member 'UWBP_IngameMenu_PalCondense_C::WBP_PalKeyGuideIcon_211' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, BoxNameMsgID) == 0x000550, "Member 'UWBP_IngameMenu_PalCondense_C::BoxNameMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, ConfirmMsgID) == 0x000560, "Member 'UWBP_IngameMenu_PalCondense_C::ConfirmMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, SuccessMsgID) == 0x000570, "Member 'UWBP_IngameMenu_PalCondense_C::SuccessMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, Model) == 0x000580, "Member 'UWBP_IngameMenu_PalCondense_C::Model' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, InputActionControllerInvokeName) == 0x000588, "Member 'UWBP_IngameMenu_PalCondense_C::InputActionControllerInvokeName' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, PartyPalSlots) == 0x000590, "Member 'UWBP_IngameMenu_PalCondense_C::PartyPalSlots' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, RarityStars) == 0x0005A0, "Member 'UWBP_IngameMenu_PalCondense_C::RarityStars' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, BasePalHandle) == 0x0005B0, "Member 'UWBP_IngameMenu_PalCondense_C::BasePalHandle' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, BasePalSlot) == 0x0005B8, "Member 'UWBP_IngameMenu_PalCondense_C::BasePalSlot' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, CurrentConsumePalSlots) == 0x0005C0, "Member 'UWBP_IngameMenu_PalCondense_C::CurrentConsumePalSlots' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, CanInvoke) == 0x0005D0, "Member 'UWBP_IngameMenu_PalCondense_C::CanInvoke' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, TempSlots) == 0x0005D8, "Member 'UWBP_IngameMenu_PalCondense_C::TempSlots' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, HighRankMsgID) == 0x0005E8, "Member 'UWBP_IngameMenu_PalCondense_C::HighRankMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, MaxRankMsgID) == 0x0005F8, "Member 'UWBP_IngameMenu_PalCondense_C::MaxRankMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, WarningLevel) == 0x000608, "Member 'UWBP_IngameMenu_PalCondense_C::WarningLevel' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, OverflowRankUpExpMsgID) == 0x000610, "Member 'UWBP_IngameMenu_PalCondense_C::OverflowRankUpExpMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, CurrentTribeCount) == 0x000620, "Member 'UWBP_IngameMenu_PalCondense_C::CurrentTribeCount' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_PalCondense_C, DialogText) == 0x000628, "Member 'UWBP_IngameMenu_PalCondense_C::DialogText' has a wrong offset!");

}

