#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// Doors
struct Doors_t2525505916;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.String
struct String_t;
// roomspawner
struct roomspawner_t2098430347;
// System.Action
struct Action_t1264377477;
// System.Delegate
struct Delegate_t1188392813;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Object
struct Object_t631007953;
// movement
struct movement_t3279108804;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.GameObject[0...,0...]
struct GameObjectU5BU2CU5D_t3328599147;

extern RuntimeClass* List_1_t2585711361_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3526297712_RuntimeMethod_var;
extern const uint32_t Doors__ctor_m3651139703_MetadataUsageId;
extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_Tisroomspawner_t2098430347_m638973604_RuntimeMethod_var;
extern const RuntimeMethod* Doors_checkneighbours_m1439827393_RuntimeMethod_var;
extern String_t* _stringLiteral2774581319;
extern const uint32_t Doors_Awake_m439952247_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_get_Item_m2491728134_RuntimeMethod_var;
extern const uint32_t Doors_checkneighbours_m1439827393_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var;
extern const uint32_t movement_Start_m2163190336_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1828639942;
extern String_t* _stringLiteral2984908384;
extern const uint32_t movement_FixedUpdate_m779299963_MetadataUsageId;
extern RuntimeClass* GameObjectU5BU2CU5D_t3328599147_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var;
extern String_t* _stringLiteral2910496736;
extern const uint32_t roomspawner_Start_m786830811_MetadataUsageId;

struct GameObjectU5BU2CU5D_t3328599147;


#ifndef U3CMODULEU3E_T692745539_H
#define U3CMODULEU3E_T692745539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745539 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745539_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef LIST_1_T2585711361_H
#define LIST_1_T2585711361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t2585711361  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t3328599146* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____items_1)); }
	inline GameObjectU5BU5D_t3328599146* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t3328599146* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2585711361_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GameObjectU5BU5D_t3328599146* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2585711361_StaticFields, ___EmptyArray_4)); }
	inline GameObjectU5BU5D_t3328599146* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GameObjectU5BU5D_t3328599146* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2585711361_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_0;
	// System.Single UnityEngine.Vector3::y
	float ___y_1;
	// System.Single UnityEngine.Vector3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_3;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_12;

