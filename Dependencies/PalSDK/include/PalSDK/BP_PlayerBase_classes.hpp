#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PlayerBase.BP_PlayerBase_C
// 0x0030 (0x0C70 - 0x0C40)
class ABP_PlayerBase_C : public APalPlayerCharacter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C40(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      DeadColllision;                                    // 0x0C48(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTimerPointLightComponent_C*      PlayerLight;                                       // 0x0C50(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalRiderComponent*                     Rider_Component;                                   // 0x0C58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsInCapturedCage;                                 // 0x0C60(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C61[0x7];                                      // 0x0C61(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Lamp_C*                             Lantern;                                           // 0x0C68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_PlayerBase_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BP_PlayerBase_CharacterMovement_K2Node_ComponentBoundEvent_2_OnJumpDelegate__DelegateSignature(class UPalCharacterMovementComponent* Component);
	void ClearLantern();
	void CreateLantern();
	void ExecuteUbergraph_BP_PlayerBase(int32 EntryPoint);
	void OnCompleteInitializeParameterDelegate______________0(class APalCharacter* InCharacter);
	void OnEnterWater();
	void OnExitWater();
	void OnLoaded_02DA547E4C37CAA237537F82C5DB3211(class UObject* Loaded);
	void OnUpdateLevelDelegate______________0(int32 AddLevel, int32 NowLevel);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void RegisterSwimEvent();
	void SetPlayerLightEnable(bool IsEnable);
	void UnregisterSwimEvent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerBase_C">();
	}
	static class ABP_PlayerBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerBase_C>();
	}
};
static_assert(alignof(ABP_PlayerBase_C) == 0x000010, "Wrong alignment on ABP_PlayerBase_C");
static_assert(sizeof(ABP_PlayerBase_C) == 0x000C70, "Wrong size on ABP_PlayerBase_C");
static_assert(offsetof(ABP_PlayerBase_C, UberGraphFrame) == 0x000C40, "Member 'ABP_PlayerBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PlayerBase_C, DeadColllision) == 0x000C48, "Member 'ABP_PlayerBase_C::DeadColllision' has a wrong offset!");
static_assert(offsetof(ABP_PlayerBase_C, PlayerLight) == 0x000C50, "Member 'ABP_PlayerBase_C::PlayerLight' has a wrong offset!");
static_assert(offsetof(ABP_PlayerBase_C, Rider_Component) == 0x000C58, "Member 'ABP_PlayerBase_C::Rider_Component' has a wrong offset!");
static_assert(offsetof(ABP_PlayerBase_C, bIsInCapturedCage) == 0x000C60, "Member 'ABP_PlayerBase_C::bIsInCapturedCage' has a wrong offset!");
static_assert(offsetof(ABP_PlayerBase_C, Lantern) == 0x000C68, "Member 'ABP_PlayerBase_C::Lantern' has a wrong offset!");

}

