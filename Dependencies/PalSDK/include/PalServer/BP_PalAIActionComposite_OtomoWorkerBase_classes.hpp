#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalAIActionComposite_OtomoWorkerBase.BP_PalAIActionComposite_OtomoWorkerBase_C
// 0x0000 (0x0088 - 0x0088)
class UBP_PalAIActionComposite_OtomoWorkerBase_C : public UPalAIActionCompositeWorker
{
public:
	void OnTickInWaitAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalAIActionComposite_OtomoWorkerBase_C">();
	}
	static class UBP_PalAIActionComposite_OtomoWorkerBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalAIActionComposite_OtomoWorkerBase_C>();
	}
};
static_assert(alignof(UBP_PalAIActionComposite_OtomoWorkerBase_C) == 0x000008, "Wrong alignment on UBP_PalAIActionComposite_OtomoWorkerBase_C");
static_assert(sizeof(UBP_PalAIActionComposite_OtomoWorkerBase_C) == 0x000088, "Wrong size on UBP_PalAIActionComposite_OtomoWorkerBase_C");

}

