#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function BP_SimpleWater.BP_SimpleWater_C.BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature final
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
static_assert(alignof(BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_SimpleWater.BP_SimpleWater_C.BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_SimpleWater_C_BndEvt__BP_SimpleWater_SwimmingVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_SimpleWater.BP_SimpleWater_C.ExecuteUbergraph_BP_SimpleWater
// 0x0198 (0x0198 - 0x0000)
struct BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0068(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0150(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0160(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C[0x4];                                      // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0170(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0178(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_182[0x6];                                      // 0x0182(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalGameStateInGame*                    CallFunc_GetPalGameStateInGame_ReturnValue;        // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetWorldOceanPlaneZ_InZ_ImplicitCast;     // 0x0190(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater) == 0x000008, "Wrong alignment on BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater");
static_assert(sizeof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater) == 0x000198, "Wrong size on BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater");
static_assert(offsetof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater, EntryPoint) == 0x000000, "Member 'BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater, CallFunc_BreakVector_X) == 0x000020, "Member 'BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater, CallFunc_BreakVector_Y) == 0x000028, "Member 'BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater, CallFunc_BreakVector_Z) == 0x000030, "Member 'BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater, K2Node_Event_OtherActor) == 0x000038, "Member 'BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater, K2Node_Event_DeltaSeconds) == 0x000040, "Member 'BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000048, "Member 'BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000050, "Member 'BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000058, "Member 'BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000060, "Member 'BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater, K2Node_ComponentBoundEvent_bFromSweep) == 0x000064, "Member 'BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater, K2Node_ComponentBoundEvent_SweepResult) == 0x000068, "Member 'BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000150, "Member 'BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater, K2Node_ComponentBoundEvent_OtherActor) == 0x000158, "Member 'BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater, K2Node_ComponentBoundEvent_OtherComp) == 0x000160, "Member 'BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000168, "Member 'BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater, CallFunc_GetComponentByClass_ReturnValue) == 0x000170, "Member 'BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000178, "Member 'BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater, CallFunc_IsValid_ReturnValue) == 0x000180, "Member 'BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater, CallFunc_IsValid_ReturnValue_1) == 0x000181, "Member 'BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater, CallFunc_GetPalGameStateInGame_ReturnValue) == 0x000188, "Member 'BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater::CallFunc_GetPalGameStateInGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater, CallFunc_SetWorldOceanPlaneZ_InZ_ImplicitCast) == 0x000190, "Member 'BP_SimpleWater_C_ExecuteUbergraph_BP_SimpleWater::CallFunc_SetWorldOceanPlaneZ_InZ_ImplicitCast' has a wrong offset!");

