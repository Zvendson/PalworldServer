#pragma once

#include "Basic.hpp"


namespace PalSDK
{

// UserDefinedStruct S_PPSkyCreatorTimePreset.S_PPSkyCreatorTimePreset
// 0x0010 (0x0010 - 0x0000)
struct FS_PPSkyCreatorTimePreset final
{
public:
	double                                        Time_2_42BBD1624B3A7C0FC962D685060B487F;           // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPPSkyCreatorWeatherPreset*             WeatherPreset_7_B173F3074E77F47BFAED839E1A55A226;  // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_PPSkyCreatorTimePreset) == 0x000008, "Wrong alignment on FS_PPSkyCreatorTimePreset");
static_assert(sizeof(FS_PPSkyCreatorTimePreset) == 0x000010, "Wrong size on FS_PPSkyCreatorTimePreset");
static_assert(offsetof(FS_PPSkyCreatorTimePreset, Time_2_42BBD1624B3A7C0FC962D685060B487F) == 0x000000, "Member 'FS_PPSkyCreatorTimePreset::Time_2_42BBD1624B3A7C0FC962D685060B487F' has a wrong offset!");
static_assert(offsetof(FS_PPSkyCreatorTimePreset, WeatherPreset_7_B173F3074E77F47BFAED839E1A55A226) == 0x000008, "Member 'FS_PPSkyCreatorTimePreset::WeatherPreset_7_B173F3074E77F47BFAED839E1A55A226' has a wrong offset!");

}

