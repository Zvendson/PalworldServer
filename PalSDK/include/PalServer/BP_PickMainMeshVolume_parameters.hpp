#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.Applied Make Info
// 0x0008 (0x0008 - 0x0000)
struct BP_PickMainMeshVolume_C_Applied_Make_Info final
{
public:
	const class UPalSkeletalMeshComponent*        SkeletalMeshComponent;                             // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PickMainMeshVolume_C_Applied_Make_Info) == 0x000008, "Wrong alignment on BP_PickMainMeshVolume_C_Applied_Make_Info");
static_assert(sizeof(BP_PickMainMeshVolume_C_Applied_Make_Info) == 0x000008, "Wrong size on BP_PickMainMeshVolume_C_Applied_Make_Info");
static_assert(offsetof(BP_PickMainMeshVolume_C_Applied_Make_Info, SkeletalMeshComponent) == 0x000000, "Member 'BP_PickMainMeshVolume_C_Applied_Make_Info::SkeletalMeshComponent' has a wrong offset!");

// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.BeginOverlapMainMesh
// 0x0040 (0x0040 - 0x0000)
struct BP_PickMainMeshVolume_C_BeginOverlapMainMesh final
{
public:
	class UMeshComponent*                         InMainMesh;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumMaterials_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPalLit_IsPalLit;                        // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPalLit_IsPalLit_1;                      // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PickMainMeshVolume_C_BeginOverlapMainMesh) == 0x000008, "Wrong alignment on BP_PickMainMeshVolume_C_BeginOverlapMainMesh");
static_assert(sizeof(BP_PickMainMeshVolume_C_BeginOverlapMainMesh) == 0x000040, "Wrong size on BP_PickMainMeshVolume_C_BeginOverlapMainMesh");
static_assert(offsetof(BP_PickMainMeshVolume_C_BeginOverlapMainMesh, InMainMesh) == 0x000000, "Member 'BP_PickMainMeshVolume_C_BeginOverlapMainMesh::InMainMesh' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_BeginOverlapMainMesh, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_PickMainMeshVolume_C_BeginOverlapMainMesh::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_BeginOverlapMainMesh, CallFunc_GetNumMaterials_ReturnValue) == 0x00000C, "Member 'BP_PickMainMeshVolume_C_BeginOverlapMainMesh::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_BeginOverlapMainMesh, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'BP_PickMainMeshVolume_C_BeginOverlapMainMesh::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_BeginOverlapMainMesh, Temp_int_Variable) == 0x000014, "Member 'BP_PickMainMeshVolume_C_BeginOverlapMainMesh::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_BeginOverlapMainMesh, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000018, "Member 'BP_PickMainMeshVolume_C_BeginOverlapMainMesh::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_BeginOverlapMainMesh, CallFunc_GetMaterial_ReturnValue) == 0x000020, "Member 'BP_PickMainMeshVolume_C_BeginOverlapMainMesh::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_BeginOverlapMainMesh, K2Node_DynamicCast_AsMaterial_Instance_Dynamic) == 0x000028, "Member 'BP_PickMainMeshVolume_C_BeginOverlapMainMesh::K2Node_DynamicCast_AsMaterial_Instance_Dynamic' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_BeginOverlapMainMesh, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_PickMainMeshVolume_C_BeginOverlapMainMesh::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_BeginOverlapMainMesh, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'BP_PickMainMeshVolume_C_BeginOverlapMainMesh::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_BeginOverlapMainMesh, CallFunc_IsValid_ReturnValue_2) == 0x000032, "Member 'BP_PickMainMeshVolume_C_BeginOverlapMainMesh::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_BeginOverlapMainMesh, CallFunc_IsPalLit_IsPalLit) == 0x000033, "Member 'BP_PickMainMeshVolume_C_BeginOverlapMainMesh::CallFunc_IsPalLit_IsPalLit' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_BeginOverlapMainMesh, CallFunc_IsPalLit_IsPalLit_1) == 0x000034, "Member 'BP_PickMainMeshVolume_C_BeginOverlapMainMesh::CallFunc_IsPalLit_IsPalLit_1' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_BeginOverlapMainMesh, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000035, "Member 'BP_PickMainMeshVolume_C_BeginOverlapMainMesh::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_BeginOverlapMainMesh, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'BP_PickMainMeshVolume_C_BeginOverlapMainMesh::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.BeginOverlapPalLit
// 0x0010 (0x0010 - 0x0000)
struct BP_PickMainMeshVolume_C_BeginOverlapPalLit final
{
public:
	class UMaterialInstanceDynamic*               Material;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          MaterialSrc;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PickMainMeshVolume_C_BeginOverlapPalLit) == 0x000008, "Wrong alignment on BP_PickMainMeshVolume_C_BeginOverlapPalLit");
