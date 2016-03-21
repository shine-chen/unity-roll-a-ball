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
struct LabelData_t1395746974;
struct LabelData_t1395746974_marshaled;

extern "C" void LabelData_t1395746974_marshal(const LabelData_t1395746974& unmarshaled, LabelData_t1395746974_marshaled& marshaled);
extern "C" void LabelData_t1395746974_marshal_back(const LabelData_t1395746974_marshaled& marshaled, LabelData_t1395746974& unmarshaled);
extern "C" void LabelData_t1395746974_marshal_cleanup(LabelData_t1395746974_marshaled& marshaled);
