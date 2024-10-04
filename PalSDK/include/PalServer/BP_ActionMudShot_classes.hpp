#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ActionGeneralAttackFarBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ActionMudShot.BP_ActionMudShot_C
// 0x0020 (0x02E0 - 0x02C0)
class UBP_ActionMudShot_C final : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                         Pad_2B3[0x5];                                      // 0x02B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionMudShot_C;                 // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 PredictedTargetClass_0;                            // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         PredictPowerRate_0;                                // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CC[0x4];                                      // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 PredictedTarget_0;                                 // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionMudShot(int32 EntryPoint);
	void OnBeginAction();
	void OnEndAction();
	void OnSpawnEffect(class APalSkillEffectBase* Effect_0);
	void SetPredictedTarget_0();
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionMudShot_C">();
	}
	static class UBP_ActionMudShot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionMudShot_C>();
	}
};
static_assert(alignof(UBP_ActionMudShot_C) == 0x000010, "Wrong alignment on UBP_ActionMudShot_C");
static_assert(sizeof(UBP_ActionMudShot_C) == 0x0002E0, "Wrong size on UBP_ActionMudShot_C");
static_assert(offsetof(UBP_ActionMudShot_C, UberGraphFrame_BP_ActionMudShot_C) == 0x0002B8, "Member 'UBP_ActionMudShot_C::UberGraphFrame_BP_ActionMudShot_C' has a wrong offset!");
static_assert(offsetof(UBP_ActionMudShot_C, PredictedTargetClass_0) == 0x0002C0, "Member 'UBP_ActionMudShot_C::PredictedTargetClass_0' has a wrong offset!");
static_assert(offsetof(UBP_ActionMudShot_C, PredictPowerRate_0) == 0x0002C8, "Member 'UBP_ActionMudShot_C::PredictPowerRate_0' has a wrong offset!");
static_assert(offsetof(UBP_ActionMudShot_C, PredictedTarget_0) == 0x0002D0, "Member 'UBP_ActionMudShot_C::PredictedTarget_0' has a wrong offset!");

}

