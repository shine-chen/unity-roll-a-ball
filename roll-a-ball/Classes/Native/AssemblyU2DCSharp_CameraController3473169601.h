﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_t3473169601  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject CameraController::player
	GameObject_t4012695102 * ___player_2;
	// UnityEngine.Vector3 CameraController::offset
	Vector3_t3525329789  ___offset_3;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(CameraController_t3473169601, ___player_2)); }
	inline GameObject_t4012695102 * get_player_2() const { return ___player_2; }
	inline GameObject_t4012695102 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t4012695102 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(CameraController_t3473169601, ___offset_3)); }
	inline Vector3_t3525329789  get_offset_3() const { return ___offset_3; }
	inline Vector3_t3525329789 * get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(Vector3_t3525329789  value)
	{
		___offset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
