#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_Ingame_Signboard_TextInput.WBP_Ingame_Signboard_TextInput_C
// 0x0050 (0x0480 - 0x0430)
class UWBP_Ingame_Signboard_TextInput_C final : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMultiLineEditableText*                 MultiLineEditableText;                             // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_C*                    WBP_CommonButton;                                  // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                        WBP_Menu_btn;                                      // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonWindow_C*                 WBP_PalCommonWindow;                               // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    NoNameMsgID;                                       // 0x0458(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                         MaxTextLength;                                     // 0x0468(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxTextLineNum;                                    // 0x046C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     EscapeActionName;                                  // 0x0470(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   TriggerActionHandle;                               // 0x0478(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          IsRegisteredActionInput;                           // 0x047C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_CommonButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text);
	void BndEvt__WBP_Ingame_Signboard_TextInput_WBP_Menu_btn_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_Ingame_Signboard_TextInput(int32 EntryPoint);
	void OnClosed();
	void OnSetup();
	void OnTriggerEscape();
	void ResetInputAction();
	void SetEnableConfirmButton(bool IsEnable);
	void SetupInputAction();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Ingame_Signboard_TextInput_C">();
	}
	static class UWBP_Ingame_Signboard_TextInput_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Ingame_Signboard_TextInput_C>();
	}
};
static_assert(alignof(UWBP_Ingame_Signboard_TextInput_C) == 0x000008, "Wrong alignment on UWBP_Ingame_Signboard_TextInput_C");
static_assert(sizeof(UWBP_Ingame_Signboard_TextInput_C) == 0x000480, "Wrong size on UWBP_Ingame_Signboard_TextInput_C");
static_assert(offsetof(UWBP_Ingame_Signboard_TextInput_C, UberGraphFrame) == 0x000430, "Member 'UWBP_Ingame_Signboard_TextInput_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Signboard_TextInput_C, MultiLineEditableText) == 0x000438, "Member 'UWBP_Ingame_Signboard_TextInput_C::MultiLineEditableText' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Signboard_TextInput_C, WBP_CommonButton) == 0x000440, "Member 'UWBP_Ingame_Signboard_TextInput_C::WBP_CommonButton' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Signboard_TextInput_C, WBP_Menu_btn) == 0x000448, "Member 'UWBP_Ingame_Signboard_TextInput_C::WBP_Menu_btn' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Signboard_TextInput_C, WBP_PalCommonWindow) == 0x000450, "Member 'UWBP_Ingame_Signboard_TextInput_C::WBP_PalCommonWindow' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Signboard_TextInput_C, NoNameMsgID) == 0x000458, "Member 'UWBP_Ingame_Signboard_TextInput_C::NoNameMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Signboard_TextInput_C, MaxTextLength) == 0x000468, "Member 'UWBP_Ingame_Signboard_TextInput_C::MaxTextLength' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Signboard_TextInput_C, MaxTextLineNum) == 0x00046C, "Member 'UWBP_Ingame_Signboard_TextInput_C::MaxTextLineNum' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Signboard_TextInput_C, EscapeActionName) == 0x000470, "Member 'UWBP_Ingame_Signboard_TextInput_C::EscapeActionName' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Signboard_TextInput_C, TriggerActionHandle) == 0x000478, "Member 'UWBP_Ingame_Signboard_TextInput_C::TriggerActionHandle' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Signboard_TextInput_C, IsRegisteredActionInput) == 0x00047C, "Member 'UWBP_Ingame_Signboard_TextInput_C::IsRegisteredActionInput' has a wrong offset!");

}

