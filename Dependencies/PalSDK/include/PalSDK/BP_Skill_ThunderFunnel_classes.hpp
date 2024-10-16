#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Skill_ThunderFunnel.BP_Skill_ThunderFunnel_C
// 0x0050 (0x0410 - 0x03C0)
class ABP_Skill_ThunderFunnel_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Skill_ThunderFunnel_C;           // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        SpawnOffset;                                       // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Target;                                            // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         NumFunnel;                                         // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DC[0x4];                                      // 0x03DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                FunnelLocationOffset;                              // 0x03E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxMoveDuration;                                   // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Skill_ThunderFunnel_Funnel_C*> Funnels;                                           // 0x0400(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void Create_Skill_Effect(const struct FTransform& SpawnTransform, class AActor* Owner_0, int32 Index_0, class ABP_SkillEffectBase_C** SkillEffect);
	void ExecuteUbergraph_BP_Skill_ThunderFunnel(int32 EntryPoint);
	void ReceiveBeginPlay();
	void SetIsReady();
	void SpawnSkillEffect(const struct FTransform& SpawTransform, class AActor* Owner_0, int32 Index_0, class ABP_SkillEffectBase_C** SkillEffect);
	void UpdateMaxDuration(double Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Skill_ThunderFunnel_C">();
	}
	static class ABP_Skill_ThunderFunnel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Skill_ThunderFunnel_C>();
	}
};
static_assert(alignof(ABP_Skill_ThunderFunnel_C) == 0x000008, "Wrong alignment on ABP_Skill_ThunderFunnel_C");
static_assert(sizeof(ABP_Skill_ThunderFunnel_C) == 0x000410, "Wrong size on ABP_Skill_ThunderFunnel_C");
static_assert(offsetof(ABP_Skill_ThunderFunnel_C, UberGraphFrame_BP_Skill_ThunderFunnel_C) == 0x0003C0, "Member 'ABP_Skill_ThunderFunnel_C::UberGraphFrame_BP_Skill_ThunderFunnel_C' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_C, SpawnOffset) == 0x0003C8, "Member 'ABP_Skill_ThunderFunnel_C::SpawnOffset' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_C, Target) == 0x0003D0, "Member 'ABP_Skill_ThunderFunnel_C::Target' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_C, NumFunnel) == 0x0003D8, "Member 'ABP_Skill_ThunderFunnel_C::NumFunnel' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_C, FunnelLocationOffset) == 0x0003E0, "Member 'ABP_Skill_ThunderFunnel_C::FunnelLocationOffset' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_C, MaxMoveDuration) == 0x0003F8, "Member 'ABP_Skill_ThunderFunnel_C::MaxMoveDuration' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_C, Funnels) == 0x000400, "Member 'ABP_Skill_ThunderFunnel_C::Funnels' has a wrong offset!");

}

