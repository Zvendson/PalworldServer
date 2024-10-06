#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ActionGeneralAttackFarBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ActionDarkBall.BP_ActionDarkBall_C
// 0x0010 (0x02D0 - 0x02C0)
class UBP_ActionDarkBall_C final : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                         Pad_2B3[0x5];                                      // 0x02B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionDarkBall_C;                // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        BulletSpeed_0;                                     // 0x02C0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShooted;                                         // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionDarkBall(int32 EntryPoint);
	void OnBreakAction();
	void OnShoot();
	void OnSpawnEffect(class APalSkillEffectBase* Effect_0);
	void OnStartProcessAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionDarkBall_C">();
	}
	static class UBP_ActionDarkBall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionDarkBall_C>();
	}
};
static_assert(alignof(UBP_ActionDarkBall_C) == 0x000010, "Wrong alignment on UBP_ActionDarkBall_C");
static_assert(sizeof(UBP_ActionDarkBall_C) == 0x0002D0, "Wrong size on UBP_ActionDarkBall_C");
static_assert(offsetof(UBP_ActionDarkBall_C, UberGraphFrame_BP_ActionDarkBall_C) == 0x0002B8, "Member 'UBP_ActionDarkBall_C::UberGraphFrame_BP_ActionDarkBall_C' has a wrong offset!");
static_assert(offsetof(UBP_ActionDarkBall_C, BulletSpeed_0) == 0x0002C0, "Member 'UBP_ActionDarkBall_C::BulletSpeed_0' has a wrong offset!");
static_assert(offsetof(UBP_ActionDarkBall_C, IsShooted) == 0x0002C8, "Member 'UBP_ActionDarkBall_C::IsShooted' has a wrong offset!");

}

