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
struct FrameData_t4009178800;
struct FrameData_t4009178800_marshaled;

extern "C" void FrameData_t4009178800_marshal(const FrameData_t4009178800& unmarshaled, FrameData_t4009178800_marshaled& marshaled);
extern "C" void FrameData_t4009178800_marshal_back(const FrameData_t4009178800_marshaled& marshaled, FrameData_t4009178800& unmarshaled);
extern "C" void FrameData_t4009178800_marshal_cleanup(FrameData_t4009178800_marshaled& marshaled);
