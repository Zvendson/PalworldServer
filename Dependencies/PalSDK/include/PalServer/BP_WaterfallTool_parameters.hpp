#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "AdditionalCascades_structs.hpp"


namespace PalServer::Params
{

// Function BP_WaterfallTool.BP_WaterfallTool_C.UserConstructionScript
// 0x0270 (0x0270 - 0x0000)
struct BP_WaterfallTool_C_UserConstructionScript final
{
public:
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtSplinePoint_ReturnValue;     // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAdditionalCascades                    CallFunc_Array_Get_Item;                           // 0x0060(0x0090)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Check_Spline_Input_Keys_Passed;           // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F5[0x3];                                       // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USplineComponent*                       CallFunc_AddComponent_ReturnValue;                 // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0120(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0150(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0168(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0254(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_255[0x3];                                      // 0x0255(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25C[0x4];                                      // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Do_Waterfall_Trace_Scale_ImplicitCast;    // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Setup_Spline_Mesh_Scale_ImplicitCast;     // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WaterfallTool_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_WaterfallTool_C_UserConstructionScript");
static_assert(sizeof(BP_WaterfallTool_C_UserConstructionScript) == 0x000270, "Wrong size on BP_WaterfallTool_C_UserConstructionScript");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x000000, "Member 'BP_WaterfallTool_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, CallFunc_Greater_IntInt_ReturnValue) == 0x000004, "Member 'BP_WaterfallTool_C_UserConstructionScript::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_WaterfallTool_C_UserConstructionScript::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x00000C, "Member 'BP_WaterfallTool_C_UserConstructionScript::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, CallFunc_GetLocationAtSplinePoint_ReturnValue) == 0x000010, "Member 'BP_WaterfallTool_C_UserConstructionScript::CallFunc_GetLocationAtSplinePoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, CallFunc_BreakVector_X) == 0x000028, "Member 'BP_WaterfallTool_C_UserConstructionScript::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, CallFunc_BreakVector_Y) == 0x000030, "Member 'BP_WaterfallTool_C_UserConstructionScript::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, CallFunc_BreakVector_Z) == 0x000038, "Member 'BP_WaterfallTool_C_UserConstructionScript::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_WaterfallTool_C_UserConstructionScript::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, CallFunc_MakeVector_ReturnValue) == 0x000048, "Member 'BP_WaterfallTool_C_UserConstructionScript::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x000060, "Member 'BP_WaterfallTool_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue_1) == 0x0000F0, "Member 'BP_WaterfallTool_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, CallFunc_Check_Spline_Input_Keys_Passed) == 0x0000F4, "Member 'BP_WaterfallTool_C_UserConstructionScript::CallFunc_Check_Spline_Input_Keys_Passed' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue) == 0x0000F8, "Member 'BP_WaterfallTool_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, CallFunc_Array_Add_ReturnValue) == 0x000100, "Member 'BP_WaterfallTool_C_UserConstructionScript::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, CallFunc_BreakTransform_Location) == 0x000108, "Member 'BP_WaterfallTool_C_UserConstructionScript::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, CallFunc_BreakTransform_Rotation) == 0x000120, "Member 'BP_WaterfallTool_C_UserConstructionScript::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, CallFunc_BreakTransform_Scale) == 0x000138, "Member 'BP_WaterfallTool_C_UserConstructionScript::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, CallFunc_Add_VectorVector_ReturnValue) == 0x000150, "Member 'BP_WaterfallTool_C_UserConstructionScript::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000168, "Member 'BP_WaterfallTool_C_UserConstructionScript::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, Temp_int_Loop_Counter_Variable) == 0x000250, "Member 'BP_WaterfallTool_C_UserConstructionScript::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x000254, "Member 'BP_WaterfallTool_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000258, "Member 'BP_WaterfallTool_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, CallFunc_Do_Waterfall_Trace_Scale_ImplicitCast) == 0x000260, "Member 'BP_WaterfallTool_C_UserConstructionScript::CallFunc_Do_Waterfall_Trace_Scale_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_UserConstructionScript, CallFunc_Setup_Spline_Mesh_Scale_ImplicitCast) == 0x000268, "Member 'BP_WaterfallTool_C_UserConstructionScript::CallFunc_Setup_Spline_Mesh_Scale_ImplicitCast' has a wrong offset!");

// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Waterfall Particles
// 0x0318 (0x0318 - 0x0000)
struct BP_WaterfallTool_C_Setup_Waterfall_Particles final
{
public:
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLocationAtSplinePoint_ReturnValue;     // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtSplinePoint_ReturnValue_1;   // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0038(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<struct FVector>                        K2Node_MakeArray_Array;                            // 0x0120(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_1;  // 0x0130(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_GetVectorArrayAverage_ReturnValue;        // 0x0218(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_2;  // 0x0230(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_WaterfallTool_C_Setup_Waterfall_Particles) == 0x000008, "Wrong alignment on BP_WaterfallTool_C_Setup_Waterfall_Particles");
static_assert(sizeof(BP_WaterfallTool_C_Setup_Waterfall_Particles) == 0x000318, "Wrong size on BP_WaterfallTool_C_Setup_Waterfall_Particles");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Waterfall_Particles, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x000000, "Member 'BP_WaterfallTool_C_Setup_Waterfall_Particles::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Waterfall_Particles, CallFunc_GetLocationAtSplinePoint_ReturnValue) == 0x000008, "Member 'BP_WaterfallTool_C_Setup_Waterfall_Particles::CallFunc_GetLocationAtSplinePoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Waterfall_Particles, CallFunc_GetLocationAtSplinePoint_ReturnValue_1) == 0x000020, "Member 'BP_WaterfallTool_C_Setup_Waterfall_Particles::CallFunc_GetLocationAtSplinePoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Waterfall_Particles, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000038, "Member 'BP_WaterfallTool_C_Setup_Waterfall_Particles::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Waterfall_Particles, K2Node_MakeArray_Array) == 0x000120, "Member 'BP_WaterfallTool_C_Setup_Waterfall_Particles::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Waterfall_Particles, CallFunc_K2_SetRelativeLocation_SweepHitResult_1) == 0x000130, "Member 'BP_WaterfallTool_C_Setup_Waterfall_Particles::CallFunc_K2_SetRelativeLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Waterfall_Particles, CallFunc_GetVectorArrayAverage_ReturnValue) == 0x000218, "Member 'BP_WaterfallTool_C_Setup_Waterfall_Particles::CallFunc_GetVectorArrayAverage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Waterfall_Particles, CallFunc_K2_SetRelativeLocation_SweepHitResult_2) == 0x000230, "Member 'BP_WaterfallTool_C_Setup_Waterfall_Particles::CallFunc_K2_SetRelativeLocation_SweepHitResult_2' has a wrong offset!");

// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Waterfall Particle Parameters
// 0x0018 (0x0018 - 0x0000)
struct BP_WaterfallTool_C_Setup_Waterfall_Particle_Parameters final
{
public:
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast;     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast_1;   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast_2;   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WaterfallTool_C_Setup_Waterfall_Particle_Parameters) == 0x000008, "Wrong alignment on BP_WaterfallTool_C_Setup_Waterfall_Particle_Parameters");
static_assert(sizeof(BP_WaterfallTool_C_Setup_Waterfall_Particle_Parameters) == 0x000018, "Wrong size on BP_WaterfallTool_C_Setup_Waterfall_Particle_Parameters");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Waterfall_Particle_Parameters, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000000, "Member 'BP_WaterfallTool_C_Setup_Waterfall_Particle_Parameters::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Waterfall_Particle_Parameters, CallFunc_SetFloatParameter_Param_ImplicitCast) == 0x000008, "Member 'BP_WaterfallTool_C_Setup_Waterfall_Particle_Parameters::CallFunc_SetFloatParameter_Param_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Waterfall_Particle_Parameters, CallFunc_SetFloatParameter_Param_ImplicitCast_1) == 0x00000C, "Member 'BP_WaterfallTool_C_Setup_Waterfall_Particle_Parameters::CallFunc_SetFloatParameter_Param_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Waterfall_Particle_Parameters, CallFunc_SetFloatParameter_Param_ImplicitCast_2) == 0x000010, "Member 'BP_WaterfallTool_C_Setup_Waterfall_Particle_Parameters::CallFunc_SetFloatParameter_Param_ImplicitCast_2' has a wrong offset!");

// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Spline Mesh
// 0x01F0 (0x01F0 - 0x0000)
struct BP_WaterfallTool_C_Setup_Spline_Mesh final
{
public:
	class USplineComponent*                       Spline_Comp;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        Scale;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Location; // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Tangent; // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Location_1; // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1; // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRollAtSplinePoint_ReturnValue;         // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRollAtSplinePoint_ReturnValue_1;       // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetScaleAtSplinePoint_ReturnValue;        // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetScaleAtSplinePoint_ReturnValue_1;      // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_4;      // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_5;      // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0130(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0140(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_154[0xC];                                      // 0x0154(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable;                              // 0x0160(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineMeshComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D1[0x7];                                      // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetStartRoll_StartRoll_ImplicitCast;      // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetEndRoll_EndRoll_ImplicitCast;          // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WaterfallTool_C_Setup_Spline_Mesh) == 0x000010, "Wrong alignment on BP_WaterfallTool_C_Setup_Spline_Mesh");
static_assert(sizeof(BP_WaterfallTool_C_Setup_Spline_Mesh) == 0x0001F0, "Wrong size on BP_WaterfallTool_C_Setup_Spline_Mesh");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, Spline_Comp) == 0x000000, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::Spline_Comp' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, Scale) == 0x000008, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::Scale' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x000010, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, Temp_int_Variable) == 0x000014, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_GetLocationAndTangentAtSplinePoint_Location) == 0x000020, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_GetLocationAndTangentAtSplinePoint_Location' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_GetLocationAndTangentAtSplinePoint_Tangent) == 0x000038, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_GetLocationAndTangentAtSplinePoint_Tangent' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000050, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_GetLocationAndTangentAtSplinePoint_Location_1) == 0x000058, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_GetLocationAndTangentAtSplinePoint_Location_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1) == 0x000070, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_Add_IntInt_ReturnValue_1) == 0x000088, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_GetRollAtSplinePoint_ReturnValue) == 0x00008C, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_GetRollAtSplinePoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_GetRollAtSplinePoint_ReturnValue_1) == 0x000090, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_GetRollAtSplinePoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000098, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0000A0, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000A8, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_GetScaleAtSplinePoint_ReturnValue) == 0x0000B0, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_GetScaleAtSplinePoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_GetScaleAtSplinePoint_ReturnValue_1) == 0x0000C8, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_GetScaleAtSplinePoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_BreakVector_X) == 0x0000E0, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_BreakVector_Y) == 0x0000E8, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_BreakVector_Z) == 0x0000F0, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_BreakVector_X_1) == 0x0000F8, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_BreakVector_Y_1) == 0x000100, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_BreakVector_Z_1) == 0x000108, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000110, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x000118, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_Multiply_DoubleDouble_ReturnValue_4) == 0x000120, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_Multiply_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_Multiply_DoubleDouble_ReturnValue_5) == 0x000128, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_Multiply_DoubleDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_MakeVector2D_ReturnValue) == 0x000130, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_MakeVector2D_ReturnValue_1) == 0x000140, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_Add_IntInt_ReturnValue_3) == 0x000150, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, Temp_struct_Variable) == 0x000160, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_AddComponent_ReturnValue) == 0x0001C0, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0001C8, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_K2_AttachToComponent_ReturnValue) == 0x0001D0, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0001D8, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x0001E0, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_SetStartRoll_StartRoll_ImplicitCast) == 0x0001E8, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_SetStartRoll_StartRoll_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Spline_Mesh, CallFunc_SetEndRoll_EndRoll_ImplicitCast) == 0x0001EC, "Member 'BP_WaterfallTool_C_Setup_Spline_Mesh::CallFunc_SetEndRoll_EndRoll_ImplicitCast' has a wrong offset!");

// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Material Parameters
// 0x0088 (0x0088 - 0x0000)
struct BP_WaterfallTool_C_Setup_Material_Parameters final
{
public:
	class UMaterialInstanceDynamic*               Material;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Current_Index;                                     // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USplineComponent*                       Spline;                                            // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x004F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_2; // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_3; // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_4; // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_5; // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_6; // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_7; // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_8; // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_9; // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_10; // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WaterfallTool_C_Setup_Material_Parameters) == 0x000008, "Wrong alignment on BP_WaterfallTool_C_Setup_Material_Parameters");
static_assert(sizeof(BP_WaterfallTool_C_Setup_Material_Parameters) == 0x000088, "Wrong size on BP_WaterfallTool_C_Setup_Material_Parameters");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, Material) == 0x000000, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::Material' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, Current_Index) == 0x000008, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::Current_Index' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, Spline) == 0x000010, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::Spline' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000018, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_BreakRotator_Roll) == 0x000030, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_BreakRotator_Pitch) == 0x000034, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_BreakRotator_Yaw) == 0x000038, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x00003C, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_Subtract_IntInt_ReturnValue) == 0x000048, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00004C, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_IsValid_ReturnValue) == 0x00004D, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00004E, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_IsValid_ReturnValue_1) == 0x00004F, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x000050, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000054, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000058, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x000060, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_SetScalarParameterValue_Value_ImplicitCast_2) == 0x000064, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_SetScalarParameterValue_Value_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_SetScalarParameterValue_Value_ImplicitCast_3) == 0x000068, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_SetScalarParameterValue_Value_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_SetScalarParameterValue_Value_ImplicitCast_4) == 0x00006C, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_SetScalarParameterValue_Value_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_SetScalarParameterValue_Value_ImplicitCast_5) == 0x000070, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_SetScalarParameterValue_Value_ImplicitCast_5' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_SetScalarParameterValue_Value_ImplicitCast_6) == 0x000074, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_SetScalarParameterValue_Value_ImplicitCast_6' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_SetScalarParameterValue_Value_ImplicitCast_7) == 0x000078, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_SetScalarParameterValue_Value_ImplicitCast_7' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_SetScalarParameterValue_Value_ImplicitCast_8) == 0x00007C, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_SetScalarParameterValue_Value_ImplicitCast_8' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_SetScalarParameterValue_Value_ImplicitCast_9) == 0x000080, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_SetScalarParameterValue_Value_ImplicitCast_9' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Material_Parameters, CallFunc_SetScalarParameterValue_Value_ImplicitCast_10) == 0x000084, "Member 'BP_WaterfallTool_C_Setup_Material_Parameters::CallFunc_SetScalarParameterValue_Value_ImplicitCast_10' has a wrong offset!");

// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Adds Waterfall Particles
// 0x04A0 (0x04A0 - 0x0000)
struct BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable;                              // 0x0010(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Temp_struct_Variable_1;                            // 0x0070(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_AddComponent_ReturnValue;                 // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_AddComponent_ReturnValue_1;               // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Temp_struct_Variable_2;                            // 0x00E0(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       CallFunc_Array_Get_Item;                           // 0x0140(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_AddComponent_ReturnValue_2;               // 0x0148(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_154[0x4];                                      // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLocationAtSplinePoint_ReturnValue;     // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtSplinePoint_ReturnValue_1;   // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0188(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FVector>                        K2Node_MakeArray_Array;                            // 0x01A0(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult; // 0x01B0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_GetVectorArrayAverage_ReturnValue;        // 0x0298(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_1; // 0x02B0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_2; // 0x0398(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0480(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0484(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_485[0x3];                                      // 0x0485(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0488(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x048C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0490(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles) == 0x000010, "Wrong alignment on BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles");
static_assert(sizeof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles) == 0x0004A0, "Wrong size on BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, Temp_struct_Variable) == 0x000010, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, Temp_struct_Variable_1) == 0x000070, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, CallFunc_AddComponent_ReturnValue) == 0x0000D0, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, CallFunc_AddComponent_ReturnValue_1) == 0x0000D8, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::CallFunc_AddComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, Temp_struct_Variable_2) == 0x0000E0, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, CallFunc_Array_Get_Item) == 0x000140, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, CallFunc_AddComponent_ReturnValue_2) == 0x000148, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::CallFunc_AddComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x000150, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, CallFunc_GetLocationAtSplinePoint_ReturnValue) == 0x000158, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::CallFunc_GetLocationAtSplinePoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, CallFunc_GetLocationAtSplinePoint_ReturnValue_1) == 0x000170, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::CallFunc_GetLocationAtSplinePoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000188, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, K2Node_MakeArray_Array) == 0x0001A0, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult) == 0x0001B0, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, CallFunc_GetVectorArrayAverage_ReturnValue) == 0x000298, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::CallFunc_GetVectorArrayAverage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_1) == 0x0002B0, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_2) == 0x000398, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, CallFunc_Array_Length_ReturnValue) == 0x000480, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, CallFunc_Less_IntInt_ReturnValue) == 0x000484, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, CallFunc_Array_Add_ReturnValue) == 0x000488, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, CallFunc_Array_Add_ReturnValue_1) == 0x00048C, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles, CallFunc_Array_Add_ReturnValue_2) == 0x000490, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particles::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");

// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Adds Waterfall Particle Parameters
// 0x0130 (0x0130 - 0x0000)
struct BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_Array_Get_Item_1;                         // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_Array_Get_Item_2;                         // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_Array_Get_Item_3;                         // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_Array_Get_Item_4;                         // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_Array_Get_Item_5;                         // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78[0x8];                                       // 0x0078(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAdditionalCascades                    CallFunc_Array_Get_Item_6;                         // 0x0080(0x0090)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_115[0x3];                                      // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast;     // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast_1;   // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters) == 0x000010, "Wrong alignment on BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters");
static_assert(sizeof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters) == 0x000130, "Wrong size on BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, Temp_int_Variable) == 0x000000, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, Temp_int_Variable_1) == 0x000004, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, CallFunc_Add_IntInt_ReturnValue_1) == 0x00000C, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, CallFunc_Add_IntInt_ReturnValue_2) == 0x000018, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, CallFunc_Array_Length_ReturnValue_1) == 0x00002C, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, CallFunc_Array_Get_Item_1) == 0x000038, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, CallFunc_Array_Length_ReturnValue_2) == 0x000040, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, Temp_int_Variable_2) == 0x000044, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, CallFunc_Less_IntInt_ReturnValue_1) == 0x000048, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, CallFunc_Add_IntInt_ReturnValue_3) == 0x00004C, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, CallFunc_Array_Get_Item_2) == 0x000050, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, CallFunc_Less_IntInt_ReturnValue_2) == 0x000058, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, CallFunc_Array_Get_Item_3) == 0x000060, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, CallFunc_Array_Get_Item_4) == 0x000068, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, CallFunc_Array_Get_Item_5) == 0x000070, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, CallFunc_Array_Get_Item_6) == 0x000080, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::CallFunc_Array_Get_Item_6' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, CallFunc_Array_Length_ReturnValue_3) == 0x000110, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, CallFunc_Less_IntInt_ReturnValue_3) == 0x000114, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000118, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000120, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, CallFunc_SetFloatParameter_Param_ImplicitCast) == 0x000128, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::CallFunc_SetFloatParameter_Param_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters, CallFunc_SetFloatParameter_Param_ImplicitCast_1) == 0x00012C, "Member 'BP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters::CallFunc_SetFloatParameter_Param_ImplicitCast_1' has a wrong offset!");

// Function BP_WaterfallTool.BP_WaterfallTool_C.Set Waterfall Particle Effect Location
// 0x0108 (0x0108 - 0x0000)
struct BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location final
{
public:
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtSplinePoint_ReturnValue;     // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtSplinePoint_ReturnValue_1;   // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_2;                          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_2;                          // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_2;                          // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location) == 0x000008, "Wrong alignment on BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location");
static_assert(sizeof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location) == 0x000108, "Wrong size on BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location");
static_assert(offsetof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000000, "Member 'BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location, CallFunc_BreakVector_X) == 0x000008, "Member 'BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location, CallFunc_BreakVector_Y) == 0x000010, "Member 'BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location, CallFunc_BreakVector_Z) == 0x000018, "Member 'BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000028, "Member 'BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x000030, "Member 'BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location, CallFunc_RandomFloatInRange_ReturnValue) == 0x000038, "Member 'BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location, CallFunc_GetLocationAtSplinePoint_ReturnValue) == 0x000040, "Member 'BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location::CallFunc_GetLocationAtSplinePoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location, CallFunc_MakeVector_ReturnValue) == 0x000058, "Member 'BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location, CallFunc_BreakVector_X_1) == 0x000070, "Member 'BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location, CallFunc_BreakVector_Y_1) == 0x000078, "Member 'BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location, CallFunc_BreakVector_Z_1) == 0x000080, "Member 'BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location, CallFunc_MakeVector_ReturnValue_1) == 0x000088, "Member 'BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000A0, "Member 'BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location, CallFunc_GetLocationAtSplinePoint_ReturnValue_1) == 0x0000A8, "Member 'BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location::CallFunc_GetLocationAtSplinePoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x0000C0, "Member 'BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location, CallFunc_BreakVector_X_2) == 0x0000C8, "Member 'BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location, CallFunc_BreakVector_Y_2) == 0x0000D0, "Member 'BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location, CallFunc_BreakVector_Z_2) == 0x0000D8, "Member 'BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x0000E0, "Member 'BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x0000E8, "Member 'BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location, CallFunc_MakeVector_ReturnValue_2) == 0x0000F0, "Member 'BP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");

