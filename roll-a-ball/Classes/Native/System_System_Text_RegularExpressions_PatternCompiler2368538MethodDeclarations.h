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
struct Link_t2368538;
struct Link_t2368538_marshaled;

extern "C" void Link_t2368538_marshal(const Link_t2368538& unmarshaled, Link_t2368538_marshaled& marshaled);
extern "C" void Link_t2368538_marshal_back(const Link_t2368538_marshaled& marshaled, Link_t2368538& unmarshaled);
extern "C" void Link_t2368538_marshal_cleanup(Link_t2368538_marshaled& marshaled);
