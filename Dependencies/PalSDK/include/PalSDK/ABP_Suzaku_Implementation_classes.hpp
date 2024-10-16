#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace PalSDK
{

// AnimBlueprintGeneratedClass ABP_Suzaku_Implementation.ABP_Suzaku_Implementation_C
// 0x0B10 (0x0E60 - 0x0350)
class UABP_Suzaku_Implementation_C final : public UAnimInstance
{
public:
	uint8                                         Pad_348[0x8];                                      // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0358(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0360(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_3;                              // 0x0368(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_3;                   // 0x0388(0x00C8)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_2;                   // 0x0450(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_2;                              // 0x0518(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x0538(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0600(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0620(0x00C8)()
	uint8                                         Pad_6E8[0x8];                                      // 0x06E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt_2;                            // 0x06F0(0x0250)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0940(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0960(0x0020)()
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt_1;                            // 0x0980(0x0250)()
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt;                              // 0x0BD0(0x0250)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0E20(0x0020)()
	struct FVector                                LookAtWorldLocation;                               // 0x0E40(0x0018)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpperOverride(const struct FPoseLink& NativePose, const struct FPoseLink& ActionPose, struct FPoseLink* UpperOverride_0);
	void LookAtOverride(const struct FPoseLink& InPose, const struct FVector& LookAtWorldLocation_0, struct FPoseLink* LookAtOverride_0);
	void ExecuteUbergraph_ABP_Suzaku_Implementation(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void AimingOverride(const struct FPoseLink& DefaultPose, const struct FRotator& AimRotator, struct FPoseLink* AimingOverride_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Suzaku_Implementation_C">();
	}
	static class UABP_Suzaku_Implementation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Suzaku_Implementation_C>();
	}
};
static_assert(alignof(UABP_Suzaku_Implementation_C) == 0x000010, "Wrong alignment on UABP_Suzaku_Implementation_C");
static_assert(sizeof(UABP_Suzaku_Implementation_C) == 0x000E60, "Wrong size on UABP_Suzaku_Implementation_C");
static_assert(offsetof(UABP_Suzaku_Implementation_C, UberGraphFrame) == 0x000350, "Member 'UABP_Suzaku_Implementation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Suzaku_Implementation_C, AnimBlueprintExtension_PropertyAccess) == 0x000358, "Member 'UABP_Suzaku_Implementation_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_Suzaku_Implementation_C, AnimBlueprintExtension_Base) == 0x000360, "Member 'UABP_Suzaku_Implementation_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_Suzaku_Implementation_C, AnimGraphNode_Root_3) == 0x000368, "Member 'UABP_Suzaku_Implementation_C::AnimGraphNode_Root_3' has a wrong offset!");
static_assert(offsetof(UABP_Suzaku_Implementation_C, AnimGraphNode_LinkedInputPose_3) == 0x000388, "Member 'UABP_Suzaku_Implementation_C::AnimGraphNode_LinkedInputPose_3' has a wrong offset!");
static_assert(offsetof(UABP_Suzaku_Implementation_C, AnimGraphNode_LinkedInputPose_2) == 0x000450, "Member 'UABP_Suzaku_Implementation_C::AnimGraphNode_LinkedInputPose_2' has a wrong offset!");
static_assert(offsetof(UABP_Suzaku_Implementation_C, AnimGraphNode_Root_2) == 0x000518, "Member 'UABP_Suzaku_Implementation_C::AnimGraphNode_Root_2' has a wrong offset!");
static_assert(offsetof(UABP_Suzaku_Implementation_C, AnimGraphNode_LinkedInputPose_1) == 0x000538, "Member 'UABP_Suzaku_Implementation_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Suzaku_Implementation_C, AnimGraphNode_Root_1) == 0x000600, "Member 'UABP_Suzaku_Implementation_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_Suzaku_Implementation_C, AnimGraphNode_LinkedInputPose) == 0x000620, "Member 'UABP_Suzaku_Implementation_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_Suzaku_Implementation_C, AnimGraphNode_LookAt_2) == 0x0006F0, "Member 'UABP_Suzaku_Implementation_C::AnimGraphNode_LookAt_2' has a wrong offset!");
static_assert(offsetof(UABP_Suzaku_Implementation_C, AnimGraphNode_LocalToComponentSpace) == 0x000940, "Member 'UABP_Suzaku_Implementation_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_Suzaku_Implementation_C, AnimGraphNode_ComponentToLocalSpace) == 0x000960, "Member 'UABP_Suzaku_Implementation_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_Suzaku_Implementation_C, AnimGraphNode_LookAt_1) == 0x000980, "Member 'UABP_Suzaku_Implementation_C::AnimGraphNode_LookAt_1' has a wrong offset!");
static_assert(offsetof(UABP_Suzaku_Implementation_C, AnimGraphNode_LookAt) == 0x000BD0, "Member 'UABP_Suzaku_Implementation_C::AnimGraphNode_LookAt' has a wrong offset!");
static_assert(offsetof(UABP_Suzaku_Implementation_C, AnimGraphNode_Root) == 0x000E20, "Member 'UABP_Suzaku_Implementation_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Suzaku_Implementation_C, LookAtWorldLocation) == 0x000E40, "Member 'UABP_Suzaku_Implementation_C::LookAtWorldLocation' has a wrong offset!");

}

