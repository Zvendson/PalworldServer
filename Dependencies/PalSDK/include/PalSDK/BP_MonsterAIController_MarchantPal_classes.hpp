#pragma once

#include "Basic.hpp"

#include "BP_MonsterAIControllerBase_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_MonsterAIController_MarchantPal.BP_MonsterAIController_MarchantPal_C
// 0x0028 (0x0578 - 0x0550)
class ABP_MonsterAIController_MarchantPal_C final : public ABP_MonsterAIControllerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_MonsterAIController_MarchantPal_C; // 0x0550(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                Spawned_Position;                                  // 0x0558(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EscapeMode;                                        // 0x0570(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DespawnDelay;                                      // 0x0571(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MonsterAIController_MarchantPal(int32 EntryPoint);
	void IsEscapeEnd(bool* IsEscapeEnd_0);
	void ReceivePossess(class APawn* PossessedPawn);
	void ReceiveTick(float DeltaSeconds);
	void SetupSpawnedPosition();
	void StartEscape(class AActor* TargetActor);
	void ________________________(const struct FPalInstanceID& ID);
	void _________________________1(const struct FPalDeadInfo& DeadInfo);
	void _________________________2(class UPalVisualEffectBase* VisualEffect);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MonsterAIController_MarchantPal_C">();
	}
	static class ABP_MonsterAIController_MarchantPal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MonsterAIController_MarchantPal_C>();
	}
};
static_assert(alignof(ABP_MonsterAIController_MarchantPal_C) == 0x000008, "Wrong alignment on ABP_MonsterAIController_MarchantPal_C");
static_assert(sizeof(ABP_MonsterAIController_MarchantPal_C) == 0x000578, "Wrong size on ABP_MonsterAIController_MarchantPal_C");
static_assert(offsetof(ABP_MonsterAIController_MarchantPal_C, UberGraphFrame_BP_MonsterAIController_MarchantPal_C) == 0x000550, "Member 'ABP_MonsterAIController_MarchantPal_C::UberGraphFrame_BP_MonsterAIController_MarchantPal_C' has a wrong offset!");
static_assert(offsetof(ABP_MonsterAIController_MarchantPal_C, Spawned_Position) == 0x000558, "Member 'ABP_MonsterAIController_MarchantPal_C::Spawned_Position' has a wrong offset!");
static_assert(offsetof(ABP_MonsterAIController_MarchantPal_C, EscapeMode) == 0x000570, "Member 'ABP_MonsterAIController_MarchantPal_C::EscapeMode' has a wrong offset!");
static_assert(offsetof(ABP_MonsterAIController_MarchantPal_C, DespawnDelay) == 0x000571, "Member 'ABP_MonsterAIController_MarchantPal_C::DespawnDelay' has a wrong offset!");

}

