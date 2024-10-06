#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// AnimBlueprintGeneratedClass ABP_GrassPanda_Implementation.ABP_GrassPanda_Implementation_C
// 0x0A30 (0x1040 - 0x0610)
class UABP_GrassPanda_Implementation_C final : public UPalAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0610(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0618(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0620(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_3;                              // 0x0628(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_3;                   // 0x0648(0x00C8)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x0710(0x0128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x0838(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0858(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0980(0x0128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x0AA8(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_2;                              // 0x0AC8(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_2;                   // 0x0AE8(0x00C8)()
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt;                              // 0x0BB0(0x0250)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0E00(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0E20(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0E40(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x0E60(0x00C8)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0F28(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0FF0(0x0020)()
	struct FRotator                               AimRotator;                                        // 0x1010(0x0018)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                LookAtWorldLocation;                               // 0x1028(0x0018)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AimingOverride(const struct FPoseLink& DefaultPose, const struct FRotator& AimRotator_0, struct FPoseLink* AimingOverride_0);
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrassPanda_Implementation_AnimGraphNode_ModifyBone_46D5D7D84A629BA96819029DBB7A90F5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrassPanda_Implementation_AnimGraphNode_ModifyBone_93DFD3BE4E28AB0AB3200CB5ABC0A4D5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrassPanda_Implementation_AnimGraphNode_ModifyBone_C1855993489164A48479578D3D9A7A8F();
	void ExecuteUbergraph_ABP_GrassPanda_Implementation(int32 EntryPoint);
	void LookAtOverride(const struct FPoseLink& InPose, const struct FVector& LookAtWorldLocation_0, struct FPoseLink* LookAtOverride_0);
	void UpperOverride(const struct FPoseLink& NativePose, const struct FPoseLink& ActionPose, struct FPoseLink* UpperOverride_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_GrassPanda_Implementation_C">();
	}
	static class UABP_GrassPanda_Implementation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_GrassPanda_Implementation_C>();
	}
};
static_assert(alignof(UABP_GrassPanda_Implementation_C) == 0x000010, "Wrong alignment on UABP_GrassPanda_Implementation_C");
static_assert(sizeof(UABP_GrassPanda_Implementation_C) == 0x001040, "Wrong size on UABP_GrassPanda_Implementation_C");
static_assert(offsetof(UABP_GrassPanda_Implementation_C, UberGraphFrame) == 0x000610, "Member 'UABP_GrassPanda_Implementation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_GrassPanda_Implementation_C, AnimBlueprintExtension_PropertyAccess) == 0x000618, "Member 'UABP_GrassPanda_Implementation_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_GrassPanda_Implementation_C, AnimBlueprintExtension_Base) == 0x000620, "Member 'UABP_GrassPanda_Implementation_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_GrassPanda_Implementation_C, AnimGraphNode_Root_3) == 0x000628, "Member 'UABP_GrassPanda_Implementation_C::AnimGraphNode_Root_3' has a wrong offset!");
static_assert(offsetof(UABP_GrassPanda_Implementation_C, AnimGraphNode_LinkedInputPose_3) == 0x000648, "Member 'UABP_GrassPanda_Implementation_C::AnimGraphNode_LinkedInputPose_3' has a wrong offset!");
static_assert(offsetof(UABP_GrassPanda_Implementation_C, AnimGraphNode_ModifyBone_2) == 0x000710, "Member 'UABP_GrassPanda_Implementation_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UABP_GrassPanda_Implementation_C, AnimGraphNode_LocalToComponentSpace_1) == 0x000838, "Member 'UABP_GrassPanda_Implementation_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_GrassPanda_Implementation_C, AnimGraphNode_ModifyBone_1) == 0x000858, "Member 'UABP_GrassPanda_Implementation_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UABP_GrassPanda_Implementation_C, AnimGraphNode_ModifyBone) == 0x000980, "Member 'UABP_GrassPanda_Implementation_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UABP_GrassPanda_Implementation_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x000AA8, "Member 'UABP_GrassPanda_Implementation_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_GrassPanda_Implementation_C, AnimGraphNode_Root_2) == 0x000AC8, "Member 'UABP_GrassPanda_Implementation_C::AnimGraphNode_Root_2' has a wrong offset!");
static_assert(offsetof(UABP_GrassPanda_Implementation_C, AnimGraphNode_LinkedInputPose_2) == 0x000AE8, "Member 'UABP_GrassPanda_Implementation_C::AnimGraphNode_LinkedInputPose_2' has a wrong offset!");
static_assert(offsetof(UABP_GrassPanda_Implementation_C, AnimGraphNode_LookAt) == 0x000BB0, "Member 'UABP_GrassPanda_Implementation_C::AnimGraphNode_LookAt' has a wrong offset!");
static_assert(offsetof(UABP_GrassPanda_Implementation_C, AnimGraphNode_LocalToComponentSpace) == 0x000E00, "Member 'UABP_GrassPanda_Implementation_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_GrassPanda_Implementation_C, AnimGraphNode_ComponentToLocalSpace) == 0x000E20, "Member 'UABP_GrassPanda_Implementation_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_GrassPanda_Implementation_C, AnimGraphNode_Root_1) == 0x000E40, "Member 'UABP_GrassPanda_Implementation_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_GrassPanda_Implementation_C, AnimGraphNode_LinkedInputPose_1) == 0x000E60, "Member 'UABP_GrassPanda_Implementation_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(UABP_GrassPanda_Implementation_C, AnimGraphNode_LinkedInputPose) == 0x000F28, "Member 'UABP_GrassPanda_Implementation_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_GrassPanda_Implementation_C, AnimGraphNode_Root) == 0x000FF0, "Member 'UABP_GrassPanda_Implementation_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_GrassPanda_Implementation_C, AimRotator) == 0x001010, "Member 'UABP_GrassPanda_Implementation_C::AimRotator' has a wrong offset!");
static_assert(offsetof(UABP_GrassPanda_Implementation_C, LookAtWorldLocation) == 0x001028, "Member 'UABP_GrassPanda_Implementation_C::LookAtWorldLocation' has a wrong offset!");

}

