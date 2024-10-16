#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_InGame_Match_SignalFinish.WBP_InGame_Match_SignalFinish_C
// 0x0028 (0x02A0 - 0x0278)
class UWBP_InGame_Match_SignalFinish_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Finish;                                        // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Finish;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Finish_1;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Finish_2;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_InGame_Match_SignalFinish(int32 EntryPoint);
	void SequenceEvent();
	void SequenceEvent__ENTRYPOINTWBP_InGame_Match_SignalFinish();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InGame_Match_SignalFinish_C">();
	}
	static class UWBP_InGame_Match_SignalFinish_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InGame_Match_SignalFinish_C>();
	}
};
static_assert(alignof(UWBP_InGame_Match_SignalFinish_C) == 0x000008, "Wrong alignment on UWBP_InGame_Match_SignalFinish_C");
static_assert(sizeof(UWBP_InGame_Match_SignalFinish_C) == 0x0002A0, "Wrong size on UWBP_InGame_Match_SignalFinish_C");
static_assert(offsetof(UWBP_InGame_Match_SignalFinish_C, UberGraphFrame) == 0x000278, "Member 'UWBP_InGame_Match_SignalFinish_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_SignalFinish_C, Anm_Finish) == 0x000280, "Member 'UWBP_InGame_Match_SignalFinish_C::Anm_Finish' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_SignalFinish_C, Text_Finish) == 0x000288, "Member 'UWBP_InGame_Match_SignalFinish_C::Text_Finish' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_SignalFinish_C, Text_Finish_1) == 0x000290, "Member 'UWBP_InGame_Match_SignalFinish_C::Text_Finish_1' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_SignalFinish_C, Text_Finish_2) == 0x000298, "Member 'UWBP_InGame_Match_SignalFinish_C::Text_Finish_2' has a wrong offset!");

}

