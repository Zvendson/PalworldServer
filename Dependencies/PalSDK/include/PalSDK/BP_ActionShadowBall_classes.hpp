#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_ActionGeneralAttackFarBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionShadowBall.BP_ActionShadowBall_C
// 0x0050 (0x0310 - 0x02C0)
class UBP_ActionShadowBall_C final : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                         Pad_2B3[0x5];                                      // 0x02B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionShadowBall_C;              // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsSpawned;                                         // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ElapsedTime;                                       // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalSkillEffectBase*                    Effect_0;                                          // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                BallEffectSize;                                    // 0x02D8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableChangeEffectSizeByBP;                        // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F1[0x7];                                      // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        BallEffectScale;                                   // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BulletSpeed_0;                                     // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionShadowBall(int32 EntryPoint);
	void OnBeginAction();
	void OnSpawnEffect(class APalSkillEffectBase* Effect_0);
	void OnStartProcessAnimation();
	void Shoot();
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionShadowBall_C">();
	}
	static class UBP_ActionShadowBall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionShadowBall_C>();
	}
};
static_assert(alignof(UBP_ActionShadowBall_C) == 0x000010, "Wrong alignment on UBP_ActionShadowBall_C");
static_assert(sizeof(UBP_ActionShadowBall_C) == 0x000310, "Wrong size on UBP_ActionShadowBall_C");
static_assert(offsetof(UBP_ActionShadowBall_C, UberGraphFrame_BP_ActionShadowBall_C) == 0x0002B8, "Member 'UBP_ActionShadowBall_C::UberGraphFrame_BP_ActionShadowBall_C' has a wrong offset!");
static_assert(offsetof(UBP_ActionShadowBall_C, IsSpawned) == 0x0002C0, "Member 'UBP_ActionShadowBall_C::IsSpawned' has a wrong offset!");
static_assert(offsetof(UBP_ActionShadowBall_C, ElapsedTime) == 0x0002C8, "Member 'UBP_ActionShadowBall_C::ElapsedTime' has a wrong offset!");
static_assert(offsetof(UBP_ActionShadowBall_C, Effect_0) == 0x0002D0, "Member 'UBP_ActionShadowBall_C::Effect_0' has a wrong offset!");
static_assert(offsetof(UBP_ActionShadowBall_C, BallEffectSize) == 0x0002D8, "Member 'UBP_ActionShadowBall_C::BallEffectSize' has a wrong offset!");
static_assert(offsetof(UBP_ActionShadowBall_C, EnableChangeEffectSizeByBP) == 0x0002F0, "Member 'UBP_ActionShadowBall_C::EnableChangeEffectSizeByBP' has a wrong offset!");
static_assert(offsetof(UBP_ActionShadowBall_C, BallEffectScale) == 0x0002F8, "Member 'UBP_ActionShadowBall_C::BallEffectScale' has a wrong offset!");
static_assert(offsetof(UBP_ActionShadowBall_C, BulletSpeed_0) == 0x000300, "Member 'UBP_ActionShadowBall_C::BulletSpeed_0' has a wrong offset!");

}

