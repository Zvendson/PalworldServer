#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_ActionRandomRest.BP_ActionRandomRest_C.ExecuteUbergraph_BP_ActionRandomRest
// 0x0238 (0x0238 - 0x0000)
struct BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalRandomRestInfo                     CallFunc_GetRandomRestInfo_ReturnValue;            // 0x0008(0x0018)(NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName_7;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_6;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_5;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_5;            // 0x00A8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_6;            // 0x00C0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_7;            // 0x00D8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x3];                                       // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_NotifyName_8;                   // 0x00F4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_8;            // 0x00FC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue; // 0x0120(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue_1; // 0x0128(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0138(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_4;         // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0150(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_5;         // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalFacialComponent*                    CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0170(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_179[0x7];                                      // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                          CallFunc_GetRandomStream_ReturnValue;              // 0x0188(0x0008)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_RandomIntegerInRangeFromStream_ReturnValue; // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_194[0x4];                                      // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_6;         // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalActionType                                Temp_byte_Variable;                                // 0x01A0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A1[0x7];                                      // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue_1;                // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_Map_Find_Value;                           // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B9[0x7];                                      // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1; // 0x01C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C9[0x3];                                      // 0x01C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D1[0x3];                                      // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_9;            // 0x01D4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                          CallFunc_GetRandomStream_ReturnValue_1;            // 0x01E4(0x0008)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue; // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_9;                   // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                          CallFunc_GetRandomStream_ReturnValue_2;            // 0x01F8(0x0008)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue_1; // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_204[0x4];                                      // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalRandomRestInfo                     CallFunc_GetRandomRestInfo_ReturnValue_1;          // 0x0208(0x0018)(NoDestructor)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast; // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22C[0x4];                                      // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_tempRand_ImplicitCast;          // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest) == 0x000008, "Wrong alignment on BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest");
static_assert(sizeof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest) == 0x000238, "Wrong size on BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, EntryPoint) == 0x000000, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_GetRandomRestInfo_ReturnValue) == 0x000008, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_GetRandomRestInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, K2Node_CustomEvent_NotifyName_7) == 0x000020, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::K2Node_CustomEvent_NotifyName_7' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, K2Node_CustomEvent_NotifyName_6) == 0x000038, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::K2Node_CustomEvent_NotifyName_6' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, K2Node_CustomEvent_NotifyName_5) == 0x000050, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::K2Node_CustomEvent_NotifyName_5' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, K2Node_CreateDelegate_OutputDelegate_2) == 0x000058, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, Temp_name_Variable) == 0x000068, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, K2Node_CreateDelegate_OutputDelegate_3) == 0x000070, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, K2Node_CustomEvent_NotifyName_4) == 0x000080, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, K2Node_CustomEvent_NotifyName_3) == 0x000088, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, K2Node_CreateDelegate_OutputDelegate_4) == 0x000090, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, K2Node_CustomEvent_NotifyName_2) == 0x0000A0, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, K2Node_CreateDelegate_OutputDelegate_5) == 0x0000A8, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, K2Node_CustomEvent_NotifyName_1) == 0x0000B8, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000C0, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, K2Node_CustomEvent_NotifyName) == 0x0000D0, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, K2Node_CreateDelegate_OutputDelegate_7) == 0x0000D8, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, Temp_name_Variable_1) == 0x0000E8, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_IsValid_ReturnValue) == 0x0000F0, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, K2Node_CustomEvent_NotifyName_8) == 0x0000F4, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::K2Node_CustomEvent_NotifyName_8' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, K2Node_CreateDelegate_OutputDelegate_8) == 0x0000FC, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, Temp_int_Variable) == 0x00010C, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_GetActionCharacter_ReturnValue) == 0x000110, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000118, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_GetPalCharacterMovementComponent_ReturnValue) == 0x000120, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_GetPalCharacterMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_GetPalCharacterMovementComponent_ReturnValue_1) == 0x000128, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_GetPalCharacterMovementComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000130, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_GetComponentByClass_ReturnValue) == 0x000138, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_GetActionCharacter_ReturnValue_3) == 0x000140, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_GetActionCharacter_ReturnValue_4) == 0x000148, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_GetActionCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_GetMainMesh_ReturnValue) == 0x000150, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x000158, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_IsValid_ReturnValue_1) == 0x000160, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_GetActionCharacter_ReturnValue_5) == 0x000168, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_GetActionCharacter_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000170, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_IsValid_ReturnValue_2) == 0x000178, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000180, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_GetRandomStream_ReturnValue) == 0x000188, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_GetRandomStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_RandomIntegerInRangeFromStream_ReturnValue) == 0x000190, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_RandomIntegerInRangeFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_GetActionCharacter_ReturnValue_6) == 0x000198, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_GetActionCharacter_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, Temp_byte_Variable) == 0x0001A0, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_GetMainMesh_ReturnValue_1) == 0x0001A8, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_GetMainMesh_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_Map_Find_Value) == 0x0001B0, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_Map_Find_ReturnValue) == 0x0001B8, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1) == 0x0001C0, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_IsValid_ReturnValue_3) == 0x0001C8, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_Add_IntInt_ReturnValue) == 0x0001CC, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0001D0, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, K2Node_CreateDelegate_OutputDelegate_9) == 0x0001D4, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_GetRandomStream_ReturnValue_1) == 0x0001E4, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_GetRandomStream_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_RandomFloatInRangeFromStream_ReturnValue) == 0x0001EC, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_RandomFloatInRangeFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, K2Node_CustomEvent_NotifyName_9) == 0x0001F0, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::K2Node_CustomEvent_NotifyName_9' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_GetRandomStream_ReturnValue_2) == 0x0001F8, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_GetRandomStream_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_RandomFloatInRangeFromStream_ReturnValue_1) == 0x000200, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_RandomFloatInRangeFromStream_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_GetRandomRestInfo_ReturnValue_1) == 0x000208, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_GetRandomRestInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000220, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast) == 0x000228, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest, K2Node_VariableSet_tempRand_ImplicitCast) == 0x000230, "Member 'BP_ActionRandomRest_C_ExecuteUbergraph_BP_ActionRandomRest::K2Node_VariableSet_tempRand_ImplicitCast' has a wrong offset!");

