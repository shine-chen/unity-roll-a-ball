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

// System.Runtime.InteropServices.COMException
struct COMException_t2545813968;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.Runtime.InteropServices.COMException::.ctor()
extern "C"  void COMException__ctor_m2663339678 (COMException_t2545813968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.COMException::.ctor(System.String)
extern "C"  void COMException__ctor_m1319139620 (COMException_t2545813968 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.COMException::.ctor(System.String,System.Int32)
extern "C"  void COMException__ctor_m4227833395 (COMException_t2545813968 * __this, String_t* ___message, int32_t ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.COMException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void COMException__ctor_m3642568415 (COMException_t2545813968 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.InteropServices.COMException::ToString()
extern "C"  String_t* COMException_ToString_m3547469967 (COMException_t2545813968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
