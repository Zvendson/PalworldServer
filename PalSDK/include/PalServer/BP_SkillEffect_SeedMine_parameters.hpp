#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_SkillEffect_SeedMine.BP_SkillEffect_SeedMine_C.BndEvt__BP_SkillEffect_IcicleThrow_SpawnPos_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_IcicleThrow_SpawnPos_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_IcicleThrow_SpawnPos_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_IcicleThrow_SpawnPos_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_IcicleThrow_SpawnPos_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_IcicleThrow_SpawnPos_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_IcicleThrow_SpawnPos_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_IcicleThrow_SpawnPos_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_IcicleThrow_SpawnPos_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_IcicleThrow_SpawnPos_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_IcicleThrow_SpawnPos_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_IcicleThrow_SpawnPos_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_IcicleThrow_SpawnPos_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_IcicleThrow_SpawnPos_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_IcicleThrow_SpawnPos_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_IcicleThrow_SpawnPos_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_IcicleThrow_SpawnPos_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_IcicleThrow_SpawnPos_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_SkillEffect_SeedMine.BP_SkillEffect_SeedMine_C.BndEvt__BP_SkillEffect_SeedMine_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_SeedMine_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_SeedMine_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_SeedMine_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_SeedMine_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature) == 0x000118, "Wrong size on BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_SeedMine_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_SeedMine_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_SeedMine_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_SeedMine_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_SeedMine_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_SeedMine_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_SeedMine_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_SeedMine_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_SeedMine_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_SeedMine_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature, Hit) == 0x000030, "Member 'BP_SkillEffect_SeedMine_C_BndEvt__BP_SkillEffect_SeedMine_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function BP_SkillEffect_SeedMine.BP_SkillEffect_SeedMine_C.ExecuteUbergraph_BP_SkillEffect_SeedMine
// 0x0438 (0x0438 - 0x0000)
struct BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_2;                     // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_2;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_2;      // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_2;                     // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_2;              // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x009C(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1; // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AD[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue_2;                // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DD[0x3];                                       // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x00E0(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable_3;               // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2; // 0x01CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CE[0x2];                                      // 0x01CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D9[0x7];                                      // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x01F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x0210(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        K2Node_Event_DeltaSecond;                          // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable_3;                     // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_301[0x7];                                      // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_Defencer;                       // 0x0308(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         K2Node_CustomEvent_DamageInfo;                     // 0x0310(0x00D0)()
	int32                                         K2Node_CustomEvent_HitCount;                       // 0x03E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E4[0x4];                                      // 0x03E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_CustomEvent_AttackerComponent;              // 0x03E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x03F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent)> K2Node_CreateDelegate_OutputDelegate;              // 0x03F4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x0404(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0408(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x0410(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast_1;      // 0x0414(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x0418(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x0420(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast_2;      // 0x0424(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;   // 0x0428(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_2;  // 0x0430(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0434(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine) == 0x000008, "Wrong alignment on BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine");
