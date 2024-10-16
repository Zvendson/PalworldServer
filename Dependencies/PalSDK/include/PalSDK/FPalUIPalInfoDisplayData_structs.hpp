#pragma once

#include "Basic.hpp"

#include "EPalUIPalInfoType_structs.hpp"
#include "Pal_structs.hpp"


namespace PalSDK
{

// UserDefinedStruct FPalUIPalInfoDisplayData.FPalUIPalInfoDisplayData
// 0x0038 (0x0038 - 0x0000)
struct FFPalUIPalInfoDisplayData final
{
public:
	EPalUIPalInfoType                             InfoType_7_1896329049BDD64BD64164AE06093B27;       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalUIPalCaptureInfo                   CaptureInfo_13_25C6EFCC45C7B38BB1ADEF97B8AE4627;   // 0x0008(0x0028)(Edit, BlueprintVisible)
	class UPalIndividualCharacterHandle*          ActivatedOtomoHandle_16_CE5D7B7343BD1A4E5A078C8066BAB2F9; // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FFPalUIPalInfoDisplayData) == 0x000008, "Wrong alignment on FFPalUIPalInfoDisplayData");
static_assert(sizeof(FFPalUIPalInfoDisplayData) == 0x000038, "Wrong size on FFPalUIPalInfoDisplayData");
static_assert(offsetof(FFPalUIPalInfoDisplayData, InfoType_7_1896329049BDD64BD64164AE06093B27) == 0x000000, "Member 'FFPalUIPalInfoDisplayData::InfoType_7_1896329049BDD64BD64164AE06093B27' has a wrong offset!");
static_assert(offsetof(FFPalUIPalInfoDisplayData, CaptureInfo_13_25C6EFCC45C7B38BB1ADEF97B8AE4627) == 0x000008, "Member 'FFPalUIPalInfoDisplayData::CaptureInfo_13_25C6EFCC45C7B38BB1ADEF97B8AE4627' has a wrong offset!");
static_assert(offsetof(FFPalUIPalInfoDisplayData, ActivatedOtomoHandle_16_CE5D7B7343BD1A4E5A078C8066BAB2F9) == 0x000030, "Member 'FFPalUIPalInfoDisplayData::ActivatedOtomoHandle_16_CE5D7B7343BD1A4E5A078C8066BAB2F9' has a wrong offset!");

}

