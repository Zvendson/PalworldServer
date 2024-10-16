#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// Class ActorLayerUtilities.LayersBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class ULayersBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void AddActorToLayer(class AActor* InActor, const struct FActorLayer& Layer);
	static TArray<class AActor*> GetActors(class UObject* WorldContextObject, const struct FActorLayer& ActorLayer);
	static void RemoveActorFromLayer(class AActor* InActor, const struct FActorLayer& Layer);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LayersBlueprintLibrary">();
	}
	static class ULayersBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULayersBlueprintLibrary>();
	}
};
static_assert(alignof(ULayersBlueprintLibrary) == 0x000008, "Wrong alignment on ULayersBlueprintLibrary");
static_assert(sizeof(ULayersBlueprintLibrary) == 0x000028, "Wrong size on ULayersBlueprintLibrary");

}

