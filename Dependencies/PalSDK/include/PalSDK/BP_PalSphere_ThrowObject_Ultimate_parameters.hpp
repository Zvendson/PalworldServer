#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_PalSphere_ThrowObject_Ultimate.BP_PalSphere_ThrowObject_Ultimate_C.GetBodyClass
// 0x0008 (0x0008 - 0x0000)
struct BP_PalSphere_ThrowObject_Ultimate_C_GetBodyClass final
{
public:
	class UClass*                                 bodyClass;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_ThrowObject_Ultimate_C_GetBodyClass) == 0x000008, "Wrong alignment on BP_PalSphere_ThrowObject_Ultimate_C_GetBodyClass");
static_assert(sizeof(BP_PalSphere_ThrowObject_Ultimate_C_GetBodyClass) == 0x000008, "Wrong size on BP_PalSphere_ThrowObject_Ultimate_C_GetBodyClass");
static_assert(offsetof(BP_PalSphere_ThrowObject_Ultimate_C_GetBodyClass, bodyClass) == 0x000000, "Member 'BP_PalSphere_ThrowObject_Ultimate_C_GetBodyClass::bodyClass' has a wrong offset!");

}

