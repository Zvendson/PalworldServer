#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SplinesInEditor_structs.hpp"


namespace PalSDK::Params
{

// Function BP_PrefabBase.BP_PrefabBase_C.GenerateSplineMesh
// 0x0590 (0x0590 - 0x0000)
struct BP_PrefabBase_C_GenerateSplineMesh final
{
public:
	ECollisionEnabled                             Collision;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CastShadow;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Material;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       TargetSpline;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        SplineStartOffset;                                 // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Offset;                                            // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Scale;                                             // 0x0038(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TangetScale;                                       // 0x0050(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Spacing;                                           // 0x0058(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotation;                                          // 0x0060(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UStaticMesh*                            StaticMesh_0;                                      // 0x0078(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0080(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineMeshComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x3];                                      // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetSplineLength_ReturnValue;              // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_114[0x4];                                      // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FMod_Remainder;                           // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FMod_ReturnValue;                         // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetScaleAtDistanceAlongSpline_ReturnValue; // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetScaleAtDistanceAlongSpline_ReturnValue_1; // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_2;                          // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_2;                          // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_2;                          // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_4;      // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x01B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_5;      // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x01D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue; // 0x01E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue_1; // 0x01F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue_2; // 0x0220(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_2;           // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_NegateRotator_ReturnValue;                // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue_3; // 0x0258(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x0270(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x0288(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AC[0x4];                                      // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue_1;            // 0x02B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_DegreesToRadians_ReturnValue;             // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x02D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DC[0x4];                                      // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_DegreesToRadians_ReturnValue_1;           // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetScaleAtDistanceAlongSpline_ReturnValue_2; // 0x02E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_3;                          // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_3;                          // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_3;                          // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue; // 0x0318(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0330(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0348(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0360(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue; // 0x0378(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0390(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_3;           // 0x03A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x03B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_4;           // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x03D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue_4; // 0x03E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetScaleAtDistanceAlongSpline_ReturnValue_3; // 0x0400(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue_1; // 0x0418(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_4;                          // 0x0430(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_4;                          // 0x0438(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_4;                          // 0x0440(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue_1; // 0x0448(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0460(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x0478(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0490(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1; // 0x04A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x04C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetUpVectorAtDistanceAlongSpline_ReturnValue; // 0x04D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x04F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_3;           // 0x0508(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0520(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_524[0x4];                                      // 0x0524(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FMod_Dividend_ImplicitCast;               // 0x0528(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x0530(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRotationAtDistanceAlongSpline_Distance_ImplicitCast; // 0x0538(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScaleAtDistanceAlongSpline_Distance_ImplicitCast; // 0x053C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRotationAtDistanceAlongSpline_Distance_ImplicitCast_1; // 0x0540(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScaleAtDistanceAlongSpline_Distance_ImplicitCast_1; // 0x0544(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetUpVectorAtDistanceAlongSpline_Distance_ImplicitCast; // 0x0548(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRotationAtDistanceAlongSpline_Distance_ImplicitCast_2; // 0x054C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast; // 0x0550(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDirectionAtDistanceAlongSpline_Distance_ImplicitCast; // 0x0554(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScaleAtDistanceAlongSpline_Distance_ImplicitCast_2; // 0x0558(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRotationAtDistanceAlongSpline_Distance_ImplicitCast_3; // 0x055C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_DegreesToRadians_A_ImplicitCast;          // 0x0560(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetEndRoll_EndRoll_ImplicitCast;          // 0x0568(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56C[0x4];                                      // 0x056C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_DegreesToRadians_A_ImplicitCast_1;        // 0x0570(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetStartRoll_StartRoll_ImplicitCast;      // 0x0578(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast_1; // 0x057C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDirectionAtDistanceAlongSpline_Distance_ImplicitCast_1; // 0x0580(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScaleAtDistanceAlongSpline_Distance_ImplicitCast_3; // 0x0584(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRotationAtDistanceAlongSpline_Distance_ImplicitCast_4; // 0x0588(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PrefabBase_C_GenerateSplineMesh) == 0x000010, "Wrong alignment on BP_PrefabBase_C_GenerateSplineMesh");
static_assert(sizeof(BP_PrefabBase_C_GenerateSplineMesh) == 0x000590, "Wrong size on BP_PrefabBase_C_GenerateSplineMesh");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, Collision) == 0x000000, "Member 'BP_PrefabBase_C_GenerateSplineMesh::Collision' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CastShadow) == 0x000001, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CastShadow' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, Material) == 0x000008, "Member 'BP_PrefabBase_C_GenerateSplineMesh::Material' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, TargetSpline) == 0x000010, "Member 'BP_PrefabBase_C_GenerateSplineMesh::TargetSpline' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, SplineStartOffset) == 0x000018, "Member 'BP_PrefabBase_C_GenerateSplineMesh::SplineStartOffset' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, Offset) == 0x000020, "Member 'BP_PrefabBase_C_GenerateSplineMesh::Offset' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, Scale) == 0x000038, "Member 'BP_PrefabBase_C_GenerateSplineMesh::Scale' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, TangetScale) == 0x000050, "Member 'BP_PrefabBase_C_GenerateSplineMesh::TangetScale' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, Spacing) == 0x000058, "Member 'BP_PrefabBase_C_GenerateSplineMesh::Spacing' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, Rotation) == 0x000060, "Member 'BP_PrefabBase_C_GenerateSplineMesh::Rotation' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, StaticMesh_0) == 0x000078, "Member 'BP_PrefabBase_C_GenerateSplineMesh::StaticMesh_0' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_MakeTransform_ReturnValue) == 0x000080, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000E0, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_AddComponent_ReturnValue) == 0x0000E8, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_BreakVector_X) == 0x0000F0, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_BreakVector_Y) == 0x0000F8, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_BreakVector_Z) == 0x000100, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_SetStaticMesh_ReturnValue) == 0x000108, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetSplineLength_ReturnValue) == 0x00010C, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetSplineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, Temp_int_Variable) == 0x000110, "Member 'BP_PrefabBase_C_GenerateSplineMesh::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_FMod_Remainder) == 0x000118, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_FMod_Remainder' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_FMod_ReturnValue) == 0x000120, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_FMod_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000124, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000128, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000130, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetScaleAtDistanceAlongSpline_ReturnValue) == 0x000138, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetScaleAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000150, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_BreakVector_X_1) == 0x000158, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_BreakVector_Y_1) == 0x000160, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_BreakVector_Z_1) == 0x000168, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetScaleAtDistanceAlongSpline_ReturnValue_1) == 0x000170, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetScaleAtDistanceAlongSpline_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000188, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_BreakVector_X_2) == 0x000190, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_BreakVector_Y_2) == 0x000198, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_BreakVector_Z_2) == 0x0001A0, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x0001A8, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Multiply_DoubleDouble_ReturnValue_4) == 0x0001B0, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Multiply_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_MakeVector2D_ReturnValue) == 0x0001B8, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Multiply_DoubleDouble_ReturnValue_5) == 0x0001C8, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Multiply_DoubleDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_MakeVector2D_ReturnValue_1) == 0x0001D0, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue) == 0x0001E0, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue_1) == 0x0001F8, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000210, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000218, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue_2) == 0x000220, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Add_DoubleDouble_ReturnValue_2) == 0x000238, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Add_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_NegateRotator_ReturnValue) == 0x000240, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_NegateRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue_3) == 0x000258, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_ComposeRotators_ReturnValue) == 0x000270, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x000288, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_BreakRotator_Roll) == 0x0002A0, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_BreakRotator_Pitch) == 0x0002A4, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_BreakRotator_Yaw) == 0x0002A8, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_ComposeRotators_ReturnValue_1) == 0x0002B0, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_ComposeRotators_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_DegreesToRadians_ReturnValue) == 0x0002C8, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_DegreesToRadians_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_BreakRotator_Roll_1) == 0x0002D0, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_BreakRotator_Pitch_1) == 0x0002D4, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_BreakRotator_Yaw_1) == 0x0002D8, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_DegreesToRadians_ReturnValue_1) == 0x0002E0, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_DegreesToRadians_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetScaleAtDistanceAlongSpline_ReturnValue_2) == 0x0002E8, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetScaleAtDistanceAlongSpline_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_BreakVector_X_3) == 0x000300, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_BreakVector_X_3' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_BreakVector_Y_3) == 0x000308, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_BreakVector_Y_3' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_BreakVector_Z_3) == 0x000310, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_BreakVector_Z_3' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue) == 0x000318, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_MakeVector_ReturnValue) == 0x000330, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000348, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000360, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue) == 0x000378, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000390, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Add_DoubleDouble_ReturnValue_3) == 0x0003A8, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Add_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Add_VectorVector_ReturnValue) == 0x0003B0, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Add_DoubleDouble_ReturnValue_4) == 0x0003C8, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Add_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0003D0, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue_4) == 0x0003E8, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetScaleAtDistanceAlongSpline_ReturnValue_3) == 0x000400, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetScaleAtDistanceAlongSpline_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GreaterGreater_VectorRotator_ReturnValue_1) == 0x000418, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GreaterGreater_VectorRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_BreakVector_X_4) == 0x000430, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_BreakVector_X_4' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_BreakVector_Y_4) == 0x000438, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_BreakVector_Y_4' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_BreakVector_Z_4) == 0x000440, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_BreakVector_Z_4' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue_1) == 0x000448, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_MakeVector_ReturnValue_1) == 0x000460, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000478, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000490, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1) == 0x0004A8, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x0004C0, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetUpVectorAtDistanceAlongSpline_ReturnValue) == 0x0004D8, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetUpVectorAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Add_VectorVector_ReturnValue_2) == 0x0004F0, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Add_VectorVector_ReturnValue_3) == 0x000508, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Add_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Add_IntInt_ReturnValue) == 0x000520, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_FMod_Dividend_ImplicitCast) == 0x000528, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_FMod_Dividend_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x000530, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetRotationAtDistanceAlongSpline_Distance_ImplicitCast) == 0x000538, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetRotationAtDistanceAlongSpline_Distance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetScaleAtDistanceAlongSpline_Distance_ImplicitCast) == 0x00053C, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetScaleAtDistanceAlongSpline_Distance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetRotationAtDistanceAlongSpline_Distance_ImplicitCast_1) == 0x000540, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetRotationAtDistanceAlongSpline_Distance_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetScaleAtDistanceAlongSpline_Distance_ImplicitCast_1) == 0x000544, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetScaleAtDistanceAlongSpline_Distance_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetUpVectorAtDistanceAlongSpline_Distance_ImplicitCast) == 0x000548, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetUpVectorAtDistanceAlongSpline_Distance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetRotationAtDistanceAlongSpline_Distance_ImplicitCast_2) == 0x00054C, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetRotationAtDistanceAlongSpline_Distance_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast) == 0x000550, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetDirectionAtDistanceAlongSpline_Distance_ImplicitCast) == 0x000554, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetDirectionAtDistanceAlongSpline_Distance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetScaleAtDistanceAlongSpline_Distance_ImplicitCast_2) == 0x000558, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetScaleAtDistanceAlongSpline_Distance_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetRotationAtDistanceAlongSpline_Distance_ImplicitCast_3) == 0x00055C, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetRotationAtDistanceAlongSpline_Distance_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_DegreesToRadians_A_ImplicitCast) == 0x000560, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_DegreesToRadians_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_SetEndRoll_EndRoll_ImplicitCast) == 0x000568, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_SetEndRoll_EndRoll_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_DegreesToRadians_A_ImplicitCast_1) == 0x000570, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_DegreesToRadians_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_SetStartRoll_StartRoll_ImplicitCast) == 0x000578, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_SetStartRoll_StartRoll_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast_1) == 0x00057C, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetDirectionAtDistanceAlongSpline_Distance_ImplicitCast_1) == 0x000580, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetDirectionAtDistanceAlongSpline_Distance_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetScaleAtDistanceAlongSpline_Distance_ImplicitCast_3) == 0x000584, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetScaleAtDistanceAlongSpline_Distance_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_GenerateSplineMesh, CallFunc_GetRotationAtDistanceAlongSpline_Distance_ImplicitCast_4) == 0x000588, "Member 'BP_PrefabBase_C_GenerateSplineMesh::CallFunc_GetRotationAtDistanceAlongSpline_Distance_ImplicitCast_4' has a wrong offset!");

