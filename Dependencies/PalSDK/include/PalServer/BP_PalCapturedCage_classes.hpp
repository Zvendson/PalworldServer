#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "AkAudio_structs.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalCapturedCage.BP_PalCapturedCage_C
// 0x00B0 (0x0378 - 0x02C8)
class ABP_PalCapturedCage_C final : public APalCapturedCage
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box_PlayerOnly;                                    // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara;                                           // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          DoorBoxCollision;                                  // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LockMesh;                                          // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DoorMesh;                                          // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BodyMash;                                          // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box5;                                              // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box4;                                              // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          box3;                                              // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          box2;                                              // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          box1;                                              // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalInteractableSphereComponentNative*  BP_InteractableSphere;                             // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Accessed;                                          // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_339[0x7];                                      // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           OpenAnimeTimerHandle;                              // 0x0340(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                        DoorOpenTimer;                                     // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                        Const_DoorOpenSpeed;                               // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            Const_DoorOpenCurve;                               // 0x0358(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	EPalActionType                                PlayerActionType;                                  // 0x0360(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_361[0x7];                                      // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnCaptured;                                        // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void CaptureStartFromServerPlayer(class APalPlayerCharacter* Attacker);
	void Disable_Lock_Mesh_Outline(class AActor* Other, TScriptInterface<class IPalInteractiveObjectComponentInterface> Component);
	void DoorOpenAnimeLoop();
	void Enable_Lock_Mesh_Outline(class AActor* Other, TScriptInterface<class IPalInteractiveObjectComponentInterface> Component);
	void ExecuteUbergraph_BP_PalCapturedCage(int32 EntryPoint);
	void OnCaptured__DelegateSignature();
	void OnFinishRescue(class AActor* Player, EPalInteractiveObjectIndicatorType NewParam);
	void OpenDoor();
	void PlayDoorOpenAnime();
	void ReceiveBeginPlay();
	void SetupSpawnPal();
	void StartPlayerAnime(class AActor* Player, EPalInteractiveObjectIndicatorType NewParam);
	void StopPlayerAnime(class AActor* Player, EPalInteractiveObjectIndicatorType NewParam);

	class FName GetCampSpawnerName() const;
	EPalInteractiveObjectIndicatorType GetIndicatorType() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalCapturedCage_C">();
	}
	static class ABP_PalCapturedCage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalCapturedCage_C>();
	}
};
static_assert(alignof(ABP_PalCapturedCage_C) == 0x000008, "Wrong alignment on ABP_PalCapturedCage_C");
static_assert(sizeof(ABP_PalCapturedCage_C) == 0x000378, "Wrong size on ABP_PalCapturedCage_C");
static_assert(offsetof(ABP_PalCapturedCage_C, UberGraphFrame) == 0x0002C8, "Member 'ABP_PalCapturedCage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PalCapturedCage_C, Box_PlayerOnly) == 0x0002D0, "Member 'ABP_PalCapturedCage_C::Box_PlayerOnly' has a wrong offset!");
static_assert(offsetof(ABP_PalCapturedCage_C, Niagara) == 0x0002D8, "Member 'ABP_PalCapturedCage_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_PalCapturedCage_C, DoorBoxCollision) == 0x0002E0, "Member 'ABP_PalCapturedCage_C::DoorBoxCollision' has a wrong offset!");
static_assert(offsetof(ABP_PalCapturedCage_C, LockMesh) == 0x0002E8, "Member 'ABP_PalCapturedCage_C::LockMesh' has a wrong offset!");
static_assert(offsetof(ABP_PalCapturedCage_C, DoorMesh) == 0x0002F0, "Member 'ABP_PalCapturedCage_C::DoorMesh' has a wrong offset!");
static_assert(offsetof(ABP_PalCapturedCage_C, BodyMash) == 0x0002F8, "Member 'ABP_PalCapturedCage_C::BodyMash' has a wrong offset!");
static_assert(offsetof(ABP_PalCapturedCage_C, Box5) == 0x000300, "Member 'ABP_PalCapturedCage_C::Box5' has a wrong offset!");
static_assert(offsetof(ABP_PalCapturedCage_C, Box4) == 0x000308, "Member 'ABP_PalCapturedCage_C::Box4' has a wrong offset!");
static_assert(offsetof(ABP_PalCapturedCage_C, box3) == 0x000310, "Member 'ABP_PalCapturedCage_C::box3' has a wrong offset!");
static_assert(offsetof(ABP_PalCapturedCage_C, box2) == 0x000318, "Member 'ABP_PalCapturedCage_C::box2' has a wrong offset!");
static_assert(offsetof(ABP_PalCapturedCage_C, box1) == 0x000320, "Member 'ABP_PalCapturedCage_C::box1' has a wrong offset!");
static_assert(offsetof(ABP_PalCapturedCage_C, BP_InteractableSphere) == 0x000328, "Member 'ABP_PalCapturedCage_C::BP_InteractableSphere' has a wrong offset!");
static_assert(offsetof(ABP_PalCapturedCage_C, DefaultSceneRoot) == 0x000330, "Member 'ABP_PalCapturedCage_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PalCapturedCage_C, Accessed) == 0x000338, "Member 'ABP_PalCapturedCage_C::Accessed' has a wrong offset!");
static_assert(offsetof(ABP_PalCapturedCage_C, OpenAnimeTimerHandle) == 0x000340, "Member 'ABP_PalCapturedCage_C::OpenAnimeTimerHandle' has a wrong offset!");
static_assert(offsetof(ABP_PalCapturedCage_C, DoorOpenTimer) == 0x000348, "Member 'ABP_PalCapturedCage_C::DoorOpenTimer' has a wrong offset!");
static_assert(offsetof(ABP_PalCapturedCage_C, Const_DoorOpenSpeed) == 0x000350, "Member 'ABP_PalCapturedCage_C::Const_DoorOpenSpeed' has a wrong offset!");
static_assert(offsetof(ABP_PalCapturedCage_C, Const_DoorOpenCurve) == 0x000358, "Member 'ABP_PalCapturedCage_C::Const_DoorOpenCurve' has a wrong offset!");
static_assert(offsetof(ABP_PalCapturedCage_C, PlayerActionType) == 0x000360, "Member 'ABP_PalCapturedCage_C::PlayerActionType' has a wrong offset!");
static_assert(offsetof(ABP_PalCapturedCage_C, OnCaptured) == 0x000368, "Member 'ABP_PalCapturedCage_C::OnCaptured' has a wrong offset!");

}

