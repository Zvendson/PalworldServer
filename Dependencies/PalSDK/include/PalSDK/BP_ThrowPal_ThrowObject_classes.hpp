#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_ThrowObjectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ThrowPal_ThrowObject.BP_ThrowPal_ThrowObject_C
// 0x0038 (0x03D0 - 0x0398)
class ABP_ThrowPal_ThrowObject_C final : public ABP_ThrowObjectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ThrowPal_ThrowObject_C;          // 0x0398(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara;                                           // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Weapon_PalSphere_001;                           // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBounce;                                          // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B1[0x7];                                      // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               ThrowRotator;                                      // 0x03B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void CollectTarget(class AActor** NewParam);
	void ExecuteUbergraph_BP_ThrowPal_ThrowObject(int32 EntryPoint);
	void FindNearEnemy(class APalCharacter* OwnerCharacter, class APalCharacter** OutputPin);
	void OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& Hit);
	void PostProcessSpawnOtomo(class AActor* HitActor);
	void ReceiveTick(float DeltaSeconds);
	void SpawnOtomo(class APalCharacter** SpawnOtomo_0);
	void UpdateRotator(double DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ThrowPal_ThrowObject_C">();
	}
	static class ABP_ThrowPal_ThrowObject_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ThrowPal_ThrowObject_C>();
	}
};
static_assert(alignof(ABP_ThrowPal_ThrowObject_C) == 0x000008, "Wrong alignment on ABP_ThrowPal_ThrowObject_C");
static_assert(sizeof(ABP_ThrowPal_ThrowObject_C) == 0x0003D0, "Wrong size on ABP_ThrowPal_ThrowObject_C");
static_assert(offsetof(ABP_ThrowPal_ThrowObject_C, UberGraphFrame_BP_ThrowPal_ThrowObject_C) == 0x000398, "Member 'ABP_ThrowPal_ThrowObject_C::UberGraphFrame_BP_ThrowPal_ThrowObject_C' has a wrong offset!");
static_assert(offsetof(ABP_ThrowPal_ThrowObject_C, Niagara) == 0x0003A0, "Member 'ABP_ThrowPal_ThrowObject_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_ThrowPal_ThrowObject_C, SK_Weapon_PalSphere_001) == 0x0003A8, "Member 'ABP_ThrowPal_ThrowObject_C::SK_Weapon_PalSphere_001' has a wrong offset!");
static_assert(offsetof(ABP_ThrowPal_ThrowObject_C, IsBounce) == 0x0003B0, "Member 'ABP_ThrowPal_ThrowObject_C::IsBounce' has a wrong offset!");
static_assert(offsetof(ABP_ThrowPal_ThrowObject_C, ThrowRotator) == 0x0003B8, "Member 'ABP_ThrowPal_ThrowObject_C::ThrowRotator' has a wrong offset!");

}

