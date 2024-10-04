#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_WorldSecurity_AreaInvasion_Volume.BP_WorldSecurity_AreaInvasion_Volume_C
// 0x0030 (0x02F0 - 0x02C0)
class ABP_WorldSecurity_AreaInvasion_Volume_C final : public APalTriggerAreaBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara;                                           // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BoxCollision;                                      // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         HitActorArray;                                     // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void NotifyHitActors();
	void IsPlayerOverlap(bool* IsOverlap, TArray<class AActor*>* OverlapPlayers);
	void ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WorldSecurity_AreaInvasion_Volume_C">();
	}
	static class ABP_WorldSecurity_AreaInvasion_Volume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WorldSecurity_AreaInvasion_Volume_C>();
	}
};
static_assert(alignof(ABP_WorldSecurity_AreaInvasion_Volume_C) == 0x000008, "Wrong alignment on ABP_WorldSecurity_AreaInvasion_Volume_C");
static_assert(sizeof(ABP_WorldSecurity_AreaInvasion_Volume_C) == 0x0002F0, "Wrong size on ABP_WorldSecurity_AreaInvasion_Volume_C");
static_assert(offsetof(ABP_WorldSecurity_AreaInvasion_Volume_C, UberGraphFrame) == 0x0002C0, "Member 'ABP_WorldSecurity_AreaInvasion_Volume_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_WorldSecurity_AreaInvasion_Volume_C, Niagara) == 0x0002C8, "Member 'ABP_WorldSecurity_AreaInvasion_Volume_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_WorldSecurity_AreaInvasion_Volume_C, BoxCollision) == 0x0002D0, "Member 'ABP_WorldSecurity_AreaInvasion_Volume_C::BoxCollision' has a wrong offset!");
static_assert(offsetof(ABP_WorldSecurity_AreaInvasion_Volume_C, DefaultSceneRoot) == 0x0002D8, "Member 'ABP_WorldSecurity_AreaInvasion_Volume_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_WorldSecurity_AreaInvasion_Volume_C, HitActorArray) == 0x0002E0, "Member 'ABP_WorldSecurity_AreaInvasion_Volume_C::HitActorArray' has a wrong offset!");

}

