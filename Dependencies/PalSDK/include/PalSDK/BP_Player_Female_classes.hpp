#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PlayerBase_classes.hpp"
#include "PhysicsCore_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Player_Female.BP_Player_Female_C
// 0x00B0 (0x0D20 - 0x0C70)
class ABP_Player_Female_C final : public ABP_PlayerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Player_Female_C;                 // 0x0C70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalSkeletalMeshComponent*              HairAttachAccessory;                               // 0x0C78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule;                               // 0x0C80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsSphereComponent*           PalBodyPartsSphere;                                // 0x0C88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyTemperatureComponent*           PalBodyTemperature;                                // 0x0C90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GliderComponent_C*                  BP_GliderComponent;                                // 0x0C98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalInteractableSphereComponentNative*  BP_InteractableSphere;                             // 0x0CA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              HairMesh;                                          // 0x0CA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              HeadMesh;                                          // 0x0CB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PalClimbingComponent_C*             BP_PalClimbingComponent;                           // 0x0CB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalFacialComponent*                    PalFacial;                                         // 0x0CC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_FluidImplementation_C*              BP_FluidImplementation;                            // 0x0CC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerSoundEmitterComponent_C*      BP_PlayerSoundEmitterComponent;                    // 0x0CD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      SlidingParticle;                                   // 0x0CD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          UsePhysicalBone;                                   // 0x0CE0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CE1[0x7];                                      // 0x0CE1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraSystem*                         SlidingSmokeNiagara;                               // 0x0CE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         JumpNiagara;                                       // 0x0CF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   SoundID_Sliding;                                   // 0x0CF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Lamp_C*                             Lamp;                                              // 0x0D00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         SlidingSmokeNiagara_Snow;                          // 0x0D08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         JumpNiagara_Snow;                                  // 0x0D10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_PalLocalPlayerSystemSound_C*        LocalPlayerSound;                                  // 0x0D18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	void BndEvt__BP_Palmi_v2_CharacterMovement_K2Node_ComponentBoundEvent_0_OnChangeSliding__DelegateSignature(class UPalCharacterMovementComponent* Component, bool IsInSliding);
	void BndEvt__BP_Player_Female_BP_GliderComponent_K2Node_ComponentBoundEvent_1_OnStartGliding__DelegateSignature();
	void CreateLamp();
	void CreatePoliceSpawner();
	void ExecuteUbergraph_BP_Player_Female(int32 EntryPoint);
	class USkeletalMeshComponent* GetHeadMesh();
	class USkeletalMeshComponent* GetOverrideFaceMesh();
	void GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>* OutComponent);
	void LoadAsyncAsset();
	void OnInitialized(class APalCharacter* InCharacter);
	void OnJumped();
	void OnLoaded_B0A699BF41F9214B27FAD1AD60391AE4(class UObject* Loaded);
	void OnLoaded_CD204E62480922149D33F2914AD3807A(class UObject* Loaded);
	void OnSlidingBegin();
	void OnSlidingEnd();
	void OnUpdateSliding();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Player_Female_C">();
	}
	static class ABP_Player_Female_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Player_Female_C>();
	}
};
static_assert(alignof(ABP_Player_Female_C) == 0x000010, "Wrong alignment on ABP_Player_Female_C");
static_assert(sizeof(ABP_Player_Female_C) == 0x000D20, "Wrong size on ABP_Player_Female_C");
static_assert(offsetof(ABP_Player_Female_C, UberGraphFrame_BP_Player_Female_C) == 0x000C70, "Member 'ABP_Player_Female_C::UberGraphFrame_BP_Player_Female_C' has a wrong offset!");
static_assert(offsetof(ABP_Player_Female_C, HairAttachAccessory) == 0x000C78, "Member 'ABP_Player_Female_C::HairAttachAccessory' has a wrong offset!");
static_assert(offsetof(ABP_Player_Female_C, PalBodyPartsCapsule) == 0x000C80, "Member 'ABP_Player_Female_C::PalBodyPartsCapsule' has a wrong offset!");
static_assert(offsetof(ABP_Player_Female_C, PalBodyPartsSphere) == 0x000C88, "Member 'ABP_Player_Female_C::PalBodyPartsSphere' has a wrong offset!");
static_assert(offsetof(ABP_Player_Female_C, PalBodyTemperature) == 0x000C90, "Member 'ABP_Player_Female_C::PalBodyTemperature' has a wrong offset!");
static_assert(offsetof(ABP_Player_Female_C, BP_GliderComponent) == 0x000C98, "Member 'ABP_Player_Female_C::BP_GliderComponent' has a wrong offset!");
static_assert(offsetof(ABP_Player_Female_C, BP_InteractableSphere) == 0x000CA0, "Member 'ABP_Player_Female_C::BP_InteractableSphere' has a wrong offset!");
static_assert(offsetof(ABP_Player_Female_C, HairMesh) == 0x000CA8, "Member 'ABP_Player_Female_C::HairMesh' has a wrong offset!");
static_assert(offsetof(ABP_Player_Female_C, HeadMesh) == 0x000CB0, "Member 'ABP_Player_Female_C::HeadMesh' has a wrong offset!");
static_assert(offsetof(ABP_Player_Female_C, BP_PalClimbingComponent) == 0x000CB8, "Member 'ABP_Player_Female_C::BP_PalClimbingComponent' has a wrong offset!");
static_assert(offsetof(ABP_Player_Female_C, PalFacial) == 0x000CC0, "Member 'ABP_Player_Female_C::PalFacial' has a wrong offset!");
static_assert(offsetof(ABP_Player_Female_C, BP_FluidImplementation) == 0x000CC8, "Member 'ABP_Player_Female_C::BP_FluidImplementation' has a wrong offset!");
static_assert(offsetof(ABP_Player_Female_C, BP_PlayerSoundEmitterComponent) == 0x000CD0, "Member 'ABP_Player_Female_C::BP_PlayerSoundEmitterComponent' has a wrong offset!");
static_assert(offsetof(ABP_Player_Female_C, SlidingParticle) == 0x000CD8, "Member 'ABP_Player_Female_C::SlidingParticle' has a wrong offset!");
static_assert(offsetof(ABP_Player_Female_C, UsePhysicalBone) == 0x000CE0, "Member 'ABP_Player_Female_C::UsePhysicalBone' has a wrong offset!");
static_assert(offsetof(ABP_Player_Female_C, SlidingSmokeNiagara) == 0x000CE8, "Member 'ABP_Player_Female_C::SlidingSmokeNiagara' has a wrong offset!");
static_assert(offsetof(ABP_Player_Female_C, JumpNiagara) == 0x000CF0, "Member 'ABP_Player_Female_C::JumpNiagara' has a wrong offset!");
static_assert(offsetof(ABP_Player_Female_C, SoundID_Sliding) == 0x000CF8, "Member 'ABP_Player_Female_C::SoundID_Sliding' has a wrong offset!");
static_assert(offsetof(ABP_Player_Female_C, Lamp) == 0x000D00, "Member 'ABP_Player_Female_C::Lamp' has a wrong offset!");
static_assert(offsetof(ABP_Player_Female_C, SlidingSmokeNiagara_Snow) == 0x000D08, "Member 'ABP_Player_Female_C::SlidingSmokeNiagara_Snow' has a wrong offset!");
static_assert(offsetof(ABP_Player_Female_C, JumpNiagara_Snow) == 0x000D10, "Member 'ABP_Player_Female_C::JumpNiagara_Snow' has a wrong offset!");
static_assert(offsetof(ABP_Player_Female_C, LocalPlayerSound) == 0x000D18, "Member 'ABP_Player_Female_C::LocalPlayerSound' has a wrong offset!");

}

