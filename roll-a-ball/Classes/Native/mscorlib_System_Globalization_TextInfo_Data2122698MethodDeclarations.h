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
struct Data_t2122698;
struct Data_t2122698_marshaled;

extern "C" void Data_t2122698_marshal(const Data_t2122698& unmarshaled, Data_t2122698_marshaled& marshaled);
extern "C" void Data_t2122698_marshal_back(const Data_t2122698_marshaled& marshaled, Data_t2122698& unmarshaled);
extern "C" void Data_t2122698_marshal_cleanup(Data_t2122698_marshaled& marshaled);
