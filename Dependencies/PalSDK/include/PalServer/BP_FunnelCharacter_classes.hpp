#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_FunnelCharacter.BP_FunnelCharacter_C
// 0x0020 (0x0990 - 0x0970)
class ABP_FunnelCharacter_C final : public APalFunnelCharacter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0970(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalAbilitySkillParameterComponent*     PalAbilitySkillParameter;                          // 0x0978(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalNavigationInvokerComponent*         PalNavigationInvoker;                              // 0x0980(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalFacialComponent*                    PalFacial;                                         // 0x0988(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_FunnelCharacter(int32 EntryPoint);
	void OnActive();
	void OnInactive();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetLocationNearTrainer();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FunnelCharacter_C">();
	}
	static class ABP_FunnelCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FunnelCharacter_C>();
	}
};
static_assert(alignof(ABP_FunnelCharacter_C) == 0x000010, "Wrong alignment on ABP_FunnelCharacter_C");
static_assert(sizeof(ABP_FunnelCharacter_C) == 0x000990, "Wrong size on ABP_FunnelCharacter_C");
static_assert(offsetof(ABP_FunnelCharacter_C, UberGraphFrame) == 0x000970, "Member 'ABP_FunnelCharacter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FunnelCharacter_C, PalAbilitySkillParameter) == 0x000978, "Member 'ABP_FunnelCharacter_C::PalAbilitySkillParameter' has a wrong offset!");
static_assert(offsetof(ABP_FunnelCharacter_C, PalNavigationInvoker) == 0x000980, "Member 'ABP_FunnelCharacter_C::PalNavigationInvoker' has a wrong offset!");
static_assert(offsetof(ABP_FunnelCharacter_C, PalFacial) == 0x000988, "Member 'ABP_FunnelCharacter_C::PalFacial' has a wrong offset!");

}