public:
	inline static int32_t get_offset_of_zeroVector_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_3)); }
	inline Vector3_t3722313464  get_zeroVector_3() const { return ___zeroVector_3; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_3() { return &___zeroVector_3; }
	inline void set_zeroVector_3(Vector3_t3722313464  value)
	{
		___zeroVector_3 = value;
	}

	inline static int32_t get_offset_of_oneVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_4)); }
	inline Vector3_t3722313464  get_oneVector_4() const { return ___oneVector_4; }
	inline Vector3_t3722313464 * get_address_of_oneVector_4() { return &___oneVector_4; }
	inline void set_oneVector_4(Vector3_t3722313464  value)
	{
		___oneVector_4 = value;
	}

	inline static int32_t get_offset_of_upVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_5)); }
	inline Vector3_t3722313464  get_upVector_5() const { return ___upVector_5; }
	inline Vector3_t3722313464 * get_address_of_upVector_5() { return &___upVector_5; }
	inline void set_upVector_5(Vector3_t3722313464  value)
	{
		___upVector_5 = value;
	}

	inline static int32_t get_offset_of_downVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_6)); }
	inline Vector3_t3722313464  get_downVector_6() const { return ___downVector_6; }
	inline Vector3_t3722313464 * get_address_of_downVector_6() { return &___downVector_6; }
	inline void set_downVector_6(Vector3_t3722313464  value)
	{
		___downVector_6 = value;
	}

	inline static int32_t get_offset_of_leftVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_7)); }
	inline Vector3_t3722313464  get_leftVector_7() const { return ___leftVector_7; }
	inline Vector3_t3722313464 * get_address_of_leftVector_7() { return &___leftVector_7; }
	inline void set_leftVector_7(Vector3_t3722313464  value)
	{
		___leftVector_7 = value;
	}

	inline static int32_t get_offset_of_rightVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_8)); }
	inline Vector3_t3722313464  get_rightVector_8() const { return ___rightVector_8; }
	inline Vector3_t3722313464 * get_address_of_rightVector_8() { return &___rightVector_8; }
	inline void set_rightVector_8(Vector3_t3722313464  value)
	{
		___rightVector_8 = value;
	}

	inline static int32_t get_offset_of_forwardVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_9)); }
	inline Vector3_t3722313464  get_forwardVector_9() const { return ___forwardVector_9; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_9() { return &___forwardVector_9; }
	inline void set_forwardVector_9(Vector3_t3722313464  value)
	{
		___forwardVector_9 = value;
	}

	inline static int32_t get_offset_of_backVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_10)); }
	inline Vector3_t3722313464  get_backVector_10() const { return ___backVector_10; }
	inline Vector3_t3722313464 * get_address_of_backVector_10() { return &___backVector_10; }
	inline void set_backVector_10(Vector3_t3722313464  value)
	{
		___backVector_10 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_11)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_11() const { return ___positiveInfinityVector_11; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_11() { return &___positiveInfinityVector_11; }
	inline void set_positiveInfinityVector_11(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_11 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_12)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_12() const { return ___negativeInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_12() { return &___negativeInfinityVector_12; }
	inline void set_negativeInfinityVector_12(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef RIGIDBODY_T3916780224_H
#define RIGIDBODY_T3916780224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t3916780224  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T3916780224_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef MOVEMENT_T3279108804_H
#define MOVEMENT_T3279108804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// movement
struct  movement_t3279108804  : public MonoBehaviour_t3962482529
{
public:
	// System.Single movement::speed
	float ___speed_2;
	// UnityEngine.Rigidbody movement::rb
	Rigidbody_t3916780224 * ___rb_3;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(movement_t3279108804, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_rb_3() { return static_cast<int32_t>(offsetof(movement_t3279108804, ___rb_3)); }
	inline Rigidbody_t3916780224 * get_rb_3() const { return ___rb_3; }
	inline Rigidbody_t3916780224 ** get_address_of_rb_3() { return &___rb_3; }
	inline void set_rb_3(Rigidbody_t3916780224 * value)
	{
		___rb_3 = value;
		Il2CppCodeGenWriteBarrier((&___rb_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVEMENT_T3279108804_H
#ifndef ROOMSPAWNER_T2098430347_H
#define ROOMSPAWNER_T2098430347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// roomspawner
struct  roomspawner_t2098430347  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject roomspawner::room
	GameObject_t1113636619 * ___room_2;
	// System.Int32 roomspawner::AmoutOfRooms
	int32_t ___AmoutOfRooms_3;
	// System.Int32 roomspawner::mapsize
	int32_t ___mapsize_4;
	// System.Int32 roomspawner::roomsize
	int32_t ___roomsize_5;
	// UnityEngine.GameObject[0...,0...] roomspawner::rooms
	GameObjectU5BU2CU5D_t3328599147* ___rooms_6;
	// UnityEngine.Vector2 roomspawner::SpawnPosition
	Vector2_t2156229523  ___SpawnPosition_7;
	// System.Action roomspawner::check
	Action_t1264377477 * ___check_8;
	// System.Int32 roomspawner::random
	int32_t ___random_9;

public:
	inline static int32_t get_offset_of_room_2() { return static_cast<int32_t>(offsetof(roomspawner_t2098430347, ___room_2)); }
	inline GameObject_t1113636619 * get_room_2() const { return ___room_2; }
	inline GameObject_t1113636619 ** get_address_of_room_2() { return &___room_2; }
	inline void set_room_2(GameObject_t1113636619 * value)
	{
		___room_2 = value;
		Il2CppCodeGenWriteBarrier((&___room_2), value);
	}

	inline static int32_t get_offset_of_AmoutOfRooms_3() { return static_cast<int32_t>(offsetof(roomspawner_t2098430347, ___AmoutOfRooms_3)); }
	inline int32_t get_AmoutOfRooms_3() const { return ___AmoutOfRooms_3; }
	inline int32_t* get_address_of_AmoutOfRooms_3() { return &___AmoutOfRooms_3; }
	inline void set_AmoutOfRooms_3(int32_t value)
	{
		___AmoutOfRooms_3 = value;
	}

	inline static int32_t get_offset_of_mapsize_4() { return static_cast<int32_t>(offsetof(roomspawner_t2098430347, ___mapsize_4)); }
	inline int32_t get_mapsize_4() const { return ___mapsize_4; }
	inline int32_t* get_address_of_mapsize_4() { return &___mapsize_4; }
	inline void set_mapsize_4(int32_t value)
	{
		___mapsize_4 = value;
	}

	inline static int32_t get_offset_of_roomsize_5() { return static_cast<int32_t>(offsetof(roomspawner_t2098430347, ___roomsize_5)); }
	inline int32_t get_roomsize_5() const { return ___roomsize_5; }
	inline int32_t* get_address_of_roomsize_5() { return &___roomsize_5; }
	inline void set_roomsize_5(int32_t value)
	{
		___roomsize_5 = value;
	}

	inline static int32_t get_offset_of_rooms_6() { return static_cast<int32_t>(offsetof(roomspawner_t2098430347, ___rooms_6)); }
	inline GameObjectU5BU2CU5D_t3328599147* get_rooms_6() const { return ___rooms_6; }
	inline GameObjectU5BU2CU5D_t3328599147** get_address_of_rooms_6() { return &___rooms_6; }
	inline void set_rooms_6(GameObjectU5BU2CU5D_t3328599147* value)
	{
		___rooms_6 = value;
		Il2CppCodeGenWriteBarrier((&___rooms_6), value);
	}

	inline static int32_t get_offset_of_SpawnPosition_7() { return static_cast<int32_t>(offsetof(roomspawner_t2098430347, ___SpawnPosition_7)); }
	inline Vector2_t2156229523  get_SpawnPosition_7() const { return ___SpawnPosition_7; }
	inline Vector2_t2156229523 * get_address_of_SpawnPosition_7() { return &___SpawnPosition_7; }
	inline void set_SpawnPosition_7(Vector2_t2156229523  value)
	{
		___SpawnPosition_7 = value;
	}

	inline static int32_t get_offset_of_check_8() { return static_cast<int32_t>(offsetof(roomspawner_t2098430347, ___check_8)); }
	inline Action_t1264377477 * get_check_8() const { return ___check_8; }
	inline Action_t1264377477 ** get_address_of_check_8() { return &___check_8; }
	inline void set_check_8(Action_t1264377477 * value)
	{
		___check_8 = value;
		Il2CppCodeGenWriteBarrier((&___check_8), value);
	}

	inline static int32_t get_offset_of_random_9() { return static_cast<int32_t>(offsetof(roomspawner_t2098430347, ___random_9)); }
	inline int32_t get_random_9() const { return ___random_9; }
	inline int32_t* get_address_of_random_9() { return &___random_9; }
	inline void set_random_9(int32_t value)
	{
		___random_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROOMSPAWNER_T2098430347_H
#ifndef DOORS_T2525505916_H
#define DOORS_T2525505916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Doors
struct  Doors_t2525505916  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Doors::doors
	List_1_t2585711361 * ___doors_2;
	// roomspawner Doors::_roomspawner
	roomspawner_t2098430347 * ____roomspawner_3;

public:
	inline static int32_t get_offset_of_doors_2() { return static_cast<int32_t>(offsetof(Doors_t2525505916, ___doors_2)); }
	inline List_1_t2585711361 * get_doors_2() const { return ___doors_2; }
	inline List_1_t2585711361 ** get_address_of_doors_2() { return &___doors_2; }
	inline void set_doors_2(List_1_t2585711361 * value)
	{
		___doors_2 = value;
		Il2CppCodeGenWriteBarrier((&___doors_2), value);
	}

	inline static int32_t get_offset_of__roomspawner_3() { return static_cast<int32_t>(offsetof(Doors_t2525505916, ____roomspawner_3)); }
	inline roomspawner_t2098430347 * get__roomspawner_3() const { return ____roomspawner_3; }
	inline roomspawner_t2098430347 ** get_address_of__roomspawner_3() { return &____roomspawner_3; }
	inline void set__roomspawner_3(roomspawner_t2098430347 * value)
	{
		____roomspawner_3 = value;
		Il2CppCodeGenWriteBarrier((&____roomspawner_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOORS_T2525505916_H
// UnityEngine.GameObject[,]
struct GameObjectU5BU2CU5D_t3328599147  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_t1113636619 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_t1113636619 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m3920941149_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1135049463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);

// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
#define List_1__ctor_m3526297712(__this, method) ((  void (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<roomspawner>()
#define GameObject_GetComponent_Tisroomspawner_t2098430347_m638973604(__this, method) ((  roomspawner_t2098430347 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m3920941149_gshared)(__this, method)
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C"  void Action__ctor_m2994342681 (Action_t1264377477 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 roomspawner::Roomsize()
extern "C"  int32_t roomspawner_Roomsize_m3838275817 (roomspawner_t2098430347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 roomspawner::Mapsize()
extern "C"  int32_t roomspawner_Mapsize_m1692416965 (roomspawner_t2098430347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject roomspawner::Rooms(System.Int32,System.Int32)
extern "C"  GameObject_t1113636619 * roomspawner_Rooms_m3847594012 (roomspawner_t2098430347 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define List_1_get_Item_m2491728134(__this, p0, method) ((  GameObject_t1113636619 * (*) (List_1_t2585711361 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Void Doors::closedoors(UnityEngine.GameObject)
extern "C"  void Doors_closedoors_m2714474391 (Doors_t2525505916 * __this, GameObject_t1113636619 * ___door0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t3916780224_m279685075(__this, method) ((  Rigidbody_t3916780224 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m4009438427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2156229523  Vector2_op_Multiply_m2347887432 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddForce_m3395934484 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1113636619_m3006960551(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1135049463_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C"  void MonoBehaviour_print_m330341231 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::Invoke()
extern "C"  void Action_Invoke_m937035532 (Action_t1264377477 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Doors::.ctor()
extern "C"  void Doors__ctor_m3651139703 (Doors_t2525505916 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Doors__ctor_m3651139703_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2585711361 * L_0 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m3526297712(L_0, /*hidden argument*/List_1__ctor_m3526297712_RuntimeMethod_var);
		__this->set_doors_2(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Doors::Awake()
extern "C"  void Doors_Awake_m439952247 (Doors_t2525505916 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Doors_Awake_m439952247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2774581319, /*hidden argument*/NULL);
		roomspawner_t2098430347 * L_1 = GameObject_GetComponent_Tisroomspawner_t2098430347_m638973604(L_0, /*hidden argument*/GameObject_GetComponent_Tisroomspawner_t2098430347_m638973604_RuntimeMethod_var);
		__this->set__roomspawner_3(L_1);
		roomspawner_t2098430347 * L_2 = __this->get__roomspawner_3();
		roomspawner_t2098430347 * L_3 = L_2;
		Action_t1264377477 * L_4 = L_3->get_check_8();
		intptr_t L_5 = (intptr_t)Doors_checkneighbours_m1439827393_RuntimeMethod_var;
		Action_t1264377477 * L_6 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_6, __this, L_5, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_7 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		L_3->set_check_8(((Action_t1264377477 *)CastclassSealed((RuntimeObject*)L_7, Action_t1264377477_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void Doors::checkneighbours()
extern "C"  void Doors_checkneighbours_m1439827393 (Doors_t2525505916 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Doors_checkneighbours_m1439827393_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		roomspawner_t2098430347 * L_0 = __this->get__roomspawner_3();
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_x_0();
		roomspawner_t2098430347 * L_4 = __this->get__roomspawner_3();
		int32_t L_5 = roomspawner_Roomsize_m3838275817(L_4, /*hidden argument*/NULL);
		roomspawner_t2098430347 * L_6 = __this->get__roomspawner_3();
		int32_t L_7 = roomspawner_Mapsize_m1692416965(L_6, /*hidden argument*/NULL);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = (&V_1)->get_y_1();
		roomspawner_t2098430347 * L_11 = __this->get__roomspawner_3();
		int32_t L_12 = roomspawner_Roomsize_m3838275817(L_11, /*hidden argument*/NULL);
		roomspawner_t2098430347 * L_13 = __this->get__roomspawner_3();
		int32_t L_14 = roomspawner_Mapsize_m1692416965(L_13, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_15 = roomspawner_Rooms_m3847594012(L_0, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)L_3)))/(int32_t)L_5)), (int32_t)L_7)), (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)L_10)))/(int32_t)L_12)), (int32_t)L_14)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_15, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0082;
		}
	}
	{
		List_1_t2585711361 * L_17 = __this->get_doors_2();
		GameObject_t1113636619 * L_18 = List_1_get_Item_m2491728134(L_17, 1, /*hidden argument*/List_1_get_Item_m2491728134_RuntimeMethod_var);
		Doors_closedoors_m2714474391(__this, L_18, /*hidden argument*/NULL);
	}

IL_0082:
	{
		roomspawner_t2098430347 * L_19 = __this->get__roomspawner_3();
		Transform_t3600365921 * L_20 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_21 = Transform_get_position_m36019626(L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		float L_22 = (&V_2)->get_x_0();
		roomspawner_t2098430347 * L_23 = __this->get__roomspawner_3();
		int32_t L_24 = roomspawner_Roomsize_m3838275817(L_23, /*hidden argument*/NULL);
		roomspawner_t2098430347 * L_25 = __this->get__roomspawner_3();
		int32_t L_26 = roomspawner_Mapsize_m1692416965(L_25, /*hidden argument*/NULL);
		Transform_t3600365921 * L_27 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_28 = Transform_get_position_m36019626(L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		float L_29 = (&V_3)->get_y_1();
		roomspawner_t2098430347 * L_30 = __this->get__roomspawner_3();
		int32_t L_31 = roomspawner_Roomsize_m3838275817(L_30, /*hidden argument*/NULL);
		roomspawner_t2098430347 * L_32 = __this->get__roomspawner_3();
		int32_t L_33 = roomspawner_Mapsize_m1692416965(L_32, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_34 = roomspawner_Rooms_m3847594012(L_19, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)L_22)))/(int32_t)L_24)), (int32_t)L_26)), (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)L_29)))/(int32_t)L_31)), (int32_t)L_33)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_35 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_34, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0104;
		}
	}
	{
		List_1_t2585711361 * L_36 = __this->get_doors_2();
		GameObject_t1113636619 * L_37 = List_1_get_Item_m2491728134(L_36, 3, /*hidden argument*/List_1_get_Item_m2491728134_RuntimeMethod_var);
		Doors_closedoors_m2714474391(__this, L_37, /*hidden argument*/NULL);
	}

IL_0104:
	{
		roomspawner_t2098430347 * L_38 = __this->get__roomspawner_3();
		Transform_t3600365921 * L_39 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_40 = Transform_get_position_m36019626(L_39, /*hidden argument*/NULL);
		V_4 = L_40;
		float L_41 = (&V_4)->get_x_0();
		roomspawner_t2098430347 * L_42 = __this->get__roomspawner_3();
		int32_t L_43 = roomspawner_Roomsize_m3838275817(L_42, /*hidden argument*/NULL);
		roomspawner_t2098430347 * L_44 = __this->get__roomspawner_3();
		int32_t L_45 = roomspawner_Mapsize_m1692416965(L_44, /*hidden argument*/NULL);
		Transform_t3600365921 * L_46 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_47 = Transform_get_position_m36019626(L_46, /*hidden argument*/NULL);
		V_5 = L_47;
		float L_48 = (&V_5)->get_y_1();
		roomspawner_t2098430347 * L_49 = __this->get__roomspawner_3();
		int32_t L_50 = roomspawner_Roomsize_m3838275817(L_49, /*hidden argument*/NULL);
		roomspawner_t2098430347 * L_51 = __this->get__roomspawner_3();
		int32_t L_52 = roomspawner_Mapsize_m1692416965(L_51, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_53 = roomspawner_Rooms_m3847594012(L_38, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)L_41)))/(int32_t)L_43)), (int32_t)L_45)), ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)L_48)))/(int32_t)L_50)), (int32_t)L_52)), (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_54 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_53, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_0188;
		}
	}
	{
		List_1_t2585711361 * L_55 = __this->get_doors_2();
		GameObject_t1113636619 * L_56 = List_1_get_Item_m2491728134(L_55, 0, /*hidden argument*/List_1_get_Item_m2491728134_RuntimeMethod_var);
		Doors_closedoors_m2714474391(__this, L_56, /*hidden argument*/NULL);
	}

