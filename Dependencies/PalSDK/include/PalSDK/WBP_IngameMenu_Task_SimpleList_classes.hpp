#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "WBP_IndividualParameterBindWidget_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_IngameMenu_Task_SimpleList.WBP_IngameMenu_Task_SimpleList_C
// 0x0080 (0x0638 - 0x05B8)
class UWBP_IngameMenu_Task_SimpleList_C final : public UWBP_IndividualParameterBindWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_IngameMenu_Task_SimpleList_C;   // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           MainCanvas;                                        // 0x05C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_PalActionInfo;                                // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_PalName;                                      // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_State_C*              WBP_MainMenu_Pal_State_0;                          // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_State_C*              WBP_MainMenu_Pal_State_1;                          // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_State_C*              WBP_MainMenu_Pal_State_2;                          // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlot_C*          WBP_PalCommonCharacterSlot;                        // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UPalIndividualCharacterSlot> bindedSlot;                                        // 0x05F8(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UWBP_MainMenu_Pal_State_C*>      ConditionWidgetArray;                              // 0x0628(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void Clear();
	void ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList(int32 EntryPoint);
	void OnInitialized();
	void Setup(class UPalIndividualCharacterSlot* TargetSlot);
	void UpdateCondition(TArray<EPalUIConditionType>& Conditions);
	void UpdateNickName(const class FString& NewNickName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameMenu_Task_SimpleList_C">();
	}
	static class UWBP_IngameMenu_Task_SimpleList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameMenu_Task_SimpleList_C>();
	}
};
static_assert(alignof(UWBP_IngameMenu_Task_SimpleList_C) == 0x000008, "Wrong alignment on UWBP_IngameMenu_Task_SimpleList_C");
static_assert(sizeof(UWBP_IngameMenu_Task_SimpleList_C) == 0x000638, "Wrong size on UWBP_IngameMenu_Task_SimpleList_C");
static_assert(offsetof(UWBP_IngameMenu_Task_SimpleList_C, UberGraphFrame_WBP_IngameMenu_Task_SimpleList_C) == 0x0005B8, "Member 'UWBP_IngameMenu_Task_SimpleList_C::UberGraphFrame_WBP_IngameMenu_Task_SimpleList_C' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_SimpleList_C, MainCanvas) == 0x0005C0, "Member 'UWBP_IngameMenu_Task_SimpleList_C::MainCanvas' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_SimpleList_C, Text_PalActionInfo) == 0x0005C8, "Member 'UWBP_IngameMenu_Task_SimpleList_C::Text_PalActionInfo' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_SimpleList_C, Text_PalName) == 0x0005D0, "Member 'UWBP_IngameMenu_Task_SimpleList_C::Text_PalName' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_SimpleList_C, WBP_MainMenu_Pal_State_0) == 0x0005D8, "Member 'UWBP_IngameMenu_Task_SimpleList_C::WBP_MainMenu_Pal_State_0' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_SimpleList_C, WBP_MainMenu_Pal_State_1) == 0x0005E0, "Member 'UWBP_IngameMenu_Task_SimpleList_C::WBP_MainMenu_Pal_State_1' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_SimpleList_C, WBP_MainMenu_Pal_State_2) == 0x0005E8, "Member 'UWBP_IngameMenu_Task_SimpleList_C::WBP_MainMenu_Pal_State_2' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_SimpleList_C, WBP_PalCommonCharacterSlot) == 0x0005F0, "Member 'UWBP_IngameMenu_Task_SimpleList_C::WBP_PalCommonCharacterSlot' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_SimpleList_C, bindedSlot) == 0x0005F8, "Member 'UWBP_IngameMenu_Task_SimpleList_C::bindedSlot' has a wrong offset!");
static_assert(offsetof(UWBP_IngameMenu_Task_SimpleList_C, ConditionWidgetArray) == 0x000628, "Member 'UWBP_IngameMenu_Task_SimpleList_C::ConditionWidgetArray' has a wrong offset!");

}

