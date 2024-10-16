#pragma once

#include "Basic.hpp"

#include "BP_ActionGeneralAttackFarBase_classes.hpp"
#include "Engine_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionWaza_BreathBase.BP_ActionWaza_BreathBase_C
// 0x0010 (0x02D0 - 0x02C0)
class UBP_ActionWaza_BreathBase_C : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                         Pad_2B3[0x5];                                      // 0x02B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionWaza_BreathBase_C;         // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                           Timer;                                             // 0x02C0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UClass*                                 Const_BulletCalss;                                 // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionWaza_BreathBase(int32 EntryPoint);
	void OnBeginAction();
	void OnEndAction();
	void OnSpawnEffect(class APalSkillEffectBase* Effect_0);
	void ShootBullet();
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionWaza_BreathBase_C">();
	}
	static class UBP_ActionWaza_BreathBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionWaza_BreathBase_C>();
	}
};
static_assert(alignof(UBP_ActionWaza_BreathBase_C) == 0x000010, "Wrong alignment on UBP_ActionWaza_BreathBase_C");
static_assert(sizeof(UBP_ActionWaza_BreathBase_C) == 0x0002D0, "Wrong size on UBP_ActionWaza_BreathBase_C");
static_assert(offsetof(UBP_ActionWaza_BreathBase_C, UberGraphFrame_BP_ActionWaza_BreathBase_C) == 0x0002B8, "Member 'UBP_ActionWaza_BreathBase_C::UberGraphFrame_BP_ActionWaza_BreathBase_C' has a wrong offset!");
static_assert(offsetof(UBP_ActionWaza_BreathBase_C, Timer) == 0x0002C0, "Member 'UBP_ActionWaza_BreathBase_C::Timer' has a wrong offset!");
static_assert(offsetof(UBP_ActionWaza_BreathBase_C, Const_BulletCalss) == 0x0002C8, "Member 'UBP_ActionWaza_BreathBase_C::Const_BulletCalss' has a wrong offset!");

}