IL_0188:
	{
		roomspawner_t2098430347 * L_57 = __this->get__roomspawner_3();
		Transform_t3600365921 * L_58 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_59 = Transform_get_position_m36019626(L_58, /*hidden argument*/NULL);
		V_6 = L_59;
		float L_60 = (&V_6)->get_x_0();
		roomspawner_t2098430347 * L_61 = __this->get__roomspawner_3();
		int32_t L_62 = roomspawner_Roomsize_m3838275817(L_61, /*hidden argument*/NULL);
		roomspawner_t2098430347 * L_63 = __this->get__roomspawner_3();
		int32_t L_64 = roomspawner_Mapsize_m1692416965(L_63, /*hidden argument*/NULL);
		Transform_t3600365921 * L_65 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_66 = Transform_get_position_m36019626(L_65, /*hidden argument*/NULL);
		V_7 = L_66;
		float L_67 = (&V_7)->get_y_1();
		roomspawner_t2098430347 * L_68 = __this->get__roomspawner_3();
		int32_t L_69 = roomspawner_Roomsize_m3838275817(L_68, /*hidden argument*/NULL);
		roomspawner_t2098430347 * L_70 = __this->get__roomspawner_3();
		int32_t L_71 = roomspawner_Mapsize_m1692416965(L_70, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_72 = roomspawner_Rooms_m3847594012(L_57, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)L_60)))/(int32_t)L_62)), (int32_t)L_64)), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)L_67)))/(int32_t)L_69)), (int32_t)L_71)), (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_73 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_72, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_020c;
		}
	}
	{
		List_1_t2585711361 * L_74 = __this->get_doors_2();
		GameObject_t1113636619 * L_75 = List_1_get_Item_m2491728134(L_74, 2, /*hidden argument*/List_1_get_Item_m2491728134_RuntimeMethod_var);
		Doors_closedoors_m2714474391(__this, L_75, /*hidden argument*/NULL);
	}

