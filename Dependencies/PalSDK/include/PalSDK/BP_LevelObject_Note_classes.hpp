#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_LevelObject_Note.BP_LevelObject_Note_C
// 0x0038 (0x0348 - 0x0310)
class ABP_LevelObject_Note_C final : public APalLevelObjectNote
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        ObtainFXOrigin;                                    // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh_Base;                                   // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      AuraEffect;                                        // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalInteractableSphereComponentNative*  BP_InteractableSphere;                             // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_LevelObject_Note(int32 EntryPoint);
	void OnUpdatePickupStatus(class APalLevelObjectObtainable* LevelObject);
	void ReceiveBeginPlay();
	void SetActiveSelf(class APalLevelObjectObtainable* LevelObject);

	struct FVector GetObtainFXLocation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LevelObject_Note_C">();
	}
	static class ABP_LevelObject_Note_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LevelObject_Note_C>();
	}
};
static_assert(alignof(ABP_LevelObject_Note_C) == 0x000008, "Wrong alignment on ABP_LevelObject_Note_C");
static_assert(sizeof(ABP_LevelObject_Note_C) == 0x000348, "Wrong size on ABP_LevelObject_Note_C");
static_assert(offsetof(ABP_LevelObject_Note_C, UberGraphFrame) == 0x000310, "Member 'ABP_LevelObject_Note_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_Note_C, ObtainFXOrigin) == 0x000318, "Member 'ABP_LevelObject_Note_C::ObtainFXOrigin' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_Note_C, SkeletalMesh) == 0x000320, "Member 'ABP_LevelObject_Note_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_Note_C, StaticMesh_Base) == 0x000328, "Member 'ABP_LevelObject_Note_C::StaticMesh_Base' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_Note_C, AuraEffect) == 0x000330, "Member 'ABP_LevelObject_Note_C::AuraEffect' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_Note_C, BP_InteractableSphere) == 0x000338, "Member 'ABP_LevelObject_Note_C::BP_InteractableSphere' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_Note_C, DefaultSceneRoot) == 0x000340, "Member 'ABP_LevelObject_Note_C::DefaultSceneRoot' has a wrong offset!");

}

