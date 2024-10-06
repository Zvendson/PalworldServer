#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// AnimBlueprintGeneratedClass ABP_Alpaca_Implementation.ABP_Alpaca_Implementation_C
// 0x0730 (0x0D40 - 0x0610)
class UABP_Alpaca_Implementation_C final : public UPalAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0610(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0618(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0620(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_3;                              // 0x0628(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_3;                   // 0x0648(0x00C8)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_2;                   // 0x0710(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_2;                              // 0x07D8(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x07F8(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x08C0(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x08E0(0x00C8)()
	uint8                                         Pad_9A8[0x8];                                      // 0x09A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt;                              // 0x09B0(0x0250)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0C00(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0C20(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0C40(0x0020)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;                     // 0x0C60(0x00C8)()
	struct FVector                                LookAtWorldLocation;                               // 0x0D28(0x0018)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpperOverride(const struct FPoseLink& NativePose, const struct FPoseLink& ActionPose, struct FPoseLink* UpperOverride_0);
	void LookAtOverride(const struct FPoseLink& InPose, const struct FVector& LookAtWorldLocation_0, struct FPoseLink* LookAtOverride_0);
	void ExecuteUbergraph_ABP_Alpaca_Implementation(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void AimingOverride(const struct FPoseLink& DefaultPose, const struct FRotator& AimRotator, struct FPoseLink* AimingOverride_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Alpaca_Implementation_C">();
	}
	static class UABP_Alpaca_Implementation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Alpaca_Implementation_C>();
	}
};
static_assert(alignof(UABP_Alpaca_Implementation_C) == 0x000010, "Wrong alignment on UABP_Alpaca_Implementation_C");
static_assert(sizeof(UABP_Alpaca_Implementation_C) == 0x000D40, "Wrong size on UABP_Alpaca_Implementation_C");
static_assert(offsetof(UABP_Alpaca_Implementation_C, UberGraphFrame) == 0x000610, "Member 'UABP_Alpaca_Implementation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Alpaca_Implementation_C, AnimBlueprintExtension_PropertyAccess) == 0x000618, "Member 'UABP_Alpaca_Implementation_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_Alpaca_Implementation_C, AnimBlueprintExtension_Base) == 0x000620, "Member 'UABP_Alpaca_Implementation_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_Alpaca_Implementation_C, AnimGraphNode_Root_3) == 0x000628, "Member 'UABP_Alpaca_Implementation_C::AnimGraphNode_Root_3' has a wrong offset!");
static_assert(offsetof(UABP_Alpaca_Implementation_C, AnimGraphNode_LinkedInputPose_3) == 0x000648, "Member 'UABP_Alpaca_Implementation_C::AnimGraphNode_LinkedInputPose_3' has a wrong offset!");
static_assert(offsetof(UABP_Alpaca_Implementation_C, AnimGraphNode_LinkedInputPose_2) == 0x000710, "Member 'UABP_Alpaca_Implementation_C::AnimGraphNode_LinkedInputPose_2' has a wrong offset!");
static_assert(offsetof(UABP_Alpaca_Implementation_C, AnimGraphNode_Root_2) == 0x0007D8, "Member 'UABP_Alpaca_Implementation_C::AnimGraphNode_Root_2' has a wrong offset!");
static_assert(offsetof(UABP_Alpaca_Implementation_C, AnimGraphNode_LinkedInputPose_1) == 0x0007F8, "Member 'UABP_Alpaca_Implementation_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Alpaca_Implementation_C, AnimGraphNode_Root_1) == 0x0008C0, "Member 'UABP_Alpaca_Implementation_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_Alpaca_Implementation_C, AnimGraphNode_LinkedInputPose) == 0x0008E0, "Member 'UABP_Alpaca_Implementation_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_Alpaca_Implementation_C, AnimGraphNode_LookAt) == 0x0009B0, "Member 'UABP_Alpaca_Implementation_C::AnimGraphNode_LookAt' has a wrong offset!");
static_assert(offsetof(UABP_Alpaca_Implementation_C, AnimGraphNode_LocalToComponentSpace) == 0x000C00, "Member 'UABP_Alpaca_Implementation_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_Alpaca_Implementation_C, AnimGraphNode_ComponentToLocalSpace) == 0x000C20, "Member 'UABP_Alpaca_Implementation_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_Alpaca_Implementation_C, AnimGraphNode_Root) == 0x000C40, "Member 'UABP_Alpaca_Implementation_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Alpaca_Implementation_C, AnimGraphNode_LinkedAnimLayer) == 0x000C60, "Member 'UABP_Alpaca_Implementation_C::AnimGraphNode_LinkedAnimLayer' has a wrong offset!");
static_assert(offsetof(UABP_Alpaca_Implementation_C, LookAtWorldLocation) == 0x000D28, "Member 'UABP_Alpaca_Implementation_C::LookAtWorldLocation' has a wrong offset!");

}