static_assert(sizeof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine) == 0x000438, "Wrong size on BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, Temp_bool_IsClosed_Variable) == 0x000005, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, Temp_bool_Has_Been_Initd_Variable_1) == 0x000006, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, Temp_bool_IsClosed_Variable_1) == 0x000007, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, Temp_bool_IsClosed_Variable_2) == 0x000008, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::Temp_bool_IsClosed_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_FClamp_ReturnValue) == 0x000020, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_GetFloatValue_ReturnValue) == 0x000028, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_SelectFloat_ReturnValue) == 0x000030, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, Temp_bool_Has_Been_Initd_Variable_2) == 0x000040, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::Temp_bool_Has_Been_Initd_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000048, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000050, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_SelectFloat_ReturnValue_1) == 0x000058, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_FClamp_ReturnValue_1) == 0x000060, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_GetFloatValue_ReturnValue_1) == 0x000068, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000070, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000078, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_Subtract_DoubleDouble_ReturnValue_2) == 0x000080, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_Subtract_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_Divide_DoubleDouble_ReturnValue_2) == 0x000088, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_Divide_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_FClamp_ReturnValue_2) == 0x000090, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_FClamp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_GetFloatValue_ReturnValue_2) == 0x000098, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_GetFloatValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, Temp_delegate_Variable) == 0x00009C, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1) == 0x0000AC, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_SelectFloat_ReturnValue_2) == 0x0000B0, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_SelectFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x0000B8, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x0000C0, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, K2Node_ComponentBoundEvent_OtherActor_1) == 0x0000C8, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, K2Node_ComponentBoundEvent_OtherComp_1) == 0x0000D0, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0000D8, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, K2Node_ComponentBoundEvent_bFromSweep) == 0x0000DC, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, K2Node_ComponentBoundEvent_SweepResult) == 0x0000E0, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, K2Node_Event_DeltaSeconds) == 0x0001C8, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, Temp_bool_Has_Been_Initd_Variable_3) == 0x0001CC, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::Temp_bool_Has_Been_Initd_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2) == 0x0001CD, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_GetOwner_ReturnValue) == 0x0001D0, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x0001D8, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, K2Node_ComponentBoundEvent_HitComponent) == 0x0001E0, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, K2Node_ComponentBoundEvent_OtherActor) == 0x0001E8, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, K2Node_ComponentBoundEvent_OtherComp) == 0x0001F0, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, K2Node_ComponentBoundEvent_NormalImpulse) == 0x0001F8, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, K2Node_ComponentBoundEvent_Hit) == 0x000210, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, K2Node_Event_DeltaSecond) == 0x0002F8, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::K2Node_Event_DeltaSecond' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, Temp_bool_IsClosed_Variable_3) == 0x000300, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::Temp_bool_IsClosed_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, K2Node_CustomEvent_Defencer) == 0x000308, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::K2Node_CustomEvent_Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, K2Node_CustomEvent_DamageInfo) == 0x000310, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::K2Node_CustomEvent_DamageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, K2Node_CustomEvent_HitCount) == 0x0003E0, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::K2Node_CustomEvent_HitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, K2Node_CustomEvent_AttackerComponent) == 0x0003E8, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::K2Node_CustomEvent_AttackerComponent' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_PostEvent_ReturnValue) == 0x0003F0, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, K2Node_CreateDelegate_OutputDelegate) == 0x0003F4, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x000404, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000408, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x000410, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_GetFloatValue_InTime_ImplicitCast_1) == 0x000414, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_GetFloatValue_InTime_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x000418, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_SetVariableFloat_InValue_ImplicitCast_1) == 0x000420, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_SetVariableFloat_InValue_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_GetFloatValue_InTime_ImplicitCast_2) == 0x000424, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_GetFloatValue_InTime_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2) == 0x000428, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_SetVariableFloat_InValue_ImplicitCast_2) == 0x000430, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_SetVariableFloat_InValue_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine, CallFunc_Delay_Duration_ImplicitCast) == 0x000434, "Member 'BP_SkillEffect_SeedMine_C_ExecuteUbergraph_BP_SkillEffect_SeedMine::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_SeedMine.BP_SkillEffect_SeedMine_C.Explosion
// 0x01B0 (0x01B0 - 0x0000)
struct BP_SkillEffect_SeedMine_C_Explosion final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue; // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0120(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_SeedMine_Seed_C*        CallFunc_FinishSpawningActor_ReturnValue;          // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomUnitVectorInConeInDegrees_ConeHalfAngleInDegrees_ImplicitCast; // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_SeedMine_C_Explosion) == 0x000010, "Wrong alignment on BP_SkillEffect_SeedMine_C_Explosion");
static_assert(sizeof(BP_SkillEffect_SeedMine_C_Explosion) == 0x0001B0, "Wrong size on BP_SkillEffect_SeedMine_C_Explosion");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, Temp_int_Variable) == 0x000000, "Member 'BP_SkillEffect_SeedMine_C_Explosion::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000008, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, Temp_int_Variable_1) == 0x000020, "Member 'BP_SkillEffect_SeedMine_C_Explosion::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000028, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_GetForwardVector_ReturnValue) == 0x000030, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000048, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue) == 0x000050, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000068, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_Add_IntInt_ReturnValue_1) == 0x00006C, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000070, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000078, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000080, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000098, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_Add_VectorVector_ReturnValue) == 0x0000A0, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_MakeRotator_ReturnValue) == 0x0000B8, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_Conv_FloatToVector_ReturnValue) == 0x0000D0, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0000E8, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000F0, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000108, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_MakeTransform_ReturnValue) == 0x000120, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000180, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_FinishSpawningActor_ReturnValue) == 0x000188, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_RandomUnitVectorInConeInDegrees_ConeHalfAngleInDegrees_ImplicitCast) == 0x000190, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_RandomUnitVectorInConeInDegrees_ConeHalfAngleInDegrees_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_MakeRotator_Pitch_ImplicitCast) == 0x000194, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_MakeRotator_Pitch_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000198, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_Explosion, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x0001A0, "Member 'BP_SkillEffect_SeedMine_C_Explosion::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_SeedMine.BP_SkillEffect_SeedMine_C.FadeOutEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_SeedMine_C_FadeOutEffect final
{
public:
	double                                        DeltaSecond;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_SeedMine_C_FadeOutEffect) == 0x000008, "Wrong alignment on BP_SkillEffect_SeedMine_C_FadeOutEffect");
