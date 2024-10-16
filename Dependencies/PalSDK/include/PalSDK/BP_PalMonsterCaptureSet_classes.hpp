#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalMonsterCaptureSet.BP_PalMonsterCaptureSet_C
// 0x0180 (0x0410 - 0x0290)
class ABP_PalMonsterCaptureSet_C final : public APalUIInframeRenderer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SkeletalMesh_Weapon;                               // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                    RectLight;                                         // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_1;                                      // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_2;                                      // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube3;                                             // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube5;                                             // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube4;                                             // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube;                                              // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube1;                                             // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube2;                                             // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               SceneCaptureComponent2D;                           // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               TargetRotator;                                     // 0x0300(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	FMulticastInlineDelegateProperty_             OnCompletedSetup;                                  // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           DelayHandle;                                       // 0x0328(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               DefaultRotator;                                    // 0x0330(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class FName                                   NextRequestedPalID;                                // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LoadingPalID;                                      // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLoading;                                         // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_359[0x7];                                      // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        RotateInterpolationRate;                           // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UMaterialInterface*, class UMaterialInterface*> OverrideMaterialMap;                               // 0x0368(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   NowDisplayingPalID;                                // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, class USkeletalMesh*>       WeaponSkeletonMeshMap;                             // 0x03C0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void AddRotation(const struct FRotator& Rotator);
	void CancelDelayHandle();
	void DelayCompleteSetup();
	void ExecuteUbergraph_BP_PalMonsterCaptureSet(int32 EntryPoint);
	void GetCaptureCharacterID(class FName CharacterID, class FName* BPClassName);
	void GetNowDisplayingPalID(class FName* PalID);
	void On_Loaded_Pal_Class(class UClass* NewParam);
	void OnCompletedSetup__DelegateSignature();
	void OnLoaded_47E3700548CBE24684940690F7B5FBD1(TSubclassOf<class UObject> Loaded);
	void OnRequestLoadPalClass(TSoftClassPtr<class UClass> NewParam);
	void OverrideMaterial(class USkeletalMeshComponent* TargetSkeletalMesh);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Request_Capture_from_PalSkin(class FName PalRowName, TSoftClassPtr<class UClass> SkinClass);
	void RequestCaptureFromPalID(class FName PalRowName);
	void Reset();
	void ResetRotator();
	void SetupDelayHandle();
	void SetupSkeletalMesh(class USkeletalMesh* Mesh);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalMonsterCaptureSet_C">();
	}
	static class ABP_PalMonsterCaptureSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalMonsterCaptureSet_C>();
	}
};
static_assert(alignof(ABP_PalMonsterCaptureSet_C) == 0x000008, "Wrong alignment on ABP_PalMonsterCaptureSet_C");
static_assert(sizeof(ABP_PalMonsterCaptureSet_C) == 0x000410, "Wrong size on ABP_PalMonsterCaptureSet_C");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, UberGraphFrame) == 0x000290, "Member 'ABP_PalMonsterCaptureSet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, SkeletalMesh_Weapon) == 0x000298, "Member 'ABP_PalMonsterCaptureSet_C::SkeletalMesh_Weapon' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, RectLight) == 0x0002A0, "Member 'ABP_PalMonsterCaptureSet_C::RectLight' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, PointLight_1) == 0x0002A8, "Member 'ABP_PalMonsterCaptureSet_C::PointLight_1' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, PointLight_2) == 0x0002B0, "Member 'ABP_PalMonsterCaptureSet_C::PointLight_2' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, Cube3) == 0x0002B8, "Member 'ABP_PalMonsterCaptureSet_C::Cube3' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, Cube5) == 0x0002C0, "Member 'ABP_PalMonsterCaptureSet_C::Cube5' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, Cube4) == 0x0002C8, "Member 'ABP_PalMonsterCaptureSet_C::Cube4' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, Cube) == 0x0002D0, "Member 'ABP_PalMonsterCaptureSet_C::Cube' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, Cube1) == 0x0002D8, "Member 'ABP_PalMonsterCaptureSet_C::Cube1' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, Cube2) == 0x0002E0, "Member 'ABP_PalMonsterCaptureSet_C::Cube2' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, SkeletalMesh) == 0x0002E8, "Member 'ABP_PalMonsterCaptureSet_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, SceneCaptureComponent2D) == 0x0002F0, "Member 'ABP_PalMonsterCaptureSet_C::SceneCaptureComponent2D' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, DefaultSceneRoot) == 0x0002F8, "Member 'ABP_PalMonsterCaptureSet_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, TargetRotator) == 0x000300, "Member 'ABP_PalMonsterCaptureSet_C::TargetRotator' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, OnCompletedSetup) == 0x000318, "Member 'ABP_PalMonsterCaptureSet_C::OnCompletedSetup' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, DelayHandle) == 0x000328, "Member 'ABP_PalMonsterCaptureSet_C::DelayHandle' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, DefaultRotator) == 0x000330, "Member 'ABP_PalMonsterCaptureSet_C::DefaultRotator' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, NextRequestedPalID) == 0x000348, "Member 'ABP_PalMonsterCaptureSet_C::NextRequestedPalID' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, LoadingPalID) == 0x000350, "Member 'ABP_PalMonsterCaptureSet_C::LoadingPalID' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, IsLoading) == 0x000358, "Member 'ABP_PalMonsterCaptureSet_C::IsLoading' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, RotateInterpolationRate) == 0x000360, "Member 'ABP_PalMonsterCaptureSet_C::RotateInterpolationRate' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, OverrideMaterialMap) == 0x000368, "Member 'ABP_PalMonsterCaptureSet_C::OverrideMaterialMap' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, NowDisplayingPalID) == 0x0003B8, "Member 'ABP_PalMonsterCaptureSet_C::NowDisplayingPalID' has a wrong offset!");
static_assert(offsetof(ABP_PalMonsterCaptureSet_C, WeaponSkeletonMeshMap) == 0x0003C0, "Member 'ABP_PalMonsterCaptureSet_C::WeaponSkeletonMeshMap' has a wrong offset!");

}

