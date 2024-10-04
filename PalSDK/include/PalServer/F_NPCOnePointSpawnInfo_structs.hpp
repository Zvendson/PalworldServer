#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "F_NPC_PathWalkArray_structs.hpp"


namespace PalServer
{

// UserDefinedStruct F_NPCOnePointSpawnInfo.F_NPCOnePointSpawnInfo
// 0x00A0 (0x00A0 - 0x0000)
struct FF_NPCOnePointSpawnInfo final
{
public:
	class FName                                   NPCName_20_49D436044BDF9AB5328F69A3028EB5ED;       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   UniqueName_23_C5975EAD4D0039A24B86139AA5D04F66;    // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Transform_2_38D8D0144FC1C0FB041C08AFE43B4A56;      // 0x0010(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 OverrideControllerClass_15_6CC42151411B4921090B749ADA0E063F; // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 OverrideDefaultActionClass_16_698E88C544CC5063FF6DE691F6BEA5E9; // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         OverrideLevel_17_248ED7A04C24B868F231F38B18A56DF2; // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FF_NPC_PathWalkArray                   PathWalk_25_B786601A4A4C791196C63BAC2D2772DF;      // 0x0088(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FF_NPCOnePointSpawnInfo) == 0x000010, "Wrong alignment on FF_NPCOnePointSpawnInfo");
static_assert(sizeof(FF_NPCOnePointSpawnInfo) == 0x0000A0, "Wrong size on FF_NPCOnePointSpawnInfo");
static_assert(offsetof(FF_NPCOnePointSpawnInfo, NPCName_20_49D436044BDF9AB5328F69A3028EB5ED) == 0x000000, "Member 'FF_NPCOnePointSpawnInfo::NPCName_20_49D436044BDF9AB5328F69A3028EB5ED' has a wrong offset!");
static_assert(offsetof(FF_NPCOnePointSpawnInfo, UniqueName_23_C5975EAD4D0039A24B86139AA5D04F66) == 0x000008, "Member 'FF_NPCOnePointSpawnInfo::UniqueName_23_C5975EAD4D0039A24B86139AA5D04F66' has a wrong offset!");
static_assert(offsetof(FF_NPCOnePointSpawnInfo, Transform_2_38D8D0144FC1C0FB041C08AFE43B4A56) == 0x000010, "Member 'FF_NPCOnePointSpawnInfo::Transform_2_38D8D0144FC1C0FB041C08AFE43B4A56' has a wrong offset!");
static_assert(offsetof(FF_NPCOnePointSpawnInfo, OverrideControllerClass_15_6CC42151411B4921090B749ADA0E063F) == 0x000070, "Member 'FF_NPCOnePointSpawnInfo::OverrideControllerClass_15_6CC42151411B4921090B749ADA0E063F' has a wrong offset!");
static_assert(offsetof(FF_NPCOnePointSpawnInfo, OverrideDefaultActionClass_16_698E88C544CC5063FF6DE691F6BEA5E9) == 0x000078, "Member 'FF_NPCOnePointSpawnInfo::OverrideDefaultActionClass_16_698E88C544CC5063FF6DE691F6BEA5E9' has a wrong offset!");
static_assert(offsetof(FF_NPCOnePointSpawnInfo, OverrideLevel_17_248ED7A04C24B868F231F38B18A56DF2) == 0x000080, "Member 'FF_NPCOnePointSpawnInfo::OverrideLevel_17_248ED7A04C24B868F231F38B18A56DF2' has a wrong offset!");
static_assert(offsetof(FF_NPCOnePointSpawnInfo, PathWalk_25_B786601A4A4C791196C63BAC2D2772DF) == 0x000088, "Member 'FF_NPCOnePointSpawnInfo::PathWalk_25_B786601A4A4C791196C63BAC2D2772DF' has a wrong offset!");

}

