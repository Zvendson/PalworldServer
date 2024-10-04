#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.ExecuteUbergraph_BP_ThrowPalWeapon
// 0x0018 (0x0018 - 0x0000)
struct BP_ThrowPalWeapon_C_ExecuteUbergraph_BP_ThrowPalWeapon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNotEmptyOtomo_NotEmpty;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_attachActor;                          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_detachActor;                          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowPalWeapon_C_ExecuteUbergraph_BP_ThrowPalWeapon) == 0x000008, "Wrong alignment on BP_ThrowPalWeapon_C_ExecuteUbergraph_BP_ThrowPalWeapon");
static_assert(sizeof(BP_ThrowPalWeapon_C_ExecuteUbergraph_BP_ThrowPalWeapon) == 0x000018, "Wrong size on BP_ThrowPalWeapon_C_ExecuteUbergraph_BP_ThrowPalWeapon");
static_assert(offsetof(BP_ThrowPalWeapon_C_ExecuteUbergraph_BP_ThrowPalWeapon, EntryPoint) == 0x000000, "Member 'BP_ThrowPalWeapon_C_ExecuteUbergraph_BP_ThrowPalWeapon::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ThrowPalWeapon_C_ExecuteUbergraph_BP_ThrowPalWeapon, CallFunc_IsNotEmptyOtomo_NotEmpty) == 0x000004, "Member 'BP_ThrowPalWeapon_C_ExecuteUbergraph_BP_ThrowPalWeapon::CallFunc_IsNotEmptyOtomo_NotEmpty' has a wrong offset!");
static_assert(offsetof(BP_ThrowPalWeapon_C_ExecuteUbergraph_BP_ThrowPalWeapon, K2Node_Event_attachActor) == 0x000008, "Member 'BP_ThrowPalWeapon_C_ExecuteUbergraph_BP_ThrowPalWeapon::K2Node_Event_attachActor' has a wrong offset!");
static_assert(offsetof(BP_ThrowPalWeapon_C_ExecuteUbergraph_BP_ThrowPalWeapon, K2Node_Event_detachActor) == 0x000010, "Member 'BP_ThrowPalWeapon_C_ExecuteUbergraph_BP_ThrowPalWeapon::K2Node_Event_detachActor' has a wrong offset!");

// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.GetEquipSocketName
// 0x0008 (0x0008 - 0x0000)
struct BP_ThrowPalWeapon_C_GetEquipSocketName final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowPalWeapon_C_GetEquipSocketName) == 0x000004, "Wrong alignment on BP_ThrowPalWeapon_C_GetEquipSocketName");
static_assert(sizeof(BP_ThrowPalWeapon_C_GetEquipSocketName) == 0x000008, "Wrong size on BP_ThrowPalWeapon_C_GetEquipSocketName");
static_assert(offsetof(BP_ThrowPalWeapon_C_GetEquipSocketName, ReturnValue) == 0x000000, "Member 'BP_ThrowPalWeapon_C_GetEquipSocketName::ReturnValue' has a wrong offset!");

// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.GetThrowObjectClass
// 0x0008 (0x0008 - 0x0000)
struct BP_ThrowPalWeapon_C_GetThrowObjectClass final
{
public:
	class UClass*                                 ThrowObject;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowPalWeapon_C_GetThrowObjectClass) == 0x000008, "Wrong alignment on BP_ThrowPalWeapon_C_GetThrowObjectClass");
static_assert(sizeof(BP_ThrowPalWeapon_C_GetThrowObjectClass) == 0x000008, "Wrong size on BP_ThrowPalWeapon_C_GetThrowObjectClass");
static_assert(offsetof(BP_ThrowPalWeapon_C_GetThrowObjectClass, ThrowObject) == 0x000000, "Member 'BP_ThrowPalWeapon_C_GetThrowObjectClass::ThrowObject' has a wrong offset!");

// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.IsNotEmptyOtomo
// 0x0040 (0x0040 - 0x0000)
struct BP_ThrowPalWeapon_C_IsNotEmptyOtomo final
{
public:
	bool                                          NotEmpty;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalOtomoHolderComponentBase*           CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetOtomoCount_ReturnValue;                // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowPalWeapon_C_IsNotEmptyOtomo) == 0x000008, "Wrong alignment on BP_ThrowPalWeapon_C_IsNotEmptyOtomo");
static_assert(sizeof(BP_ThrowPalWeapon_C_IsNotEmptyOtomo) == 0x000040, "Wrong size on BP_ThrowPalWeapon_C_IsNotEmptyOtomo");
static_assert(offsetof(BP_ThrowPalWeapon_C_IsNotEmptyOtomo, NotEmpty) == 0x000000, "Member 'BP_ThrowPalWeapon_C_IsNotEmptyOtomo::NotEmpty' has a wrong offset!");
static_assert(offsetof(BP_ThrowPalWeapon_C_IsNotEmptyOtomo, CallFunc_GetPalmi_ReturnValue) == 0x000008, "Member 'BP_ThrowPalWeapon_C_IsNotEmptyOtomo::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPalWeapon_C_IsNotEmptyOtomo, CallFunc_HasAuthority_ReturnValue) == 0x000010, "Member 'BP_ThrowPalWeapon_C_IsNotEmptyOtomo::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPalWeapon_C_IsNotEmptyOtomo, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BP_ThrowPalWeapon_C_IsNotEmptyOtomo::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPalWeapon_C_IsNotEmptyOtomo, CallFunc_GetController_ReturnValue) == 0x000020, "Member 'BP_ThrowPalWeapon_C_IsNotEmptyOtomo::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPalWeapon_C_IsNotEmptyOtomo, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'BP_ThrowPalWeapon_C_IsNotEmptyOtomo::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPalWeapon_C_IsNotEmptyOtomo, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_ThrowPalWeapon_C_IsNotEmptyOtomo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPalWeapon_C_IsNotEmptyOtomo, CallFunc_GetOtomoCount_ReturnValue) == 0x000034, "Member 'BP_ThrowPalWeapon_C_IsNotEmptyOtomo::CallFunc_GetOtomoCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPalWeapon_C_IsNotEmptyOtomo, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000038, "Member 'BP_ThrowPalWeapon_C_IsNotEmptyOtomo::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.OnAttachWeapon
// 0x0008 (0x0008 - 0x0000)
struct BP_ThrowPalWeapon_C_OnAttachWeapon final
{
public:
	class AActor*                                 AttachActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowPalWeapon_C_OnAttachWeapon) == 0x000008, "Wrong alignment on BP_ThrowPalWeapon_C_OnAttachWeapon");
static_assert(sizeof(BP_ThrowPalWeapon_C_OnAttachWeapon) == 0x000008, "Wrong size on BP_ThrowPalWeapon_C_OnAttachWeapon");
static_assert(offsetof(BP_ThrowPalWeapon_C_OnAttachWeapon, AttachActor) == 0x000000, "Member 'BP_ThrowPalWeapon_C_OnAttachWeapon::AttachActor' has a wrong offset!");

// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.OnDetachWeapon
// 0x0008 (0x0008 - 0x0000)
struct BP_ThrowPalWeapon_C_OnDetachWeapon final
{
public:
	class AActor*                                 DetachActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowPalWeapon_C_OnDetachWeapon) == 0x000008, "Wrong alignment on BP_ThrowPalWeapon_C_OnDetachWeapon");
static_assert(sizeof(BP_ThrowPalWeapon_C_OnDetachWeapon) == 0x000008, "Wrong size on BP_ThrowPalWeapon_C_OnDetachWeapon");
static_assert(offsetof(BP_ThrowPalWeapon_C_OnDetachWeapon, DetachActor) == 0x000000, "Member 'BP_ThrowPalWeapon_C_OnDetachWeapon::DetachActor' has a wrong offset!");

// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.Set Flags
// 0x0030 (0x0030 - 0x0000)
struct BP_ThrowPalWeapon_C_Set_Flags final
{
public:
	bool                                          Disable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Speed;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FlagName;                                          // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetOwnerCharacter_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast; // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowPalWeapon_C_Set_Flags) == 0x000008, "Wrong alignment on BP_ThrowPalWeapon_C_Set_Flags");
static_assert(sizeof(BP_ThrowPalWeapon_C_Set_Flags) == 0x000030, "Wrong size on BP_ThrowPalWeapon_C_Set_Flags");
static_assert(offsetof(BP_ThrowPalWeapon_C_Set_Flags, Disable) == 0x000000, "Member 'BP_ThrowPalWeapon_C_Set_Flags::Disable' has a wrong offset!");
static_assert(offsetof(BP_ThrowPalWeapon_C_Set_Flags, Speed) == 0x000008, "Member 'BP_ThrowPalWeapon_C_Set_Flags::Speed' has a wrong offset!");
static_assert(offsetof(BP_ThrowPalWeapon_C_Set_Flags, FlagName) == 0x000010, "Member 'BP_ThrowPalWeapon_C_Set_Flags::FlagName' has a wrong offset!");
static_assert(offsetof(BP_ThrowPalWeapon_C_Set_Flags, CallFunc_GetOwnerCharacter_ReturnValue) == 0x000018, "Member 'BP_ThrowPalWeapon_C_Set_Flags::CallFunc_GetOwnerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPalWeapon_C_Set_Flags, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_ThrowPalWeapon_C_Set_Flags::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPalWeapon_C_Set_Flags, CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast) == 0x000028, "Member 'BP_ThrowPalWeapon_C_Set_Flags::CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast' has a wrong offset!");

// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.IsEmptyMagazine
// 0x0001 (0x0001 - 0x0000)
struct BP_ThrowPalWeapon_C_IsEmptyMagazine final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowPalWeapon_C_IsEmptyMagazine) == 0x000001, "Wrong alignment on BP_ThrowPalWeapon_C_IsEmptyMagazine");
static_assert(sizeof(BP_ThrowPalWeapon_C_IsEmptyMagazine) == 0x000001, "Wrong size on BP_ThrowPalWeapon_C_IsEmptyMagazine");
static_assert(offsetof(BP_ThrowPalWeapon_C_IsEmptyMagazine, ReturnValue) == 0x000000, "Member 'BP_ThrowPalWeapon_C_IsEmptyMagazine::ReturnValue' has a wrong offset!");

}

