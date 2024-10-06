#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ActionDefenseWait.BP_ActionDefenseWait_C
// 0x0020 (0x0160 - 0x0140)
class UBP_ActionDefenseWait_C : public UPalActionBase
{
public:
	uint8                                         Pad_138[0x8];                                      // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                           TempMontage;                                       // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	EPalActionType                                ActionType;                                        // 0x0150(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalGeneralMontageType                        MontageType;                                       // 0x0151(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionDefenseWait(int32 EntryPoint);
	void OnBeginAction();
	void OnEndAction();
	void SetupMontage();
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionDefenseWait_C">();
	}
	static class UBP_ActionDefenseWait_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionDefenseWait_C>();
	}
};
static_assert(alignof(UBP_ActionDefenseWait_C) == 0x000010, "Wrong alignment on UBP_ActionDefenseWait_C");
static_assert(sizeof(UBP_ActionDefenseWait_C) == 0x000160, "Wrong size on UBP_ActionDefenseWait_C");
static_assert(offsetof(UBP_ActionDefenseWait_C, UberGraphFrame) == 0x000140, "Member 'UBP_ActionDefenseWait_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionDefenseWait_C, TempMontage) == 0x000148, "Member 'UBP_ActionDefenseWait_C::TempMontage' has a wrong offset!");
static_assert(offsetof(UBP_ActionDefenseWait_C, ActionType) == 0x000150, "Member 'UBP_ActionDefenseWait_C::ActionType' has a wrong offset!");
static_assert(offsetof(UBP_ActionDefenseWait_C, MontageType) == 0x000151, "Member 'UBP_ActionDefenseWait_C::MontageType' has a wrong offset!");

}

