#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_HomingMissile_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_HomingMissile_MissileLauncher.BP_HomingMissile_MissileLauncher_C
// 0x0020 (0x03C8 - 0x03A8)
class ABP_HomingMissile_MissileLauncher_C : public ABP_HomingMissile_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_HomingMissile_MissileLauncher_C; // 0x03A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_MissileExhaust1;                                // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        RocketSpeed;                                       // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RocketStartDelay;                                  // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_HomingMissile_MissileLauncher(int32 EntryPoint);
	void Find_Target_Actor(class APalCharacter** PalCharacter);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HomingMissile_MissileLauncher_C">();
	}
	static class ABP_HomingMissile_MissileLauncher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HomingMissile_MissileLauncher_C>();
	}
};
static_assert(alignof(ABP_HomingMissile_MissileLauncher_C) == 0x000008, "Wrong alignment on ABP_HomingMissile_MissileLauncher_C");
static_assert(sizeof(ABP_HomingMissile_MissileLauncher_C) == 0x0003C8, "Wrong size on ABP_HomingMissile_MissileLauncher_C");
static_assert(offsetof(ABP_HomingMissile_MissileLauncher_C, UberGraphFrame_BP_HomingMissile_MissileLauncher_C) == 0x0003A8, "Member 'ABP_HomingMissile_MissileLauncher_C::UberGraphFrame_BP_HomingMissile_MissileLauncher_C' has a wrong offset!");
static_assert(offsetof(ABP_HomingMissile_MissileLauncher_C, SM_MissileExhaust1) == 0x0003B0, "Member 'ABP_HomingMissile_MissileLauncher_C::SM_MissileExhaust1' has a wrong offset!");
static_assert(offsetof(ABP_HomingMissile_MissileLauncher_C, RocketSpeed) == 0x0003B8, "Member 'ABP_HomingMissile_MissileLauncher_C::RocketSpeed' has a wrong offset!");
static_assert(offsetof(ABP_HomingMissile_MissileLauncher_C, RocketStartDelay) == 0x0003C0, "Member 'ABP_HomingMissile_MissileLauncher_C::RocketStartDelay' has a wrong offset!");

}

