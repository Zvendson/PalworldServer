#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ActionGeneralAttackFarBase_classes.hpp"
#include "Pal_structs.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ActionWindCutter.BP_ActionWindCutter_C
// 0x0040 (0x0300 - 0x02C0)
class UBP_ActionWindCutter_C final : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                         Pad_2B3[0x5];                                      // 0x02B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionWindCutter_C;              // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsShooted;                                         // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillEffectSpawnParameter             WhenRiddenGeneralParams;                           // 0x02C8(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_BP_ActionWindCutter(int32 EntryPoint);
	void OnBeginAction();
	void OnSpawnBullet(class AActor* Bullet);
	void OnSpawnEffect(class APalSkillEffectBase* Effect_0);
	void Test(class AActor* Bullet);
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionWindCutter_C">();
	}
	static class UBP_ActionWindCutter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionWindCutter_C>();
	}
};
static_assert(alignof(UBP_ActionWindCutter_C) == 0x000010, "Wrong alignment on UBP_ActionWindCutter_C");
static_assert(sizeof(UBP_ActionWindCutter_C) == 0x000300, "Wrong size on UBP_ActionWindCutter_C");
static_assert(offsetof(UBP_ActionWindCutter_C, UberGraphFrame_BP_ActionWindCutter_C) == 0x0002B8, "Member 'UBP_ActionWindCutter_C::UberGraphFrame_BP_ActionWindCutter_C' has a wrong offset!");
static_assert(offsetof(UBP_ActionWindCutter_C, IsShooted) == 0x0002C0, "Member 'UBP_ActionWindCutter_C::IsShooted' has a wrong offset!");
static_assert(offsetof(UBP_ActionWindCutter_C, WhenRiddenGeneralParams) == 0x0002C8, "Member 'UBP_ActionWindCutter_C::WhenRiddenGeneralParams' has a wrong offset!");

}

