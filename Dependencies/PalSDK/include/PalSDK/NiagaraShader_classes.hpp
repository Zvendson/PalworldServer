#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace PalSDK
{

// Class NiagaraShader.NiagaraScriptBase
// 0x0000 (0x0028 - 0x0028)
class UNiagaraScriptBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraScriptBase">();
	}
	static class UNiagaraScriptBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraScriptBase>();
	}
};
static_assert(alignof(UNiagaraScriptBase) == 0x000008, "Wrong alignment on UNiagaraScriptBase");
static_assert(sizeof(UNiagaraScriptBase) == 0x000028, "Wrong size on UNiagaraScriptBase");

}

