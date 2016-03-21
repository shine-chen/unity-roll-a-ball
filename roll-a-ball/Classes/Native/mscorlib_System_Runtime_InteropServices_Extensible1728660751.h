#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t3875263730;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExtensibleClassFactory
struct  ExtensibleClassFactory_t1728660751  : public Il2CppObject
{
public:

public:
};

struct ExtensibleClassFactory_t1728660751_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.InteropServices.ExtensibleClassFactory::hashtable
	Hashtable_t3875263730 * ___hashtable_0;

public:
	inline static int32_t get_offset_of_hashtable_0() { return static_cast<int32_t>(offsetof(ExtensibleClassFactory_t1728660751_StaticFields, ___hashtable_0)); }
	inline Hashtable_t3875263730 * get_hashtable_0() const { return ___hashtable_0; }
	inline Hashtable_t3875263730 ** get_address_of_hashtable_0() { return &___hashtable_0; }
	inline void set_hashtable_0(Hashtable_t3875263730 * value)
	{
		___hashtable_0 = value;
		Il2CppCodeGenWriteBarrier(&___hashtable_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
