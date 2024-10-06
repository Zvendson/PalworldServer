#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_BossBattle_Timer.WBP_BossBattle_Timer_C
// 0x0010 (0x0288 - 0x0278)
class UWBP_BossBattle_Timer_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_CountDown;                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_BossBattle_Timer(int32 EntryPoint);
	void SetRemainSecond(int32 RemainSecond);
	void SetText(const class FText& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BossBattle_Timer_C">();
	}
	static class UWBP_BossBattle_Timer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BossBattle_Timer_C>();
	}
};
static_assert(alignof(UWBP_BossBattle_Timer_C) == 0x000008, "Wrong alignment on UWBP_BossBattle_Timer_C");
static_assert(sizeof(UWBP_BossBattle_Timer_C) == 0x000288, "Wrong size on UWBP_BossBattle_Timer_C");
static_assert(offsetof(UWBP_BossBattle_Timer_C, UberGraphFrame) == 0x000278, "Member 'UWBP_BossBattle_Timer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_BossBattle_Timer_C, BP_PalTextBlock_CountDown) == 0x000280, "Member 'UWBP_BossBattle_Timer_C::BP_PalTextBlock_CountDown' has a wrong offset!");

}

