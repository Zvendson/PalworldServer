#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_UniqueRideWeapon_OneShotBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_UniqueRideWeapon_DualGrenadeLauncher.BP_UniqueRideWeapon_DualGrenadeLauncher_C
// 0x0020 (0x05D0 - 0x05B0)
class ABP_UniqueRideWeapon_DualGrenadeLauncher_C final : public ABP_UniqueRideWeapon_OneShotBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_UniqueRideWeapon_DualGrenadeLauncher_C; // 0x05B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SkeletalMeshL;                                     // 0x05B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMeshR;                                     // 0x05C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRight;                                           // 0x05C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ShootBulletBP();
	void OnAttachWeapon(class AActor* AttachActor);
	void GetUseWeaponMesh(class USkeletalMeshComponent** Mesh);
	struct FRotator GetMuzzleRotation();
	struct FVector GetMuzzleLocation();
	class UNiagaraSystem* GetMuzzleEffect();
	TSubclassOf<class APalBullet> GetBulletClass();
	void GetAllMeshComponent(TArray<class UMeshComponent*>* OutMesh);
	void ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UniqueRideWeapon_DualGrenadeLauncher_C">();
	}
	static class ABP_UniqueRideWeapon_DualGrenadeLauncher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_UniqueRideWeapon_DualGrenadeLauncher_C>();
	}
};
static_assert(alignof(ABP_UniqueRideWeapon_DualGrenadeLauncher_C) == 0x000008, "Wrong alignment on ABP_UniqueRideWeapon_DualGrenadeLauncher_C");
static_assert(sizeof(ABP_UniqueRideWeapon_DualGrenadeLauncher_C) == 0x0005D0, "Wrong size on ABP_UniqueRideWeapon_DualGrenadeLauncher_C");
static_assert(offsetof(ABP_UniqueRideWeapon_DualGrenadeLauncher_C, UberGraphFrame_BP_UniqueRideWeapon_DualGrenadeLauncher_C) == 0x0005B0, "Member 'ABP_UniqueRideWeapon_DualGrenadeLauncher_C::UberGraphFrame_BP_UniqueRideWeapon_DualGrenadeLauncher_C' has a wrong offset!");
static_assert(offsetof(ABP_UniqueRideWeapon_DualGrenadeLauncher_C, SkeletalMeshL) == 0x0005B8, "Member 'ABP_UniqueRideWeapon_DualGrenadeLauncher_C::SkeletalMeshL' has a wrong offset!");
static_assert(offsetof(ABP_UniqueRideWeapon_DualGrenadeLauncher_C, SkeletalMeshR) == 0x0005C0, "Member 'ABP_UniqueRideWeapon_DualGrenadeLauncher_C::SkeletalMeshR' has a wrong offset!");
static_assert(offsetof(ABP_UniqueRideWeapon_DualGrenadeLauncher_C, IsRight) == 0x0005C8, "Member 'ABP_UniqueRideWeapon_DualGrenadeLauncher_C::IsRight' has a wrong offset!");

}

