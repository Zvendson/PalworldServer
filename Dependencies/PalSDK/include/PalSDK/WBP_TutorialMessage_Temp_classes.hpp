#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C
// 0x0060 (0x02D8 - 0x0278)
class UWBP_TutorialMessage_Temp_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Message_Out;                                   // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Message_In;                                    // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                 BP_PalRichTextBlock_TutorialMsg;                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Message;                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FDataTableRowHandle>            TutorialMessages;                                  // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                           MessageTimer;                                      // 0x02B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    CurrentMsg;                                        // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                           Interruputer;                                      // 0x02C8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Skipable;                                          // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CreateGuideText(const class FText& InText, class FText* OutText);
	void ExecuteUbergraph_WBP_TutorialMessage_Temp(int32 EntryPoint);
	void Finished_5267E3844738D65023A58CBEE7C11FAC();
	void Finished_D8B6F6C240191DC6DD60BAADB6596025();
	void On_Input_Method_Changed(ECommonInputType InputType);
	void PresentMessage();
	void QueueTutorial(const struct FDataTableRowHandle& TutorialMsgID);
	void Setup();
	void SkipToNextMessage();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TutorialMessage_Temp_C">();
	}
	static class UWBP_TutorialMessage_Temp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TutorialMessage_Temp_C>();
	}
};
static_assert(alignof(UWBP_TutorialMessage_Temp_C) == 0x000008, "Wrong alignment on UWBP_TutorialMessage_Temp_C");
static_assert(sizeof(UWBP_TutorialMessage_Temp_C) == 0x0002D8, "Wrong size on UWBP_TutorialMessage_Temp_C");
static_assert(offsetof(UWBP_TutorialMessage_Temp_C, UberGraphFrame) == 0x000278, "Member 'UWBP_TutorialMessage_Temp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TutorialMessage_Temp_C, Anm_Message_Out) == 0x000280, "Member 'UWBP_TutorialMessage_Temp_C::Anm_Message_Out' has a wrong offset!");
static_assert(offsetof(UWBP_TutorialMessage_Temp_C, Anm_Message_In) == 0x000288, "Member 'UWBP_TutorialMessage_Temp_C::Anm_Message_In' has a wrong offset!");
static_assert(offsetof(UWBP_TutorialMessage_Temp_C, BP_PalRichTextBlock_TutorialMsg) == 0x000290, "Member 'UWBP_TutorialMessage_Temp_C::BP_PalRichTextBlock_TutorialMsg' has a wrong offset!");
static_assert(offsetof(UWBP_TutorialMessage_Temp_C, CanvasPanel_Message) == 0x000298, "Member 'UWBP_TutorialMessage_Temp_C::CanvasPanel_Message' has a wrong offset!");
static_assert(offsetof(UWBP_TutorialMessage_Temp_C, TutorialMessages) == 0x0002A0, "Member 'UWBP_TutorialMessage_Temp_C::TutorialMessages' has a wrong offset!");
static_assert(offsetof(UWBP_TutorialMessage_Temp_C, MessageTimer) == 0x0002B0, "Member 'UWBP_TutorialMessage_Temp_C::MessageTimer' has a wrong offset!");
static_assert(offsetof(UWBP_TutorialMessage_Temp_C, CurrentMsg) == 0x0002B8, "Member 'UWBP_TutorialMessage_Temp_C::CurrentMsg' has a wrong offset!");
static_assert(offsetof(UWBP_TutorialMessage_Temp_C, Interruputer) == 0x0002C8, "Member 'UWBP_TutorialMessage_Temp_C::Interruputer' has a wrong offset!");
static_assert(offsetof(UWBP_TutorialMessage_Temp_C, Skipable) == 0x0002D0, "Member 'UWBP_TutorialMessage_Temp_C::Skipable' has a wrong offset!");

}

