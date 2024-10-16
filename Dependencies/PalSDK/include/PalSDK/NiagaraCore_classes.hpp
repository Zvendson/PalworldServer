#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace PalSDK
{

// Class NiagaraCore.NiagaraMergeable
// 0x0000 (0x0028 - 0x0028)
class UNiagaraMergeable : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraMergeable">();
	}
	static class UNiagaraMergeable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraMergeable>();
	}
};
static_assert(alignof(UNiagaraMergeable) == 0x000008, "Wrong alignment on UNiagaraMergeable");
static_assert(sizeof(UNiagaraMergeable) == 0x000028, "Wrong size on UNiagaraMergeable");

// Class NiagaraCore.NiagaraDataInterfaceBase
// 0x0000 (0x0028 - 0x0028)
class UNiagaraDataInterfaceBase : public UNiagaraMergeable
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceBase">();
	}
	static class UNiagaraDataInterfaceBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceBase>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceBase) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceBase");
static_assert(sizeof(UNiagaraDataInterfaceBase) == 0x000028, "Wrong size on UNiagaraDataInterfaceBase");

}

