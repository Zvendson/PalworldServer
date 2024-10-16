#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "AkAudio_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_Glass_DoorWall.BP_BuildObject_Glass_DoorWall_C
// 0x0070 (0x0698 - 0x0628)
class ABP_BuildObject_Glass_DoorWall_C final : public APalBuildObjectBasicBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0628(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          AffectNavigationBox;                               // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          FrameCollision_02;                                 // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          FrameCollision_01;                                 // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        FrameCollision;                                    // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          DoorCollision;                                     // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Door_Wood;                                      // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Doorbase_Wood;                                  // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0678(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0680(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         _______RotateDoor_98AB515549034FA59C47E8977F2A4523; // 0x0688(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ________Direction_98AB515549034FA59C47E8977F2A4523; // 0x068C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68D[0x3];                                      // 0x068D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     __________________;                                // 0x0690(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
	void CloseDoorAnimation();
	void ExecuteUbergraph_BP_BuildObject_Glass_DoorWall(int32 EntryPoint);
	void OnReadySwitchModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
	void OnUpdateSwitchState(class UPalMapObjectSwitchModule* Module);
	void OpenDoorAnimation();
	void SetRotateDoor(class UStaticMeshComponent* Mesh, double RotateAngle);
	void ____________________FinishedFunc();
	void ____________________UpdateFunc();

	void GetStaticMeshComponents(TArray<class UStaticMeshComponent*>* OutComponents) const;
	void GetStaticMeshInfos(TArray<struct FPalStaticMeshImposterStaticMeshInfo>* OutStaticMeshInfo) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_Glass_DoorWall_C">();
	}
	static class ABP_BuildObject_Glass_DoorWall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_Glass_DoorWall_C>();
	}
};
static_assert(alignof(ABP_BuildObject_Glass_DoorWall_C) == 0x000008, "Wrong alignment on ABP_BuildObject_Glass_DoorWall_C");
static_assert(sizeof(ABP_BuildObject_Glass_DoorWall_C) == 0x000698, "Wrong size on ABP_BuildObject_Glass_DoorWall_C");
static_assert(offsetof(ABP_BuildObject_Glass_DoorWall_C, UberGraphFrame) == 0x000628, "Member 'ABP_BuildObject_Glass_DoorWall_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Glass_DoorWall_C, AffectNavigationBox) == 0x000630, "Member 'ABP_BuildObject_Glass_DoorWall_C::AffectNavigationBox' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Glass_DoorWall_C, FrameCollision_02) == 0x000638, "Member 'ABP_BuildObject_Glass_DoorWall_C::FrameCollision_02' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Glass_DoorWall_C, FrameCollision_01) == 0x000640, "Member 'ABP_BuildObject_Glass_DoorWall_C::FrameCollision_01' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Glass_DoorWall_C, FrameCollision) == 0x000648, "Member 'ABP_BuildObject_Glass_DoorWall_C::FrameCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Glass_DoorWall_C, BP_InteractableBox) == 0x000650, "Member 'ABP_BuildObject_Glass_DoorWall_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Glass_DoorWall_C, DoorCollision) == 0x000658, "Member 'ABP_BuildObject_Glass_DoorWall_C::DoorCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Glass_DoorWall_C, SM_Door_Wood) == 0x000660, "Member 'ABP_BuildObject_Glass_DoorWall_C::SM_Door_Wood' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Glass_DoorWall_C, BuildWorkableBounds) == 0x000668, "Member 'ABP_BuildObject_Glass_DoorWall_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Glass_DoorWall_C, SM_Doorbase_Wood) == 0x000670, "Member 'ABP_BuildObject_Glass_DoorWall_C::SM_Doorbase_Wood' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Glass_DoorWall_C, Root) == 0x000678, "Member 'ABP_BuildObject_Glass_DoorWall_C::Root' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Glass_DoorWall_C, CheckOverlapCollision) == 0x000680, "Member 'ABP_BuildObject_Glass_DoorWall_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Glass_DoorWall_C, _______RotateDoor_98AB515549034FA59C47E8977F2A4523) == 0x000688, "Member 'ABP_BuildObject_Glass_DoorWall_C::_______RotateDoor_98AB515549034FA59C47E8977F2A4523' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Glass_DoorWall_C, ________Direction_98AB515549034FA59C47E8977F2A4523) == 0x00068C, "Member 'ABP_BuildObject_Glass_DoorWall_C::________Direction_98AB515549034FA59C47E8977F2A4523' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Glass_DoorWall_C, __________________) == 0x000690, "Member 'ABP_BuildObject_Glass_DoorWall_C::__________________' has a wrong offset!");

}

