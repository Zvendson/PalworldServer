#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main.BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C
// 0x0060 (0x0420 - 0x03C0)
class ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C; // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_UniqueSkill_VolcanicMonster_MagmaAttack_Ready;  // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      AttackCollision;                                   // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh_Main;                                   // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh_Sign;                                   // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Const_Sign_Duration;                               // 0x03E8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_Collision_Duration;                          // 0x03F0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_Collision_Radius;                            // 0x03F8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_Collision_Height;                            // 0x0400(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Const_BulletNum;                                   // 0x0408(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40C[0x4];                                      // 0x040C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Const_BulletEmitHeightOffset;                      // 0x0410(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_BulletEmitYawAngle_RandomRange;              // 0x0418(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main(int32 EntryPoint);
	void GetBullet(class UClass** NewParam);
	void ReceiveBeginPlay();
	void SetMainActive(bool Active);
	void SetMainSize();
	void SetSignActive(bool Active);
	void SetSignSize();
	void ShootAllBullet();
	void ShootOneBullet(double YawAngle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C">();
	}
	static class ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C");
static_assert(sizeof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C) == 0x000420, "Wrong size on ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C");
static_assert(offsetof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C, UberGraphFrame_BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C) == 0x0003C0, "Member 'ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C::UberGraphFrame_BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C, NS_UniqueSkill_VolcanicMonster_MagmaAttack_Ready) == 0x0003C8, "Member 'ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C::NS_UniqueSkill_VolcanicMonster_MagmaAttack_Ready' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C, AttackCollision) == 0x0003D0, "Member 'ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C::AttackCollision' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C, StaticMesh_Main) == 0x0003D8, "Member 'ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C::StaticMesh_Main' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C, StaticMesh_Sign) == 0x0003E0, "Member 'ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C::StaticMesh_Sign' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C, Const_Sign_Duration) == 0x0003E8, "Member 'ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C::Const_Sign_Duration' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C, Const_Collision_Duration) == 0x0003F0, "Member 'ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C::Const_Collision_Duration' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C, Const_Collision_Radius) == 0x0003F8, "Member 'ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C::Const_Collision_Radius' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C, Const_Collision_Height) == 0x000400, "Member 'ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C::Const_Collision_Height' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C, Const_BulletNum) == 0x000408, "Member 'ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C::Const_BulletNum' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C, Const_BulletEmitHeightOffset) == 0x000410, "Member 'ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C::Const_BulletEmitHeightOffset' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C, Const_BulletEmitYawAngle_RandomRange) == 0x000418, "Member 'ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C::Const_BulletEmitYawAngle_RandomRange' has a wrong offset!");

}