// Function BP_WaterfallTool.BP_WaterfallTool_C.Set Adds Waterfall Particle Effect Location
// 0x0230 (0x0230 - 0x0000)
struct BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location final
{
public:
	TArray<struct FAdditionalCascades>            Cascade_Splines_Data;                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>       Cascade_Top_Splash;                                // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       Cascade_Bottom_Splash;                             // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       Cascade_Mist;                                      // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class USplineComponent*>               Cascade_Spline_Comps;                              // 0x0040(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0xC];                                       // 0x0064(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAdditionalCascades                    CallFunc_Array_Get_Item;                           // 0x0070(0x0090)(HasGetValueTypeHash)
	class USplineComponent*                       CallFunc_Array_Get_Item_1;                         // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtSplinePoint_ReturnValue;     // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14C[0x4];                                      // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtSplinePoint_ReturnValue_1;   // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_Array_Get_Item_2;                         // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_Array_Get_Item_3;                         // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_2;                          // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_2;                          // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_2;                          // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_Array_Get_Item_4;                         // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x0210(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location) == 0x000010, "Wrong alignment on BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location");
static_assert(sizeof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location) == 0x000230, "Wrong size on BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, Cascade_Splines_Data) == 0x000000, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::Cascade_Splines_Data' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, Cascade_Top_Splash) == 0x000010, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::Cascade_Top_Splash' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, Cascade_Bottom_Splash) == 0x000020, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::Cascade_Bottom_Splash' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, Cascade_Mist) == 0x000030, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::Cascade_Mist' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, Cascade_Spline_Comps) == 0x000040, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::Cascade_Spline_Comps' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, Temp_int_Loop_Counter_Variable) == 0x000050, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_Less_IntInt_ReturnValue) == 0x00005C, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, Temp_int_Array_Index_Variable) == 0x000060, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_Array_Get_Item) == 0x000070, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_Array_Get_Item_1) == 0x000100, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_GetLocationAtSplinePoint_ReturnValue) == 0x000108, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_GetLocationAtSplinePoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000120, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_BreakVector_X) == 0x000128, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_BreakVector_Y) == 0x000130, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_BreakVector_Z) == 0x000138, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000140, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x000148, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000150, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_GetLocationAtSplinePoint_ReturnValue_1) == 0x000158, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_GetLocationAtSplinePoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_RandomFloatInRange_ReturnValue) == 0x000170, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_BreakVector_X_1) == 0x000178, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_BreakVector_Y_1) == 0x000180, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_BreakVector_Z_1) == 0x000188, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_MakeVector_ReturnValue) == 0x000190, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_MakeVector_ReturnValue_1) == 0x0001A8, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_Array_Get_Item_2) == 0x0001C0, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_Array_Get_Item_3) == 0x0001C8, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_BreakVector_X_2) == 0x0001D0, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_BreakVector_Y_2) == 0x0001D8, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_BreakVector_Z_2) == 0x0001E0, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_Array_Get_Item_4) == 0x0001E8, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0001F0, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x0001F8, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000200, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000208, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_MakeVector_ReturnValue_2) == 0x000210, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000228, "Member 'BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_WaterfallTool.BP_WaterfallTool_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_WaterfallTool_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WaterfallTool_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_WaterfallTool_C_ReceiveTick");
static_assert(sizeof(BP_WaterfallTool_C_ReceiveTick) == 0x000004, "Wrong size on BP_WaterfallTool_C_ReceiveTick");
static_assert(offsetof(BP_WaterfallTool_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_WaterfallTool_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_WaterfallTool.BP_WaterfallTool_C.ExecuteUbergraph_BP_WaterfallTool
// 0x0010 (0x0010 - 0x0000)
struct BP_WaterfallTool_C_ExecuteUbergraph_BP_WaterfallTool final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WaterfallTool_C_ExecuteUbergraph_BP_WaterfallTool) == 0x000004, "Wrong alignment on BP_WaterfallTool_C_ExecuteUbergraph_BP_WaterfallTool");
static_assert(sizeof(BP_WaterfallTool_C_ExecuteUbergraph_BP_WaterfallTool) == 0x000010, "Wrong size on BP_WaterfallTool_C_ExecuteUbergraph_BP_WaterfallTool");
static_assert(offsetof(BP_WaterfallTool_C_ExecuteUbergraph_BP_WaterfallTool, EntryPoint) == 0x000000, "Member 'BP_WaterfallTool_C_ExecuteUbergraph_BP_WaterfallTool::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_ExecuteUbergraph_BP_WaterfallTool, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'BP_WaterfallTool_C_ExecuteUbergraph_BP_WaterfallTool::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_ExecuteUbergraph_BP_WaterfallTool, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'BP_WaterfallTool_C_ExecuteUbergraph_BP_WaterfallTool::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_ExecuteUbergraph_BP_WaterfallTool, K2Node_Event_DeltaSeconds) == 0x00000C, "Member 'BP_WaterfallTool_C_ExecuteUbergraph_BP_WaterfallTool::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BP_WaterfallTool.BP_WaterfallTool_C.Do Waterfall Trace
// 0x02D0 (0x02D0 - 0x0000)
struct BP_WaterfallTool_C_Do_Waterfall_Trace final
{
public:
	class USplineComponent*                       Spline_Input;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        Scale;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Actors_to_Ignore_0;                                // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLocationAtSplinePoint_ReturnValue;     // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtSplinePoint_ReturnValue_1;   // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_BoxTraceSingle_OutHit;                    // 0x00E0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BoxTraceSingle_ReturnValue;               // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x01CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CB[0x1];                                      // 0x01CB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D4[0x4];                                      // 0x01D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0208(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0220(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0240(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0248(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26C[0x4];                                      // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0270(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0288(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x02B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WaterfallTool_C_Do_Waterfall_Trace) == 0x000008, "Wrong alignment on BP_WaterfallTool_C_Do_Waterfall_Trace");
static_assert(sizeof(BP_WaterfallTool_C_Do_Waterfall_Trace) == 0x0002D0, "Wrong size on BP_WaterfallTool_C_Do_Waterfall_Trace");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, Spline_Input) == 0x000000, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::Spline_Input' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, Scale) == 0x000008, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::Scale' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, Actors_to_Ignore_0) == 0x000010, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::Actors_to_Ignore_0' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000020, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000040, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_MakeVector_ReturnValue) == 0x000058, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x000070, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_Subtract_IntInt_ReturnValue) == 0x000074, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000078, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_GetLocationAtSplinePoint_ReturnValue) == 0x000080, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_GetLocationAtSplinePoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_GetLocationAtSplinePoint_ReturnValue_1) == 0x000098, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_GetLocationAtSplinePoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakVector_X) == 0x0000B0, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakVector_Y) == 0x0000B8, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakVector_Z) == 0x0000C0, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_Add_VectorVector_ReturnValue) == 0x0000C8, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BoxTraceSingle_OutHit) == 0x0000E0, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BoxTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BoxTraceSingle_ReturnValue) == 0x0001C8, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BoxTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakHitResult_bBlockingHit) == 0x0001C9, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakHitResult_bInitialOverlap) == 0x0001CA, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakHitResult_Time) == 0x0001CC, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakHitResult_Distance) == 0x0001D0, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakHitResult_Location) == 0x0001D8, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakHitResult_ImpactPoint) == 0x0001F0, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakHitResult_Normal) == 0x000208, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakHitResult_ImpactNormal) == 0x000220, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakHitResult_PhysMat) == 0x000238, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakHitResult_HitActor) == 0x000240, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakHitResult_HitComponent) == 0x000248, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakHitResult_HitBoneName) == 0x000250, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakHitResult_BoneName) == 0x000258, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakHitResult_HitItem) == 0x000260, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakHitResult_ElementIndex) == 0x000264, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakHitResult_FaceIndex) == 0x000268, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakHitResult_TraceStart) == 0x000270, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakHitResult_TraceEnd) == 0x000288, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakVector_X_1) == 0x0002A0, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakVector_Y_1) == 0x0002A8, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_BreakVector_Z_1) == 0x0002B0, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Do_Waterfall_Trace, CallFunc_MakeVector_ReturnValue_1) == 0x0002B8, "Member 'BP_WaterfallTool_C_Do_Waterfall_Trace::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");

// Function BP_WaterfallTool.BP_WaterfallTool_C.CheckIntervalByDistance
// 0x0040 (0x0040 - 0x0000)
struct BP_WaterfallTool_C_CheckIntervalByDistance final
{
public:
	double                                        Distance;                                          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Interval;                                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetNearstPlayerDistance2D_ReturnValue;    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetActorTickInterval_TickInterval_ImplicitCast; // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_Distance_ImplicitCast;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WaterfallTool_C_CheckIntervalByDistance) == 0x000008, "Wrong alignment on BP_WaterfallTool_C_CheckIntervalByDistance");
static_assert(sizeof(BP_WaterfallTool_C_CheckIntervalByDistance) == 0x000040, "Wrong size on BP_WaterfallTool_C_CheckIntervalByDistance");
static_assert(offsetof(BP_WaterfallTool_C_CheckIntervalByDistance, Distance) == 0x000000, "Member 'BP_WaterfallTool_C_CheckIntervalByDistance::Distance' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_CheckIntervalByDistance, Interval) == 0x000008, "Member 'BP_WaterfallTool_C_CheckIntervalByDistance::Interval' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_CheckIntervalByDistance, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_WaterfallTool_C_CheckIntervalByDistance::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_CheckIntervalByDistance, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000011, "Member 'BP_WaterfallTool_C_CheckIntervalByDistance::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_CheckIntervalByDistance, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BP_WaterfallTool_C_CheckIntervalByDistance::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_CheckIntervalByDistance, CallFunc_GetNearstPlayerDistance2D_ReturnValue) == 0x000030, "Member 'BP_WaterfallTool_C_CheckIntervalByDistance::CallFunc_GetNearstPlayerDistance2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_CheckIntervalByDistance, CallFunc_SetActorTickInterval_TickInterval_ImplicitCast) == 0x000034, "Member 'BP_WaterfallTool_C_CheckIntervalByDistance::CallFunc_SetActorTickInterval_TickInterval_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_CheckIntervalByDistance, K2Node_VariableSet_Distance_ImplicitCast) == 0x000038, "Member 'BP_WaterfallTool_C_CheckIntervalByDistance::K2Node_VariableSet_Distance_ImplicitCast' has a wrong offset!");

// Function BP_WaterfallTool.BP_WaterfallTool_C.Check Spline Input Keys
// 0x0280 (0x0280 - 0x0000)
struct BP_WaterfallTool_C_Check_Spline_Input_Keys final
{
public:
	TArray<struct FAdditionalCascades>            Cascades_In;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Passed;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAdditionalCascades                    CallFunc_Array_Get_Item;                           // 0x0040(0x0090)(HasGetValueTypeHash)
	struct FSplinePoint                           CallFunc_Array_Get_Item_1;                         // 0x00D0(0x0088)(NoDestructor)
	struct FSplinePoint                           CallFunc_Array_Get_Item_2;                         // 0x0158(0x0088)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EA[0x2];                                      // 0x01EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F5[0x3];                                      // 0x01F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FC[0x4];                                      // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_214[0x4];                                      // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0228(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_239[0x7];                                      // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0240(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_264[0x4];                                      // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast;   // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FTrunc_A_ImplicitCast;                    // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WaterfallTool_C_Check_Spline_Input_Keys) == 0x000010, "Wrong alignment on BP_WaterfallTool_C_Check_Spline_Input_Keys");
static_assert(sizeof(BP_WaterfallTool_C_Check_Spline_Input_Keys) == 0x000280, "Wrong size on BP_WaterfallTool_C_Check_Spline_Input_Keys");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, Cascades_In) == 0x000000, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::Cascades_In' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, Passed) == 0x000010, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::Passed' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, Temp_int_Array_Index_Variable_1) == 0x00001C, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_Conv_IntToString_ReturnValue) == 0x000020, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, Temp_int_Array_Index_Variable_2) == 0x00003C, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_Array_Get_Item_1) == 0x0000D0, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_Array_Get_Item_2) == 0x000158, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_Array_Length_ReturnValue_1) == 0x0001E0, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_FTrunc_ReturnValue) == 0x0001E4, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x0001E8, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001E9, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_Array_Length_ReturnValue_2) == 0x0001EC, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, Temp_int_Loop_Counter_Variable_1) == 0x0001F0, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001F4, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001F8, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_MakeLiteralString_ReturnValue) == 0x000200, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, Temp_int_Loop_Counter_Variable_2) == 0x000210, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_Concat_StrStr_ReturnValue) == 0x000218, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000228, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_Less_IntInt_ReturnValue_2) == 0x000238, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000240, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000250, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_Add_IntInt_ReturnValue_2) == 0x000260, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast) == 0x000268, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast) == 0x000270, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_WaterfallTool_C_Check_Spline_Input_Keys, CallFunc_FTrunc_A_ImplicitCast) == 0x000278, "Member 'BP_WaterfallTool_C_Check_Spline_Input_Keys::CallFunc_FTrunc_A_ImplicitCast' has a wrong offset!");

}

