#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EAction_Unique_Tackle_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C
// 0x00E0 (0x0118 - 0x0038)
class UBP_UniqueSkillModule_Tackle_C : public UPalUniqueSkillModule
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                           StartAnimMontage;                                  // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           LoopAnimMontage;                                   // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           EndAnimMontage;                                    // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        AttackTime;                                        // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        YawMultiply;                                       // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EndBrakeTime;                                      // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EndBrakeTimer;                                     // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxSpeedMultiply;                                  // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MinSpeedMultiply;                                  // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TackleHomingRate;                                  // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StopUpdateYaw;                                     // 0x0090(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           AttackTimerHandle;                                 // 0x0098(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   FlagName;                                          // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 StartSkillEffectClass;                             // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 LoopSkillEffectClass;                              // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffectBase_C*                  LoopSkillEffect;                                   // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSpawnedLoopEffect;                               // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EAction_Unique_Tackle                         State;                                             // 0x00D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnEndAttackDelegate;                               // 0x00D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnMontageNotifyDelegate;                           // 0x00E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCompletedEndMontageDelegate;                     // 0x00F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        StartHomingRate;                                   // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTackleHoming;                                    // 0x0110(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEffectSpawnOnGround;                             // 0x0111(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ControllInput(double DeltaTime);
	void ExecuteUbergraph_BP_UniqueSkillModule_Tackle(int32 EntryPoint);
	void GetCurrentState(EAction_Unique_Tackle* State_0);
	void OnBeginModule();
	void OnBlendOut_26A182C445668EE79190E6AE1D795120(class FName NotifyName);
	void OnCompleted_26A182C445668EE79190E6AE1D795120(class FName NotifyName);
	void OnCompletedEndMontageDelegate__DelegateSignature();
	void OnEndAttack();
	void OnEndAttackDelegate__DelegateSignature();
	void OnEndModule();
	void OnInterrupted_26A182C445668EE79190E6AE1D795120(class FName NotifyName);
	void OnMontageNotifyDelegate__DelegateSignature(class UAnimMontage* Montage, class FName NotifyName);
	void OnMontageNotifyEvent(class UAnimMontage* Montage, class FName NotifyName);
	void OnNotifyBegin_26A182C445668EE79190E6AE1D795120(class FName NotifyName);
	void OnNotifyEnd_26A182C445668EE79190E6AE1D795120(class FName NotifyName);
	void OnSpawnedLoopEffect__DelegateSignature(class ABP_SkillEffectBase_C* LoopEffect);
	void OnStartTossin();
	void SetFlagName(class FName FlagName_0);
	void TerminateMotion();
	void TickModule(float DeltaTime);
	void UpdateVelocity();
	void UpdateYaw();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UniqueSkillModule_Tackle_C">();
	}
	static class UBP_UniqueSkillModule_Tackle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UniqueSkillModule_Tackle_C>();
	}
};
static_assert(alignof(UBP_UniqueSkillModule_Tackle_C) == 0x000008, "Wrong alignment on UBP_UniqueSkillModule_Tackle_C");
static_assert(sizeof(UBP_UniqueSkillModule_Tackle_C) == 0x000118, "Wrong size on UBP_UniqueSkillModule_Tackle_C");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, UberGraphFrame) == 0x000038, "Member 'UBP_UniqueSkillModule_Tackle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, StartAnimMontage) == 0x000040, "Member 'UBP_UniqueSkillModule_Tackle_C::StartAnimMontage' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, LoopAnimMontage) == 0x000048, "Member 'UBP_UniqueSkillModule_Tackle_C::LoopAnimMontage' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, EndAnimMontage) == 0x000050, "Member 'UBP_UniqueSkillModule_Tackle_C::EndAnimMontage' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, AttackTime) == 0x000058, "Member 'UBP_UniqueSkillModule_Tackle_C::AttackTime' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, YawMultiply) == 0x000060, "Member 'UBP_UniqueSkillModule_Tackle_C::YawMultiply' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, EndBrakeTime) == 0x000068, "Member 'UBP_UniqueSkillModule_Tackle_C::EndBrakeTime' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, EndBrakeTimer) == 0x000070, "Member 'UBP_UniqueSkillModule_Tackle_C::EndBrakeTimer' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, MaxSpeedMultiply) == 0x000078, "Member 'UBP_UniqueSkillModule_Tackle_C::MaxSpeedMultiply' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, MinSpeedMultiply) == 0x000080, "Member 'UBP_UniqueSkillModule_Tackle_C::MinSpeedMultiply' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, TackleHomingRate) == 0x000088, "Member 'UBP_UniqueSkillModule_Tackle_C::TackleHomingRate' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, StopUpdateYaw) == 0x000090, "Member 'UBP_UniqueSkillModule_Tackle_C::StopUpdateYaw' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, AttackTimerHandle) == 0x000098, "Member 'UBP_UniqueSkillModule_Tackle_C::AttackTimerHandle' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, FlagName) == 0x0000A0, "Member 'UBP_UniqueSkillModule_Tackle_C::FlagName' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, StartSkillEffectClass) == 0x0000A8, "Member 'UBP_UniqueSkillModule_Tackle_C::StartSkillEffectClass' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, LoopSkillEffectClass) == 0x0000B0, "Member 'UBP_UniqueSkillModule_Tackle_C::LoopSkillEffectClass' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, LoopSkillEffect) == 0x0000B8, "Member 'UBP_UniqueSkillModule_Tackle_C::LoopSkillEffect' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, OnSpawnedLoopEffect) == 0x0000C0, "Member 'UBP_UniqueSkillModule_Tackle_C::OnSpawnedLoopEffect' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, State) == 0x0000D0, "Member 'UBP_UniqueSkillModule_Tackle_C::State' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, OnEndAttackDelegate) == 0x0000D8, "Member 'UBP_UniqueSkillModule_Tackle_C::OnEndAttackDelegate' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, OnMontageNotifyDelegate) == 0x0000E8, "Member 'UBP_UniqueSkillModule_Tackle_C::OnMontageNotifyDelegate' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, OnCompletedEndMontageDelegate) == 0x0000F8, "Member 'UBP_UniqueSkillModule_Tackle_C::OnCompletedEndMontageDelegate' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, StartHomingRate) == 0x000108, "Member 'UBP_UniqueSkillModule_Tackle_C::StartHomingRate' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, IsTackleHoming) == 0x000110, "Member 'UBP_UniqueSkillModule_Tackle_C::IsTackleHoming' has a wrong offset!");
static_assert(offsetof(UBP_UniqueSkillModule_Tackle_C, IsEffectSpawnOnGround) == 0x000111, "Member 'UBP_UniqueSkillModule_Tackle_C::IsEffectSpawnOnGround' has a wrong offset!");

}

