#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.ICollection
struct ICollection_tC1E1DED86C0A66845675392606B302452210D5DA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190;

IL2CPP_EXTERN_C RuntimeClass* HTTP_RESPONSE_HEADER_ID_t30A2F38078E0D32DDAC87DED75718B969213860D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpApi_t5A0DA2823CE3DD0C3016F0C86AA1ECA038E54908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const uint32_t HTTP_RESPONSE_HEADER_ID_IndexOfKnownHeader_m9AB35296902DA398C1DE344FCA647CCF4B06AD60_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HTTP_RESPONSE_HEADER_ID_ToString_m6FC9DDD02364AF1F9906BA500F8C5403FA1D106E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HTTP_RESPONSE_HEADER_ID__cctor_m0A7615B4FB46AB4706C12ED1765EE1274396F92C_MetadataUsageId;

struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Net.UnsafeNclNativeMethods_HttpApi
struct  HttpApi_t5A0DA2823CE3DD0C3016F0C86AA1ECA038E54908  : public RuntimeObject
{
public:

public:
};

struct HttpApi_t5A0DA2823CE3DD0C3016F0C86AA1ECA038E54908_StaticFields
{
public:
	// System.String[] System.Net.UnsafeNclNativeMethods_HttpApi::m_Strings
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_Strings_2;

public:
	inline static int32_t get_offset_of_m_Strings_2() { return static_cast<int32_t>(offsetof(HttpApi_t5A0DA2823CE3DD0C3016F0C86AA1ECA038E54908_StaticFields, ___m_Strings_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_Strings_2() const { return ___m_Strings_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_Strings_2() { return &___m_Strings_2; }
	inline void set_m_Strings_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_Strings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Strings_2), (void*)value);
	}
};


// System.Net.UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID
struct  HTTP_RESPONSE_HEADER_ID_t30A2F38078E0D32DDAC87DED75718B969213860D  : public RuntimeObject
{
public:

public:
};

struct HTTP_RESPONSE_HEADER_ID_t30A2F38078E0D32DDAC87DED75718B969213860D_StaticFields
{
public:
	// System.Collections.Hashtable System.Net.UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID::m_Hashtable
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___m_Hashtable_0;

public:
	inline static int32_t get_offset_of_m_Hashtable_0() { return static_cast<int32_t>(offsetof(HTTP_RESPONSE_HEADER_ID_t30A2F38078E0D32DDAC87DED75718B969213860D_StaticFields, ___m_Hashtable_0)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_m_Hashtable_0() const { return ___m_Hashtable_0; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_m_Hashtable_0() { return &___m_Hashtable_0; }
	inline void set_m_Hashtable_0(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___m_Hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hashtable_0), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Collections.Hashtable
struct  Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC  : public RuntimeObject
{
public:
	// System.Collections.Hashtable_bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* ___buckets_10;
	// System.Int32 System.Collections.Hashtable::count
	int32_t ___count_11;
	// System.Int32 System.Collections.Hashtable::occupancy
	int32_t ___occupancy_12;
	// System.Int32 System.Collections.Hashtable::loadsize
	int32_t ___loadsize_13;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::version
	int32_t ___version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::isWriterInProgress
	bool ___isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::keys
	RuntimeObject* ___keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::values
	RuntimeObject* ___values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject * ____syncRoot_20;

public:
	inline static int32_t get_offset_of_buckets_10() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___buckets_10)); }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* get_buckets_10() const { return ___buckets_10; }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190** get_address_of_buckets_10() { return &___buckets_10; }
	inline void set_buckets_10(bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* value)
	{
		___buckets_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_10), (void*)value);
	}

