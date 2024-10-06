#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_WorldSecurity_AreaInvasion_Volume.BP_WorldSecurity_AreaInvasion_Volume_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveTick");
static_assert(sizeof(BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveTick) == 0x000004, "Wrong size on BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveTick");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_WorldSecurity_AreaInvasion_Volume.BP_WorldSecurity_AreaInvasion_Volume_C.ReceiveActorEndOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveActorEndOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveActorEndOverlap) == 0x000008, "Wrong alignment on BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveActorEndOverlap");
static_assert(sizeof(BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveActorEndOverlap) == 0x000008, "Wrong size on BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveActorEndOverlap");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveActorEndOverlap, OtherActor) == 0x000000, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveActorEndOverlap::OtherActor' has a wrong offset!");

// Function BP_WorldSecurity_AreaInvasion_Volume.BP_WorldSecurity_AreaInvasion_Volume_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function BP_WorldSecurity_AreaInvasion_Volume.BP_WorldSecurity_AreaInvasion_Volume_C.NotifyHitActors
// 0x0040 (0x0040 - 0x0000)
struct BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_GetInstanceId_ReturnValue;                // 0x000C(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWantedCharacter_ReturnValue;            // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCriminalCharacter_ReturnValue;          // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors) == 0x000008, "Wrong alignment on BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors");
static_assert(sizeof(BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors) == 0x000040, "Wrong size on BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors, CallFunc_GetInstanceId_ReturnValue) == 0x00000C, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors::CallFunc_GetInstanceId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors, K2Node_DynamicCast_AsPal_Character) == 0x000030, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors, CallFunc_IsWantedCharacter_ReturnValue) == 0x000039, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors::CallFunc_IsWantedCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors, CallFunc_IsCriminalCharacter_ReturnValue) == 0x00003A, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors::CallFunc_IsCriminalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors, CallFunc_Not_PreBool_ReturnValue) == 0x00003B, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors, CallFunc_Not_PreBool_ReturnValue_1) == 0x00003C, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors, CallFunc_BooleanAND_ReturnValue) == 0x00003D, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_NotifyHitActors::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_WorldSecurity_AreaInvasion_Volume.BP_WorldSecurity_AreaInvasion_Volume_C.IsPlayerOverlap
// 0x0030 (0x0030 - 0x0000)
struct BP_WorldSecurity_AreaInvasion_Volume_C_IsPlayerOverlap final
{
public:
	bool                                          IsOverlap;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         OverlapPlayers;                                    // 0x0008(0x0010)(Parm, OutParm)
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WorldSecurity_AreaInvasion_Volume_C_IsPlayerOverlap) == 0x000008, "Wrong alignment on BP_WorldSecurity_AreaInvasion_Volume_C_IsPlayerOverlap");
static_assert(sizeof(BP_WorldSecurity_AreaInvasion_Volume_C_IsPlayerOverlap) == 0x000030, "Wrong size on BP_WorldSecurity_AreaInvasion_Volume_C_IsPlayerOverlap");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_IsPlayerOverlap, IsOverlap) == 0x000000, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_IsPlayerOverlap::IsOverlap' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_IsPlayerOverlap, OverlapPlayers) == 0x000008, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_IsPlayerOverlap::OverlapPlayers' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_IsPlayerOverlap, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000018, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_IsPlayerOverlap::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_IsPlayerOverlap, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_IsPlayerOverlap::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_IsPlayerOverlap, CallFunc_Greater_IntInt_ReturnValue) == 0x00002C, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_IsPlayerOverlap::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function BP_WorldSecurity_AreaInvasion_Volume.BP_WorldSecurity_AreaInvasion_Volume_C.ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume
// 0x0080 (0x0080 - 0x0000)
struct BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_GetInstanceId_ReturnValue;                // 0x0004(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerOverlap_IsOverlap;                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_IsPlayerOverlap_OverlapPlayers;           // 0x0020(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWildNPC_ReturnValue;                    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E[0x2];                                       // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue_1;             // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWildNPC_ReturnValue_1;                  // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor_1;                         // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue_1;            // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWildNPC_ReturnValue_2;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CallFunc_GetInstanceId_ReturnValue_1;              // 0x0070(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume) == 0x000008, "Wrong alignment on BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume");
static_assert(sizeof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume) == 0x000080, "Wrong size on BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume, EntryPoint) == 0x000000, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume, CallFunc_GetInstanceId_ReturnValue) == 0x000004, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume::CallFunc_GetInstanceId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume, K2Node_Event_DeltaSeconds) == 0x000014, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume, CallFunc_IsPlayerOverlap_IsOverlap) == 0x00001C, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume::CallFunc_IsPlayerOverlap_IsOverlap' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume, CallFunc_IsPlayerOverlap_OverlapPlayers) == 0x000020, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume::CallFunc_IsPlayerOverlap_OverlapPlayers' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume, CallFunc_IsWildNPC_ReturnValue) == 0x00003C, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume::CallFunc_IsWildNPC_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume, CallFunc_Array_Contains_ReturnValue) == 0x00003D, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume, CallFunc_Array_AddUnique_ReturnValue) == 0x000040, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume, CallFunc_Not_PreBool_ReturnValue) == 0x000044, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume, Temp_int_Loop_Counter_Variable) == 0x000048, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume, K2Node_Event_OtherActor) == 0x000050, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume, CallFunc_Array_RemoveItem_ReturnValue) == 0x000058, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume, CallFunc_Array_Contains_ReturnValue_1) == 0x000059, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume::CallFunc_Array_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume, CallFunc_IsWildNPC_ReturnValue_1) == 0x00005A, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume::CallFunc_IsWildNPC_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume, CallFunc_Less_IntInt_ReturnValue) == 0x00005B, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume, K2Node_Event_OtherActor_1) == 0x000060, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume::K2Node_Event_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume, CallFunc_Array_AddUnique_ReturnValue_1) == 0x000068, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume::CallFunc_Array_AddUnique_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume, CallFunc_IsWildNPC_ReturnValue_2) == 0x00006C, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume::CallFunc_IsWildNPC_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume, CallFunc_GetInstanceId_ReturnValue_1) == 0x000070, "Member 'BP_WorldSecurity_AreaInvasion_Volume_C_ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume::CallFunc_GetInstanceId_ReturnValue_1' has a wrong offset!");

}