// Function BP_ActionRandomRest.BP_ActionRandomRest_C.GetRandomRestInfo
// 0x0040 (0x0040 - 0x0000)
struct BP_ActionRandomRest_C_GetRandomRestInfo final
{
public:
	struct FPalRandomRestInfo                     ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm, NoDestructor)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPalRandomRestInfo                     CallFunc_GetRandomRestInfo_ReturnValue;            // 0x0028(0x0018)(NoDestructor)
};
static_assert(alignof(BP_ActionRandomRest_C_GetRandomRestInfo) == 0x000008, "Wrong alignment on BP_ActionRandomRest_C_GetRandomRestInfo");
static_assert(sizeof(BP_ActionRandomRest_C_GetRandomRestInfo) == 0x000040, "Wrong size on BP_ActionRandomRest_C_GetRandomRestInfo");
static_assert(offsetof(BP_ActionRandomRest_C_GetRandomRestInfo, ReturnValue) == 0x000000, "Member 'BP_ActionRandomRest_C_GetRandomRestInfo::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_GetRandomRestInfo, CallFunc_GetActionCharacter_ReturnValue) == 0x000018, "Member 'BP_ActionRandomRest_C_GetRandomRestInfo::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_GetRandomRestInfo, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_ActionRandomRest_C_GetRandomRestInfo::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionRandomRest_C_GetRandomRestInfo, CallFunc_GetRandomRestInfo_ReturnValue) == 0x000028, "Member 'BP_ActionRandomRest_C_GetRandomRestInfo::CallFunc_GetRandomRestInfo_ReturnValue' has a wrong offset!");

// Function BP_ActionRandomRest.BP_ActionRandomRest_C.OnBlendOut_4551F62E41169AB9D4D27C8A2A1A7EE2
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionRandomRest_C_OnBlendOut_4551F62E41169AB9D4D27C8A2A1A7EE2 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionRandomRest_C_OnBlendOut_4551F62E41169AB9D4D27C8A2A1A7EE2) == 0x000004, "Wrong alignment on BP_ActionRandomRest_C_OnBlendOut_4551F62E41169AB9D4D27C8A2A1A7EE2");
static_assert(sizeof(BP_ActionRandomRest_C_OnBlendOut_4551F62E41169AB9D4D27C8A2A1A7EE2) == 0x000008, "Wrong size on BP_ActionRandomRest_C_OnBlendOut_4551F62E41169AB9D4D27C8A2A1A7EE2");
static_assert(offsetof(BP_ActionRandomRest_C_OnBlendOut_4551F62E41169AB9D4D27C8A2A1A7EE2, NotifyName) == 0x000000, "Member 'BP_ActionRandomRest_C_OnBlendOut_4551F62E41169AB9D4D27C8A2A1A7EE2::NotifyName' has a wrong offset!");

