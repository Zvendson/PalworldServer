#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalServer
{

// UserDefinedStruct SkelMeshToSpawnAlong.SkelMeshToSpawnAlong
// 0x0098 (0x0098 - 0x0000)
struct FSkelMeshToSpawnAlong final
{
public:
	class USkeletalMesh*                          Mesh_51_CE794D5C46E9032710913DB175C95C46;          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount_14_AB3ACCB543A8B45FE112759415C30A8E;        // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Scale_17_04F27EDA46975BCF09325792404719FC;         // 0x0010(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScaleRandomizer_47_D49E9C5B458EECEF3C1E078C23525554; // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpawnLengthSection_9_B4B968A14BB878D5AC8D17BC9CDD8EEC; // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpawnLengthSectionTolerance_11_C1FB31FE46C753F43A9A79A3B0710F80; // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MinDistanceBetweenMeshes_20_79C72B424C0ACC42FF630A9B9AE702EA; // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeightAboveSurface_50_1CACD2E64131FFFF9C6B7C989A46067C; // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               Rotation_34_1AD513CD4B492F41E959CE9B44BEB4FD;      // 0x0040(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseWorldRotation_41_3970C4BF4B586807AF22D6B70601E235; // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                MinRandomRotation_44_C5993A264ECECFFDAEA007B94543C1AB; // 0x0060(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MaxRandomRotation_23_40F852C84C872A40B5C50AAF3C2471C1; // 0x0078(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnlyNearSurfaces_25_BC9A521B461BC39914A254AFC54E0C28; // 0x0090(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnlyMidAir_27_847896C14DCBBEE5CEC2C49306874759;    // 0x0091(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSkelMeshToSpawnAlong) == 0x000008, "Wrong alignment on FSkelMeshToSpawnAlong");
static_assert(sizeof(FSkelMeshToSpawnAlong) == 0x000098, "Wrong size on FSkelMeshToSpawnAlong");
static_assert(offsetof(FSkelMeshToSpawnAlong, Mesh_51_CE794D5C46E9032710913DB175C95C46) == 0x000000, "Member 'FSkelMeshToSpawnAlong::Mesh_51_CE794D5C46E9032710913DB175C95C46' has a wrong offset!");
static_assert(offsetof(FSkelMeshToSpawnAlong, Amount_14_AB3ACCB543A8B45FE112759415C30A8E) == 0x000008, "Member 'FSkelMeshToSpawnAlong::Amount_14_AB3ACCB543A8B45FE112759415C30A8E' has a wrong offset!");
static_assert(offsetof(FSkelMeshToSpawnAlong, Scale_17_04F27EDA46975BCF09325792404719FC) == 0x000010, "Member 'FSkelMeshToSpawnAlong::Scale_17_04F27EDA46975BCF09325792404719FC' has a wrong offset!");
static_assert(offsetof(FSkelMeshToSpawnAlong, ScaleRandomizer_47_D49E9C5B458EECEF3C1E078C23525554) == 0x000028, "Member 'FSkelMeshToSpawnAlong::ScaleRandomizer_47_D49E9C5B458EECEF3C1E078C23525554' has a wrong offset!");
static_assert(offsetof(FSkelMeshToSpawnAlong, SpawnLengthSection_9_B4B968A14BB878D5AC8D17BC9CDD8EEC) == 0x00002C, "Member 'FSkelMeshToSpawnAlong::SpawnLengthSection_9_B4B968A14BB878D5AC8D17BC9CDD8EEC' has a wrong offset!");
static_assert(offsetof(FSkelMeshToSpawnAlong, SpawnLengthSectionTolerance_11_C1FB31FE46C753F43A9A79A3B0710F80) == 0x000030, "Member 'FSkelMeshToSpawnAlong::SpawnLengthSectionTolerance_11_C1FB31FE46C753F43A9A79A3B0710F80' has a wrong offset!");
static_assert(offsetof(FSkelMeshToSpawnAlong, MinDistanceBetweenMeshes_20_79C72B424C0ACC42FF630A9B9AE702EA) == 0x000034, "Member 'FSkelMeshToSpawnAlong::MinDistanceBetweenMeshes_20_79C72B424C0ACC42FF630A9B9AE702EA' has a wrong offset!");
static_assert(offsetof(FSkelMeshToSpawnAlong, HeightAboveSurface_50_1CACD2E64131FFFF9C6B7C989A46067C) == 0x000038, "Member 'FSkelMeshToSpawnAlong::HeightAboveSurface_50_1CACD2E64131FFFF9C6B7C989A46067C' has a wrong offset!");
static_assert(offsetof(FSkelMeshToSpawnAlong, Rotation_34_1AD513CD4B492F41E959CE9B44BEB4FD) == 0x000040, "Member 'FSkelMeshToSpawnAlong::Rotation_34_1AD513CD4B492F41E959CE9B44BEB4FD' has a wrong offset!");
static_assert(offsetof(FSkelMeshToSpawnAlong, UseWorldRotation_41_3970C4BF4B586807AF22D6B70601E235) == 0x000058, "Member 'FSkelMeshToSpawnAlong::UseWorldRotation_41_3970C4BF4B586807AF22D6B70601E235' has a wrong offset!");
static_assert(offsetof(FSkelMeshToSpawnAlong, MinRandomRotation_44_C5993A264ECECFFDAEA007B94543C1AB) == 0x000060, "Member 'FSkelMeshToSpawnAlong::MinRandomRotation_44_C5993A264ECECFFDAEA007B94543C1AB' has a wrong offset!");
static_assert(offsetof(FSkelMeshToSpawnAlong, MaxRandomRotation_23_40F852C84C872A40B5C50AAF3C2471C1) == 0x000078, "Member 'FSkelMeshToSpawnAlong::MaxRandomRotation_23_40F852C84C872A40B5C50AAF3C2471C1' has a wrong offset!");
static_assert(offsetof(FSkelMeshToSpawnAlong, OnlyNearSurfaces_25_BC9A521B461BC39914A254AFC54E0C28) == 0x000090, "Member 'FSkelMeshToSpawnAlong::OnlyNearSurfaces_25_BC9A521B461BC39914A254AFC54E0C28' has a wrong offset!");
static_assert(offsetof(FSkelMeshToSpawnAlong, OnlyMidAir_27_847896C14DCBBEE5CEC2C49306874759) == 0x000091, "Member 'FSkelMeshToSpawnAlong::OnlyMidAir_27_847896C14DCBBEE5CEC2C49306874759' has a wrong offset!");

}