// Function BP_SimpleWater.BP_SimpleWater_C.GenerateOceanPlane
// 0x0160 (0x0160 - 0x0000)
struct BP_SimpleWater_C_GenerateOceanPlane final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBox                                   CallFunc_GetBoundingBox_ReturnValue;               // 0x0040(0x0038)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00F0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddInstance_ReturnValue;                  // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SimpleWater_C_GenerateOceanPlane) == 0x000010, "Wrong alignment on BP_SimpleWater_C_GenerateOceanPlane");
static_assert(sizeof(BP_SimpleWater_C_GenerateOceanPlane) == 0x000160, "Wrong size on BP_SimpleWater_C_GenerateOceanPlane");
static_assert(offsetof(BP_SimpleWater_C_GenerateOceanPlane, Temp_int_Variable) == 0x000000, "Member 'BP_SimpleWater_C_GenerateOceanPlane::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOceanPlane, CallFunc_Multiply_IntInt_ReturnValue) == 0x000004, "Member 'BP_SimpleWater_C_GenerateOceanPlane::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOceanPlane, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000008, "Member 'BP_SimpleWater_C_GenerateOceanPlane::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOceanPlane, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_SimpleWater_C_GenerateOceanPlane::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOceanPlane, Temp_int_Variable_1) == 0x000010, "Member 'BP_SimpleWater_C_GenerateOceanPlane::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOceanPlane, CallFunc_MakeVector_ReturnValue) == 0x000018, "Member 'BP_SimpleWater_C_GenerateOceanPlane::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOceanPlane, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000030, "Member 'BP_SimpleWater_C_GenerateOceanPlane::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOceanPlane, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'BP_SimpleWater_C_GenerateOceanPlane::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOceanPlane, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BP_SimpleWater_C_GenerateOceanPlane::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOceanPlane, CallFunc_IsValid_ReturnValue_1) == 0x000039, "Member 'BP_SimpleWater_C_GenerateOceanPlane::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOceanPlane, CallFunc_GetBoundingBox_ReturnValue) == 0x000040, "Member 'BP_SimpleWater_C_GenerateOceanPlane::CallFunc_GetBoundingBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOceanPlane, CallFunc_SetStaticMesh_ReturnValue) == 0x000078, "Member 'BP_SimpleWater_C_GenerateOceanPlane::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOceanPlane, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000080, "Member 'BP_SimpleWater_C_GenerateOceanPlane::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOceanPlane, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000098, "Member 'BP_SimpleWater_C_GenerateOceanPlane::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOceanPlane, CallFunc_BreakVector_X) == 0x0000B0, "Member 'BP_SimpleWater_C_GenerateOceanPlane::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOceanPlane, CallFunc_BreakVector_Y) == 0x0000B8, "Member 'BP_SimpleWater_C_GenerateOceanPlane::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOceanPlane, CallFunc_BreakVector_Z) == 0x0000C0, "Member 'BP_SimpleWater_C_GenerateOceanPlane::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOceanPlane, CallFunc_Multiply_IntFloat_ReturnValue) == 0x0000C8, "Member 'BP_SimpleWater_C_GenerateOceanPlane::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOceanPlane, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x0000D0, "Member 'BP_SimpleWater_C_GenerateOceanPlane::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOceanPlane, CallFunc_MakeVector_ReturnValue_1) == 0x0000D8, "Member 'BP_SimpleWater_C_GenerateOceanPlane::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOceanPlane, CallFunc_MakeTransform_ReturnValue) == 0x0000F0, "Member 'BP_SimpleWater_C_GenerateOceanPlane::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOceanPlane, CallFunc_AddInstance_ReturnValue) == 0x000150, "Member 'BP_SimpleWater_C_GenerateOceanPlane::CallFunc_AddInstance_ReturnValue' has a wrong offset!");

