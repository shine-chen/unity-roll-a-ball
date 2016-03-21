#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AssetBundle
struct AssetBundle_t3959431103;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "UnityEngine_UnityEngine_AsyncOperation3374395064.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundleRequest
struct  AssetBundleRequest_t920637194  : public AsyncOperation_t3374395064
{
public:
	// UnityEngine.AssetBundle UnityEngine.AssetBundleRequest::m_AssetBundle
	AssetBundle_t3959431103 * ___m_AssetBundle_1;
	// System.String UnityEngine.AssetBundleRequest::m_Path
	String_t* ___m_Path_2;
	// System.Type UnityEngine.AssetBundleRequest::m_Type
	Type_t * ___m_Type_3;

public:
	inline static int32_t get_offset_of_m_AssetBundle_1() { return static_cast<int32_t>(offsetof(AssetBundleRequest_t920637194, ___m_AssetBundle_1)); }
	inline AssetBundle_t3959431103 * get_m_AssetBundle_1() const { return ___m_AssetBundle_1; }
	inline AssetBundle_t3959431103 ** get_address_of_m_AssetBundle_1() { return &___m_AssetBundle_1; }
	inline void set_m_AssetBundle_1(AssetBundle_t3959431103 * value)
	{
		___m_AssetBundle_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_AssetBundle_1, value);
	}

	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(AssetBundleRequest_t920637194, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Path_2, value);
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(AssetBundleRequest_t920637194, ___m_Type_3)); }
	inline Type_t * get_m_Type_3() const { return ___m_Type_3; }
	inline Type_t ** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(Type_t * value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Type_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
