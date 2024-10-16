#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffect_ParabolaBallBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_PowerBall_1.BP_SkillEffect_PowerBall_1_C
// 0x0008 (0x0420 - 0x0418)
class ABP_SkillEffect_PowerBall_1_C final : public ABP_SkillEffect_ParabolaBallBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_PowerBall_1_C;       // 0x0418(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_SkillEffect_PowerBall_1(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_PowerBall_1_C">();
	}
	static class ABP_SkillEffect_PowerBall_1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_PowerBall_1_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_PowerBall_1_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_PowerBall_1_C");
static_assert(sizeof(ABP_SkillEffect_PowerBall_1_C) == 0x000420, "Wrong size on ABP_SkillEffect_PowerBall_1_C");
static_assert(offsetof(ABP_SkillEffect_PowerBall_1_C, UberGraphFrame_BP_SkillEffect_PowerBall_1_C) == 0x000418, "Member 'ABP_SkillEffect_PowerBall_1_C::UberGraphFrame_BP_SkillEffect_PowerBall_1_C' has a wrong offset!");

}