// Function BP_SimpleWater.BP_SimpleWater_C.GenerateOpenSeePlane
// 0x03B0 (0x03B0 - 0x0000)
struct BP_SimpleWater_C_GenerateOpenSeePlane final
{
public:
	double                                        SkySphereRadius;                                   // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumOfDivisionWhenTooLargeTile;                     // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MeshSize;                                          // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E[0x2];                                       // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B[0x1];                                       // 0x003B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_2;           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_3;           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_4;           // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_4;           // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FE[0x2];                                       // 0x00FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBox                                   CallFunc_GetBoundingBox_ReturnValue;               // 0x0100(0x0038)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A1[0x7];                                      // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_3;        // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_4;        // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x01E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0200(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_2;      // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddInstance_ReturnValue;                  // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26C[0x4];                                      // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_4;      // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_2;           // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_5;        // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_5;      // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_6;        // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_6;      // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_3;           // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_4;           // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_3;      // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_7;      // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_5;           // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_6;           // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_8;      // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_2;          // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_7;           // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_8;           // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_3;          // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_4;          // 0x0301(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_302[0x6];                                      // 0x0302(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_9;           // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_3;                 // 0x0310(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_5;          // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_329[0x7];                                      // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0330(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_391[0x3];                                      // 0x0391(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_AddInstance_ReturnValue_1;                // 0x0394(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0399(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39A[0x6];                                      // 0x039A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast_1;     // 0x03A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SimpleWater_C_GenerateOpenSeePlane) == 0x000010, "Wrong alignment on BP_SimpleWater_C_GenerateOpenSeePlane");
static_assert(sizeof(BP_SimpleWater_C_GenerateOpenSeePlane) == 0x0003B0, "Wrong size on BP_SimpleWater_C_GenerateOpenSeePlane");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, SkySphereRadius) == 0x000000, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::SkySphereRadius' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, NumOfDivisionWhenTooLargeTile) == 0x000008, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::NumOfDivisionWhenTooLargeTile' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, MeshSize) == 0x000010, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::MeshSize' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, Temp_int_Variable) == 0x000018, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00001C, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00001D, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, Temp_int_Variable_1) == 0x000024, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, Temp_int_Variable_2) == 0x000028, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000030, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000038, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_BooleanOR_ReturnValue) == 0x000039, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x00003A, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Add_IntInt_ReturnValue_1) == 0x00003C, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Add_IntInt_ReturnValue_2) == 0x000040, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000048, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000050, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, Temp_int_Variable_3) == 0x000058, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Subtract_IntInt_ReturnValue) == 0x00005C, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000060, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000064, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Conv_IntToDouble_ReturnValue_2) == 0x000068, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Conv_IntToDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x000070, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x000078, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Add_IntInt_ReturnValue_3) == 0x00007C, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000080, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000084, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000088, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_MakeVector_ReturnValue) == 0x000090, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_MakeVector_ReturnValue_1) == 0x0000A8, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Multiply_IntInt_ReturnValue) == 0x0000C0, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, Temp_int_Variable_4) == 0x0000C4, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Add_IntInt_ReturnValue_4) == 0x0000C8, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Conv_IntToDouble_ReturnValue_3) == 0x0000D0, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Conv_IntToDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Conv_IntToDouble_ReturnValue_4) == 0x0000D8, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Conv_IntToDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0000E0, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_LessEqual_IntInt_ReturnValue_4) == 0x0000E8, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_LessEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x0000F0, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Add_IntInt_ReturnValue_5) == 0x0000F8, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_IsValid_ReturnValue) == 0x0000FC, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_IsValid_ReturnValue_1) == 0x0000FD, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_GetBoundingBox_ReturnValue) == 0x000100, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_GetBoundingBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_SetStaticMesh_ReturnValue) == 0x000138, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000140, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000158, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_BreakVector_X) == 0x000170, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_BreakVector_Y) == 0x000178, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_BreakVector_Z) == 0x000180, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000188, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000190, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Divide_DoubleDouble_ReturnValue_2) == 0x000198, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Divide_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0001A0, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Divide_DoubleDouble_ReturnValue_3) == 0x0001A8, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Divide_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x0001B0, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x0001B8, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Divide_DoubleDouble_ReturnValue_4) == 0x0001C0, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Divide_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0001C8, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x0001D0, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0001D8, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_MakeVector_ReturnValue_2) == 0x0001E0, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x0001F8, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_MakeTransform_ReturnValue) == 0x000200, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Subtract_DoubleDouble_ReturnValue_2) == 0x000260, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Subtract_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_AddInstance_ReturnValue) == 0x000268, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_AddInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Multiply_DoubleDouble_ReturnValue_4) == 0x000270, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Multiply_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Add_DoubleDouble_ReturnValue_2) == 0x000278, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Add_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Divide_DoubleDouble_ReturnValue_5) == 0x000280, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Divide_DoubleDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Multiply_DoubleDouble_ReturnValue_5) == 0x000288, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Multiply_DoubleDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Divide_DoubleDouble_ReturnValue_6) == 0x000290, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Divide_DoubleDouble_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Multiply_DoubleDouble_ReturnValue_6) == 0x000298, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Multiply_DoubleDouble_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Add_DoubleDouble_ReturnValue_3) == 0x0002A0, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Add_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x0002A8, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Add_DoubleDouble_ReturnValue_4) == 0x0002B0, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Add_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_BooleanAND_ReturnValue) == 0x0002B8, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Subtract_DoubleDouble_ReturnValue_3) == 0x0002C0, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Subtract_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Multiply_DoubleDouble_ReturnValue_7) == 0x0002C8, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Multiply_DoubleDouble_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Add_DoubleDouble_ReturnValue_5) == 0x0002D0, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Add_DoubleDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Add_DoubleDouble_ReturnValue_6) == 0x0002D8, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Add_DoubleDouble_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Multiply_DoubleDouble_ReturnValue_8) == 0x0002E0, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Multiply_DoubleDouble_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Less_DoubleDouble_ReturnValue_2) == 0x0002E8, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Less_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Add_DoubleDouble_ReturnValue_7) == 0x0002F0, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Add_DoubleDouble_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Add_DoubleDouble_ReturnValue_8) == 0x0002F8, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Add_DoubleDouble_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Less_DoubleDouble_ReturnValue_3) == 0x000300, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Less_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Less_DoubleDouble_ReturnValue_4) == 0x000301, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Less_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Add_DoubleDouble_ReturnValue_9) == 0x000308, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Add_DoubleDouble_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_MakeVector_ReturnValue_3) == 0x000310, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_MakeVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Less_DoubleDouble_ReturnValue_5) == 0x000328, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Less_DoubleDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_MakeTransform_ReturnValue_1) == 0x000330, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_BooleanOR_ReturnValue_1) == 0x000390, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_AddInstance_ReturnValue_1) == 0x000394, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_AddInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_BooleanOR_ReturnValue_2) == 0x000398, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_BooleanOR_ReturnValue_3) == 0x000399, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x0003A0, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateOpenSeePlane, CallFunc_Divide_DoubleDouble_B_ImplicitCast_1) == 0x0003A8, "Member 'BP_SimpleWater_C_GenerateOpenSeePlane::CallFunc_Divide_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");

