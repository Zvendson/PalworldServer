#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_BossBattle_TimeOut.WBP_BossBattle_TimeOut_C
// 0x0020 (0x0298 - 0x0278)
class UWBP_BossBattle_TimeOut_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_OpenClose;                                     // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C_48;                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ChangeText(bool IsTimeOut);
	void ExecuteUbergraph_WBP_BossBattle_TimeOut(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BossBattle_TimeOut_C">();
	}
	static class UWBP_BossBattle_TimeOut_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BossBattle_TimeOut_C>();
	}
};
static_assert(alignof(UWBP_BossBattle_TimeOut_C) == 0x000008, "Wrong alignment on UWBP_BossBattle_TimeOut_C");
static_assert(sizeof(UWBP_BossBattle_TimeOut_C) == 0x000298, "Wrong size on UWBP_BossBattle_TimeOut_C");
static_assert(offsetof(UWBP_BossBattle_TimeOut_C, UberGraphFrame) == 0x000278, "Member 'UWBP_BossBattle_TimeOut_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_BossBattle_TimeOut_C, Anm_OpenClose) == 0x000280, "Member 'UWBP_BossBattle_TimeOut_C::Anm_OpenClose' has a wrong offset!");
static_assert(offsetof(UWBP_BossBattle_TimeOut_C, BP_PalTextBlock_C) == 0x000288, "Member 'UWBP_BossBattle_TimeOut_C::BP_PalTextBlock_C' has a wrong offset!");
static_assert(offsetof(UWBP_BossBattle_TimeOut_C, BP_PalTextBlock_C_48) == 0x000290, "Member 'UWBP_BossBattle_TimeOut_C::BP_PalTextBlock_C_48' has a wrong offset!");

}

