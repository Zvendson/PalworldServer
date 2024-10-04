#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_GrapplingGun.BP_GrapplingGun_C
// 0x01C8 (0x0740 - 0x0578)
class ABP_GrapplingGun_C final : public APalWeaponBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0578(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 Weapon;                                            // 0x0580(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShooting;                                        // 0x0588(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_589[0x7];                                      // 0x0589(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             GrappleEnd;                                        // 0x0590(0x00E8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                GrappleLocation;                                   // 0x0678(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEquip;                                           // 0x0690(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_691[0x7];                                      // 0x0691(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CableMaxLength;                                    // 0x0698(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CableShootSpeed;                                   // 0x06A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CableReturnSpeed;                                  // 0x06A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PlayerMoveSpeed;                                   // 0x06B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ShootDirection;                                    // 0x06B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPull;                                            // 0x06D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D1[0x7];                                      // 0x06D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                StartLocation;                                     // 0x06D8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GrappleMoveEndLocation;                            // 0x06F0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x0708(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsVisibleReticle;                                  // 0x0720(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_721[0x7];                                      // 0x0721(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_GrapplingGun_Bullet_C*              Bullet;                                            // 0x0728(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        NearCoolTimeDistance;                              // 0x0730(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NearCoolTimeRate;                                  // 0x0738(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CalcCoolTimeRate(const struct FVector& HitLocation, double* CoolTime);
	void CalcShootStartParam(struct FVector* ShootDirection_0, struct FVector* StartLocation_0);
	void EndCable(bool IsAnimationCancel);
	void ExecuteUbergraph_BP_GrapplingGun(int32 EntryPoint);
	void GetCurrentCableLength(double* CableLength);
	void IsGraplingAction(bool* bSuccess);
	void On_Grapling_Action_Start(const struct FVector& HitLocation, double CoolTimeRate);
	void OnActionEnd(const class UPalActionBase* Action);
	void OnAttachWeapon(class AActor* AttachActor);
	void OnDetachWeapon(class AActor* DetachActor);
	void OnGraplingActionEnd();
	void OnPullTrigger();
	void PullCable(double DeltaTime, bool* IsEnd);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ShotCable();
	void ShowLine();
	void Start_Graplling();
	void UpdateCable(double DeltaTime);
	void UpdateRopeEndLocation();
	void UpdateVisibleReticle();

	void IsShowReticle(bool* IsShow) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GrapplingGun_C">();
	}
	static class ABP_GrapplingGun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GrapplingGun_C>();
	}
};
static_assert(alignof(ABP_GrapplingGun_C) == 0x000008, "Wrong alignment on ABP_GrapplingGun_C");
static_assert(sizeof(ABP_GrapplingGun_C) == 0x000740, "Wrong size on ABP_GrapplingGun_C");
static_assert(offsetof(ABP_GrapplingGun_C, UberGraphFrame) == 0x000578, "Member 'ABP_GrapplingGun_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, Weapon) == 0x000580, "Member 'ABP_GrapplingGun_C::Weapon' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, IsShooting) == 0x000588, "Member 'ABP_GrapplingGun_C::IsShooting' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, GrappleEnd) == 0x000590, "Member 'ABP_GrapplingGun_C::GrappleEnd' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, GrappleLocation) == 0x000678, "Member 'ABP_GrapplingGun_C::GrappleLocation' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, IsEquip) == 0x000690, "Member 'ABP_GrapplingGun_C::IsEquip' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, CableMaxLength) == 0x000698, "Member 'ABP_GrapplingGun_C::CableMaxLength' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, CableShootSpeed) == 0x0006A0, "Member 'ABP_GrapplingGun_C::CableShootSpeed' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, CableReturnSpeed) == 0x0006A8, "Member 'ABP_GrapplingGun_C::CableReturnSpeed' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, PlayerMoveSpeed) == 0x0006B0, "Member 'ABP_GrapplingGun_C::PlayerMoveSpeed' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, ShootDirection) == 0x0006B8, "Member 'ABP_GrapplingGun_C::ShootDirection' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, IsPull) == 0x0006D0, "Member 'ABP_GrapplingGun_C::IsPull' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, StartLocation) == 0x0006D8, "Member 'ABP_GrapplingGun_C::StartLocation' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, GrappleMoveEndLocation) == 0x0006F0, "Member 'ABP_GrapplingGun_C::GrappleMoveEndLocation' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, HitNormal) == 0x000708, "Member 'ABP_GrapplingGun_C::HitNormal' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, IsVisibleReticle) == 0x000720, "Member 'ABP_GrapplingGun_C::IsVisibleReticle' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, Bullet) == 0x000728, "Member 'ABP_GrapplingGun_C::Bullet' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, NearCoolTimeDistance) == 0x000730, "Member 'ABP_GrapplingGun_C::NearCoolTimeDistance' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_C, NearCoolTimeRate) == 0x000738, "Member 'ABP_GrapplingGun_C::NearCoolTimeRate' has a wrong offset!");

}