// Function BP_SimpleWater.BP_SimpleWater_C.GenerateWaterPlane
// 0x0160 (0x0160 - 0x0000)
struct BP_SimpleWater_C_GenerateWaterPlane final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBox                                   CallFunc_GetBoundingBox_ReturnValue;               // 0x0038(0x0038)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E8[0x8];                                       // 0x00E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00F0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddInstance_ReturnValue;                  // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SimpleWater_C_GenerateWaterPlane) == 0x000010, "Wrong alignment on BP_SimpleWater_C_GenerateWaterPlane");
static_assert(sizeof(BP_SimpleWater_C_GenerateWaterPlane) == 0x000160, "Wrong size on BP_SimpleWater_C_GenerateWaterPlane");
static_assert(offsetof(BP_SimpleWater_C_GenerateWaterPlane, Temp_int_Variable) == 0x000000, "Member 'BP_SimpleWater_C_GenerateWaterPlane::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateWaterPlane, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000004, "Member 'BP_SimpleWater_C_GenerateWaterPlane::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateWaterPlane, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_SimpleWater_C_GenerateWaterPlane::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateWaterPlane, Temp_int_Variable_1) == 0x00000C, "Member 'BP_SimpleWater_C_GenerateWaterPlane::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateWaterPlane, CallFunc_MakeVector_ReturnValue) == 0x000010, "Member 'BP_SimpleWater_C_GenerateWaterPlane::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateWaterPlane, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000028, "Member 'BP_SimpleWater_C_GenerateWaterPlane::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateWaterPlane, CallFunc_Add_IntInt_ReturnValue_1) == 0x00002C, "Member 'BP_SimpleWater_C_GenerateWaterPlane::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateWaterPlane, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_SimpleWater_C_GenerateWaterPlane::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateWaterPlane, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'BP_SimpleWater_C_GenerateWaterPlane::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateWaterPlane, CallFunc_GetBoundingBox_ReturnValue) == 0x000038, "Member 'BP_SimpleWater_C_GenerateWaterPlane::CallFunc_GetBoundingBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateWaterPlane, CallFunc_SetStaticMesh_ReturnValue) == 0x000070, "Member 'BP_SimpleWater_C_GenerateWaterPlane::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateWaterPlane, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000078, "Member 'BP_SimpleWater_C_GenerateWaterPlane::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateWaterPlane, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000090, "Member 'BP_SimpleWater_C_GenerateWaterPlane::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateWaterPlane, CallFunc_BreakVector_X) == 0x0000A8, "Member 'BP_SimpleWater_C_GenerateWaterPlane::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateWaterPlane, CallFunc_BreakVector_Y) == 0x0000B0, "Member 'BP_SimpleWater_C_GenerateWaterPlane::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateWaterPlane, CallFunc_BreakVector_Z) == 0x0000B8, "Member 'BP_SimpleWater_C_GenerateWaterPlane::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateWaterPlane, CallFunc_Multiply_IntFloat_ReturnValue) == 0x0000C0, "Member 'BP_SimpleWater_C_GenerateWaterPlane::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateWaterPlane, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x0000C8, "Member 'BP_SimpleWater_C_GenerateWaterPlane::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateWaterPlane, CallFunc_MakeVector_ReturnValue_1) == 0x0000D0, "Member 'BP_SimpleWater_C_GenerateWaterPlane::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateWaterPlane, CallFunc_MakeTransform_ReturnValue) == 0x0000F0, "Member 'BP_SimpleWater_C_GenerateWaterPlane::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_GenerateWaterPlane, CallFunc_AddInstance_ReturnValue) == 0x000150, "Member 'BP_SimpleWater_C_GenerateWaterPlane::CallFunc_AddInstance_ReturnValue' has a wrong offset!");

