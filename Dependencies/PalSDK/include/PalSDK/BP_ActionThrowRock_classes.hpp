#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_ActionGeneralAttackFarBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionThrowRock.BP_ActionThrowRock_C
// 0x0050 (0x0310 - 0x02C0)
class UBP_ActionThrowRock_C final : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                         Pad_2B3[0x5];                                      // 0x02B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionThrowRock_C;               // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsShooted;                                         // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalSkillEffectBase*                    Effect_0;                                          // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        ThrowReadyTime;                                    // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSpawned;                                         // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D9[0x7];                                      // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                SpawnedLocation;                                   // 0x02E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ShootHeight;                                       // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class ABP_SkillEffect_ThrowRockBullet_C> Actor_Class;                                       // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          NearTarget;                                        // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionThrowRock(int32 EntryPoint);
	void MoveRock(double ElapsedTime);
	void OnBreakAction();
	void OnSpawnEffect(class APalSkillEffectBase* Effect_0);
	void OnStartProcessAnimation();
	void Shoot();
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionThrowRock_C">();
	}
	static class UBP_ActionThrowRock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionThrowRock_C>();
	}
};
static_assert(alignof(UBP_ActionThrowRock_C) == 0x000010, "Wrong alignment on UBP_ActionThrowRock_C");
static_assert(sizeof(UBP_ActionThrowRock_C) == 0x000310, "Wrong size on UBP_ActionThrowRock_C");
static_assert(offsetof(UBP_ActionThrowRock_C, UberGraphFrame_BP_ActionThrowRock_C) == 0x0002B8, "Member 'UBP_ActionThrowRock_C::UberGraphFrame_BP_ActionThrowRock_C' has a wrong offset!");
static_assert(offsetof(UBP_ActionThrowRock_C, IsShooted) == 0x0002C0, "Member 'UBP_ActionThrowRock_C::IsShooted' has a wrong offset!");
static_assert(offsetof(UBP_ActionThrowRock_C, Effect_0) == 0x0002C8, "Member 'UBP_ActionThrowRock_C::Effect_0' has a wrong offset!");
static_assert(offsetof(UBP_ActionThrowRock_C, ThrowReadyTime) == 0x0002D0, "Member 'UBP_ActionThrowRock_C::ThrowReadyTime' has a wrong offset!");
static_assert(offsetof(UBP_ActionThrowRock_C, IsSpawned) == 0x0002D8, "Member 'UBP_ActionThrowRock_C::IsSpawned' has a wrong offset!");
static_assert(offsetof(UBP_ActionThrowRock_C, SpawnedLocation) == 0x0002E0, "Member 'UBP_ActionThrowRock_C::SpawnedLocation' has a wrong offset!");
static_assert(offsetof(UBP_ActionThrowRock_C, ShootHeight) == 0x0002F8, "Member 'UBP_ActionThrowRock_C::ShootHeight' has a wrong offset!");
static_assert(offsetof(UBP_ActionThrowRock_C, Actor_Class) == 0x000300, "Member 'UBP_ActionThrowRock_C::Actor_Class' has a wrong offset!");
static_assert(offsetof(UBP_ActionThrowRock_C, NearTarget) == 0x000308, "Member 'UBP_ActionThrowRock_C::NearTarget' has a wrong offset!");

}

