#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// Class AssetTags.AssetTagsSubsystem
// 0x0000 (0x0030 - 0x0030)
class UAssetTagsSubsystem final : public UEngineSubsystem
{
public:
	bool CollectionExists(const class FName Name_0);
	TArray<struct FAssetData> GetAssetsInCollection(const class FName Name_0);
	TArray<class FName> GetCollections();
	TArray<class FName> GetCollectionsContainingAsset(const class FName AssetPathName);
	TArray<class FName> GetCollectionsContainingAssetData(const struct FAssetData& AssetData);
	TArray<class FName> GetCollectionsContainingAssetPtr(const class UObject* AssetPtr);
	TArray<class FName> K2_GetCollectionsContainingAsset(const struct FSoftObjectPath& AssetPath);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AssetTagsSubsystem">();
	}
	static class UAssetTagsSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssetTagsSubsystem>();
	}
};
static_assert(alignof(UAssetTagsSubsystem) == 0x000008, "Wrong alignment on UAssetTagsSubsystem");
static_assert(sizeof(UAssetTagsSubsystem) == 0x000030, "Wrong size on UAssetTagsSubsystem");

}

