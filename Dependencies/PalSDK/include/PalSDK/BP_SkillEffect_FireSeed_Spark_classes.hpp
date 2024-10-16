#pragma once

#include "Basic.hpp"

#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_FireSeed_Spark.BP_SkillEffect_FireSeed_Spark_C
// 0x0008 (0x03C8 - 0x03C0)
class ABP_SkillEffect_FireSeed_Spark_C final : public ABP_SkillEffectBase_C
{
public:
	class UNiagaraComponent*                      SparkEffect;                                       // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_FireSeed_Spark_C">();
	}
	static class ABP_SkillEffect_FireSeed_Spark_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_FireSeed_Spark_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_FireSeed_Spark_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_FireSeed_Spark_C");
static_assert(sizeof(ABP_SkillEffect_FireSeed_Spark_C) == 0x0003C8, "Wrong size on ABP_SkillEffect_FireSeed_Spark_C");
static_assert(offsetof(ABP_SkillEffect_FireSeed_Spark_C, SparkEffect) == 0x0003C0, "Member 'ABP_SkillEffect_FireSeed_Spark_C::SparkEffect' has a wrong offset!");

}

