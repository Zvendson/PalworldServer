#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C
// 0x0060 (0x0190 - 0x0130)
class UBP_AIActionCombatHeli_BattleMode_C final : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 CurrentTarget;                                     // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Const_BattleDistance;                              // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_BattleHeight;                                // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_MinHeight;                                   // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_SideMovePower;                               // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_CombatHeliRpidWeaponComponent_FrontMG_C* GunComponent;                                      // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_CombatHeliRpidWeaponComponent_WingMiso_C* MisoComponent;                                     // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBomberMode;                                      // 0x0170(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_CombatHeliRpidWeaponComponent_Bomber_C* BomberComponent;                                   // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        MoveDirectionRight;                                // 0x0180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TempDeltaTime;                                     // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode(int32 EntryPoint);
	void FindTarget(class AActor** TargetActor);
	void IsNearTarget2D(double Distance, bool* Near);
	void RotateToTarget(double DeltaTime);
	void SetMoveVelocity();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIActionCombatHeli_BattleMode_C">();
	}
	static class UBP_AIActionCombatHeli_BattleMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIActionCombatHeli_BattleMode_C>();
	}
};
static_assert(alignof(UBP_AIActionCombatHeli_BattleMode_C) == 0x000008, "Wrong alignment on UBP_AIActionCombatHeli_BattleMode_C");
static_assert(sizeof(UBP_AIActionCombatHeli_BattleMode_C) == 0x000190, "Wrong size on UBP_AIActionCombatHeli_BattleMode_C");
static_assert(offsetof(UBP_AIActionCombatHeli_BattleMode_C, UberGraphFrame) == 0x000130, "Member 'UBP_AIActionCombatHeli_BattleMode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIActionCombatHeli_BattleMode_C, CurrentTarget) == 0x000138, "Member 'UBP_AIActionCombatHeli_BattleMode_C::CurrentTarget' has a wrong offset!");
static_assert(offsetof(UBP_AIActionCombatHeli_BattleMode_C, Const_BattleDistance) == 0x000140, "Member 'UBP_AIActionCombatHeli_BattleMode_C::Const_BattleDistance' has a wrong offset!");
static_assert(offsetof(UBP_AIActionCombatHeli_BattleMode_C, Const_BattleHeight) == 0x000148, "Member 'UBP_AIActionCombatHeli_BattleMode_C::Const_BattleHeight' has a wrong offset!");
static_assert(offsetof(UBP_AIActionCombatHeli_BattleMode_C, Const_MinHeight) == 0x000150, "Member 'UBP_AIActionCombatHeli_BattleMode_C::Const_MinHeight' has a wrong offset!");
static_assert(offsetof(UBP_AIActionCombatHeli_BattleMode_C, Const_SideMovePower) == 0x000158, "Member 'UBP_AIActionCombatHeli_BattleMode_C::Const_SideMovePower' has a wrong offset!");
static_assert(offsetof(UBP_AIActionCombatHeli_BattleMode_C, GunComponent) == 0x000160, "Member 'UBP_AIActionCombatHeli_BattleMode_C::GunComponent' has a wrong offset!");
static_assert(offsetof(UBP_AIActionCombatHeli_BattleMode_C, MisoComponent) == 0x000168, "Member 'UBP_AIActionCombatHeli_BattleMode_C::MisoComponent' has a wrong offset!");
static_assert(offsetof(UBP_AIActionCombatHeli_BattleMode_C, IsBomberMode) == 0x000170, "Member 'UBP_AIActionCombatHeli_BattleMode_C::IsBomberMode' has a wrong offset!");
static_assert(offsetof(UBP_AIActionCombatHeli_BattleMode_C, BomberComponent) == 0x000178, "Member 'UBP_AIActionCombatHeli_BattleMode_C::BomberComponent' has a wrong offset!");
static_assert(offsetof(UBP_AIActionCombatHeli_BattleMode_C, MoveDirectionRight) == 0x000180, "Member 'UBP_AIActionCombatHeli_BattleMode_C::MoveDirectionRight' has a wrong offset!");
static_assert(offsetof(UBP_AIActionCombatHeli_BattleMode_C, TempDeltaTime) == 0x000188, "Member 'UBP_AIActionCombatHeli_BattleMode_C::TempDeltaTime' has a wrong offset!");

}