static_assert(sizeof(BP_SkillEffect_SeedMine_C_FadeOutEffect) == 0x000008, "Wrong size on BP_SkillEffect_SeedMine_C_FadeOutEffect");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_FadeOutEffect, DeltaSecond) == 0x000000, "Member 'BP_SkillEffect_SeedMine_C_FadeOutEffect::DeltaSecond' has a wrong offset!");

// Function BP_SkillEffect_SeedMine.BP_SkillEffect_SeedMine_C.OnAttackDelegate_イベント_0
// 0x00E8 (0x00E8 - 0x0000)
struct BP_SkillEffect_SeedMine_C_OnAttackDelegate______________0 final
{
public:
	class AActor*                                 Defencer;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDamageInfo                         DamageInfo;                                        // 0x0008(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         HitCount;                                          // 0x00D8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    AttackerComponent;                                 // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_SeedMine_C_OnAttackDelegate______________0) == 0x000008, "Wrong alignment on BP_SkillEffect_SeedMine_C_OnAttackDelegate______________0");
static_assert(sizeof(BP_SkillEffect_SeedMine_C_OnAttackDelegate______________0) == 0x0000E8, "Wrong size on BP_SkillEffect_SeedMine_C_OnAttackDelegate______________0");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_OnAttackDelegate______________0, Defencer) == 0x000000, "Member 'BP_SkillEffect_SeedMine_C_OnAttackDelegate______________0::Defencer' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_OnAttackDelegate______________0, DamageInfo) == 0x000008, "Member 'BP_SkillEffect_SeedMine_C_OnAttackDelegate______________0::DamageInfo' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_OnAttackDelegate______________0, HitCount) == 0x0000D8, "Member 'BP_SkillEffect_SeedMine_C_OnAttackDelegate______________0::HitCount' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_OnAttackDelegate______________0, AttackerComponent) == 0x0000E0, "Member 'BP_SkillEffect_SeedMine_C_OnAttackDelegate______________0::AttackerComponent' has a wrong offset!");

// Function BP_SkillEffect_SeedMine.BP_SkillEffect_SeedMine_C.ReceiveHit
// 0x0150 (0x0150 - 0x0000)
struct BP_SkillEffect_SeedMine_C_ReceiveHit final
{
public:
	class UPrimitiveComponent*                    MyComp;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Other;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelfMoved;                                        // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HitLocation;                                       // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x0038(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0050(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0068(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SkillEffect_SeedMine_C_ReceiveHit) == 0x000008, "Wrong alignment on BP_SkillEffect_SeedMine_C_ReceiveHit");
static_assert(sizeof(BP_SkillEffect_SeedMine_C_ReceiveHit) == 0x000150, "Wrong size on BP_SkillEffect_SeedMine_C_ReceiveHit");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ReceiveHit, MyComp) == 0x000000, "Member 'BP_SkillEffect_SeedMine_C_ReceiveHit::MyComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ReceiveHit, Other) == 0x000008, "Member 'BP_SkillEffect_SeedMine_C_ReceiveHit::Other' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ReceiveHit, OtherComp) == 0x000010, "Member 'BP_SkillEffect_SeedMine_C_ReceiveHit::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ReceiveHit, bSelfMoved) == 0x000018, "Member 'BP_SkillEffect_SeedMine_C_ReceiveHit::bSelfMoved' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ReceiveHit, HitLocation) == 0x000020, "Member 'BP_SkillEffect_SeedMine_C_ReceiveHit::HitLocation' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ReceiveHit, HitNormal) == 0x000038, "Member 'BP_SkillEffect_SeedMine_C_ReceiveHit::HitNormal' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ReceiveHit, NormalImpulse) == 0x000050, "Member 'BP_SkillEffect_SeedMine_C_ReceiveHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ReceiveHit, Hit) == 0x000068, "Member 'BP_SkillEffect_SeedMine_C_ReceiveHit::Hit' has a wrong offset!");

