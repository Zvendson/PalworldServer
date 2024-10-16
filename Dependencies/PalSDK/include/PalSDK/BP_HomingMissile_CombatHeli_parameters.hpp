#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_HomingMissile_CombatHeli.BP_HomingMissile_CombatHeli_C.Find Target Actor
// 0x00E0 (0x00E0 - 0x0000)
struct BP_HomingMissile_CombatHeli_C_Find_Target_Actor final
{
public:
	class APalCharacter*                          PalCharacter;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          NearestTarget;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	double                                        NearestDistance;                                   // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                AimPos;                                            // 0x0018(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APalCharacter*>                  CallFunc_GetAllPlayerCharacters_OutPlayers;        // 0x0040(0x0010)(ReferenceParm)
	class APalCharacter*                          CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APalCharacter*>                  CallFunc_GetAllPlayerCharacters_OutPlayers_1;      // 0x0060(0x0010)(ReferenceParm)
	class APalCharacter*                          CallFunc_Array_Get_Item_1;                         // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_VSizeSquared_ReturnValue;                 // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HomingMissile_CombatHeli_C_Find_Target_Actor) == 0x000008, "Wrong alignment on BP_HomingMissile_CombatHeli_C_Find_Target_Actor");
static_assert(sizeof(BP_HomingMissile_CombatHeli_C_Find_Target_Actor) == 0x0000E0, "Wrong size on BP_HomingMissile_CombatHeli_C_Find_Target_Actor");
static_assert(offsetof(BP_HomingMissile_CombatHeli_C_Find_Target_Actor, PalCharacter) == 0x000000, "Member 'BP_HomingMissile_CombatHeli_C_Find_Target_Actor::PalCharacter' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_CombatHeli_C_Find_Target_Actor, NearestTarget) == 0x000008, "Member 'BP_HomingMissile_CombatHeli_C_Find_Target_Actor::NearestTarget' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_CombatHeli_C_Find_Target_Actor, NearestDistance) == 0x000010, "Member 'BP_HomingMissile_CombatHeli_C_Find_Target_Actor::NearestDistance' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_CombatHeli_C_Find_Target_Actor, AimPos) == 0x000018, "Member 'BP_HomingMissile_CombatHeli_C_Find_Target_Actor::AimPos' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_CombatHeli_C_Find_Target_Actor, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'BP_HomingMissile_CombatHeli_C_Find_Target_Actor::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_CombatHeli_C_Find_Target_Actor, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'BP_HomingMissile_CombatHeli_C_Find_Target_Actor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_CombatHeli_C_Find_Target_Actor, Temp_int_Array_Index_Variable) == 0x000038, "Member 'BP_HomingMissile_CombatHeli_C_Find_Target_Actor::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_CombatHeli_C_Find_Target_Actor, CallFunc_GetAllPlayerCharacters_OutPlayers) == 0x000040, "Member 'BP_HomingMissile_CombatHeli_C_Find_Target_Actor::CallFunc_GetAllPlayerCharacters_OutPlayers' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_CombatHeli_C_Find_Target_Actor, CallFunc_Array_Get_Item) == 0x000050, "Member 'BP_HomingMissile_CombatHeli_C_Find_Target_Actor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_CombatHeli_C_Find_Target_Actor, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'BP_HomingMissile_CombatHeli_C_Find_Target_Actor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_CombatHeli_C_Find_Target_Actor, CallFunc_GetAllPlayerCharacters_OutPlayers_1) == 0x000060, "Member 'BP_HomingMissile_CombatHeli_C_Find_Target_Actor::CallFunc_GetAllPlayerCharacters_OutPlayers_1' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_CombatHeli_C_Find_Target_Actor, CallFunc_Array_Get_Item_1) == 0x000070, "Member 'BP_HomingMissile_CombatHeli_C_Find_Target_Actor::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_CombatHeli_C_Find_Target_Actor, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000078, "Member 'BP_HomingMissile_CombatHeli_C_Find_Target_Actor::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_CombatHeli_C_Find_Target_Actor, CallFunc_IsValid_ReturnValue_1) == 0x000080, "Member 'BP_HomingMissile_CombatHeli_C_Find_Target_Actor::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_CombatHeli_C_Find_Target_Actor, CallFunc_GetComponentByClass_ReturnValue) == 0x000088, "Member 'BP_HomingMissile_CombatHeli_C_Find_Target_Actor::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_CombatHeli_C_Find_Target_Actor, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000090, "Member 'BP_HomingMissile_CombatHeli_C_Find_Target_Actor::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_CombatHeli_C_Find_Target_Actor, CallFunc_Array_Length_ReturnValue) == 0x0000A8, "Member 'BP_HomingMissile_CombatHeli_C_Find_Target_Actor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_CombatHeli_C_Find_Target_Actor, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000B0, "Member 'BP_HomingMissile_CombatHeli_C_Find_Target_Actor::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_CombatHeli_C_Find_Target_Actor, CallFunc_Less_IntInt_ReturnValue) == 0x0000C8, "Member 'BP_HomingMissile_CombatHeli_C_Find_Target_Actor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_CombatHeli_C_Find_Target_Actor, CallFunc_VSizeSquared_ReturnValue) == 0x0000D0, "Member 'BP_HomingMissile_CombatHeli_C_Find_Target_Actor::CallFunc_VSizeSquared_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HomingMissile_CombatHeli_C_Find_Target_Actor, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0000D8, "Member 'BP_HomingMissile_CombatHeli_C_Find_Target_Actor::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");

}

