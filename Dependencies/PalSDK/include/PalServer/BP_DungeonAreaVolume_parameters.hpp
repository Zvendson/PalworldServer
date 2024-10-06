#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function BP_DungeonAreaVolume.BP_DungeonAreaVolume_C.BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_DungeonAreaVolume_C_BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_DungeonAreaVolume_C_BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_DungeonAreaVolume_C_BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_DungeonAreaVolume_C_BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_DungeonAreaVolume_C_BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_DungeonAreaVolume_C_BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_DungeonAreaVolume_C_BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_DungeonAreaVolume_C_BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_DungeonAreaVolume_C_BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_DungeonAreaVolume_C_BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_DungeonAreaVolume_C_BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_DungeonAreaVolume_C_BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_DungeonAreaVolume_C_BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_DungeonAreaVolume_C_BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_DungeonAreaVolume_C_BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_DungeonAreaVolume_C_BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_DungeonAreaVolume_C_BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_DungeonAreaVolume.BP_DungeonAreaVolume_C.Develop_SetupSize
// 0x0018 (0x0018 - 0x0000)
struct BP_DungeonAreaVolume_C_Develop_SetupSize final
{
public:
	struct FVector                                Extent;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DungeonAreaVolume_C_Develop_SetupSize) == 0x000008, "Wrong alignment on BP_DungeonAreaVolume_C_Develop_SetupSize");
static_assert(sizeof(BP_DungeonAreaVolume_C_Develop_SetupSize) == 0x000018, "Wrong size on BP_DungeonAreaVolume_C_Develop_SetupSize");
static_assert(offsetof(BP_DungeonAreaVolume_C_Develop_SetupSize, Extent) == 0x000000, "Member 'BP_DungeonAreaVolume_C_Develop_SetupSize::Extent' has a wrong offset!");

// Function BP_DungeonAreaVolume.BP_DungeonAreaVolume_C.ExecuteUbergraph_BP_DungeonAreaVolume
// 0x0110 (0x0110 - 0x0000)
struct BP_DungeonAreaVolume_C_ExecuteUbergraph_BP_DungeonAreaVolume final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_DungeonAreaVolume_C_ExecuteUbergraph_BP_DungeonAreaVolume) == 0x000008, "Wrong alignment on BP_DungeonAreaVolume_C_ExecuteUbergraph_BP_DungeonAreaVolume");
static_assert(sizeof(BP_DungeonAreaVolume_C_ExecuteUbergraph_BP_DungeonAreaVolume) == 0x000110, "Wrong size on BP_DungeonAreaVolume_C_ExecuteUbergraph_BP_DungeonAreaVolume");
static_assert(offsetof(BP_DungeonAreaVolume_C_ExecuteUbergraph_BP_DungeonAreaVolume, EntryPoint) == 0x000000, "Member 'BP_DungeonAreaVolume_C_ExecuteUbergraph_BP_DungeonAreaVolume::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DungeonAreaVolume_C_ExecuteUbergraph_BP_DungeonAreaVolume, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'BP_DungeonAreaVolume_C_ExecuteUbergraph_BP_DungeonAreaVolume::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_DungeonAreaVolume_C_ExecuteUbergraph_BP_DungeonAreaVolume, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'BP_DungeonAreaVolume_C_ExecuteUbergraph_BP_DungeonAreaVolume::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_DungeonAreaVolume_C_ExecuteUbergraph_BP_DungeonAreaVolume, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'BP_DungeonAreaVolume_C_ExecuteUbergraph_BP_DungeonAreaVolume::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_DungeonAreaVolume_C_ExecuteUbergraph_BP_DungeonAreaVolume, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'BP_DungeonAreaVolume_C_ExecuteUbergraph_BP_DungeonAreaVolume::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_DungeonAreaVolume_C_ExecuteUbergraph_BP_DungeonAreaVolume, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'BP_DungeonAreaVolume_C_ExecuteUbergraph_BP_DungeonAreaVolume::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_DungeonAreaVolume_C_ExecuteUbergraph_BP_DungeonAreaVolume, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'BP_DungeonAreaVolume_C_ExecuteUbergraph_BP_DungeonAreaVolume::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");

// Function BP_DungeonAreaVolume.BP_DungeonAreaVolume_C.GetBoundingBox
// 0x00D0 (0x00D0 - 0x0000)
struct BP_DungeonAreaVolume_C_GetBoundingBox final
{
public:
	struct FBox                                   ReturnValue;                                       // 0x0000(0x0038)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetActorBounds_Origin;                    // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorBounds_BoxExtent;                 // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBox                                   CallFunc_MakeBox_ReturnValue;                      // 0x0098(0x0038)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DungeonAreaVolume_C_GetBoundingBox) == 0x000008, "Wrong alignment on BP_DungeonAreaVolume_C_GetBoundingBox");
static_assert(sizeof(BP_DungeonAreaVolume_C_GetBoundingBox) == 0x0000D0, "Wrong size on BP_DungeonAreaVolume_C_GetBoundingBox");
static_assert(offsetof(BP_DungeonAreaVolume_C_GetBoundingBox, ReturnValue) == 0x000000, "Member 'BP_DungeonAreaVolume_C_GetBoundingBox::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DungeonAreaVolume_C_GetBoundingBox, CallFunc_GetActorBounds_Origin) == 0x000038, "Member 'BP_DungeonAreaVolume_C_GetBoundingBox::CallFunc_GetActorBounds_Origin' has a wrong offset!");
static_assert(offsetof(BP_DungeonAreaVolume_C_GetBoundingBox, CallFunc_GetActorBounds_BoxExtent) == 0x000050, "Member 'BP_DungeonAreaVolume_C_GetBoundingBox::CallFunc_GetActorBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(BP_DungeonAreaVolume_C_GetBoundingBox, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000068, "Member 'BP_DungeonAreaVolume_C_GetBoundingBox::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DungeonAreaVolume_C_GetBoundingBox, CallFunc_Add_VectorVector_ReturnValue) == 0x000080, "Member 'BP_DungeonAreaVolume_C_GetBoundingBox::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DungeonAreaVolume_C_GetBoundingBox, CallFunc_MakeBox_ReturnValue) == 0x000098, "Member 'BP_DungeonAreaVolume_C_GetBoundingBox::CallFunc_MakeBox_ReturnValue' has a wrong offset!");

}