// Function BP_SkillEffect_SeedMine.BP_SkillEffect_SeedMine_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SkillEffect_SeedMine_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_SeedMine_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SkillEffect_SeedMine_C_ReceiveTick");
static_assert(sizeof(BP_SkillEffect_SeedMine_C_ReceiveTick) == 0x000004, "Wrong size on BP_SkillEffect_SeedMine_C_ReceiveTick");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SkillEffect_SeedMine_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_SkillEffect_SeedMine.BP_SkillEffect_SeedMine_C.SetTarget
// 0x0280 (0x0280 - 0x0000)
struct BP_SkillEffect_SeedMine_C_SetTarget final
{
public:
	bool                                          CallFunc_IsRidden_ReturnValue;                     // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0058(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActionTargetLocation_ReturnValue;      // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTargetActor_ReturnValue;         // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity; // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue; // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetDirectionUnitVector_ReturnValue;       // 0x01E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x01F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x0210(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity_1; // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue_1; // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_259[0x7];                                      // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_2;      // 0x0260(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_ProjectileGravityScale_ImplicitCast; // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_SeedMine_C_SetTarget) == 0x000008, "Wrong alignment on BP_SkillEffect_SeedMine_C_SetTarget");
static_assert(sizeof(BP_SkillEffect_SeedMine_C_SetTarget) == 0x000280, "Wrong size on BP_SkillEffect_SeedMine_C_SetTarget");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_SetTarget, CallFunc_IsRidden_ReturnValue) == 0x000000, "Member 'BP_SkillEffect_SeedMine_C_SetTarget::CallFunc_IsRidden_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_SetTarget, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_SkillEffect_SeedMine_C_SetTarget::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_SetTarget, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000020, "Member 'BP_SkillEffect_SeedMine_C_SetTarget::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_SetTarget, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000038, "Member 'BP_SkillEffect_SeedMine_C_SetTarget::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_SetTarget, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000040, "Member 'BP_SkillEffect_SeedMine_C_SetTarget::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_SetTarget, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000058, "Member 'BP_SkillEffect_SeedMine_C_SetTarget::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_SetTarget, CallFunc_MakeVector_ReturnValue) == 0x000140, "Member 'BP_SkillEffect_SeedMine_C_SetTarget::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_SetTarget, CallFunc_MakeVector_ReturnValue_1) == 0x000158, "Member 'BP_SkillEffect_SeedMine_C_SetTarget::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_SetTarget, CallFunc_GetActionTargetLocation_ReturnValue) == 0x000170, "Member 'BP_SkillEffect_SeedMine_C_SetTarget::CallFunc_GetActionTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_SetTarget, CallFunc_GetActionTargetActor_ReturnValue) == 0x000188, "Member 'BP_SkillEffect_SeedMine_C_SetTarget::CallFunc_GetActionTargetActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_SetTarget, CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity) == 0x000190, "Member 'BP_SkillEffect_SeedMine_C_SetTarget::CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_SetTarget, CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue) == 0x0001A8, "Member 'BP_SkillEffect_SeedMine_C_SetTarget::CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_SetTarget, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x0001B0, "Member 'BP_SkillEffect_SeedMine_C_SetTarget::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_SetTarget, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0001C8, "Member 'BP_SkillEffect_SeedMine_C_SetTarget::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_SetTarget, CallFunc_GetDirectionUnitVector_ReturnValue) == 0x0001E0, "Member 'BP_SkillEffect_SeedMine_C_SetTarget::CallFunc_GetDirectionUnitVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_SetTarget, CallFunc_Conv_FloatToVector_ReturnValue) == 0x0001F8, "Member 'BP_SkillEffect_SeedMine_C_SetTarget::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_SetTarget, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x000210, "Member 'BP_SkillEffect_SeedMine_C_SetTarget::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_SetTarget, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000228, "Member 'BP_SkillEffect_SeedMine_C_SetTarget::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_SetTarget, CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity_1) == 0x000240, "Member 'BP_SkillEffect_SeedMine_C_SetTarget::CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_SetTarget, CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue_1) == 0x000258, "Member 'BP_SkillEffect_SeedMine_C_SetTarget::CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_SetTarget, CallFunc_Multiply_VectorVector_ReturnValue_2) == 0x000260, "Member 'BP_SkillEffect_SeedMine_C_SetTarget::CallFunc_Multiply_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SeedMine_C_SetTarget, K2Node_VariableSet_ProjectileGravityScale_ImplicitCast) == 0x000278, "Member 'BP_SkillEffect_SeedMine_C_SetTarget::K2Node_VariableSet_ProjectileGravityScale_ImplicitCast' has a wrong offset!");

}