// Function BP_ActionRandomRest.BP_ActionRandomRest_C.OnBlendOut_903852264ADDCC5C76468EB1B01885D1
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionRandomRest_C_OnBlendOut_903852264ADDCC5C76468EB1B01885D1 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionRandomRest_C_OnBlendOut_903852264ADDCC5C76468EB1B01885D1) == 0x000004, "Wrong alignment on BP_ActionRandomRest_C_OnBlendOut_903852264ADDCC5C76468EB1B01885D1");
static_assert(sizeof(BP_ActionRandomRest_C_OnBlendOut_903852264ADDCC5C76468EB1B01885D1) == 0x000008, "Wrong size on BP_ActionRandomRest_C_OnBlendOut_903852264ADDCC5C76468EB1B01885D1");
static_assert(offsetof(BP_ActionRandomRest_C_OnBlendOut_903852264ADDCC5C76468EB1B01885D1, NotifyName) == 0x000000, "Member 'BP_ActionRandomRest_C_OnBlendOut_903852264ADDCC5C76468EB1B01885D1::NotifyName' has a wrong offset!");

// Function BP_ActionRandomRest.BP_ActionRandomRest_C.OnCompleted_4551F62E41169AB9D4D27C8A2A1A7EE2
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionRandomRest_C_OnCompleted_4551F62E41169AB9D4D27C8A2A1A7EE2 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionRandomRest_C_OnCompleted_4551F62E41169AB9D4D27C8A2A1A7EE2) == 0x000004, "Wrong alignment on BP_ActionRandomRest_C_OnCompleted_4551F62E41169AB9D4D27C8A2A1A7EE2");
static_assert(sizeof(BP_ActionRandomRest_C_OnCompleted_4551F62E41169AB9D4D27C8A2A1A7EE2) == 0x000008, "Wrong size on BP_ActionRandomRest_C_OnCompleted_4551F62E41169AB9D4D27C8A2A1A7EE2");
static_assert(offsetof(BP_ActionRandomRest_C_OnCompleted_4551F62E41169AB9D4D27C8A2A1A7EE2, NotifyName) == 0x000000, "Member 'BP_ActionRandomRest_C_OnCompleted_4551F62E41169AB9D4D27C8A2A1A7EE2::NotifyName' has a wrong offset!");

