#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK
{

// UserDefinedStruct S_PalBiomeEffect.S_PalBiomeEffect
// 0x0010 (0x0010 - 0x0000)
struct FS_PalBiomeEffect final
{
public:
	EPalBiomeType                                 BiomeType_3_EFD8108847E039AF2D6BA0B9AAB38583;      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraSystem*                         Effect_6_8CEBD2B248D3A5ACFB29BD947CC5E3D0;         // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_PalBiomeEffect) == 0x000008, "Wrong alignment on FS_PalBiomeEffect");
static_assert(sizeof(FS_PalBiomeEffect) == 0x000010, "Wrong size on FS_PalBiomeEffect");
static_assert(offsetof(FS_PalBiomeEffect, BiomeType_3_EFD8108847E039AF2D6BA0B9AAB38583) == 0x000000, "Member 'FS_PalBiomeEffect::BiomeType_3_EFD8108847E039AF2D6BA0B9AAB38583' has a wrong offset!");
static_assert(offsetof(FS_PalBiomeEffect, Effect_6_8CEBD2B248D3A5ACFB29BD947CC5E3D0) == 0x000008, "Member 'FS_PalBiomeEffect::Effect_6_8CEBD2B248D3A5ACFB29BD947CC5E3D0' has a wrong offset!");

}

