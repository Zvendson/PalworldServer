#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BI_PalGrapplingAimInterface.BI_PalGrapplingAimInterface_C.IsShowReticle
// 0x0001 (0x0001 - 0x0000)
struct BI_PalGrapplingAimInterface_C_IsShowReticle final
{
public:
	bool                                          IsShow;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_PalGrapplingAimInterface_C_IsShowReticle) == 0x000001, "Wrong alignment on BI_PalGrapplingAimInterface_C_IsShowReticle");
static_assert(sizeof(BI_PalGrapplingAimInterface_C_IsShowReticle) == 0x000001, "Wrong size on BI_PalGrapplingAimInterface_C_IsShowReticle");
static_assert(offsetof(BI_PalGrapplingAimInterface_C_IsShowReticle, IsShow) == 0x000000, "Member 'BI_PalGrapplingAimInterface_C_IsShowReticle::IsShow' has a wrong offset!");

}

