#pragma once

#include "Basic.hpp"

#include "BP_PalIncidentNotifyListener_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalIncidentNotifyListener_NPCTalk.BP_PalIncidentNotifyListener_NPCTalk_C
// 0x0000 (0x0068 - 0x0068)
class UBP_PalIncidentNotifyListener_NPCTalk_C final : public UBP_PalIncidentNotifyListener_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalIncidentNotifyListener_NPCTalk_C">();
	}
	static class UBP_PalIncidentNotifyListener_NPCTalk_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalIncidentNotifyListener_NPCTalk_C>();
	}
};
static_assert(alignof(UBP_PalIncidentNotifyListener_NPCTalk_C) == 0x000008, "Wrong alignment on UBP_PalIncidentNotifyListener_NPCTalk_C");
static_assert(sizeof(UBP_PalIncidentNotifyListener_NPCTalk_C) == 0x000068, "Wrong size on UBP_PalIncidentNotifyListener_NPCTalk_C");

}