IL_020c:
	{
		return;
	}
}
// System.Void Doors::closedoors(UnityEngine.GameObject)
extern "C"  void Doors_closedoors_m2714474391 (Doors_t2525505916 * __this, GameObject_t1113636619 * ___door0, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = ___door0;
		GameObject_SetActive_m796801857(L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void movement::.ctor()
extern "C"  void movement__ctor_m1060187778 (movement_t3279108804 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void movement::Start()
extern "C"  void movement_Start_m2163190336 (movement_t3279108804 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (movement_Start_m2163190336_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t3916780224 * L_0 = Component_GetComponent_TisRigidbody_t3916780224_m279685075(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var);
		__this->set_rb_3(L_0);
		return;
	}
}
// System.Void movement::FixedUpdate()
extern "C"  void movement_FixedUpdate_m779299963 (movement_t3279108804 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (movement_FixedUpdate_m779299963_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral2984908384, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = V_0;
		float L_3 = V_1;
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_2), L_2, L_3, /*hidden argument*/NULL);
		Rigidbody_t3916780224 * L_4 = __this->get_rb_3();
		Vector2_t2156229523  L_5 = V_2;
		float L_6 = __this->get_speed_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_7 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Rigidbody_AddForce_m3395934484(L_4, L_8, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void roomspawner::.ctor()
extern "C"  void roomspawner__ctor_m2194661041 (roomspawner_t2098430347 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m3970636864((&L_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_SpawnPosition_7(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 roomspawner::Mapsize()
extern "C"  int32_t roomspawner_Mapsize_m1692416965 (roomspawner_t2098430347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mapsize_4();
		return L_0;
	}
}
// System.Int32 roomspawner::Roomsize()
extern "C"  int32_t roomspawner_Roomsize_m3838275817 (roomspawner_t2098430347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_roomsize_5();
		return L_0;
	}
}
// UnityEngine.GameObject roomspawner::Rooms(System.Int32,System.Int32)
extern "C"  GameObject_t1113636619 * roomspawner_Rooms_m3847594012 (roomspawner_t2098430347 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		GameObjectU5BU2CU5D_t3328599147* L_0 = __this->get_rooms_6();
		int32_t L_1 = ___x0;
		int32_t L_2 = ___y1;
		GameObject_t1113636619 * L_3 = ((GameObjectU5BU2CU5D_t3328599147*)(GameObjectU5BU2CU5D_t3328599147*)L_0)->GetAtUnchecked(L_1, L_2);
		return L_3;
	}
}
// System.Void roomspawner::Start()
extern "C"  void roomspawner_Start_m786830811 (roomspawner_t2098430347 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (roomspawner_Start_m786830811_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_mapsize_4();
		__this->set_mapsize_4(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		int32_t L_1 = __this->get_mapsize_4();
		int32_t L_2 = __this->get_mapsize_4();
		int32_t L_3 = __this->get_mapsize_4();
		int32_t L_4 = __this->get_mapsize_4();
		il2cpp_array_size_t L_6[] = { (il2cpp_array_size_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)), (int32_t)1)), (il2cpp_array_size_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)), (int32_t)1)) };
		GameObjectU5BU2CU5D_t3328599147* L_5 = (GameObjectU5BU2CU5D_t3328599147*)GenArrayNew(GameObjectU5BU2CU5D_t3328599147_il2cpp_TypeInfo_var, L_6);
		__this->set_rooms_6((GameObjectU5BU2CU5D_t3328599147*)L_5);
		GameObjectU5BU2CU5D_t3328599147* L_7 = __this->get_rooms_6();
		Vector2_t2156229523 * L_8 = __this->get_address_of_SpawnPosition_7();
		float L_9 = L_8->get_x_0();
		int32_t L_10 = __this->get_roomsize_5();
		int32_t L_11 = __this->get_mapsize_4();
		Vector2_t2156229523 * L_12 = __this->get_address_of_SpawnPosition_7();
		float L_13 = L_12->get_y_1();
		int32_t L_14 = __this->get_roomsize_5();
		int32_t L_15 = __this->get_mapsize_4();
		GameObject_t1113636619 * L_16 = __this->get_room_2();
		Vector2_t2156229523  L_17 = __this->get_SpawnPosition_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_18 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_19 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_20 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_16, L_18, L_19, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		((GameObjectU5BU2CU5D_t3328599147*)(GameObjectU5BU2CU5D_t3328599147*)L_7)->SetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)L_9)))/(int32_t)L_10)), (int32_t)L_11)), ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)L_13)))/(int32_t)L_14)), (int32_t)L_15)), L_20);
		V_0 = 0;
		goto IL_02b0;
	}

