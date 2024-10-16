#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EAction_Anubis_GroundPunchState_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_ActionUniqueAttackBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Action_Unique_Anubis_GroundPunch.BP_Action_Unique_Anubis_GroundPunch_C
// 0x0080 (0x0290 - 0x0210)
class UBP_Action_Unique_Anubis_GroundPunch_C final : public UBP_ActionUniqueAttackBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Action_Unique_Anubis_GroundPunch_C; // 0x0210(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        DefaultJumpZ;                                      // 0x0218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        JumpZVelocity;                                     // 0x0220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        GravityRate;                                       // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FlagName_0;                                        // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAction_Anubis_GroundPunchState               State;                                             // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_239[0x7];                                      // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              TargetLocation;                                    // 0x0240(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              StartLocation;                                     // 0x0250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MovementTimer;                                     // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MovementTime;                                      // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StateChangeVelocityZ;                              // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StateChangeGroundRange;                            // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AdditionalTargetingTime;                           // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      OmenEffect;                                        // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ActivateOmenEffect();
	void ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch(int32 EntryPoint);
	void MovementActor(double DeltaTime);
	void OnBeginAction();
	void OnBlendOut_3EAF69114CDC3D3144F4EBB8A4E9DFF5(class FName NotifyName);
	void OnCompleted_3EAF69114CDC3D3144F4EBB8A4E9DFF5(class FName NotifyName);
	void OnEndAction();
	void OnInterrupted_3EAF69114CDC3D3144F4EBB8A4E9DFF5(class FName NotifyName);
	void OnNotifyBegin_3EAF69114CDC3D3144F4EBB8A4E9DFF5(class FName NotifyName);
	void OnNotifyEnd_3EAF69114CDC3D3144F4EBB8A4E9DFF5(class FName NotifyName);
	void Set_Target_Location();
	void StopMontage();
	void TerminateMovementState();
	void TickAction(float DeltaTime);
	void Update_Effect_Location(double DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_Unique_Anubis_GroundPunch_C">();
	}
	static class UBP_Action_Unique_Anubis_GroundPunch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_Unique_Anubis_GroundPunch_C>();
	}
};
static_assert(alignof(UBP_Action_Unique_Anubis_GroundPunch_C) == 0x000010, "Wrong alignment on UBP_Action_Unique_Anubis_GroundPunch_C");
static_assert(sizeof(UBP_Action_Unique_Anubis_GroundPunch_C) == 0x000290, "Wrong size on UBP_Action_Unique_Anubis_GroundPunch_C");
static_assert(offsetof(UBP_Action_Unique_Anubis_GroundPunch_C, UberGraphFrame_BP_Action_Unique_Anubis_GroundPunch_C) == 0x000210, "Member 'UBP_Action_Unique_Anubis_GroundPunch_C::UberGraphFrame_BP_Action_Unique_Anubis_GroundPunch_C' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_GroundPunch_C, DefaultJumpZ) == 0x000218, "Member 'UBP_Action_Unique_Anubis_GroundPunch_C::DefaultJumpZ' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_GroundPunch_C, JumpZVelocity) == 0x000220, "Member 'UBP_Action_Unique_Anubis_GroundPunch_C::JumpZVelocity' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_GroundPunch_C, GravityRate) == 0x000228, "Member 'UBP_Action_Unique_Anubis_GroundPunch_C::GravityRate' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_GroundPunch_C, FlagName_0) == 0x000230, "Member 'UBP_Action_Unique_Anubis_GroundPunch_C::FlagName_0' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_GroundPunch_C, State) == 0x000238, "Member 'UBP_Action_Unique_Anubis_GroundPunch_C::State' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_GroundPunch_C, TargetLocation) == 0x000240, "Member 'UBP_Action_Unique_Anubis_GroundPunch_C::TargetLocation' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_GroundPunch_C, StartLocation) == 0x000250, "Member 'UBP_Action_Unique_Anubis_GroundPunch_C::StartLocation' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_GroundPunch_C, MovementTimer) == 0x000260, "Member 'UBP_Action_Unique_Anubis_GroundPunch_C::MovementTimer' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_GroundPunch_C, MovementTime) == 0x000268, "Member 'UBP_Action_Unique_Anubis_GroundPunch_C::MovementTime' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_GroundPunch_C, StateChangeVelocityZ) == 0x000270, "Member 'UBP_Action_Unique_Anubis_GroundPunch_C::StateChangeVelocityZ' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_GroundPunch_C, StateChangeGroundRange) == 0x000278, "Member 'UBP_Action_Unique_Anubis_GroundPunch_C::StateChangeGroundRange' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_GroundPunch_C, AdditionalTargetingTime) == 0x000280, "Member 'UBP_Action_Unique_Anubis_GroundPunch_C::AdditionalTargetingTime' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Anubis_GroundPunch_C, OmenEffect) == 0x000288, "Member 'UBP_Action_Unique_Anubis_GroundPunch_C::OmenEffect' has a wrong offset!");

}

