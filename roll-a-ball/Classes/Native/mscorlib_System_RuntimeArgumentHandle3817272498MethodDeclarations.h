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


#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct RuntimeArgumentHandle_t3817272498;
struct RuntimeArgumentHandle_t3817272498_marshaled;

extern "C" void RuntimeArgumentHandle_t3817272498_marshal(const RuntimeArgumentHandle_t3817272498& unmarshaled, RuntimeArgumentHandle_t3817272498_marshaled& marshaled);
extern "C" void RuntimeArgumentHandle_t3817272498_marshal_back(const RuntimeArgumentHandle_t3817272498_marshaled& marshaled, RuntimeArgumentHandle_t3817272498& unmarshaled);
extern "C" void RuntimeArgumentHandle_t3817272498_marshal_cleanup(RuntimeArgumentHandle_t3817272498_marshaled& marshaled);