// Function BP_ActionRandomRest.BP_ActionRandomRest_C.OnCompleted_903852264ADDCC5C76468EB1B01885D1
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionRandomRest_C_OnCompleted_903852264ADDCC5C76468EB1B01885D1 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionRandomRest_C_OnCompleted_903852264ADDCC5C76468EB1B01885D1) == 0x000004, "Wrong alignment on BP_ActionRandomRest_C_OnCompleted_903852264ADDCC5C76468EB1B01885D1");
static_assert(sizeof(BP_ActionRandomRest_C_OnCompleted_903852264ADDCC5C76468EB1B01885D1) == 0x000008, "Wrong size on BP_ActionRandomRest_C_OnCompleted_903852264ADDCC5C76468EB1B01885D1");
static_assert(offsetof(BP_ActionRandomRest_C_OnCompleted_903852264ADDCC5C76468EB1B01885D1, NotifyName) == 0x000000, "Member 'BP_ActionRandomRest_C_OnCompleted_903852264ADDCC5C76468EB1B01885D1::NotifyName' has a wrong offset!");

// Function BP_ActionRandomRest.BP_ActionRandomRest_C.OnInterrupted_4551F62E41169AB9D4D27C8A2A1A7EE2
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionRandomRest_C_OnInterrupted_4551F62E41169AB9D4D27C8A2A1A7EE2 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionRandomRest_C_OnInterrupted_4551F62E41169AB9D4D27C8A2A1A7EE2) == 0x000004, "Wrong alignment on BP_ActionRandomRest_C_OnInterrupted_4551F62E41169AB9D4D27C8A2A1A7EE2");
static_assert(sizeof(BP_ActionRandomRest_C_OnInterrupted_4551F62E41169AB9D4D27C8A2A1A7EE2) == 0x000008, "Wrong size on BP_ActionRandomRest_C_OnInterrupted_4551F62E41169AB9D4D27C8A2A1A7EE2");
static_assert(offsetof(BP_ActionRandomRest_C_OnInterrupted_4551F62E41169AB9D4D27C8A2A1A7EE2, NotifyName) == 0x000000, "Member 'BP_ActionRandomRest_C_OnInterrupted_4551F62E41169AB9D4D27C8A2A1A7EE2::NotifyName' has a wrong offset!");

// Function BP_ActionRandomRest.BP_ActionRandomRest_C.OnInterrupted_903852264ADDCC5C76468EB1B01885D1
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionRandomRest_C_OnInterrupted_903852264ADDCC5C76468EB1B01885D1 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionRandomRest_C_OnInterrupted_903852264ADDCC5C76468EB1B01885D1) == 0x000004, "Wrong alignment on BP_ActionRandomRest_C_OnInterrupted_903852264ADDCC5C76468EB1B01885D1");
static_assert(sizeof(BP_ActionRandomRest_C_OnInterrupted_903852264ADDCC5C76468EB1B01885D1) == 0x000008, "Wrong size on BP_ActionRandomRest_C_OnInterrupted_903852264ADDCC5C76468EB1B01885D1");
static_assert(offsetof(BP_ActionRandomRest_C_OnInterrupted_903852264ADDCC5C76468EB1B01885D1, NotifyName) == 0x000000, "Member 'BP_ActionRandomRest_C_OnInterrupted_903852264ADDCC5C76468EB1B01885D1::NotifyName' has a wrong offset!");

// Function BP_ActionRandomRest.BP_ActionRandomRest_C.OnNotifyBegin_4551F62E41169AB9D4D27C8A2A1A7EE2
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionRandomRest_C_OnNotifyBegin_4551F62E41169AB9D4D27C8A2A1A7EE2 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionRandomRest_C_OnNotifyBegin_4551F62E41169AB9D4D27C8A2A1A7EE2) == 0x000004, "Wrong alignment on BP_ActionRandomRest_C_OnNotifyBegin_4551F62E41169AB9D4D27C8A2A1A7EE2");
static_assert(sizeof(BP_ActionRandomRest_C_OnNotifyBegin_4551F62E41169AB9D4D27C8A2A1A7EE2) == 0x000008, "Wrong size on BP_ActionRandomRest_C_OnNotifyBegin_4551F62E41169AB9D4D27C8A2A1A7EE2");
static_assert(offsetof(BP_ActionRandomRest_C_OnNotifyBegin_4551F62E41169AB9D4D27C8A2A1A7EE2, NotifyName) == 0x000000, "Member 'BP_ActionRandomRest_C_OnNotifyBegin_4551F62E41169AB9D4D27C8A2A1A7EE2::NotifyName' has a wrong offset!");

