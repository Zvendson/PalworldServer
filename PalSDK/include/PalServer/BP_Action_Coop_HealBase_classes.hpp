#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_Action_Coop_HealBase.BP_Action_Coop_HealBase_C
// 0x0040 (0x0180 - 0x0140)
class UBP_Action_Coop_HealBase_C : public UPalActionBase
{
public:
	uint8                                         Pad_138[0x8];                                      // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                           Anim_Montage;                                      // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        ElapsedTime;                                       // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FinishTime;                                        // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HealTime;                                          // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHealed;                                          // 0x0168(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_169[0x7];                                      // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 HealTarget;                                        // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void TickAction(float DeltaTime);
	void OnEndAction();
	void OnBeginAction();
	void ExecuteUbergraph_BP_Action_Coop_HealBase(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_Coop_HealBase_C">();
	}
	static class UBP_Action_Coop_HealBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_Coop_HealBase_C>();
	}
};
static_assert(alignof(UBP_Action_Coop_HealBase_C) == 0x000010, "Wrong alignment on UBP_Action_Coop_HealBase_C");
static_assert(sizeof(UBP_Action_Coop_HealBase_C) == 0x000180, "Wrong size on UBP_Action_Coop_HealBase_C");
static_assert(offsetof(UBP_Action_Coop_HealBase_C, UberGraphFrame) == 0x000140, "Member 'UBP_Action_Coop_HealBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Action_Coop_HealBase_C, Anim_Montage) == 0x000148, "Member 'UBP_Action_Coop_HealBase_C::Anim_Montage' has a wrong offset!");
static_assert(offsetof(UBP_Action_Coop_HealBase_C, ElapsedTime) == 0x000150, "Member 'UBP_Action_Coop_HealBase_C::ElapsedTime' has a wrong offset!");
static_assert(offsetof(UBP_Action_Coop_HealBase_C, FinishTime) == 0x000158, "Member 'UBP_Action_Coop_HealBase_C::FinishTime' has a wrong offset!");
static_assert(offsetof(UBP_Action_Coop_HealBase_C, HealTime) == 0x000160, "Member 'UBP_Action_Coop_HealBase_C::HealTime' has a wrong offset!");
static_assert(offsetof(UBP_Action_Coop_HealBase_C, IsHealed) == 0x000168, "Member 'UBP_Action_Coop_HealBase_C::IsHealed' has a wrong offset!");
static_assert(offsetof(UBP_Action_Coop_HealBase_C, HealTarget) == 0x000170, "Member 'UBP_Action_Coop_HealBase_C::HealTarget' has a wrong offset!");

}