// Function BP_PrefabBase.BP_PrefabBase_C.UserConstructionScript
// 0x0140 (0x0140 - 0x0000)
struct BP_PrefabBase_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children;           // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetObjectName_ReturnValue;                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USplineComponent*                       K2Node_DynamicCast_AsSpline_Component;             // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x2];                                       // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable_1;        // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E[0x2];                                       // 0x007E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86[0x2];                                       // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSplinesInEditor                       CallFunc_Array_Get_Item_1;                         // 0x0090(0x0080)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x3];                                      // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GenerateSplineMesh_Spacing_ImplicitCast;  // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GenerateSplineMesh_TangetScale_ImplicitCast; // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GenerateSplineMesh_SplineStartOffset_ImplicitCast; // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PrefabBase_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_PrefabBase_C_UserConstructionScript");
static_assert(sizeof(BP_PrefabBase_C_UserConstructionScript) == 0x000140, "Wrong size on BP_PrefabBase_C_UserConstructionScript");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_PrefabBase_C_UserConstructionScript::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue_1) == 0x000008, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_Conv_IntToString_ReturnValue) == 0x000010, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_GetChildrenComponents_Children) == 0x000020, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_GetChildrenComponents_Children' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, Temp_bool_True_if_break_was_hit_Variable) == 0x000030, "Member 'BP_PrefabBase_C_UserConstructionScript::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_GetObjectName_ReturnValue) == 0x000040, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, K2Node_DynamicCast_AsSpline_Component) == 0x000050, "Member 'BP_PrefabBase_C_UserConstructionScript::K2Node_DynamicCast_AsSpline_Component' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'BP_PrefabBase_C_UserConstructionScript::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_GetObjectClass_ReturnValue) == 0x000060, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000068, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_Not_PreBool_ReturnValue) == 0x000069, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue_2) == 0x00006C, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, Temp_int_Loop_Counter_Variable) == 0x000070, "Member 'BP_PrefabBase_C_UserConstructionScript::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x000074, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000078, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x00007C, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, Temp_bool_True_if_break_was_hit_Variable_1) == 0x00007D, "Member 'BP_PrefabBase_C_UserConstructionScript::Temp_bool_True_if_break_was_hit_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_Array_Add_ReturnValue) == 0x000080, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_Not_PreBool_ReturnValue_1) == 0x000084, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_BooleanAND_ReturnValue) == 0x000085, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, Temp_int_Array_Index_Variable_1) == 0x000088, "Member 'BP_PrefabBase_C_UserConstructionScript::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_Array_Get_Item_1) == 0x000090, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000110, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, Temp_int_Loop_Counter_Variable_1) == 0x000114, "Member 'BP_PrefabBase_C_UserConstructionScript::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue_1) == 0x000118, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue_1) == 0x00011C, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_BooleanAND_ReturnValue_1) == 0x000120, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_GenerateSplineMesh_Spacing_ImplicitCast) == 0x000128, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_GenerateSplineMesh_Spacing_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_GenerateSplineMesh_TangetScale_ImplicitCast) == 0x000130, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_GenerateSplineMesh_TangetScale_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PrefabBase_C_UserConstructionScript, CallFunc_GenerateSplineMesh_SplineStartOffset_ImplicitCast) == 0x000138, "Member 'BP_PrefabBase_C_UserConstructionScript::CallFunc_GenerateSplineMesh_SplineStartOffset_ImplicitCast' has a wrong offset!");

}

