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

// System.Runtime.InteropServices.ObjectCreationDelegate
struct ObjectCreationDelegate_t965294309;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Runtime.InteropServices.ObjectCreationDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void ObjectCreationDelegate__ctor_m3004344985 (ObjectCreationDelegate_t965294309 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.ObjectCreationDelegate::Invoke(System.IntPtr)
extern "C"  IntPtr_t ObjectCreationDelegate_Invoke_m1492589750 (ObjectCreationDelegate_t965294309 * __this, IntPtr_t ___aggregator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" IntPtr_t pinvoke_delegate_wrapper_ObjectCreationDelegate_t965294309(Il2CppObject* delegate, IntPtr_t ___aggregator);
// System.IAsyncResult System.Runtime.InteropServices.ObjectCreationDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ObjectCreationDelegate_BeginInvoke_m3106434346 (ObjectCreationDelegate_t965294309 * __this, IntPtr_t ___aggregator, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.ObjectCreationDelegate::EndInvoke(System.IAsyncResult)
extern "C"  IntPtr_t ObjectCreationDelegate_EndInvoke_m1399339796 (ObjectCreationDelegate_t965294309 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
