#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Skill_ThunderFunnel_Funnel.BP_Skill_ThunderFunnel_Funnel_C
// 0x00C0 (0x0480 - 0x03C0)
class ABP_Skill_ThunderFunnel_Funnel_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Skill_ThunderFunnel_Funnel_C;    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_CommonSkill_ThunderFunnel_Main;                 // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        FunnelSpeed;                                       // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ShotSpan;                                          // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TempTime;                                          // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EasePos;                                           // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EaseRot;                                           // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DelayTime;                                         // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      Object_Types;                                      // 0x0408(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        FunnelSpeedWeight;                                 // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FunnelLocationOffset_;                             // 0x0420(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsReady;                                           // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_439[0x7];                                      // 0x0439(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FadeOutDelay;                                      // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Skill_ThunderFunnel_Bullet_C*> Bullets;                                           // 0x0448(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	double                                        ShootingLifeTime;                                  // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TimeUntilFade;                                     // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TimeSpanOffset;                                    // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          EndAkEvent;                                        // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         EnemySearchDistance;                               // 0x0478(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Skill_ThunderFunnel_Funnel(int32 EntryPoint);
	void FadeOutEffect(double DeltaSecond);
	void Get_Bullet_Rotat(struct FRotator* Rotation);
	void GetNearestTargetLocation(struct FVector* NearestTargetLocation);
	void InitMoveFunnelLocation(double DeltaTime);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetLifeTimer();
	void SpawnBullet();
	void SpawnSkillEffect(class AActor* Owner_0, class ABP_SkillEffectBase_C** SkillEffect);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Skill_ThunderFunnel_Funnel_C">();
	}
	static class ABP_Skill_ThunderFunnel_Funnel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Skill_ThunderFunnel_Funnel_C>();
	}
};
static_assert(alignof(ABP_Skill_ThunderFunnel_Funnel_C) == 0x000008, "Wrong alignment on ABP_Skill_ThunderFunnel_Funnel_C");
static_assert(sizeof(ABP_Skill_ThunderFunnel_Funnel_C) == 0x000480, "Wrong size on ABP_Skill_ThunderFunnel_Funnel_C");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Funnel_C, UberGraphFrame_BP_Skill_ThunderFunnel_Funnel_C) == 0x0003C0, "Member 'ABP_Skill_ThunderFunnel_Funnel_C::UberGraphFrame_BP_Skill_ThunderFunnel_Funnel_C' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Funnel_C, NS_CommonSkill_ThunderFunnel_Main) == 0x0003C8, "Member 'ABP_Skill_ThunderFunnel_Funnel_C::NS_CommonSkill_ThunderFunnel_Main' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Funnel_C, Sphere) == 0x0003D0, "Member 'ABP_Skill_ThunderFunnel_Funnel_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Funnel_C, FunnelSpeed) == 0x0003D8, "Member 'ABP_Skill_ThunderFunnel_Funnel_C::FunnelSpeed' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Funnel_C, ShotSpan) == 0x0003E0, "Member 'ABP_Skill_ThunderFunnel_Funnel_C::ShotSpan' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Funnel_C, TempTime) == 0x0003E8, "Member 'ABP_Skill_ThunderFunnel_Funnel_C::TempTime' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Funnel_C, EasePos) == 0x0003F0, "Member 'ABP_Skill_ThunderFunnel_Funnel_C::EasePos' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Funnel_C, EaseRot) == 0x0003F8, "Member 'ABP_Skill_ThunderFunnel_Funnel_C::EaseRot' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Funnel_C, DelayTime) == 0x000400, "Member 'ABP_Skill_ThunderFunnel_Funnel_C::DelayTime' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Funnel_C, Object_Types) == 0x000408, "Member 'ABP_Skill_ThunderFunnel_Funnel_C::Object_Types' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Funnel_C, FunnelSpeedWeight) == 0x000418, "Member 'ABP_Skill_ThunderFunnel_Funnel_C::FunnelSpeedWeight' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Funnel_C, FunnelLocationOffset_) == 0x000420, "Member 'ABP_Skill_ThunderFunnel_Funnel_C::FunnelLocationOffset_' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Funnel_C, IsReady) == 0x000438, "Member 'ABP_Skill_ThunderFunnel_Funnel_C::IsReady' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Funnel_C, FadeOutDelay) == 0x000440, "Member 'ABP_Skill_ThunderFunnel_Funnel_C::FadeOutDelay' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Funnel_C, Bullets) == 0x000448, "Member 'ABP_Skill_ThunderFunnel_Funnel_C::Bullets' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Funnel_C, ShootingLifeTime) == 0x000458, "Member 'ABP_Skill_ThunderFunnel_Funnel_C::ShootingLifeTime' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Funnel_C, TimeUntilFade) == 0x000460, "Member 'ABP_Skill_ThunderFunnel_Funnel_C::TimeUntilFade' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Funnel_C, TimeSpanOffset) == 0x000468, "Member 'ABP_Skill_ThunderFunnel_Funnel_C::TimeSpanOffset' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Funnel_C, EndAkEvent) == 0x000470, "Member 'ABP_Skill_ThunderFunnel_Funnel_C::EndAkEvent' has a wrong offset!");
static_assert(offsetof(ABP_Skill_ThunderFunnel_Funnel_C, EnemySearchDistance) == 0x000478, "Member 'ABP_Skill_ThunderFunnel_Funnel_C::EnemySearchDistance' has a wrong offset!");

}

