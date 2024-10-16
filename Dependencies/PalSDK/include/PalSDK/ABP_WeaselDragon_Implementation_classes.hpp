#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// AnimBlueprintGeneratedClass ABP_WeaselDragon_Implementation.ABP_WeaselDragon_Implementation_C
// 0x08C0 (0x0ED0 - 0x0610)
class UABP_WeaselDragon_Implementation_C final : public UPalAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0610(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0618(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0620(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_3;                              // 0x0628(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_3;                   // 0x0648(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_2;                              // 0x0710(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_2;                   // 0x0730(0x00C8)()
	uint8                                         Pad_7F8[0x8];                                      // 0x07F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt_1;                            // 0x0800(0x0250)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0A50(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0A70(0x0020)()
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt;                              // 0x0A90(0x0250)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0CE0(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x0D00(0x00C8)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0DC8(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0E90(0x0020)()
	struct FVector                                LookAtWorldLocation;                               // 0x0EB0(0x0018)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpperOverride(const struct FPoseLink& NativePose, const struct FPoseLink& ActionPose, struct FPoseLink* UpperOverride_0);
	void LookAtOverride(const struct FPoseLink& InPose, const struct FVector& LookAtWorldLocation_0, struct FPoseLink* LookAtOverride_0);
	void ExecuteUbergraph_ABP_WeaselDragon_Implementation(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void AimingOverride(const struct FPoseLink& DefaultPose, const struct FRotator& AimRotator, struct FPoseLink* AimingOverride_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_WeaselDragon_Implementation_C">();
	}
	static class UABP_WeaselDragon_Implementation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_WeaselDragon_Implementation_C>();
	}
};
static_assert(alignof(UABP_WeaselDragon_Implementation_C) == 0x000010, "Wrong alignment on UABP_WeaselDragon_Implementation_C");
static_assert(sizeof(UABP_WeaselDragon_Implementation_C) == 0x000ED0, "Wrong size on UABP_WeaselDragon_Implementation_C");
static_assert(offsetof(UABP_WeaselDragon_Implementation_C, UberGraphFrame) == 0x000610, "Member 'UABP_WeaselDragon_Implementation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_WeaselDragon_Implementation_C, AnimBlueprintExtension_PropertyAccess) == 0x000618, "Member 'UABP_WeaselDragon_Implementation_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_WeaselDragon_Implementation_C, AnimBlueprintExtension_Base) == 0x000620, "Member 'UABP_WeaselDragon_Implementation_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_WeaselDragon_Implementation_C, AnimGraphNode_Root_3) == 0x000628, "Member 'UABP_WeaselDragon_Implementation_C::AnimGraphNode_Root_3' has a wrong offset!");
static_assert(offsetof(UABP_WeaselDragon_Implementation_C, AnimGraphNode_LinkedInputPose_3) == 0x000648, "Member 'UABP_WeaselDragon_Implementation_C::AnimGraphNode_LinkedInputPose_3' has a wrong offset!");
static_assert(offsetof(UABP_WeaselDragon_Implementation_C, AnimGraphNode_Root_2) == 0x000710, "Member 'UABP_WeaselDragon_Implementation_C::AnimGraphNode_Root_2' has a wrong offset!");
static_assert(offsetof(UABP_WeaselDragon_Implementation_C, AnimGraphNode_LinkedInputPose_2) == 0x000730, "Member 'UABP_WeaselDragon_Implementation_C::AnimGraphNode_LinkedInputPose_2' has a wrong offset!");
static_assert(offsetof(UABP_WeaselDragon_Implementation_C, AnimGraphNode_LookAt_1) == 0x000800, "Member 'UABP_WeaselDragon_Implementation_C::AnimGraphNode_LookAt_1' has a wrong offset!");
static_assert(offsetof(UABP_WeaselDragon_Implementation_C, AnimGraphNode_LocalToComponentSpace) == 0x000A50, "Member 'UABP_WeaselDragon_Implementation_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_WeaselDragon_Implementation_C, AnimGraphNode_ComponentToLocalSpace) == 0x000A70, "Member 'UABP_WeaselDragon_Implementation_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_WeaselDragon_Implementation_C, AnimGraphNode_LookAt) == 0x000A90, "Member 'UABP_WeaselDragon_Implementation_C::AnimGraphNode_LookAt' has a wrong offset!");
static_assert(offsetof(UABP_WeaselDragon_Implementation_C, AnimGraphNode_Root_1) == 0x000CE0, "Member 'UABP_WeaselDragon_Implementation_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_WeaselDragon_Implementation_C, AnimGraphNode_LinkedInputPose_1) == 0x000D00, "Member 'UABP_WeaselDragon_Implementation_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(UABP_WeaselDragon_Implementation_C, AnimGraphNode_LinkedInputPose) == 0x000DC8, "Member 'UABP_WeaselDragon_Implementation_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_WeaselDragon_Implementation_C, AnimGraphNode_Root) == 0x000E90, "Member 'UABP_WeaselDragon_Implementation_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_WeaselDragon_Implementation_C, LookAtWorldLocation) == 0x000EB0, "Member 'UABP_WeaselDragon_Implementation_C::LookAtWorldLocation' has a wrong offset!");

}