IL_0098:
	{
		int32_t L_21 = Random_Range_m4054026115(NULL /*static, unused*/, 0, 4, /*hidden argument*/NULL);
		__this->set_random_9(L_21);
		int32_t L_22 = __this->get_random_9();
		if (L_22)
		{
			goto IL_00ce;
		}
	}
	{
		Vector2_t2156229523 * L_23 = __this->get_address_of_SpawnPosition_7();
		Vector2_t2156229523 * L_24 = L_23;
		float L_25 = L_24->get_x_0();
		int32_t L_26 = __this->get_roomsize_5();
		L_24->set_x_0(((float)il2cpp_codegen_add((float)L_25, (float)(((float)((float)L_26))))));
		goto IL_0147;
	}

IL_00ce:
	{
		int32_t L_27 = __this->get_random_9();
		if ((!(((uint32_t)L_27) == ((uint32_t)1))))
		{
			goto IL_00f8;
		}
	}
	{
		Vector2_t2156229523 * L_28 = __this->get_address_of_SpawnPosition_7();
		Vector2_t2156229523 * L_29 = L_28;
		float L_30 = L_29->get_x_0();
		int32_t L_31 = __this->get_roomsize_5();
		L_29->set_x_0(((float)il2cpp_codegen_subtract((float)L_30, (float)(((float)((float)L_31))))));
		goto IL_0147;
	}

