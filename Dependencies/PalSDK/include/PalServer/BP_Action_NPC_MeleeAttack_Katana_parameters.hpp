#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BP_Action_NPC_MeleeAttack_Katana.BP_Action_NPC_MeleeAttack_Katana_C.ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana
// 0x00B0 (0x00B0 - 0x0000)
struct BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x006C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x3];                                       // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetGeneralPurposeIndex_ReturnValue;       // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana) == 0x000008, "Wrong alignment on BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana");
static_assert(sizeof(BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana) == 0x0000B0, "Wrong size on BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana, EntryPoint) == 0x000000, "Member 'BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana, K2Node_CustomEvent_NotifyName_4) == 0x000004, "Member 'BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana, K2Node_CustomEvent_NotifyName_3) == 0x00001C, "Member 'BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana, K2Node_CustomEvent_NotifyName_2) == 0x000034, "Member 'BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana, K2Node_CreateDelegate_OutputDelegate_2) == 0x00003C, "Member 'BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana, K2Node_CustomEvent_NotifyName_1) == 0x00004C, "Member 'BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana, K2Node_CreateDelegate_OutputDelegate_3) == 0x000054, "Member 'BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana, K2Node_CustomEvent_NotifyName) == 0x000064, "Member 'BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana, K2Node_CreateDelegate_OutputDelegate_4) == 0x00006C, "Member 'BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana, Temp_name_Variable) == 0x00007C, "Member 'BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana, CallFunc_GetActionCharacter_ReturnValue) == 0x000088, "Member 'BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana, CallFunc_GetMainMesh_ReturnValue) == 0x000090, "Member 'BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x000098, "Member 'BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana, CallFunc_IsValid_ReturnValue) == 0x0000A0, "Member 'BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana, CallFunc_GetGeneralPurposeIndex_ReturnValue) == 0x0000A4, "Member 'BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana::CallFunc_GetGeneralPurposeIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000A8, "Member 'BP_Action_NPC_MeleeAttack_Katana_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_Action_NPC_MeleeAttack_Katana.BP_Action_NPC_MeleeAttack_Katana_C.OnBlendOut_1B2C74534DDC0999FABA0BAD78AFE4DB
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_MeleeAttack_Katana_C_OnBlendOut_1B2C74534DDC0999FABA0BAD78AFE4DB final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_MeleeAttack_Katana_C_OnBlendOut_1B2C74534DDC0999FABA0BAD78AFE4DB) == 0x000004, "Wrong alignment on BP_Action_NPC_MeleeAttack_Katana_C_OnBlendOut_1B2C74534DDC0999FABA0BAD78AFE4DB");
static_assert(sizeof(BP_Action_NPC_MeleeAttack_Katana_C_OnBlendOut_1B2C74534DDC0999FABA0BAD78AFE4DB) == 0x000008, "Wrong size on BP_Action_NPC_MeleeAttack_Katana_C_OnBlendOut_1B2C74534DDC0999FABA0BAD78AFE4DB");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_Katana_C_OnBlendOut_1B2C74534DDC0999FABA0BAD78AFE4DB, NotifyName) == 0x000000, "Member 'BP_Action_NPC_MeleeAttack_Katana_C_OnBlendOut_1B2C74534DDC0999FABA0BAD78AFE4DB::NotifyName' has a wrong offset!");

// Function BP_Action_NPC_MeleeAttack_Katana.BP_Action_NPC_MeleeAttack_Katana_C.OnCompleted_1B2C74534DDC0999FABA0BAD78AFE4DB
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_MeleeAttack_Katana_C_OnCompleted_1B2C74534DDC0999FABA0BAD78AFE4DB final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_MeleeAttack_Katana_C_OnCompleted_1B2C74534DDC0999FABA0BAD78AFE4DB) == 0x000004, "Wrong alignment on BP_Action_NPC_MeleeAttack_Katana_C_OnCompleted_1B2C74534DDC0999FABA0BAD78AFE4DB");
static_assert(sizeof(BP_Action_NPC_MeleeAttack_Katana_C_OnCompleted_1B2C74534DDC0999FABA0BAD78AFE4DB) == 0x000008, "Wrong size on BP_Action_NPC_MeleeAttack_Katana_C_OnCompleted_1B2C74534DDC0999FABA0BAD78AFE4DB");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_Katana_C_OnCompleted_1B2C74534DDC0999FABA0BAD78AFE4DB, NotifyName) == 0x000000, "Member 'BP_Action_NPC_MeleeAttack_Katana_C_OnCompleted_1B2C74534DDC0999FABA0BAD78AFE4DB::NotifyName' has a wrong offset!");

