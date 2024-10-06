#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "BP_PalSphere_ThrowObject_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalSphere_HomingThrowObjectBase.BP_PalSphere_HomingThrowObjectBase_C
// 0x0128 (0x0558 - 0x0430)
class ABP_PalSphere_HomingThrowObjectBase_C final : public ABP_PalSphere_ThrowObject_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PalSphere_HomingThrowObjectBase_C; // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class APalCharacter*                          TargetPal_0;                                       // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PreLocation_0;                                     // 0x0440(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBounce_0;                                        // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_459[0x7];                                      // 0x0459(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               ThrowRotator_0;                                    // 0x0460(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                InitVelocity;                                      // 0x0478(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HomingFowerd;                                      // 0x0490(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ZVelocity;                                         // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<EPalCaptureSphereLevelType, class UMaterialInstance*> MaterialMap;                                       // 0x04B0(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<EPalCaptureSphereLevelType, class UClass*> BodyClassMap;                                      // 0x0500(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	EPalCaptureSphereLevelType                    CaptureLevelType;                                  // 0x0550(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase(int32 EntryPoint);
	void GetBodyClass(class UClass** bodyClass);
	void Rotate_Self(double DeltaTime);
	void SetAttackTarget(class APalCharacter* Target);
	void SetCaptureLevelType(EPalCaptureSphereLevelType LevelType);
	void SetMaterialByType(EPalCaptureSphereLevelType CaptureLevelType_0);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalSphere_HomingThrowObjectBase_C">();
	}
	static class ABP_PalSphere_HomingThrowObjectBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalSphere_HomingThrowObjectBase_C>();
	}
};
static_assert(alignof(ABP_PalSphere_HomingThrowObjectBase_C) == 0x000008, "Wrong alignment on ABP_PalSphere_HomingThrowObjectBase_C");
static_assert(sizeof(ABP_PalSphere_HomingThrowObjectBase_C) == 0x000558, "Wrong size on ABP_PalSphere_HomingThrowObjectBase_C");
static_assert(offsetof(ABP_PalSphere_HomingThrowObjectBase_C, UberGraphFrame_BP_PalSphere_HomingThrowObjectBase_C) == 0x000430, "Member 'ABP_PalSphere_HomingThrowObjectBase_C::UberGraphFrame_BP_PalSphere_HomingThrowObjectBase_C' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_HomingThrowObjectBase_C, TargetPal_0) == 0x000438, "Member 'ABP_PalSphere_HomingThrowObjectBase_C::TargetPal_0' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_HomingThrowObjectBase_C, PreLocation_0) == 0x000440, "Member 'ABP_PalSphere_HomingThrowObjectBase_C::PreLocation_0' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_HomingThrowObjectBase_C, IsBounce_0) == 0x000458, "Member 'ABP_PalSphere_HomingThrowObjectBase_C::IsBounce_0' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_HomingThrowObjectBase_C, ThrowRotator_0) == 0x000460, "Member 'ABP_PalSphere_HomingThrowObjectBase_C::ThrowRotator_0' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_HomingThrowObjectBase_C, InitVelocity) == 0x000478, "Member 'ABP_PalSphere_HomingThrowObjectBase_C::InitVelocity' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_HomingThrowObjectBase_C, HomingFowerd) == 0x000490, "Member 'ABP_PalSphere_HomingThrowObjectBase_C::HomingFowerd' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_HomingThrowObjectBase_C, ZVelocity) == 0x0004A8, "Member 'ABP_PalSphere_HomingThrowObjectBase_C::ZVelocity' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_HomingThrowObjectBase_C, MaterialMap) == 0x0004B0, "Member 'ABP_PalSphere_HomingThrowObjectBase_C::MaterialMap' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_HomingThrowObjectBase_C, BodyClassMap) == 0x000500, "Member 'ABP_PalSphere_HomingThrowObjectBase_C::BodyClassMap' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_HomingThrowObjectBase_C, CaptureLevelType) == 0x000550, "Member 'ABP_PalSphere_HomingThrowObjectBase_C::CaptureLevelType' has a wrong offset!");

}

