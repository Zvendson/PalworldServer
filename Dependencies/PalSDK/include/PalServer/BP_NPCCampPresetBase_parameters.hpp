#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_NPCCampPresetBase.BP_NPCCampPresetBase_C.DeleteChildActor
// 0x0048 (0x0048 - 0x0000)
struct BP_NPCCampPresetBase_C_DeleteChildActor final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children;           // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UChildActorComponent*                   K2Node_DynamicCast_AsChild_Actor_Component;        // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampPresetBase_C_DeleteChildActor) == 0x000008, "Wrong alignment on BP_NPCCampPresetBase_C_DeleteChildActor");
static_assert(sizeof(BP_NPCCampPresetBase_C_DeleteChildActor) == 0x000048, "Wrong size on BP_NPCCampPresetBase_C_DeleteChildActor");
static_assert(offsetof(BP_NPCCampPresetBase_C_DeleteChildActor, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_NPCCampPresetBase_C_DeleteChildActor::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_DeleteChildActor, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_NPCCampPresetBase_C_DeleteChildActor::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_DeleteChildActor, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_NPCCampPresetBase_C_DeleteChildActor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_DeleteChildActor, CallFunc_GetChildrenComponents_Children) == 0x000010, "Member 'BP_NPCCampPresetBase_C_DeleteChildActor::CallFunc_GetChildrenComponents_Children' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_DeleteChildActor, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_NPCCampPresetBase_C_DeleteChildActor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_DeleteChildActor, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_NPCCampPresetBase_C_DeleteChildActor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_DeleteChildActor, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BP_NPCCampPresetBase_C_DeleteChildActor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_DeleteChildActor, K2Node_DynamicCast_AsChild_Actor_Component) == 0x000038, "Member 'BP_NPCCampPresetBase_C_DeleteChildActor::K2Node_DynamicCast_AsChild_Actor_Component' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_DeleteChildActor, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_NPCCampPresetBase_C_DeleteChildActor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_DeleteChildActor, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'BP_NPCCampPresetBase_C_DeleteChildActor::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_NPCCampPresetBase.BP_NPCCampPresetBase_C.ExecuteUbergraph_BP_NPCCampPresetBase
// 0x00A8 (0x00A8 - 0x0000)
struct BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children;           // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChildActorComponent*                   K2Node_DynamicCast_AsChild_Actor_Component;        // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          K2Node_CustomEvent_NewParam;                       // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PalCapturedCage_C*                  K2Node_DynamicCast_AsBP_Pal_Captured_Cage;         // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SquadNPCSpawner_ForCampBase_C*      K2Node_DynamicCast_AsBP_Squad_NPCSpawner_for_Camp_Base; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_NPCCampSpawnerBase_C*               K2Node_DynamicCast_AsBP_NPCCamp_Spawner_Base;      // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPalIndividualCharacterHandle* NewParam)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0094(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase) == 0x000008, "Wrong alignment on BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase");
static_assert(sizeof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase) == 0x0000A8, "Wrong size on BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase");
static_assert(offsetof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase, EntryPoint) == 0x000000, "Member 'BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase, K2Node_Event_EndPlayReason) == 0x000010, "Member 'BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase, CallFunc_GetChildrenComponents_Children) == 0x000018, "Member 'BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase::CallFunc_GetChildrenComponents_Children' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase, K2Node_DynamicCast_AsChild_Actor_Component) == 0x000048, "Member 'BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase::K2Node_DynamicCast_AsChild_Actor_Component' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase, CallFunc_Less_IntInt_ReturnValue) == 0x000051, "Member 'BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase, K2Node_CustomEvent_NewParam) == 0x000058, "Member 'BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase::K2Node_CustomEvent_NewParam' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase, K2Node_DynamicCast_AsBP_Pal_Captured_Cage) == 0x000060, "Member 'BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase::K2Node_DynamicCast_AsBP_Pal_Captured_Cage' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase, K2Node_DynamicCast_AsBP_Squad_NPCSpawner_for_Camp_Base) == 0x000070, "Member 'BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase::K2Node_DynamicCast_AsBP_Squad_NPCSpawner_for_Camp_Base' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase, K2Node_DynamicCast_bSuccess_2) == 0x000078, "Member 'BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase, CallFunc_Not_PreBool_ReturnValue) == 0x000079, "Member 'BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase, CallFunc_GetOwner_ReturnValue) == 0x000080, "Member 'BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase, K2Node_DynamicCast_AsBP_NPCCamp_Spawner_Base) == 0x000088, "Member 'BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase::K2Node_DynamicCast_AsBP_NPCCamp_Spawner_Base' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase, K2Node_DynamicCast_bSuccess_3) == 0x000090, "Member 'BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase, K2Node_CreateDelegate_OutputDelegate_1) == 0x000094, "Member 'BP_NPCCampPresetBase_C_ExecuteUbergraph_BP_NPCCampPresetBase::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function BP_NPCCampPresetBase.BP_NPCCampPresetBase_C.GetCampSpawnerName
// 0x0020 (0x0020 - 0x0000)
struct BP_NPCCampPresetBase_C_GetCampSpawnerName final
{
public:
	class FName                                   Key;                                               // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_NPCCampSpawnerBase_C*               K2Node_DynamicCast_AsBP_NPCCamp_Spawner_Base;      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampPresetBase_C_GetCampSpawnerName) == 0x000008, "Wrong alignment on BP_NPCCampPresetBase_C_GetCampSpawnerName");
static_assert(sizeof(BP_NPCCampPresetBase_C_GetCampSpawnerName) == 0x000020, "Wrong size on BP_NPCCampPresetBase_C_GetCampSpawnerName");
static_assert(offsetof(BP_NPCCampPresetBase_C_GetCampSpawnerName, Key) == 0x000000, "Member 'BP_NPCCampPresetBase_C_GetCampSpawnerName::Key' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_GetCampSpawnerName, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_NPCCampPresetBase_C_GetCampSpawnerName::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_GetCampSpawnerName, K2Node_DynamicCast_AsBP_NPCCamp_Spawner_Base) == 0x000010, "Member 'BP_NPCCampPresetBase_C_GetCampSpawnerName::K2Node_DynamicCast_AsBP_NPCCamp_Spawner_Base' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_GetCampSpawnerName, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_NPCCampPresetBase_C_GetCampSpawnerName::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_GetCampSpawnerName, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'BP_NPCCampPresetBase_C_GetCampSpawnerName::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_NPCCampPresetBase.BP_NPCCampPresetBase_C.GetRewardKey
// 0x0020 (0x0020 - 0x0000)
struct BP_NPCCampPresetBase_C_GetRewardKey final
{
public:
	class FName                                   Key;                                               // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_NPCCampSpawnerBase_C*               K2Node_DynamicCast_AsBP_NPCCamp_Spawner_Base;      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampPresetBase_C_GetRewardKey) == 0x000008, "Wrong alignment on BP_NPCCampPresetBase_C_GetRewardKey");
static_assert(sizeof(BP_NPCCampPresetBase_C_GetRewardKey) == 0x000020, "Wrong size on BP_NPCCampPresetBase_C_GetRewardKey");
static_assert(offsetof(BP_NPCCampPresetBase_C_GetRewardKey, Key) == 0x000000, "Member 'BP_NPCCampPresetBase_C_GetRewardKey::Key' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_GetRewardKey, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_NPCCampPresetBase_C_GetRewardKey::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_GetRewardKey, K2Node_DynamicCast_AsBP_NPCCamp_Spawner_Base) == 0x000010, "Member 'BP_NPCCampPresetBase_C_GetRewardKey::K2Node_DynamicCast_AsBP_NPCCamp_Spawner_Base' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_GetRewardKey, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_NPCCampPresetBase_C_GetRewardKey::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_GetRewardKey, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'BP_NPCCampPresetBase_C_GetRewardKey::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_NPCCampPresetBase.BP_NPCCampPresetBase_C.OnSpawnedCharacter__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_NPCCampPresetBase_C_OnSpawnedCharacter__DelegateSignature final
{
public:
	class UPalIndividualCharacterHandle*          NewParam;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampPresetBase_C_OnSpawnedCharacter__DelegateSignature) == 0x000008, "Wrong alignment on BP_NPCCampPresetBase_C_OnSpawnedCharacter__DelegateSignature");
static_assert(sizeof(BP_NPCCampPresetBase_C_OnSpawnedCharacter__DelegateSignature) == 0x000008, "Wrong size on BP_NPCCampPresetBase_C_OnSpawnedCharacter__DelegateSignature");
static_assert(offsetof(BP_NPCCampPresetBase_C_OnSpawnedCharacter__DelegateSignature, NewParam) == 0x000000, "Member 'BP_NPCCampPresetBase_C_OnSpawnedCharacter__DelegateSignature::NewParam' has a wrong offset!");

// Function BP_NPCCampPresetBase.BP_NPCCampPresetBase_C.RayAdjustFloor
// 0x0368 (0x0368 - 0x0000)
struct BP_NPCCampPresetBase_C_RayAdjustFloor final
{
public:
	class AActor*                                 TempChildActor;                                    // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         IgnoreActor;                                       // 0x0008(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SquadNPCSpawner_ForCampBase_C*      K2Node_DynamicCast_AsBP_Squad_NPCSpawner_for_Camp_Base; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children;           // 0x0038(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UChildActorComponent*                   K2Node_DynamicCast_AsChild_Actor_Component;        // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x00C0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x01AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AB[0x1];                                      // 0x01AB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B4[0x4];                                      // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0200(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0218(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0220(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0228(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0244(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24C[0x4];                                      // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0250(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0268(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0280(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_NPCCampPresetBase_C_RayAdjustFloor) == 0x000008, "Wrong alignment on BP_NPCCampPresetBase_C_RayAdjustFloor");
static_assert(sizeof(BP_NPCCampPresetBase_C_RayAdjustFloor) == 0x000368, "Wrong size on BP_NPCCampPresetBase_C_RayAdjustFloor");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, TempChildActor) == 0x000000, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::TempChildActor' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, IgnoreActor) == 0x000008, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::IgnoreActor' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, K2Node_DynamicCast_AsBP_Squad_NPCSpawner_for_Camp_Base) == 0x000020, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::K2Node_DynamicCast_AsBP_Squad_NPCSpawner_for_Camp_Base' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_GetChildrenComponents_Children) == 0x000038, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_GetChildrenComponents_Children' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_Array_Get_Item) == 0x000050, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, K2Node_DynamicCast_AsChild_Actor_Component) == 0x000060, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::K2Node_DynamicCast_AsChild_Actor_Component' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000070, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000088, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_Add_VectorVector_ReturnValue) == 0x0000A0, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_Array_Add_ReturnValue) == 0x0000B8, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_LineTraceSingle_OutHit) == 0x0000C0, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_LineTraceSingle_ReturnValue) == 0x0001A8, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_BreakHitResult_bBlockingHit) == 0x0001A9, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_BreakHitResult_bInitialOverlap) == 0x0001AA, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_BreakHitResult_Time) == 0x0001AC, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_BreakHitResult_Distance) == 0x0001B0, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_BreakHitResult_Location) == 0x0001B8, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_BreakHitResult_ImpactPoint) == 0x0001D0, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_BreakHitResult_Normal) == 0x0001E8, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_BreakHitResult_ImpactNormal) == 0x000200, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_BreakHitResult_PhysMat) == 0x000218, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_BreakHitResult_HitActor) == 0x000220, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_BreakHitResult_HitComponent) == 0x000228, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_BreakHitResult_HitBoneName) == 0x000230, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_BreakHitResult_BoneName) == 0x000238, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_BreakHitResult_HitItem) == 0x000240, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_BreakHitResult_ElementIndex) == 0x000244, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_BreakHitResult_FaceIndex) == 0x000248, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_BreakHitResult_TraceStart) == 0x000250, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_BreakHitResult_TraceEnd) == 0x000268, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_NPCCampPresetBase_C_RayAdjustFloor, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000280, "Member 'BP_NPCCampPresetBase_C_RayAdjustFloor::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");

// Function BP_NPCCampPresetBase.BP_NPCCampPresetBase_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_NPCCampPresetBase_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampPresetBase_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_NPCCampPresetBase_C_ReceiveEndPlay");
static_assert(sizeof(BP_NPCCampPresetBase_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_NPCCampPresetBase_C_ReceiveEndPlay");
static_assert(offsetof(BP_NPCCampPresetBase_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_NPCCampPresetBase_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_NPCCampPresetBase.BP_NPCCampPresetBase_C.カスタムイベント
// 0x0008 (0x0008 - 0x0000)
struct BP_NPCCampPresetBase_C_________________________ final
{
public:
	class UPalIndividualCharacterHandle*          NewParam;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampPresetBase_C_________________________) == 0x000008, "Wrong alignment on BP_NPCCampPresetBase_C_________________________");
static_assert(sizeof(BP_NPCCampPresetBase_C_________________________) == 0x000008, "Wrong size on BP_NPCCampPresetBase_C_________________________");
static_assert(offsetof(BP_NPCCampPresetBase_C_________________________, NewParam) == 0x000000, "Member 'BP_NPCCampPresetBase_C_________________________::NewParam' has a wrong offset!");

}