static_assert(sizeof(BP_PickMainMeshVolume_C_BeginOverlapPalLit) == 0x000010, "Wrong size on BP_PickMainMeshVolume_C_BeginOverlapPalLit");
static_assert(offsetof(BP_PickMainMeshVolume_C_BeginOverlapPalLit, Material) == 0x000000, "Member 'BP_PickMainMeshVolume_C_BeginOverlapPalLit::Material' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_BeginOverlapPalLit, MaterialSrc) == 0x000008, "Member 'BP_PickMainMeshVolume_C_BeginOverlapPalLit::MaterialSrc' has a wrong offset!");

// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_PickMainMeshVolume_C_BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
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
static_assert(alignof(BP_PickMainMeshVolume_C_BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_PickMainMeshVolume_C_BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_PickMainMeshVolume_C_BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_PickMainMeshVolume_C_BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_PickMainMeshVolume_C_BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_PickMainMeshVolume_C_BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_PickMainMeshVolume_C_BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_PickMainMeshVolume_C_BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_PickMainMeshVolume_C_BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_PickMainMeshVolume_C_BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_PickMainMeshVolume_C_BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.BndEvt__BP_PickMainMeshVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_PickMainMeshVolume_C_BndEvt__BP_PickMainMeshVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PickMainMeshVolume_C_BndEvt__BP_PickMainMeshVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_PickMainMeshVolume_C_BndEvt__BP_PickMainMeshVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_PickMainMeshVolume_C_BndEvt__BP_PickMainMeshVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_PickMainMeshVolume_C_BndEvt__BP_PickMainMeshVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_PickMainMeshVolume_C_BndEvt__BP_PickMainMeshVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_PickMainMeshVolume_C_BndEvt__BP_PickMainMeshVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_BndEvt__BP_PickMainMeshVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_PickMainMeshVolume_C_BndEvt__BP_PickMainMeshVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_BndEvt__BP_PickMainMeshVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_PickMainMeshVolume_C_BndEvt__BP_PickMainMeshVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_BndEvt__BP_PickMainMeshVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_PickMainMeshVolume_C_BndEvt__BP_PickMainMeshVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.EndOverlapMainMesh
// 0x0048 (0x0048 - 0x0000)
struct BP_PickMainMeshVolume_C_EndOverlapMainMesh final
{
public:
	class UMeshComponent*                         OutMainMesh;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumMaterials_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPalLit_IsPalLit;                        // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPalLit_IsPalLit_1;                      // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PickMainMeshVolume_C_EndOverlapMainMesh) == 0x000008, "Wrong alignment on BP_PickMainMeshVolume_C_EndOverlapMainMesh");
static_assert(sizeof(BP_PickMainMeshVolume_C_EndOverlapMainMesh) == 0x000048, "Wrong size on BP_PickMainMeshVolume_C_EndOverlapMainMesh");
static_assert(offsetof(BP_PickMainMeshVolume_C_EndOverlapMainMesh, OutMainMesh) == 0x000000, "Member 'BP_PickMainMeshVolume_C_EndOverlapMainMesh::OutMainMesh' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_EndOverlapMainMesh, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_PickMainMeshVolume_C_EndOverlapMainMesh::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_EndOverlapMainMesh, CallFunc_GetNumMaterials_ReturnValue) == 0x00000C, "Member 'BP_PickMainMeshVolume_C_EndOverlapMainMesh::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_EndOverlapMainMesh, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'BP_PickMainMeshVolume_C_EndOverlapMainMesh::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_EndOverlapMainMesh, Temp_int_Variable) == 0x000014, "Member 'BP_PickMainMeshVolume_C_EndOverlapMainMesh::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_EndOverlapMainMesh, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BP_PickMainMeshVolume_C_EndOverlapMainMesh::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_EndOverlapMainMesh, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000020, "Member 'BP_PickMainMeshVolume_C_EndOverlapMainMesh::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_EndOverlapMainMesh, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'BP_PickMainMeshVolume_C_EndOverlapMainMesh::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_EndOverlapMainMesh, CallFunc_IsPalLit_IsPalLit) == 0x000029, "Member 'BP_PickMainMeshVolume_C_EndOverlapMainMesh::CallFunc_IsPalLit_IsPalLit' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_EndOverlapMainMesh, CallFunc_GetMaterial_ReturnValue) == 0x000030, "Member 'BP_PickMainMeshVolume_C_EndOverlapMainMesh::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_EndOverlapMainMesh, K2Node_DynamicCast_AsMaterial_Instance_Dynamic) == 0x000038, "Member 'BP_PickMainMeshVolume_C_EndOverlapMainMesh::K2Node_DynamicCast_AsMaterial_Instance_Dynamic' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_EndOverlapMainMesh, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_PickMainMeshVolume_C_EndOverlapMainMesh::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_EndOverlapMainMesh, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000041, "Member 'BP_PickMainMeshVolume_C_EndOverlapMainMesh::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_EndOverlapMainMesh, CallFunc_IsValid_ReturnValue_2) == 0x000042, "Member 'BP_PickMainMeshVolume_C_EndOverlapMainMesh::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_EndOverlapMainMesh, CallFunc_IsPalLit_IsPalLit_1) == 0x000043, "Member 'BP_PickMainMeshVolume_C_EndOverlapMainMesh::CallFunc_IsPalLit_IsPalLit_1' has a wrong offset!");

// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.EndOverlapPalLit
// 0x0008 (0x0008 - 0x0000)
struct BP_PickMainMeshVolume_C_EndOverlapPalLit final
{
public:
	class UMaterialInstanceDynamic*               Material;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PickMainMeshVolume_C_EndOverlapPalLit) == 0x000008, "Wrong alignment on BP_PickMainMeshVolume_C_EndOverlapPalLit");
static_assert(sizeof(BP_PickMainMeshVolume_C_EndOverlapPalLit) == 0x000008, "Wrong size on BP_PickMainMeshVolume_C_EndOverlapPalLit");
static_assert(offsetof(BP_PickMainMeshVolume_C_EndOverlapPalLit, Material) == 0x000000, "Member 'BP_PickMainMeshVolume_C_EndOverlapPalLit::Material' has a wrong offset!");

// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.ExecuteUbergraph_BP_PickMainMeshVolume
// 0x01B0 (0x01B0 - 0x0000)
struct BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UPalSkeletalMeshComponent*        K2Node_CustomEvent_SkeletalMeshComponent;          // 0x0008(0x0008)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalSkeletalMeshComponent* SkeletalMeshComponent)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0058(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0140(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0150(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15C[0x4];                                      // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMeshComponent*>                 CallFunc_GetMeshFromActor_Mesh;                    // 0x0160(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UMeshComponent*>                 CallFunc_GetMeshFromActor_Mesh_1;                  // 0x0170(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UMeshComponent*                         CallFunc_Array_Get_Item;                           // 0x0180(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                         CallFunc_Array_Get_Item_1;                         // 0x0188(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component;  // 0x0190(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_199[0x3];                                      // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AA[0x2];                                      // 0x01AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume) == 0x000008, "Wrong alignment on BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume");
static_assert(sizeof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume) == 0x0001B0, "Wrong size on BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, EntryPoint) == 0x000000, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, K2Node_CustomEvent_SkeletalMeshComponent) == 0x000008, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::K2Node_CustomEvent_SkeletalMeshComponent' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, Temp_int_Array_Index_Variable_1) == 0x00002C, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, K2Node_Event_DeltaSeconds) == 0x000030, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000038, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000040, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000048, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000050, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, K2Node_ComponentBoundEvent_bFromSweep) == 0x000054, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, K2Node_ComponentBoundEvent_SweepResult) == 0x000058, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000140, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, K2Node_ComponentBoundEvent_OtherActor) == 0x000148, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, K2Node_ComponentBoundEvent_OtherComp) == 0x000150, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000158, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, CallFunc_GetMeshFromActor_Mesh) == 0x000160, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::CallFunc_GetMeshFromActor_Mesh' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, CallFunc_GetMeshFromActor_Mesh_1) == 0x000170, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::CallFunc_GetMeshFromActor_Mesh_1' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, CallFunc_Array_Get_Item) == 0x000180, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, CallFunc_Array_Get_Item_1) == 0x000188, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component) == 0x000190, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, K2Node_DynamicCast_bSuccess) == 0x000198, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, CallFunc_Array_Length_ReturnValue) == 0x00019C, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, CallFunc_Array_Length_ReturnValue_1) == 0x0001A0, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, Temp_int_Loop_Counter_Variable_1) == 0x0001A4, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, CallFunc_Less_IntInt_ReturnValue) == 0x0001A8, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001A9, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001AC, "Member 'BP_PickMainMeshVolume_C_ExecuteUbergraph_BP_PickMainMeshVolume::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.GetMeshFromActor
// 0x0078 (0x0078 - 0x0000)
struct BP_PickMainMeshVolume_C_GetMeshFromActor final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UMeshComponent*>                 Mesh;                                              // 0x0008(0x0010)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UMeshComponent*>                 ResultMeshForPV;                                   // 0x0018(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Variable;                                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UMeshComponent*>                 CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0058(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_IsPalLit_IsPalLit;                        // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x2];                                       // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumMaterials_ReturnValue;              // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PickMainMeshVolume_C_GetMeshFromActor) == 0x000008, "Wrong alignment on BP_PickMainMeshVolume_C_GetMeshFromActor");
static_assert(sizeof(BP_PickMainMeshVolume_C_GetMeshFromActor) == 0x000078, "Wrong size on BP_PickMainMeshVolume_C_GetMeshFromActor");
static_assert(offsetof(BP_PickMainMeshVolume_C_GetMeshFromActor, Actor) == 0x000000, "Member 'BP_PickMainMeshVolume_C_GetMeshFromActor::Actor' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_GetMeshFromActor, Mesh) == 0x000008, "Member 'BP_PickMainMeshVolume_C_GetMeshFromActor::Mesh' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_GetMeshFromActor, ResultMeshForPV) == 0x000018, "Member 'BP_PickMainMeshVolume_C_GetMeshFromActor::ResultMeshForPV' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_GetMeshFromActor, Temp_int_Variable) == 0x000028, "Member 'BP_PickMainMeshVolume_C_GetMeshFromActor::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_GetMeshFromActor, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'BP_PickMainMeshVolume_C_GetMeshFromActor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_GetMeshFromActor, CallFunc_GetComponentByClass_ReturnValue) == 0x000030, "Member 'BP_PickMainMeshVolume_C_GetMeshFromActor::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_GetMeshFromActor, CallFunc_Array_Add_ReturnValue) == 0x000038, "Member 'BP_PickMainMeshVolume_C_GetMeshFromActor::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_GetMeshFromActor, K2Node_DynamicCast_AsPal_Character) == 0x000040, "Member 'BP_PickMainMeshVolume_C_GetMeshFromActor::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_GetMeshFromActor, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_PickMainMeshVolume_C_GetMeshFromActor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_GetMeshFromActor, CallFunc_GetMaterial_ReturnValue) == 0x000050, "Member 'BP_PickMainMeshVolume_C_GetMeshFromActor::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_GetMeshFromActor, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000058, "Member 'BP_PickMainMeshVolume_C_GetMeshFromActor::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_GetMeshFromActor, CallFunc_IsPalLit_IsPalLit) == 0x000068, "Member 'BP_PickMainMeshVolume_C_GetMeshFromActor::CallFunc_IsPalLit_IsPalLit' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_GetMeshFromActor, CallFunc_IsValid_ReturnValue) == 0x000069, "Member 'BP_PickMainMeshVolume_C_GetMeshFromActor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_GetMeshFromActor, CallFunc_GetNumMaterials_ReturnValue) == 0x00006C, "Member 'BP_PickMainMeshVolume_C_GetMeshFromActor::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_GetMeshFromActor, CallFunc_Subtract_IntInt_ReturnValue) == 0x000070, "Member 'BP_PickMainMeshVolume_C_GetMeshFromActor::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_GetMeshFromActor, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000074, "Member 'BP_PickMainMeshVolume_C_GetMeshFromActor::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_GetMeshFromActor, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000075, "Member 'BP_PickMainMeshVolume_C_GetMeshFromActor::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.IsCelShader
// 0x0038 (0x0038 - 0x0000)
struct BP_PickMainMeshVolume_C_IsCelShader final
{
public:
	class UMaterialInterface*                     Material;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCelShader_0;                                     // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterial*                              CallFunc_GetBaseMaterial_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPathName_ReturnValue;                  // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PickMainMeshVolume_C_IsCelShader) == 0x000008, "Wrong alignment on BP_PickMainMeshVolume_C_IsCelShader");
static_assert(sizeof(BP_PickMainMeshVolume_C_IsCelShader) == 0x000038, "Wrong size on BP_PickMainMeshVolume_C_IsCelShader");
static_assert(offsetof(BP_PickMainMeshVolume_C_IsCelShader, Material) == 0x000000, "Member 'BP_PickMainMeshVolume_C_IsCelShader::Material' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_IsCelShader, IsCelShader_0) == 0x000008, "Member 'BP_PickMainMeshVolume_C_IsCelShader::IsCelShader_0' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_IsCelShader, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'BP_PickMainMeshVolume_C_IsCelShader::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_IsCelShader, CallFunc_GetBaseMaterial_ReturnValue) == 0x000010, "Member 'BP_PickMainMeshVolume_C_IsCelShader::CallFunc_GetBaseMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_IsCelShader, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'BP_PickMainMeshVolume_C_IsCelShader::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_IsCelShader, CallFunc_GetPathName_ReturnValue) == 0x000020, "Member 'BP_PickMainMeshVolume_C_IsCelShader::CallFunc_GetPathName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_IsCelShader, CallFunc_Contains_ReturnValue) == 0x000030, "Member 'BP_PickMainMeshVolume_C_IsCelShader::CallFunc_Contains_ReturnValue' has a wrong offset!");

// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.IsPalLit
// 0x0038 (0x0038 - 0x0000)
struct BP_PickMainMeshVolume_C_IsPalLit final
{
public:
	class UMaterialInterface*                     Material;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPalLit_0;                                        // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterial*                              CallFunc_GetBaseMaterial_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPathName_ReturnValue;                  // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PickMainMeshVolume_C_IsPalLit) == 0x000008, "Wrong alignment on BP_PickMainMeshVolume_C_IsPalLit");
static_assert(sizeof(BP_PickMainMeshVolume_C_IsPalLit) == 0x000038, "Wrong size on BP_PickMainMeshVolume_C_IsPalLit");
static_assert(offsetof(BP_PickMainMeshVolume_C_IsPalLit, Material) == 0x000000, "Member 'BP_PickMainMeshVolume_C_IsPalLit::Material' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_IsPalLit, IsPalLit_0) == 0x000008, "Member 'BP_PickMainMeshVolume_C_IsPalLit::IsPalLit_0' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_IsPalLit, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'BP_PickMainMeshVolume_C_IsPalLit::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_IsPalLit, CallFunc_GetBaseMaterial_ReturnValue) == 0x000010, "Member 'BP_PickMainMeshVolume_C_IsPalLit::CallFunc_GetBaseMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_IsPalLit, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'BP_PickMainMeshVolume_C_IsPalLit::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_IsPalLit, CallFunc_GetPathName_ReturnValue) == 0x000020, "Member 'BP_PickMainMeshVolume_C_IsPalLit::CallFunc_GetPathName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PickMainMeshVolume_C_IsPalLit, CallFunc_Contains_ReturnValue) == 0x000030, "Member 'BP_PickMainMeshVolume_C_IsPalLit::CallFunc_Contains_ReturnValue' has a wrong offset!");

// Function BP_PickMainMeshVolume.BP_PickMainMeshVolume_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PickMainMeshVolume_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PickMainMeshVolume_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PickMainMeshVolume_C_ReceiveTick");
static_assert(sizeof(BP_PickMainMeshVolume_C_ReceiveTick) == 0x000004, "Wrong size on BP_PickMainMeshVolume_C_ReceiveTick");
static_assert(offsetof(BP_PickMainMeshVolume_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PickMainMeshVolume_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