	inline static int32_t get_offset_of_count_11() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___count_11)); }
	inline int32_t get_count_11() const { return ___count_11; }
	inline int32_t* get_address_of_count_11() { return &___count_11; }
	inline void set_count_11(int32_t value)
	{
		___count_11 = value;
	}

	inline static int32_t get_offset_of_occupancy_12() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___occupancy_12)); }
	inline int32_t get_occupancy_12() const { return ___occupancy_12; }
	inline int32_t* get_address_of_occupancy_12() { return &___occupancy_12; }
	inline void set_occupancy_12(int32_t value)
	{
		___occupancy_12 = value;
	}

	inline static int32_t get_offset_of_loadsize_13() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadsize_13)); }
	inline int32_t get_loadsize_13() const { return ___loadsize_13; }
	inline int32_t* get_address_of_loadsize_13() { return &___loadsize_13; }
	inline void set_loadsize_13(int32_t value)
	{
		___loadsize_13 = value;
	}

	inline static int32_t get_offset_of_loadFactor_14() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadFactor_14)); }
	inline float get_loadFactor_14() const { return ___loadFactor_14; }
	inline float* get_address_of_loadFactor_14() { return &___loadFactor_14; }
	inline void set_loadFactor_14(float value)
	{
		___loadFactor_14 = value;
	}

	inline static int32_t get_offset_of_version_15() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___version_15)); }
	inline int32_t get_version_15() const { return ___version_15; }
	inline int32_t* get_address_of_version_15() { return &___version_15; }
	inline void set_version_15(int32_t value)
	{
		___version_15 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_16() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___isWriterInProgress_16)); }
	inline bool get_isWriterInProgress_16() const { return ___isWriterInProgress_16; }
	inline bool* get_address_of_isWriterInProgress_16() { return &___isWriterInProgress_16; }
	inline void set_isWriterInProgress_16(bool value)
	{
		___isWriterInProgress_16 = value;
	}

	inline static int32_t get_offset_of_keys_17() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___keys_17)); }
	inline RuntimeObject* get_keys_17() const { return ___keys_17; }
	inline RuntimeObject** get_address_of_keys_17() { return &___keys_17; }
	inline void set_keys_17(RuntimeObject* value)
	{
		___keys_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_17), (void*)value);
	}

	inline static int32_t get_offset_of_values_18() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___values_18)); }
	inline RuntimeObject* get_values_18() const { return ___values_18; }
	inline RuntimeObject** get_address_of_values_18() { return &___values_18; }
	inline void set_values_18(RuntimeObject* value)
	{
		___values_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_18), (void*)value);
	}

	inline static int32_t get_offset_of__keycomparer_19() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____keycomparer_19)); }
	inline RuntimeObject* get__keycomparer_19() const { return ____keycomparer_19; }
	inline RuntimeObject** get_address_of__keycomparer_19() { return &____keycomparer_19; }
	inline void set__keycomparer_19(RuntimeObject* value)
	{
		____keycomparer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keycomparer_19), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_20() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____syncRoot_20)); }
	inline RuntimeObject * get__syncRoot_20() const { return ____syncRoot_20; }
	inline RuntimeObject ** get_address_of__syncRoot_20() { return &____syncRoot_20; }
	inline void set__syncRoot_20(RuntimeObject * value)
	{
		____syncRoot_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_20), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void System.Collections.Hashtable::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mF6B704809ABE222280933EA170B6664286C91FDC (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * __this, int32_t ___capacity0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HTTP_RESPONSE_HEADER_ID__cctor_m0A7615B4FB46AB4706C12ED1765EE1274396F92C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HTTP_RESPONSE_HEADER_ID__cctor_m0A7615B4FB46AB4706C12ED1765EE1274396F92C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)il2cpp_codegen_object_new(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
		Hashtable__ctor_mF6B704809ABE222280933EA170B6664286C91FDC(L_0, ((int32_t)30), /*hidden argument*/NULL);
		((HTTP_RESPONSE_HEADER_ID_t30A2F38078E0D32DDAC87DED75718B969213860D_StaticFields*)il2cpp_codegen_static_fields_for(HTTP_RESPONSE_HEADER_ID_t30A2F38078E0D32DDAC87DED75718B969213860D_il2cpp_TypeInfo_var))->set_m_Hashtable_0(L_0);
		V_0 = 0;
		goto IL_002b;
	}

IL_0010:
	{
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_1 = ((HTTP_RESPONSE_HEADER_ID_t30A2F38078E0D32DDAC87DED75718B969213860D_StaticFields*)il2cpp_codegen_static_fields_for(HTTP_RESPONSE_HEADER_ID_t30A2F38078E0D32DDAC87DED75718B969213860D_il2cpp_TypeInfo_var))->get_m_Hashtable_0();
		IL2CPP_RUNTIME_CLASS_INIT(HttpApi_t5A0DA2823CE3DD0C3016F0C86AA1ECA038E54908_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = ((HttpApi_t5A0DA2823CE3DD0C3016F0C86AA1ECA038E54908_StaticFields*)il2cpp_codegen_static_fields_for(HttpApi_t5A0DA2823CE3DD0C3016F0C86AA1ECA038E54908_il2cpp_TypeInfo_var))->get_m_Strings_2();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_1);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_1, L_5, L_8);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)30))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Net.UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID::IndexOfKnownHeader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HTTP_RESPONSE_HEADER_ID_IndexOfKnownHeader_m9AB35296902DA398C1DE344FCA647CCF4B06AD60 (String_t* ___HeaderName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HTTP_RESPONSE_HEADER_ID_IndexOfKnownHeader_m9AB35296902DA398C1DE344FCA647CCF4B06AD60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(HTTP_RESPONSE_HEADER_ID_t30A2F38078E0D32DDAC87DED75718B969213860D_il2cpp_TypeInfo_var);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = ((HTTP_RESPONSE_HEADER_ID_t30A2F38078E0D32DDAC87DED75718B969213860D_StaticFields*)il2cpp_codegen_static_fields_for(HTTP_RESPONSE_HEADER_ID_t30A2F38078E0D32DDAC87DED75718B969213860D_il2cpp_TypeInfo_var))->get_m_Hashtable_0();
		String_t* L_1 = ___HeaderName0;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		V_0 = L_2;
		RuntimeObject * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject * L_4 = V_0;
		return ((*(int32_t*)((int32_t*)UnBox(L_4, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
	}

IL_0016:
	{
		return (-1);
	}
}
// System.String System.Net.UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID::ToString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HTTP_RESPONSE_HEADER_ID_ToString_m6FC9DDD02364AF1F9906BA500F8C5403FA1D106E (int32_t ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HTTP_RESPONSE_HEADER_ID_ToString_m6FC9DDD02364AF1F9906BA500F8C5403FA1D106E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HttpApi_t5A0DA2823CE3DD0C3016F0C86AA1ECA038E54908_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ((HttpApi_t5A0DA2823CE3DD0C3016F0C86AA1ECA038E54908_StaticFields*)il2cpp_codegen_static_fields_for(HttpApi_t5A0DA2823CE3DD0C3016F0C86AA1ECA038E54908_il2cpp_TypeInfo_var))->get_m_Strings_2();
		int32_t L_1 = ___position0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