// Function BP_ActionRandomRest.BP_ActionRandomRest_C.OnNotifyBegin_903852264ADDCC5C76468EB1B01885D1
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionRandomRest_C_OnNotifyBegin_903852264ADDCC5C76468EB1B01885D1 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionRandomRest_C_OnNotifyBegin_903852264ADDCC5C76468EB1B01885D1) == 0x000004, "Wrong alignment on BP_ActionRandomRest_C_OnNotifyBegin_903852264ADDCC5C76468EB1B01885D1");
static_assert(sizeof(BP_ActionRandomRest_C_OnNotifyBegin_903852264ADDCC5C76468EB1B01885D1) == 0x000008, "Wrong size on BP_ActionRandomRest_C_OnNotifyBegin_903852264ADDCC5C76468EB1B01885D1");
static_assert(offsetof(BP_ActionRandomRest_C_OnNotifyBegin_903852264ADDCC5C76468EB1B01885D1, NotifyName) == 0x000000, "Member 'BP_ActionRandomRest_C_OnNotifyBegin_903852264ADDCC5C76468EB1B01885D1::NotifyName' has a wrong offset!");

// Function BP_ActionRandomRest.BP_ActionRandomRest_C.OnNotifyEnd_4551F62E41169AB9D4D27C8A2A1A7EE2
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionRandomRest_C_OnNotifyEnd_4551F62E41169AB9D4D27C8A2A1A7EE2 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionRandomRest_C_OnNotifyEnd_4551F62E41169AB9D4D27C8A2A1A7EE2) == 0x000004, "Wrong alignment on BP_ActionRandomRest_C_OnNotifyEnd_4551F62E41169AB9D4D27C8A2A1A7EE2");
static_assert(sizeof(BP_ActionRandomRest_C_OnNotifyEnd_4551F62E41169AB9D4D27C8A2A1A7EE2) == 0x000008, "Wrong size on BP_ActionRandomRest_C_OnNotifyEnd_4551F62E41169AB9D4D27C8A2A1A7EE2");
static_assert(offsetof(BP_ActionRandomRest_C_OnNotifyEnd_4551F62E41169AB9D4D27C8A2A1A7EE2, NotifyName) == 0x000000, "Member 'BP_ActionRandomRest_C_OnNotifyEnd_4551F62E41169AB9D4D27C8A2A1A7EE2::NotifyName' has a wrong offset!");

// Function BP_ActionRandomRest.BP_ActionRandomRest_C.OnNotifyEnd_903852264ADDCC5C76468EB1B01885D1
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionRandomRest_C_OnNotifyEnd_903852264ADDCC5C76468EB1B01885D1 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionRandomRest_C_OnNotifyEnd_903852264ADDCC5C76468EB1B01885D1) == 0x000004, "Wrong alignment on BP_ActionRandomRest_C_OnNotifyEnd_903852264ADDCC5C76468EB1B01885D1");
static_assert(sizeof(BP_ActionRandomRest_C_OnNotifyEnd_903852264ADDCC5C76468EB1B01885D1) == 0x000008, "Wrong size on BP_ActionRandomRest_C_OnNotifyEnd_903852264ADDCC5C76468EB1B01885D1");
static_assert(offsetof(BP_ActionRandomRest_C_OnNotifyEnd_903852264ADDCC5C76468EB1B01885D1, NotifyName) == 0x000000, "Member 'BP_ActionRandomRest_C_OnNotifyEnd_903852264ADDCC5C76468EB1B01885D1::NotifyName' has a wrong offset!");

}

