#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Array
struct Il2CppArray;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Guid2778838590.h"

// System.Void System.Runtime.InteropServices.Marshal::.cctor()
extern "C"  void Marshal__cctor_m156400721 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
extern "C"  void Marshal_copy_from_unmanaged_m1711077603 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source, int32_t ___startIndex, Il2CppArray * ___destination, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m1690250234 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source, ByteU5BU5D_t58506160* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m1390445676 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source, CharU5BU5D_t3416858730* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::QueryInterfaceInternal(System.IntPtr,System.Guid&,System.IntPtr&)
extern "C"  int32_t Marshal_QueryInterfaceInternal_m3960078360 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pUnk, Guid_t2778838590 * ___iid, IntPtr_t* ___ppv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::QueryInterface(System.IntPtr,System.Guid&,System.IntPtr&)
extern "C"  int32_t Marshal_QueryInterface_m257187605 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pUnk, Guid_t2778838590 * ___iid, IntPtr_t* ___ppv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Runtime.InteropServices.Marshal::ReadByte(System.IntPtr,System.Int32)
extern "C"  uint8_t Marshal_ReadByte_m3705434677 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr, int32_t ___ofs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::ThrowExceptionForHR(System.Int32)
extern "C"  void Marshal_ThrowExceptionForHR_m3396044309 (Il2CppObject * __this /* static, unused */, int32_t ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::WriteByte(System.IntPtr,System.Int32,System.Byte)
extern "C"  void Marshal_WriteByte_m4239949353 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr, int32_t ___ofs, uint8_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.InteropServices.Marshal::GetExceptionForHR(System.Int32)
extern "C"  Exception_t1967233988 * Marshal_GetExceptionForHR_m165612394 (Il2CppObject * __this /* static, unused */, int32_t ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.InteropServices.Marshal::GetExceptionForHR(System.Int32,System.IntPtr)
extern "C"  Exception_t1967233988 * Marshal_GetExceptionForHR_m1868068728 (Il2CppObject * __this /* static, unused */, int32_t ___errorCode, IntPtr_t ___errorInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
