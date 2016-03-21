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
struct LabelFixup_t320573180;
struct LabelFixup_t320573180_marshaled;

extern "C" void LabelFixup_t320573180_marshal(const LabelFixup_t320573180& unmarshaled, LabelFixup_t320573180_marshaled& marshaled);
extern "C" void LabelFixup_t320573180_marshal_back(const LabelFixup_t320573180_marshaled& marshaled, LabelFixup_t320573180& unmarshaled);
extern "C" void LabelFixup_t320573180_marshal_cleanup(LabelFixup_t320573180_marshaled& marshaled);
