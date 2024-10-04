#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_WorkerSimpleDetail.WBP_WorkerSimpleDetail_C
// 0x0008 (0x0410 - 0x0408)
class UWBP_WorkerSimpleDetail_C final : public UPalUIWorkerSimpleDetailCanvas
{
public:
	class UWBP_PalWorkerInfo_C*                   WBP_PalWorkerInfo;                                 // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void CloseSetup();
	void OpenSetup(class UPalIndividualCharacterHandle* TargetHandle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_WorkerSimpleDetail_C">();
	}
	static class UWBP_WorkerSimpleDetail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_WorkerSimpleDetail_C>();
	}
};
static_assert(alignof(UWBP_WorkerSimpleDetail_C) == 0x000008, "Wrong alignment on UWBP_WorkerSimpleDetail_C");
static_assert(sizeof(UWBP_WorkerSimpleDetail_C) == 0x000410, "Wrong size on UWBP_WorkerSimpleDetail_C");
static_assert(offsetof(UWBP_WorkerSimpleDetail_C, WBP_PalWorkerInfo) == 0x000408, "Member 'UWBP_WorkerSimpleDetail_C::WBP_PalWorkerInfo' has a wrong offset!");

}

