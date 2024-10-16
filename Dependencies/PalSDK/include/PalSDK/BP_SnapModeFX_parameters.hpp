#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SnapModeFX.BP_SnapModeFX_C.ExecuteUbergraph_BP_SnapModeFX
// 0x0020 (0x0020 - 0x0000)
struct BP_SnapModeFX_C_ExecuteUbergraph_BP_SnapModeFX final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentScale_ReturnValue;         // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SnapModeFX_C_ExecuteUbergraph_BP_SnapModeFX) == 0x000008, "Wrong alignment on BP_SnapModeFX_C_ExecuteUbergraph_BP_SnapModeFX");
static_assert(sizeof(BP_SnapModeFX_C_ExecuteUbergraph_BP_SnapModeFX) == 0x000020, "Wrong size on BP_SnapModeFX_C_ExecuteUbergraph_BP_SnapModeFX");
static_assert(offsetof(BP_SnapModeFX_C_ExecuteUbergraph_BP_SnapModeFX, EntryPoint) == 0x000000, "Member 'BP_SnapModeFX_C_ExecuteUbergraph_BP_SnapModeFX::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ExecuteUbergraph_BP_SnapModeFX, CallFunc_K2_GetComponentScale_ReturnValue) == 0x000008, "Member 'BP_SnapModeFX_C_ExecuteUbergraph_BP_SnapModeFX::CallFunc_K2_GetComponentScale_ReturnValue' has a wrong offset!");

// Function BP_SnapModeFX.BP_SnapModeFX_C.Hide
// 0x0100 (0x0100 - 0x0000)
struct BP_SnapModeFX_C_Hide final
{
public:
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0018(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SnapModeFX_C_Hide) == 0x000008, "Wrong alignment on BP_SnapModeFX_C_Hide");
static_assert(sizeof(BP_SnapModeFX_C_Hide) == 0x000100, "Wrong size on BP_SnapModeFX_C_Hide");
static_assert(offsetof(BP_SnapModeFX_C_Hide, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000000, "Member 'BP_SnapModeFX_C_Hide::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_Hide, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000018, "Member 'BP_SnapModeFX_C_Hide::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");

// Function BP_SnapModeFX.BP_SnapModeFX_C.ShowCenterSnap
// 0x0468 (0x0468 - 0x0000)
struct BP_SnapModeFX_C_ShowCenterSnap final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotation;                                          // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                BoxExtent;                                         // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SnapStart;                                         // 0x0048(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SnapEnd;                                           // 0x0060(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAttachWall;                                      // 0x0078(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0080(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentScale_ReturnValue;         // 0x0188(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x01E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_BreakVector_X_2;                          // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_2;                          // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_2;                          // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0220(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x0320(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0338(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0350(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult; // 0x0368(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_Divide_VectorVector_ReturnValue;          // 0x0450(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SnapModeFX_C_ShowCenterSnap) == 0x000008, "Wrong alignment on BP_SnapModeFX_C_ShowCenterSnap");
static_assert(sizeof(BP_SnapModeFX_C_ShowCenterSnap) == 0x000468, "Wrong size on BP_SnapModeFX_C_ShowCenterSnap");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, Location) == 0x000000, "Member 'BP_SnapModeFX_C_ShowCenterSnap::Location' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, Rotation) == 0x000018, "Member 'BP_SnapModeFX_C_ShowCenterSnap::Rotation' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, BoxExtent) == 0x000030, "Member 'BP_SnapModeFX_C_ShowCenterSnap::BoxExtent' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, SnapStart) == 0x000048, "Member 'BP_SnapModeFX_C_ShowCenterSnap::SnapStart' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, SnapEnd) == 0x000060, "Member 'BP_SnapModeFX_C_ShowCenterSnap::SnapEnd' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, IsAttachWall) == 0x000078, "Member 'BP_SnapModeFX_C_ShowCenterSnap::IsAttachWall' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000080, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_SelectFloat_ReturnValue) == 0x000168, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_MakeVector_ReturnValue) == 0x000170, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_K2_GetComponentScale_ReturnValue) == 0x000188, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_K2_GetComponentScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_BreakVector_X) == 0x0001A0, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_BreakVector_Y) == 0x0001A8, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_BreakVector_Z) == 0x0001B0, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_MakeVector_ReturnValue_1) == 0x0001B8, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_BreakVector_X_1) == 0x0001D0, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_BreakVector_Y_1) == 0x0001D8, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_BreakVector_Z_1) == 0x0001E0, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_FindLookAtRotation_ReturnValue) == 0x0001E8, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_BreakVector_X_2) == 0x000200, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_BreakVector_Y_2) == 0x000208, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_BreakVector_Z_2) == 0x000210, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_Vector_Distance_ReturnValue) == 0x000218, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000220, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000308, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000310, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_Divide_DoubleDouble_ReturnValue_2) == 0x000318, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_Divide_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_MakeVector_ReturnValue_2) == 0x000320, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_Add_VectorVector_ReturnValue) == 0x000338, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000350, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult) == 0x000368, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowCenterSnap, CallFunc_Divide_VectorVector_ReturnValue) == 0x000450, "Member 'BP_SnapModeFX_C_ShowCenterSnap::CallFunc_Divide_VectorVector_ReturnValue' has a wrong offset!");

// Function BP_SnapModeFX.BP_SnapModeFX_C.ShowSnap
// 0x0178 (0x0178 - 0x0000)
struct BP_SnapModeFX_C_ShowSnap final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotation;                                          // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                BoxExtent;                                         // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult; // 0x0078(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_Divide_VectorVector_ReturnValue;          // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SnapModeFX_C_ShowSnap) == 0x000008, "Wrong alignment on BP_SnapModeFX_C_ShowSnap");
static_assert(sizeof(BP_SnapModeFX_C_ShowSnap) == 0x000178, "Wrong size on BP_SnapModeFX_C_ShowSnap");
static_assert(offsetof(BP_SnapModeFX_C_ShowSnap, Location) == 0x000000, "Member 'BP_SnapModeFX_C_ShowSnap::Location' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowSnap, Rotation) == 0x000018, "Member 'BP_SnapModeFX_C_ShowSnap::Rotation' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowSnap, BoxExtent) == 0x000030, "Member 'BP_SnapModeFX_C_ShowSnap::BoxExtent' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowSnap, CallFunc_Add_VectorVector_ReturnValue) == 0x000048, "Member 'BP_SnapModeFX_C_ShowSnap::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowSnap, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000060, "Member 'BP_SnapModeFX_C_ShowSnap::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowSnap, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult) == 0x000078, "Member 'BP_SnapModeFX_C_ShowSnap::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SnapModeFX_C_ShowSnap, CallFunc_Divide_VectorVector_ReturnValue) == 0x000160, "Member 'BP_SnapModeFX_C_ShowSnap::CallFunc_Divide_VectorVector_ReturnValue' has a wrong offset!");

}

