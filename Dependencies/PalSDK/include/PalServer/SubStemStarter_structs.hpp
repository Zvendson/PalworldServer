#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalServer
{

// UserDefinedStruct SubStemStarter.SubStemStarter
// 0x0050 (0x0050 - 0x0000)
struct FSubStemStarter final
{
public:
	struct FVector                                StartLocation_2_EB4C4B974C238AA4A472FFA1BE26E87E;  // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartSurfaceNormal_4_7C11BD5A415026868BF0338FBAB8B71C; // 0x0018(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartDirection_6_6CE9CE6248083FF90A46FEB4C09052C9; // 0x0030(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubStemLevel_9_8CD6A05A4AA942B4B561029325FB7747;   // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSubStemStarter) == 0x000008, "Wrong alignment on FSubStemStarter");
static_assert(sizeof(FSubStemStarter) == 0x000050, "Wrong size on FSubStemStarter");
static_assert(offsetof(FSubStemStarter, StartLocation_2_EB4C4B974C238AA4A472FFA1BE26E87E) == 0x000000, "Member 'FSubStemStarter::StartLocation_2_EB4C4B974C238AA4A472FFA1BE26E87E' has a wrong offset!");
static_assert(offsetof(FSubStemStarter, StartSurfaceNormal_4_7C11BD5A415026868BF0338FBAB8B71C) == 0x000018, "Member 'FSubStemStarter::StartSurfaceNormal_4_7C11BD5A415026868BF0338FBAB8B71C' has a wrong offset!");
static_assert(offsetof(FSubStemStarter, StartDirection_6_6CE9CE6248083FF90A46FEB4C09052C9) == 0x000030, "Member 'FSubStemStarter::StartDirection_6_6CE9CE6248083FF90A46FEB4C09052C9' has a wrong offset!");
static_assert(offsetof(FSubStemStarter, SubStemLevel_9_8CD6A05A4AA942B4B561029325FB7747) == 0x000048, "Member 'FSubStemStarter::SubStemLevel_9_8CD6A05A4AA942B4B561029325FB7747' has a wrong offset!");

}

