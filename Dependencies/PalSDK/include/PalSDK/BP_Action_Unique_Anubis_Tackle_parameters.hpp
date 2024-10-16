#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.ChargeAndRotate
// 0x01D0 (0x01D0 - 0x0000)
struct BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PlayerVelocityY0;                                  // 0x0008(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PlayerAimMoveSpeed;                                // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AverageSpeed;                                      // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PredictTime;                                       // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Distance;                                          // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue_1;            // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue_2;            // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18A[0x6];                                      // 0x018A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue_1;                      // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GeneralTurnLinear_DeltaTime_ImplicitCast; // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate) == 0x000008, "Wrong alignment on BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate");
static_assert(sizeof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate) == 0x0001D0, "Wrong size on BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, DeltaTime) == 0x000000, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, PlayerVelocityY0) == 0x000008, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::PlayerVelocityY0' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, PlayerAimMoveSpeed) == 0x000020, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::PlayerAimMoveSpeed' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, AverageSpeed) == 0x000028, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::AverageSpeed' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, PredictTime) == 0x000030, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::PredictTime' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, Distance) == 0x000038, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::Distance' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_GetActionCharacter_ReturnValue) == 0x000040, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000048, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000050, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_GetActionTarget_ReturnValue) == 0x000068, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000070, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000088, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_Add_VectorVector_ReturnValue) == 0x0000A0, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000B8, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_Normal_ReturnValue) == 0x0000D0, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x0000E8, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000100, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_GetActionTarget_ReturnValue_1) == 0x000108, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_GetActionTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_GetVelocity_ReturnValue) == 0x000110, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000128, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_BreakVector_X) == 0x000130, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_BreakVector_Y) == 0x000138, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_BreakVector_Z) == 0x000140, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000148, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_MakeVector_ReturnValue) == 0x000160, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_VSize_ReturnValue) == 0x000178, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_GetActionTarget_ReturnValue_2) == 0x000180, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_GetActionTarget_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000188, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_IsValid_ReturnValue) == 0x000189, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000190, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x0001A8, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_VSize_ReturnValue_1) == 0x0001C0, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_VSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate, CallFunc_GeneralTurnLinear_DeltaTime_ImplicitCast) == 0x0001C8, "Member 'BP_Action_Unique_Anubis_Tackle_C_ChargeAndRotate::CallFunc_GeneralTurnLinear_DeltaTime_ImplicitCast' has a wrong offset!");

// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.CheckEndTackle
// 0x0118 (0x0118 - 0x0000)
struct BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnd;                                             // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ToVector;                                          // 0x0010(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSizeSquared_ReturnValue;                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Dot_VectorVector_ReturnValue;             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X;                            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0100(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle) == 0x000008, "Wrong alignment on BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle");
static_assert(sizeof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle) == 0x000118, "Wrong size on BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, DeltaTime) == 0x000000, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, IsEnd) == 0x000008, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::IsEnd' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, ToVector) == 0x000010, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::ToVector' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, CallFunc_VSizeSquared_ReturnValue) == 0x000028, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::CallFunc_VSizeSquared_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000030, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, CallFunc_Dot_VectorVector_ReturnValue) == 0x000040, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000048, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000049, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, CallFunc_GetActionCharacter_ReturnValue) == 0x000050, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000058, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000060, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, CallFunc_LessEqual_DoubleDouble_ReturnValue_1) == 0x000078, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::CallFunc_LessEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, CallFunc_BreakVector_X) == 0x000080, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, CallFunc_BreakVector_Y) == 0x000088, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, CallFunc_BreakVector_Z) == 0x000090, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, CallFunc_MakeVector_ReturnValue) == 0x000098, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, CallFunc_GetActionTarget_ReturnValue) == 0x0000B0, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000B8, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, CallFunc_BreakVector_X_1) == 0x0000D0, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, CallFunc_BreakVector_Y_1) == 0x0000D8, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, CallFunc_BreakVector_Z_1) == 0x0000E0, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, CallFunc_MakeVector_ReturnValue_1) == 0x0000E8, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000100, "Member 'BP_Action_Unique_Anubis_Tackle_C_CheckEndTackle::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");

// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle
// 0x01C8 (0x01C8 - 0x0000)
struct BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           K2Node_CustomEvent_Montage;                        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAnimInstance*                       K2Node_DynamicCast_AsPal_Anim_Instance;            // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckEndTackle_IsEnd;                     // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue_1;                // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue_1;            // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue_2;                // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Montage_IsPlaying_ReturnValue;            // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraComponent>       CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x00C0(0x0030)(InstancedReference, UObjectWrapper, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue_1;        // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UNiagaraComponent>       CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1; // 0x0100(0x0030)(InstancedReference, UObjectWrapper, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue_1;        // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue_1;           // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_4;         // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UAnimMontage* Montage, class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate;              // 0x0180(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_193[0x5];                                      // 0x0193(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_5;         // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_BrakingFrictionFactor_ImplicitCast; // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AC[0x4];                                      // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_StopMovement_DeltaTime_ImplicitCast;      // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_TackleMovement_DeltaTime_ImplicitCast;    // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_CheckEndTackle_DeltaTime_ImplicitCast;    // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle) == 0x000008, "Wrong alignment on BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle");
static_assert(sizeof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle) == 0x0001C8, "Wrong size on BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, EntryPoint) == 0x000000, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, K2Node_CustomEvent_Montage) == 0x000010, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::K2Node_CustomEvent_Montage' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, K2Node_CustomEvent_NotifyName) == 0x000018, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000020, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x000021, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000028, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_GetForwardVector_ReturnValue) == 0x000040, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_GetMainMesh_ReturnValue) == 0x000058, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_GetAnimInstance_ReturnValue) == 0x000060, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, K2Node_Event_DeltaTime) == 0x000068, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, K2Node_DynamicCast_AsPal_Anim_Instance) == 0x000070, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::K2Node_DynamicCast_AsPal_Anim_Instance' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_CheckEndTackle_IsEnd) == 0x000079, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_CheckEndTackle_IsEnd' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, K2Node_SwitchEnum_CmpSuccess) == 0x00007A, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, K2Node_SwitchEnum_CmpSuccess_1) == 0x00007B, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000080, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, K2Node_SwitchEnum_CmpSuccess_2) == 0x000088, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_GetMainMesh_ReturnValue_1) == 0x000090, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_GetMainMesh_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000098, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_GetAnimInstance_ReturnValue_1) == 0x0000A0, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_GetAnimInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_GetMainMesh_ReturnValue_2) == 0x0000A8, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_GetMainMesh_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_Montage_IsPlaying_ReturnValue) == 0x0000B0, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_Montage_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_SpawnSystemAttached_ReturnValue) == 0x0000B8, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x0000C0, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_SpawnSystemAttached_ReturnValue_1) == 0x0000F0, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_SpawnSystemAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, Temp_bool_Has_Been_Initd_Variable) == 0x0000F8, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1) == 0x000100, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_GetActionCharacter_ReturnValue_3) == 0x000130, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, Temp_bool_IsClosed_Variable) == 0x000138, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_K2_GetActorRotation_ReturnValue_1) == 0x000140, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_K2_GetActorRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_GetForwardVector_ReturnValue_1) == 0x000158, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_GetForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_Array_Add_ReturnValue) == 0x000170, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_Array_Add_ReturnValue_1) == 0x000174, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_GetActionCharacter_ReturnValue_4) == 0x000178, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_GetActionCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, K2Node_CreateDelegate_OutputDelegate) == 0x000180, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_IsDead_ReturnValue) == 0x000190, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_Not_PreBool_ReturnValue) == 0x000191, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_BooleanAND_ReturnValue) == 0x000192, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_GetActionCharacter_ReturnValue_5) == 0x000198, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_GetActionCharacter_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_GetComponentByClass_ReturnValue) == 0x0001A0, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, K2Node_VariableSet_BrakingFrictionFactor_ImplicitCast) == 0x0001A8, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::K2Node_VariableSet_BrakingFrictionFactor_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_StopMovement_DeltaTime_ImplicitCast) == 0x0001B0, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_StopMovement_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_TackleMovement_DeltaTime_ImplicitCast) == 0x0001B8, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_TackleMovement_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle, CallFunc_CheckEndTackle_DeltaTime_ImplicitCast) == 0x0001C0, "Member 'BP_Action_Unique_Anubis_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle::CallFunc_CheckEndTackle_DeltaTime_ImplicitCast' has a wrong offset!");

// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.GetDesiredTransformOfOmenEffect
// 0x02C0 (0x02C0 - 0x0000)
struct BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect final
{
public:
	double                                        ScaleY;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ScaleZ;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Transform;                                         // 0x0010(0x0060)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorScale3D_ReturnValue;              // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Divide_VectorFloat_ReturnValue;           // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0118(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Divide_VectorFloat_ReturnValue_1;         // 0x0130(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_184[0x4];                                      // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x01E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0200(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_2;                          // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_2;                          // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_2;                          // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0230(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x0248(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0260(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect) == 0x000010, "Wrong alignment on BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect");
static_assert(sizeof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect) == 0x0002C0, "Wrong size on BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, ScaleY) == 0x000000, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::ScaleY' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, ScaleZ) == 0x000008, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::ScaleZ' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, Transform) == 0x000010, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::Transform' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_GetActionTarget_ReturnValue) == 0x000070, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_GetActionCharacter_ReturnValue) == 0x000078, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000080, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_GetActorScale3D_ReturnValue) == 0x000098, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_GetActorScale3D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_Divide_VectorFloat_ReturnValue) == 0x0000B0, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_Divide_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_BreakVector_X) == 0x0000C8, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_BreakVector_Y) == 0x0000D0, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_BreakVector_Z) == 0x0000D8, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000E0, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000F8, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_BreakVector_X_1) == 0x000100, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_BreakVector_Y_1) == 0x000108, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_BreakVector_Z_1) == 0x000110, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000118, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_Divide_VectorFloat_ReturnValue_1) == 0x000130, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_Divide_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_MakeRotFromX_ReturnValue) == 0x000148, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_Add_VectorVector_ReturnValue) == 0x000160, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_BreakRotator_Roll) == 0x000178, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_BreakRotator_Pitch) == 0x00017C, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_BreakRotator_Yaw) == 0x000180, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_VSize_ReturnValue) == 0x000188, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_MakeRotator_ReturnValue) == 0x000190, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0001A8, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_Normal_ReturnValue) == 0x0001B0, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0001C8, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0001D0, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_MakeVector_ReturnValue) == 0x0001E8, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000200, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_BreakVector_X_2) == 0x000218, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_BreakVector_Y_2) == 0x000220, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_BreakVector_Z_2) == 0x000228, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_MakeVector_ReturnValue_1) == 0x000230, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_Add_VectorVector_ReturnValue_2) == 0x000248, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect, CallFunc_MakeTransform_ReturnValue) == 0x000260, "Member 'BP_Action_Unique_Anubis_Tackle_C_GetDesiredTransformOfOmenEffect::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");

// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.OnMontageNotifyBeginDelegate_イベント_0
// 0x0010 (0x0010 - 0x0000)
struct BP_Action_Unique_Anubis_Tackle_C_OnMontageNotifyBeginDelegate______________0 final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   NotifyName;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_Tackle_C_OnMontageNotifyBeginDelegate______________0) == 0x000008, "Wrong alignment on BP_Action_Unique_Anubis_Tackle_C_OnMontageNotifyBeginDelegate______________0");
static_assert(sizeof(BP_Action_Unique_Anubis_Tackle_C_OnMontageNotifyBeginDelegate______________0) == 0x000010, "Wrong size on BP_Action_Unique_Anubis_Tackle_C_OnMontageNotifyBeginDelegate______________0");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_OnMontageNotifyBeginDelegate______________0, Montage) == 0x000000, "Member 'BP_Action_Unique_Anubis_Tackle_C_OnMontageNotifyBeginDelegate______________0::Montage' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_OnMontageNotifyBeginDelegate______________0, NotifyName) == 0x000008, "Member 'BP_Action_Unique_Anubis_Tackle_C_OnMontageNotifyBeginDelegate______________0::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.PlayEndMontage
// 0x0010 (0x0010 - 0x0000)
struct BP_Action_Unique_Anubis_Tackle_C_PlayEndMontage final
{
public:
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimMontage_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_Tackle_C_PlayEndMontage) == 0x000008, "Wrong alignment on BP_Action_Unique_Anubis_Tackle_C_PlayEndMontage");
static_assert(sizeof(BP_Action_Unique_Anubis_Tackle_C_PlayEndMontage) == 0x000010, "Wrong size on BP_Action_Unique_Anubis_Tackle_C_PlayEndMontage");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_PlayEndMontage, CallFunc_GetActionCharacter_ReturnValue) == 0x000000, "Member 'BP_Action_Unique_Anubis_Tackle_C_PlayEndMontage::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_PlayEndMontage, CallFunc_PlayAnimMontage_ReturnValue) == 0x000008, "Member 'BP_Action_Unique_Anubis_Tackle_C_PlayEndMontage::CallFunc_PlayAnimMontage_ReturnValue' has a wrong offset!");

// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.SetHiddenAllNiagara
// 0x0068 (0x0068 - 0x0000)
struct BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UNiagaraComponent>       CallFunc_Array_Get_Item;                           // 0x0010(0x0030)(InstancedReference, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      K2Node_DynamicCast_AsNiagara_Particle_System_Component; // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara) == 0x000008, "Wrong alignment on BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara");
static_assert(sizeof(BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara) == 0x000068, "Wrong size on BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000048, "Member 'BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara, K2Node_DynamicCast_AsNiagara_Particle_System_Component) == 0x000058, "Member 'BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara::K2Node_DynamicCast_AsNiagara_Particle_System_Component' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara, CallFunc_IsValid_ReturnValue) == 0x000061, "Member 'BP_Action_Unique_Anubis_Tackle_C_SetHiddenAllNiagara::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.StopAllMontage
// 0x0018 (0x0018 - 0x0000)
struct BP_Action_Unique_Anubis_Tackle_C_StopAllMontage final
{
public:
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_Tackle_C_StopAllMontage) == 0x000008, "Wrong alignment on BP_Action_Unique_Anubis_Tackle_C_StopAllMontage");
static_assert(sizeof(BP_Action_Unique_Anubis_Tackle_C_StopAllMontage) == 0x000018, "Wrong size on BP_Action_Unique_Anubis_Tackle_C_StopAllMontage");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_StopAllMontage, CallFunc_GetActionCharacter_ReturnValue) == 0x000000, "Member 'BP_Action_Unique_Anubis_Tackle_C_StopAllMontage::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_StopAllMontage, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000008, "Member 'BP_Action_Unique_Anubis_Tackle_C_StopAllMontage::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_StopAllMontage, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000010, "Member 'BP_Action_Unique_Anubis_Tackle_C_StopAllMontage::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");

// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.StopMovement
// 0x00E0 (0x00E0 - 0x0000)
struct BP_Action_Unique_Anubis_Tackle_C_StopMovement final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_Tackle_C_StopMovement) == 0x000008, "Wrong alignment on BP_Action_Unique_Anubis_Tackle_C_StopMovement");
static_assert(sizeof(BP_Action_Unique_Anubis_Tackle_C_StopMovement) == 0x0000E0, "Wrong size on BP_Action_Unique_Anubis_Tackle_C_StopMovement");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_StopMovement, DeltaTime) == 0x000000, "Member 'BP_Action_Unique_Anubis_Tackle_C_StopMovement::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_StopMovement, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_Action_Unique_Anubis_Tackle_C_StopMovement::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_StopMovement, CallFunc_GetActorForwardVector_ReturnValue) == 0x000010, "Member 'BP_Action_Unique_Anubis_Tackle_C_StopMovement::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_StopMovement, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000028, "Member 'BP_Action_Unique_Anubis_Tackle_C_StopMovement::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_StopMovement, CallFunc_GetComponentByClass_ReturnValue) == 0x000040, "Member 'BP_Action_Unique_Anubis_Tackle_C_StopMovement::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_StopMovement, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000048, "Member 'BP_Action_Unique_Anubis_Tackle_C_StopMovement::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_StopMovement, CallFunc_BreakVector_X) == 0x000060, "Member 'BP_Action_Unique_Anubis_Tackle_C_StopMovement::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_StopMovement, CallFunc_BreakVector_Y) == 0x000068, "Member 'BP_Action_Unique_Anubis_Tackle_C_StopMovement::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_StopMovement, CallFunc_BreakVector_Z) == 0x000070, "Member 'BP_Action_Unique_Anubis_Tackle_C_StopMovement::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_StopMovement, CallFunc_Conv_DoubleToVector_ReturnValue_1) == 0x000078, "Member 'BP_Action_Unique_Anubis_Tackle_C_StopMovement::CallFunc_Conv_DoubleToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_StopMovement, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x000090, "Member 'BP_Action_Unique_Anubis_Tackle_C_StopMovement::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_StopMovement, CallFunc_BreakVector_X_1) == 0x0000A8, "Member 'BP_Action_Unique_Anubis_Tackle_C_StopMovement::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_StopMovement, CallFunc_BreakVector_Y_1) == 0x0000B0, "Member 'BP_Action_Unique_Anubis_Tackle_C_StopMovement::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_StopMovement, CallFunc_BreakVector_Z_1) == 0x0000B8, "Member 'BP_Action_Unique_Anubis_Tackle_C_StopMovement::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_StopMovement, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000C0, "Member 'BP_Action_Unique_Anubis_Tackle_C_StopMovement::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_StopMovement, CallFunc_MakeVector_ReturnValue) == 0x0000C8, "Member 'BP_Action_Unique_Anubis_Tackle_C_StopMovement::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.TackleMotament
// 0x0208 (0x0208 - 0x0000)
struct BP_Action_Unique_Anubis_Tackle_C_TackleMotament final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ToVector;                                          // 0x0008(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_CutVectorByAngle_ReturnValue;             // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Vector_Normal2D_ReturnValue;              // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_ClampVectorSize_ReturnValue;              // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x00D8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C1[0x7];                                      // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x01E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CutVectorByAngle_maxAngleDegree_ImplicitCast; // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_Tackle_C_TackleMotament) == 0x000008, "Wrong alignment on BP_Action_Unique_Anubis_Tackle_C_TackleMotament");
static_assert(sizeof(BP_Action_Unique_Anubis_Tackle_C_TackleMotament) == 0x000208, "Wrong size on BP_Action_Unique_Anubis_Tackle_C_TackleMotament");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMotament, DeltaTime) == 0x000000, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMotament::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMotament, ToVector) == 0x000008, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMotament::ToVector' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMotament, CallFunc_GetActionCharacter_ReturnValue) == 0x000020, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMotament::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMotament, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMotament::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMotament, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMotament::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMotament, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000048, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMotament::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMotament, CallFunc_CutVectorByAngle_ReturnValue) == 0x000050, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMotament::CallFunc_CutVectorByAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMotament, CallFunc_Vector_Normal2D_ReturnValue) == 0x000068, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMotament::CallFunc_Vector_Normal2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMotament, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000080, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMotament::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMotament, CallFunc_ClampVectorSize_ReturnValue) == 0x000088, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMotament::CallFunc_ClampVectorSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMotament, CallFunc_GetActionCharacter_ReturnValue_2) == 0x0000A0, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMotament::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMotament, CallFunc_Add_VectorVector_ReturnValue) == 0x0000A8, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMotament::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMotament, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000C0, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMotament::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMotament, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0000D8, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMotament::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMotament, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0001C0, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMotament::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMotament, CallFunc_GetActionTarget_ReturnValue) == 0x0001C8, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMotament::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMotament, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x0001D0, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMotament::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMotament, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0001E8, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMotament::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMotament, CallFunc_CutVectorByAngle_maxAngleDegree_ImplicitCast) == 0x000200, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMotament::CallFunc_CutVectorByAngle_maxAngleDegree_ImplicitCast' has a wrong offset!");

// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.TackleMovement
// 0x02B8 (0x02B8 - 0x0000)
struct BP_Action_Unique_Anubis_Tackle_C_TackleMovement final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ToVector;                                          // 0x0008(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FInterpTo_ReturnValue;                    // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x0118(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13D[0x3];                                      // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_4;         // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue_1;      // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0208(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0220(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_2;                          // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_2;                          // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_2;                          // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0250(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x0268(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0280(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue_1;                     // 0x0298(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_BreakingFrictionFactorCache_ImplicitCast; // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement) == 0x000008, "Wrong alignment on BP_Action_Unique_Anubis_Tackle_C_TackleMovement");
static_assert(sizeof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement) == 0x0002B8, "Wrong size on BP_Action_Unique_Anubis_Tackle_C_TackleMovement");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, DeltaTime) == 0x000000, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, ToVector) == 0x000008, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::ToVector' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_GetActionCharacter_ReturnValue) == 0x000020, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_GetActorForwardVector_ReturnValue) == 0x000028, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000040, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_GetComponentByClass_ReturnValue) == 0x000058, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000060, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000078, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_BreakVector_X) == 0x000080, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_BreakVector_Y) == 0x000088, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_BreakVector_Z) == 0x000090, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000098, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_MakeVector_ReturnValue) == 0x0000A0, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, Temp_bool_IsClosed_Variable) == 0x0000B8, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_GetActionCharacter_ReturnValue_2) == 0x0000C0, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0000C8, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_BreakRotator_Roll) == 0x0000E0, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_BreakRotator_Pitch) == 0x0000E4, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_BreakRotator_Yaw) == 0x0000E8, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_Conv_DoubleToVector_ReturnValue_1) == 0x0000F0, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_Conv_DoubleToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000108, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_FInterpTo_ReturnValue) == 0x000110, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_MakeRotFromX_ReturnValue) == 0x000118, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_BreakRotator_Roll_1) == 0x000130, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_BreakRotator_Pitch_1) == 0x000134, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_BreakRotator_Yaw_1) == 0x000138, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, Temp_bool_Has_Been_Initd_Variable) == 0x00013C, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_MakeRotator_ReturnValue) == 0x000140, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_GetActionCharacter_ReturnValue_3) == 0x000158, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000160, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_GetActionCharacter_ReturnValue_4) == 0x000168, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_GetActionCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_GetActionTarget_ReturnValue) == 0x000170, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_GetActorForwardVector_ReturnValue_1) == 0x000178, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_GetActorForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_GetVelocity_ReturnValue) == 0x000190, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_Normal_ReturnValue) == 0x0001A8, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0001C0, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x0001D8, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_BreakVector_X_1) == 0x0001F0, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_BreakVector_Y_1) == 0x0001F8, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_BreakVector_Z_1) == 0x000200, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000208, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_MakeVector_ReturnValue_1) == 0x000220, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_BreakVector_X_2) == 0x000238, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_BreakVector_Y_2) == 0x000240, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_BreakVector_Z_2) == 0x000248, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_Add_VectorVector_ReturnValue) == 0x000250, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_MakeVector_ReturnValue_2) == 0x000268, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000280, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, CallFunc_Normal_ReturnValue_1) == 0x000298, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::CallFunc_Normal_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TackleMovement, K2Node_VariableSet_BreakingFrictionFactorCache_ImplicitCast) == 0x0002B0, "Member 'BP_Action_Unique_Anubis_Tackle_C_TackleMovement::K2Node_VariableSet_BreakingFrictionFactorCache_ImplicitCast' has a wrong offset!");

// Function BP_Action_Unique_Anubis_Tackle.BP_Action_Unique_Anubis_Tackle_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_Action_Unique_Anubis_Tackle_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_Tackle_C_TickAction) == 0x000004, "Wrong alignment on BP_Action_Unique_Anubis_Tackle_C_TickAction");
static_assert(sizeof(BP_Action_Unique_Anubis_Tackle_C_TickAction) == 0x000004, "Wrong size on BP_Action_Unique_Anubis_Tackle_C_TickAction");
static_assert(offsetof(BP_Action_Unique_Anubis_Tackle_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_Action_Unique_Anubis_Tackle_C_TickAction::DeltaTime' has a wrong offset!");

}

