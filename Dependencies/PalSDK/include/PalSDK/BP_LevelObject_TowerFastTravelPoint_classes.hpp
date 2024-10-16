#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C
// 0x0070 (0x0350 - 0x02E0)
class ABP_LevelObject_TowerFastTravelPoint_C final : public APalLevelObjectUnlockableFastTravelPoint
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalSoundPlayerComponent*               PalSoundPlayer;                                    // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalLimitVolumeBoxComponent*            PalLimitVolumeBox;                                 // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Glow;                                              // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        WarpPoint;                                         // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        IndicatorOrigin;                                   // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         UnlockedGlowEffect;                                // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         UnlockedFlashEffect;                               // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          UnlockedSound;                                     // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void CheckUnuseFastTravel();
	void ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint(int32 EntryPoint);
	class UAkAudioEvent* GetUnlockAkAudioEvent();
	void OnChangeWorldSettings(const struct FPalOptionWorldSettings& PrevSettings, const struct FPalOptionWorldSettings& NewSettings);
	class USceneComponent* OnGetAkComponent();
	void OnUpdateUnlockState(class APalLevelObjectUnlockableFastTravelPoint* Object);
	void OnUpdateUnlockState_Internal(bool IsUnlocked_0, bool IsSpawnUnlockefFlashEffect);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LevelObject_TowerFastTravelPoint_C">();
	}
	static class ABP_LevelObject_TowerFastTravelPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LevelObject_TowerFastTravelPoint_C>();
	}
};
static_assert(alignof(ABP_LevelObject_TowerFastTravelPoint_C) == 0x000008, "Wrong alignment on ABP_LevelObject_TowerFastTravelPoint_C");
static_assert(sizeof(ABP_LevelObject_TowerFastTravelPoint_C) == 0x000350, "Wrong size on ABP_LevelObject_TowerFastTravelPoint_C");
static_assert(offsetof(ABP_LevelObject_TowerFastTravelPoint_C, UberGraphFrame) == 0x0002E0, "Member 'ABP_LevelObject_TowerFastTravelPoint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_TowerFastTravelPoint_C, PalSoundPlayer) == 0x0002E8, "Member 'ABP_LevelObject_TowerFastTravelPoint_C::PalSoundPlayer' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_TowerFastTravelPoint_C, PalLimitVolumeBox) == 0x0002F0, "Member 'ABP_LevelObject_TowerFastTravelPoint_C::PalLimitVolumeBox' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_TowerFastTravelPoint_C, Glow) == 0x0002F8, "Member 'ABP_LevelObject_TowerFastTravelPoint_C::Glow' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_TowerFastTravelPoint_C, WarpPoint) == 0x000300, "Member 'ABP_LevelObject_TowerFastTravelPoint_C::WarpPoint' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_TowerFastTravelPoint_C, IndicatorOrigin) == 0x000308, "Member 'ABP_LevelObject_TowerFastTravelPoint_C::IndicatorOrigin' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_TowerFastTravelPoint_C, BP_InteractableBox) == 0x000310, "Member 'ABP_LevelObject_TowerFastTravelPoint_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_TowerFastTravelPoint_C, Mesh) == 0x000318, "Member 'ABP_LevelObject_TowerFastTravelPoint_C::Mesh' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_TowerFastTravelPoint_C, BuildWorkableBounds) == 0x000320, "Member 'ABP_LevelObject_TowerFastTravelPoint_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_TowerFastTravelPoint_C, CheckOverlapCollision) == 0x000328, "Member 'ABP_LevelObject_TowerFastTravelPoint_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_TowerFastTravelPoint_C, Root) == 0x000330, "Member 'ABP_LevelObject_TowerFastTravelPoint_C::Root' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_TowerFastTravelPoint_C, UnlockedGlowEffect) == 0x000338, "Member 'ABP_LevelObject_TowerFastTravelPoint_C::UnlockedGlowEffect' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_TowerFastTravelPoint_C, UnlockedFlashEffect) == 0x000340, "Member 'ABP_LevelObject_TowerFastTravelPoint_C::UnlockedFlashEffect' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_TowerFastTravelPoint_C, UnlockedSound) == 0x000348, "Member 'ABP_LevelObject_TowerFastTravelPoint_C::UnlockedSound' has a wrong offset!");

}

