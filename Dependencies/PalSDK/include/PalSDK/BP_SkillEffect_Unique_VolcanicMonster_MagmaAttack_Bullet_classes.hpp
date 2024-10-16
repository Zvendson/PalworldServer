#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet.BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C
// 0x0050 (0x0410 - 0x03C0)
class ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C; // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_CommonSkill_DragonMeteor_Bullet;                // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Const_InitPitchAngle_Min;                          // 0x03E0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_InitPitchAngle_Max;                          // 0x03E8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_InitSpeed;                                   // 0x03F0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_GravityScale;                                // 0x03F8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_CollisionRadius;                             // 0x0400(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_CollisionActiveDelayTime;                    // 0x0408(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C">();
	}
	static class ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C");
static_assert(sizeof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C) == 0x000410, "Wrong size on ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C");
static_assert(offsetof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C, UberGraphFrame_BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C) == 0x0003C0, "Member 'ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C::UberGraphFrame_BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C, NS_CommonSkill_DragonMeteor_Bullet) == 0x0003C8, "Member 'ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C::NS_CommonSkill_DragonMeteor_Bullet' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C, ProjectileMovement) == 0x0003D0, "Member 'ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C, StaticMesh) == 0x0003D8, "Member 'ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C, Const_InitPitchAngle_Min) == 0x0003E0, "Member 'ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C::Const_InitPitchAngle_Min' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C, Const_InitPitchAngle_Max) == 0x0003E8, "Member 'ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C::Const_InitPitchAngle_Max' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C, Const_InitSpeed) == 0x0003F0, "Member 'ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C::Const_InitSpeed' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C, Const_GravityScale) == 0x0003F8, "Member 'ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C::Const_GravityScale' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C, Const_CollisionRadius) == 0x000400, "Member 'ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C::Const_CollisionRadius' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C, Const_CollisionActiveDelayTime) == 0x000408, "Member 'ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C::Const_CollisionActiveDelayTime' has a wrong offset!");

}