IL_00f8:
	{
		int32_t L_32 = __this->get_random_9();
		if ((!(((uint32_t)L_32) == ((uint32_t)2))))
		{
			goto IL_0122;
		}
	}
	{
		Vector2_t2156229523 * L_33 = __this->get_address_of_SpawnPosition_7();
		Vector2_t2156229523 * L_34 = L_33;
		float L_35 = L_34->get_y_1();
		int32_t L_36 = __this->get_roomsize_5();
		L_34->set_y_1(((float)il2cpp_codegen_add((float)L_35, (float)(((float)((float)L_36))))));
		goto IL_0147;
	}

IL_0122:
	{
		int32_t L_37 = __this->get_random_9();
		if ((!(((uint32_t)L_37) == ((uint32_t)3))))
		{
			goto IL_0147;
		}
	}
	{
		Vector2_t2156229523 * L_38 = __this->get_address_of_SpawnPosition_7();
		Vector2_t2156229523 * L_39 = L_38;
		float L_40 = L_39->get_y_1();
		int32_t L_41 = __this->get_roomsize_5();
		L_39->set_y_1(((float)il2cpp_codegen_subtract((float)L_40, (float)(((float)((float)L_41))))));
	}

IL_0147:
	{
		Vector2_t2156229523 * L_42 = __this->get_address_of_SpawnPosition_7();
		float L_43 = L_42->get_x_0();
		int32_t L_44 = __this->get_roomsize_5();
		int32_t L_45 = __this->get_mapsize_4();
		if ((!(((float)((float)((float)L_43/(float)(((float)((float)L_44)))))) <= ((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)1)))))))))
		{
			goto IL_0289;
		}
	}
	{
		Vector2_t2156229523 * L_46 = __this->get_address_of_SpawnPosition_7();
		float L_47 = L_46->get_x_0();
		int32_t L_48 = __this->get_roomsize_5();
		int32_t L_49 = __this->get_mapsize_4();
		if ((!(((float)((float)((float)L_47/(float)(((float)((float)L_48)))))) >= ((float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((-L_49)), (int32_t)1)))))))))
		{
			goto IL_0289;
		}
	}
	{
		Vector2_t2156229523 * L_50 = __this->get_address_of_SpawnPosition_7();
		float L_51 = L_50->get_y_1();
		int32_t L_52 = __this->get_roomsize_5();
		int32_t L_53 = __this->get_mapsize_4();
		if ((!(((float)((float)((float)L_51/(float)(((float)((float)L_52)))))) <= ((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_53, (int32_t)1)))))))))
		{
			goto IL_0289;
		}
	}
	{
		Vector2_t2156229523 * L_54 = __this->get_address_of_SpawnPosition_7();
		float L_55 = L_54->get_y_1();
		int32_t L_56 = __this->get_roomsize_5();
		int32_t L_57 = __this->get_mapsize_4();
		if ((!(((float)((float)((float)L_55/(float)(((float)((float)L_56)))))) >= ((float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((-L_57)), (int32_t)1)))))))))
		{
			goto IL_0289;
		}
	}
	{
		GameObjectU5BU2CU5D_t3328599147* L_58 = __this->get_rooms_6();
		Vector2_t2156229523 * L_59 = __this->get_address_of_SpawnPosition_7();
		float L_60 = L_59->get_x_0();
		int32_t L_61 = __this->get_roomsize_5();
		int32_t L_62 = __this->get_mapsize_4();
		Vector2_t2156229523 * L_63 = __this->get_address_of_SpawnPosition_7();
		float L_64 = L_63->get_y_1();
		int32_t L_65 = __this->get_roomsize_5();
		int32_t L_66 = __this->get_mapsize_4();
		GameObject_t1113636619 * L_67 = ((GameObjectU5BU2CU5D_t3328599147*)(GameObjectU5BU2CU5D_t3328599147*)L_58)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)L_60)))/(int32_t)L_61)), (int32_t)L_62)), ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)L_64)))/(int32_t)L_65)), (int32_t)L_66)));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_68 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_67, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_0276;
		}
	}
	{
		GameObjectU5BU2CU5D_t3328599147* L_69 = __this->get_rooms_6();
		Vector2_t2156229523 * L_70 = __this->get_address_of_SpawnPosition_7();
		float L_71 = L_70->get_x_0();
		int32_t L_72 = __this->get_roomsize_5();
		int32_t L_73 = __this->get_mapsize_4();
		Vector2_t2156229523 * L_74 = __this->get_address_of_SpawnPosition_7();
		float L_75 = L_74->get_y_1();
		int32_t L_76 = __this->get_roomsize_5();
		int32_t L_77 = __this->get_mapsize_4();
		GameObject_t1113636619 * L_78 = __this->get_room_2();
		Vector2_t2156229523  L_79 = __this->get_SpawnPosition_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_80 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_79, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_81 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_82 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_78, L_80, L_81, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		((GameObjectU5BU2CU5D_t3328599147*)(GameObjectU5BU2CU5D_t3328599147*)L_69)->SetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)L_71)))/(int32_t)L_72)), (int32_t)L_73)), ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)L_75)))/(int32_t)L_76)), (int32_t)L_77)), L_82);
		goto IL_0284;
	}

IL_0276:
	{
		int32_t L_83 = __this->get_AmoutOfRooms_3();
		__this->set_AmoutOfRooms_3(((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1)));
	}

IL_0284:
	{
		goto IL_02ac;
	}

IL_0289:
	{
		int32_t L_84 = __this->get_AmoutOfRooms_3();
		__this->set_AmoutOfRooms_3(((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1)));
		Vector2_t2156229523  L_85;
		memset(&L_85, 0, sizeof(L_85));
		Vector2__ctor_m3970636864((&L_85), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_SpawnPosition_7(L_85);
	}

IL_02ac:
	{
		int32_t L_86 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1));
	}

IL_02b0:
	{
		int32_t L_87 = V_0;
		int32_t L_88 = __this->get_AmoutOfRooms_3();
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_0098;
		}
	}
	{
		Action_t1264377477 * L_89 = __this->get_check_8();
		if (L_89)
		{
			goto IL_02d1;
		}
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral2910496736, /*hidden argument*/NULL);
	}

IL_02d1:
	{
		Action_t1264377477 * L_90 = __this->get_check_8();
		Action_Invoke_m937035532(L_90, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
