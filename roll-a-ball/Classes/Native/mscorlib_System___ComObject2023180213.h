#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_MarshalByRefObject2055500882.h"
#include "mscorlib_System_IntPtr676692020.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__ComObject
struct  __ComObject_t2023180213  : public MarshalByRefObject_t2055500882
{
public:
	// System.IntPtr System.__ComObject::iunknown
	IntPtr_t ___iunknown_1;
	// System.IntPtr System.__ComObject::hash_table
	IntPtr_t ___hash_table_2;

public:
	inline static int32_t get_offset_of_iunknown_1() { return static_cast<int32_t>(offsetof(__ComObject_t2023180213, ___iunknown_1)); }
	inline IntPtr_t get_iunknown_1() const { return ___iunknown_1; }
	inline IntPtr_t* get_address_of_iunknown_1() { return &___iunknown_1; }
	inline void set_iunknown_1(IntPtr_t value)
	{
		___iunknown_1 = value;
	}

	inline static int32_t get_offset_of_hash_table_2() { return static_cast<int32_t>(offsetof(__ComObject_t2023180213, ___hash_table_2)); }
	inline IntPtr_t get_hash_table_2() const { return ___hash_table_2; }
	inline IntPtr_t* get_address_of_hash_table_2() { return &___hash_table_2; }
	inline void set_hash_table_2(IntPtr_t value)
	{
		___hash_table_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
