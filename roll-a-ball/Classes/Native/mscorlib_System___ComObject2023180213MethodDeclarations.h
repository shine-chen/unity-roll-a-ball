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

// System.__ComObject
struct __ComObject_t2023180213;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Guid2778838590.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.__ComObject::.ctor()
extern "C"  void __ComObject__ctor_m1777808785 (__ComObject_t2023180213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.__ComObject::.ctor(System.Type)
extern "C"  void __ComObject__ctor_m217535816 (__ComObject_t2023180213 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.__ComObject::.ctor(System.IntPtr)
extern "C"  void __ComObject__ctor_m1409106531 (__ComObject_t2023180213 * __this, IntPtr_t ___pItf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.__ComObject System.__ComObject::CreateRCW(System.Type)
extern "C"  __ComObject_t2023180213 * __ComObject_CreateRCW_m2482349770 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.__ComObject::ReleaseInterfaces()
extern "C"  void __ComObject_ReleaseInterfaces_m10107696 (__ComObject_t2023180213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.__ComObject::Finalize()
extern "C"  void __ComObject_Finalize_m1562293553 (__ComObject_t2023180213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.__ComObject::Initialize(System.Type)
extern "C"  void __ComObject_Initialize_m200046582 (__ComObject_t2023180213 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.__ComObject::GetCLSID(System.Type)
extern "C"  Guid_t2778838590  __ComObject_GetCLSID_m2346800652 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.__ComObject::GetInterfaceInternal(System.Type,System.Boolean)
extern "C"  IntPtr_t __ComObject_GetInterfaceInternal_m3621424076 (__ComObject_t2023180213 * __this, Type_t * ___t, bool ___throwException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.__ComObject::GetInterface(System.Type,System.Boolean)
extern "C"  IntPtr_t __ComObject_GetInterface_m3898247279 (__ComObject_t2023180213 * __this, Type_t * ___t, bool ___throwException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.__ComObject::GetInterface(System.Type)
extern "C"  IntPtr_t __ComObject_GetInterface_m580175182 (__ComObject_t2023180213 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.__ComObject::CheckIUnknown()
extern "C"  void __ComObject_CheckIUnknown_m2198301496 (__ComObject_t2023180213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.__ComObject::get_IUnknown()
extern "C"  IntPtr_t __ComObject_get_IUnknown_m2033028978 (__ComObject_t2023180213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.__ComObject::get_IDispatch()
extern "C"  IntPtr_t __ComObject_get_IDispatch_m521232180 (__ComObject_t2023180213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.__ComObject::get_IID_IUnknown()
extern "C"  Guid_t2778838590  __ComObject_get_IID_IUnknown_m902759267 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.__ComObject::get_IID_IDispatch()
extern "C"  Guid_t2778838590  __ComObject_get_IID_IDispatch_m4137576803 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.__ComObject::Equals(System.Object)
extern "C"  bool __ComObject_Equals_m506185984 (__ComObject_t2023180213 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.__ComObject::GetHashCode()
extern "C"  int32_t __ComObject_GetHashCode_m1054294244 (__ComObject_t2023180213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.__ComObject::CoCreateInstance(System.Guid,System.IntPtr,System.UInt32,System.Guid,System.IntPtr&)
extern "C"  int32_t __ComObject_CoCreateInstance_m656542874 (Il2CppObject * __this /* static, unused */, Guid_t2778838590  ___rclsid, IntPtr_t ___pUnkOuter, uint32_t ___dwClsContext, Guid_t2778838590  ___riid, IntPtr_t* ___pUnk, const MethodInfo* method) IL2CPP_METHOD_ATTR;