// Function BP_Action_NPC_MeleeAttack_Katana.BP_Action_NPC_MeleeAttack_Katana_C.OnInterrupted_1B2C74534DDC0999FABA0BAD78AFE4DB
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_MeleeAttack_Katana_C_OnInterrupted_1B2C74534DDC0999FABA0BAD78AFE4DB final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_MeleeAttack_Katana_C_OnInterrupted_1B2C74534DDC0999FABA0BAD78AFE4DB) == 0x000004, "Wrong alignment on BP_Action_NPC_MeleeAttack_Katana_C_OnInterrupted_1B2C74534DDC0999FABA0BAD78AFE4DB");
static_assert(sizeof(BP_Action_NPC_MeleeAttack_Katana_C_OnInterrupted_1B2C74534DDC0999FABA0BAD78AFE4DB) == 0x000008, "Wrong size on BP_Action_NPC_MeleeAttack_Katana_C_OnInterrupted_1B2C74534DDC0999FABA0BAD78AFE4DB");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_Katana_C_OnInterrupted_1B2C74534DDC0999FABA0BAD78AFE4DB, NotifyName) == 0x000000, "Member 'BP_Action_NPC_MeleeAttack_Katana_C_OnInterrupted_1B2C74534DDC0999FABA0BAD78AFE4DB::NotifyName' has a wrong offset!");

// Function BP_Action_NPC_MeleeAttack_Katana.BP_Action_NPC_MeleeAttack_Katana_C.OnNotifyBegin_1B2C74534DDC0999FABA0BAD78AFE4DB
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_MeleeAttack_Katana_C_OnNotifyBegin_1B2C74534DDC0999FABA0BAD78AFE4DB final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_MeleeAttack_Katana_C_OnNotifyBegin_1B2C74534DDC0999FABA0BAD78AFE4DB) == 0x000004, "Wrong alignment on BP_Action_NPC_MeleeAttack_Katana_C_OnNotifyBegin_1B2C74534DDC0999FABA0BAD78AFE4DB");
static_assert(sizeof(BP_Action_NPC_MeleeAttack_Katana_C_OnNotifyBegin_1B2C74534DDC0999FABA0BAD78AFE4DB) == 0x000008, "Wrong size on BP_Action_NPC_MeleeAttack_Katana_C_OnNotifyBegin_1B2C74534DDC0999FABA0BAD78AFE4DB");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_Katana_C_OnNotifyBegin_1B2C74534DDC0999FABA0BAD78AFE4DB, NotifyName) == 0x000000, "Member 'BP_Action_NPC_MeleeAttack_Katana_C_OnNotifyBegin_1B2C74534DDC0999FABA0BAD78AFE4DB::NotifyName' has a wrong offset!");

// Function BP_Action_NPC_MeleeAttack_Katana.BP_Action_NPC_MeleeAttack_Katana_C.OnNotifyEnd_1B2C74534DDC0999FABA0BAD78AFE4DB
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_MeleeAttack_Katana_C_OnNotifyEnd_1B2C74534DDC0999FABA0BAD78AFE4DB final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_MeleeAttack_Katana_C_OnNotifyEnd_1B2C74534DDC0999FABA0BAD78AFE4DB) == 0x000004, "Wrong alignment on BP_Action_NPC_MeleeAttack_Katana_C_OnNotifyEnd_1B2C74534DDC0999FABA0BAD78AFE4DB");
static_assert(sizeof(BP_Action_NPC_MeleeAttack_Katana_C_OnNotifyEnd_1B2C74534DDC0999FABA0BAD78AFE4DB) == 0x000008, "Wrong size on BP_Action_NPC_MeleeAttack_Katana_C_OnNotifyEnd_1B2C74534DDC0999FABA0BAD78AFE4DB");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_Katana_C_OnNotifyEnd_1B2C74534DDC0999FABA0BAD78AFE4DB, NotifyName) == 0x000000, "Member 'BP_Action_NPC_MeleeAttack_Katana_C_OnNotifyEnd_1B2C74534DDC0999FABA0BAD78AFE4DB::NotifyName' has a wrong offset!");

}

