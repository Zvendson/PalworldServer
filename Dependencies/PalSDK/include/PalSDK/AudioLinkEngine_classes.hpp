#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace PalSDK
{

// Class AudioLinkEngine.AudioLinkBlueprintInterface
// 0x0000 (0x0028 - 0x0028)
class IAudioLinkBlueprintInterface final : public IInterface
{
public:
	void PlayLink(float StartTime);
	void SetLinkSound(class USoundBase* NewSound);
	void StopLink();

	bool IsLinkPlaying() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioLinkBlueprintInterface">();
	}
	static class IAudioLinkBlueprintInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IAudioLinkBlueprintInterface>();
	}
};
static_assert(alignof(IAudioLinkBlueprintInterface) == 0x000008, "Wrong alignment on IAudioLinkBlueprintInterface");
static_assert(sizeof(IAudioLinkBlueprintInterface) == 0x000028, "Wrong size on IAudioLinkBlueprintInterface");

}

