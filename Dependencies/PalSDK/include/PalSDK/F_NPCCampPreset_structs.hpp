#pragma once

#include "Basic.hpp"


namespace PalSDK
{

// UserDefinedStruct F_NPCCampPreset.F_NPCCampPreset
// 0x0010 (0x0010 - 0x0000)
struct FF_NPCCampPreset final
{
public:
	double                                        Weight_2_1D114D534FA0FE15CCCF3FBA5793A8B4;         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 PresetClass_5_1B932EE64F32B5B21CEFC5AED1CDD9D6;    // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FF_NPCCampPreset) == 0x000008, "Wrong alignment on FF_NPCCampPreset");
static_assert(sizeof(FF_NPCCampPreset) == 0x000010, "Wrong size on FF_NPCCampPreset");
static_assert(offsetof(FF_NPCCampPreset, Weight_2_1D114D534FA0FE15CCCF3FBA5793A8B4) == 0x000000, "Member 'FF_NPCCampPreset::Weight_2_1D114D534FA0FE15CCCF3FBA5793A8B4' has a wrong offset!");
static_assert(offsetof(FF_NPCCampPreset, PresetClass_5_1B932EE64F32B5B21CEFC5AED1CDD9D6) == 0x000008, "Member 'FF_NPCCampPreset::PresetClass_5_1B932EE64F32B5B21CEFC5AED1CDD9D6' has a wrong offset!");

}