// Function BP_SimpleWater.BP_SimpleWater_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_SimpleWater_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SimpleWater_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_SimpleWater_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_SimpleWater_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_SimpleWater_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_SimpleWater_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_SimpleWater_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function BP_SimpleWater.BP_SimpleWater_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SimpleWater_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SimpleWater_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SimpleWater_C_ReceiveTick");
static_assert(sizeof(BP_SimpleWater_C_ReceiveTick) == 0x000004, "Wrong size on BP_SimpleWater_C_ReceiveTick");
static_assert(offsetof(BP_SimpleWater_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SimpleWater_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_SimpleWater.BP_SimpleWater_C.UpdateSwimmingVolume
// 0x0480 (0x0480 - 0x0000)
struct BP_SimpleWater_C_UpdateSwimmingVolume final
{
public:
	int32                                         StartIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EndIndex;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MeshScale;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_IntToVector_ReturnValue;             // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_IntToVector_ReturnValue_1;           // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_IntToVector_ReturnValue_2;           // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBox                                   CallFunc_GetBoundingBox_ReturnValue;               // 0x00C8(0x0038)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_BreakVector_X;                            // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0118(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x0150(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue_1;         // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_2;      // 0x0180(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_2;                          // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_2;                          // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_2;                          // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C8[0x8];                                      // 0x01C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x01D0(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0230(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0248(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0260(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0278(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_3;                          // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_3;                          // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_3;                          // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBox                                   CallFunc_GetBoundingBox_ReturnValue_1;             // 0x02B0(0x0038)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x02F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0308(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_3;      // 0x0320(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_4;      // 0x0338(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_5;      // 0x0350(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_4;                          // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_4;                          // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_4;                          // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x0380(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0398(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SimpleWater_C_UpdateSwimmingVolume) == 0x000010, "Wrong alignment on BP_SimpleWater_C_UpdateSwimmingVolume");
static_assert(sizeof(BP_SimpleWater_C_UpdateSwimmingVolume) == 0x000480, "Wrong size on BP_SimpleWater_C_UpdateSwimmingVolume");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, StartIndex) == 0x000000, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::StartIndex' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, EndIndex) == 0x000004, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::EndIndex' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, MeshScale) == 0x000008, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::MeshScale' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000010, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_Conv_IntToVector_ReturnValue) == 0x000028, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_Conv_IntToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_Conv_IntToVector_ReturnValue_1) == 0x000048, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_Conv_IntToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_Subtract_IntInt_ReturnValue) == 0x000060, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_Conv_IntToVector_ReturnValue_2) == 0x000068, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_Conv_IntToVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000080, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_Add_VectorVector_ReturnValue) == 0x000098, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_Conv_DoubleToVector_ReturnValue_1) == 0x0000B0, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_Conv_DoubleToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_GetBoundingBox_ReturnValue) == 0x0000C8, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_GetBoundingBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_BreakVector_X) == 0x000100, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_BreakVector_Y) == 0x000108, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_BreakVector_Z) == 0x000110, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000118, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000130, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000138, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x000150, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_Conv_FloatToVector_ReturnValue_1) == 0x000168, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_Conv_FloatToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_Multiply_VectorVector_ReturnValue_2) == 0x000180, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_Multiply_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_BreakVector_X_1) == 0x000198, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_BreakVector_Y_1) == 0x0001A0, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_BreakVector_Z_1) == 0x0001A8, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_BreakVector_X_2) == 0x0001B0, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_BreakVector_Y_2) == 0x0001B8, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_BreakVector_Z_2) == 0x0001C0, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_GetTransform_ReturnValue) == 0x0001D0, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_MakeVector_ReturnValue) == 0x000230, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_BreakTransform_Location) == 0x000248, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_BreakTransform_Rotation) == 0x000260, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_BreakTransform_Scale) == 0x000278, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_BreakVector_X_3) == 0x000290, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_BreakVector_X_3' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_BreakVector_Y_3) == 0x000298, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_BreakVector_Y_3' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_BreakVector_Z_3) == 0x0002A0, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_BreakVector_Z_3' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0002A8, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_GetBoundingBox_ReturnValue_1) == 0x0002B0, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_GetBoundingBox_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x0002E8, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_MakeVector_ReturnValue_1) == 0x0002F0, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000308, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_Multiply_VectorVector_ReturnValue_3) == 0x000320, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_Multiply_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_Multiply_VectorVector_ReturnValue_4) == 0x000338, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_Multiply_VectorVector_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_Multiply_VectorVector_ReturnValue_5) == 0x000350, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_Multiply_VectorVector_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_BreakVector_X_4) == 0x000368, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_BreakVector_X_4' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_BreakVector_Y_4) == 0x000370, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_BreakVector_Y_4' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_BreakVector_Z_4) == 0x000378, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_BreakVector_Z_4' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_MakeVector_ReturnValue_2) == 0x000380, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SimpleWater_C_UpdateSwimmingVolume, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000398, "Member 'BP_SimpleWater_C_UpdateSwimmingVolume::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

}

