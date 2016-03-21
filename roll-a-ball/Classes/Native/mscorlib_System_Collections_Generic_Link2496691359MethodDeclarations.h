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
struct Link_t2496691359;
struct Link_t2496691359_marshaled;

extern "C" void Link_t2496691359_marshal(const Link_t2496691359& unmarshaled, Link_t2496691359_marshaled& marshaled);
extern "C" void Link_t2496691359_marshal_back(const Link_t2496691359_marshaled& marshaled, Link_t2496691359& unmarshaled);
extern "C" void Link_t2496691359_marshal_cleanup(Link_t2496691359_marshaled& marshaled);
