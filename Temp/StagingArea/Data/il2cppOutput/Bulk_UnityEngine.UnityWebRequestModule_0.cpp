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
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Byte
struct Byte_t1134296376;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t457913172;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t1293755103;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Double
struct Double_t594665363;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Assembly
struct Assembly_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t2327118887;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t1209798546;
// System.Text.RegularExpressions.Regex
struct Regex_t3657309853;
// System.UInt16
struct UInt16_t2177724958;
// System.Uri
struct Uri_t100236324;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t2082808316;
// System.UriParser
struct UriParser_t3890150400;
// System.Void
struct Void_t1185182177;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019;
// UnityEngine.WWWForm
struct WWWForm_t4064702195;

extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Encoding_t1523322056_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1293755103_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern RuntimeClass* Regex_t3657309853_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_t100236324_il2cpp_TypeInfo_var;
extern RuntimeClass* WebRequestUtils_t3541624225_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1576728448;
extern String_t* _stringLiteral3452614526;
extern String_t* _stringLiteral3515428721;
extern String_t* _stringLiteral463295005;
extern String_t* _stringLiteral757602046;
extern String_t* _stringLiteral97523668;
extern const RuntimeMethod* List_1_Add_m1685793073_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m4232982637_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2882708797_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m706204246_RuntimeMethod_var;
extern const uint32_t CertificateHandler_Dispose_m2100863831_MetadataUsageId;
extern const uint32_t DownloadHandler_Dispose_m2747726581_MetadataUsageId;
extern const uint32_t DownloadHandler_GetTextEncoder_m3244408468_MetadataUsageId;
extern const uint32_t DownloadHandler_GetText_m600283602_MetadataUsageId;
extern const uint32_t UnityWebRequest_InternalDestroy_m2954597795_MetadataUsageId;
extern const uint32_t UploadHandler_Dispose_m3057340132_MetadataUsageId;
extern const uint32_t WWWForm_AddField_m1128158655_MetadataUsageId;
extern const uint32_t WWWForm_AddField_m2357902982_MetadataUsageId;
extern const uint32_t WWWForm__ctor_m2465700452_MetadataUsageId;
extern const uint32_t WebRequestUtils_RedirectTo_m55747000_MetadataUsageId;
extern const uint32_t WebRequestUtils__cctor_m4190982137_MetadataUsageId;
struct CertificateHandler_t2739891000;;
struct CertificateHandler_t2739891000_marshaled_com;
struct CertificateHandler_t2739891000_marshaled_com;;
struct CertificateHandler_t2739891000_marshaled_pinvoke;
struct CertificateHandler_t2739891000_marshaled_pinvoke;;
struct DownloadHandler_t2937767557;;
struct DownloadHandler_t2937767557_marshaled_com;
struct DownloadHandler_t2937767557_marshaled_com;;
struct DownloadHandler_t2937767557_marshaled_pinvoke;
struct DownloadHandler_t2937767557_marshaled_pinvoke;;
struct UploadHandler_t2993558019;;
struct UploadHandler_t2993558019_marshaled_com;
struct UploadHandler_t2993558019_marshaled_com;;
struct UploadHandler_t2993558019_marshaled_pinvoke;
struct UploadHandler_t2993558019_marshaled_pinvoke;;

struct ByteU5BU5D_t4116647657;
struct CharU5BU5D_t3528271667;


#ifndef U3CMODULEU3E_T692745533_H
#define U3CMODULEU3E_T692745533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745533 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745533_H
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
#ifndef LIST_1_T1293755103_H
#define LIST_1_T1293755103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Byte[]>
struct  List_1_t1293755103  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5DU5BU5D_t457913172* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1293755103, ____items_1)); }
	inline ByteU5BU5DU5BU5D_t457913172* get__items_1() const { return ____items_1; }
	inline ByteU5BU5DU5BU5D_t457913172** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5DU5BU5D_t457913172* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1293755103, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1293755103, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1293755103_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ByteU5BU5DU5BU5D_t457913172* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1293755103_StaticFields, ___EmptyArray_4)); }
	inline ByteU5BU5DU5BU5D_t457913172* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ByteU5BU5DU5BU5D_t457913172** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ByteU5BU5DU5BU5D_t457913172* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1293755103_H
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t1281789340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t1281789340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t1281789340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
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
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3123823036 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1188251036 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoder_fallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoder_fallback_4)); }
	inline EncoderFallback_t1188251036 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1188251036 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2843939325* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1523322056 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1523322056 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1523322056 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1523322056 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1523322056 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t2843939325* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t2843939325* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t1523322056 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t1523322056 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t1523322056 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t1523322056 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t1523322056 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t1523322056 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t1523322056 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t1523322056 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t1523322056 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t1523322056 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t1523322056 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t1523322056 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t1523322056 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t1523322056 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t1523322056 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t1523322056 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t1523322056 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef URI_T100236324_H
#define URI_T100236324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t100236324  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_0;
	// System.String System.Uri::source
	String_t* ___source_1;
	// System.String System.Uri::scheme
	String_t* ___scheme_2;
	// System.String System.Uri::host
	String_t* ___host_3;
	// System.Int32 System.Uri::port
	int32_t ___port_4;
	// System.String System.Uri::path
	String_t* ___path_5;
	// System.String System.Uri::query
	String_t* ___query_6;
	// System.String System.Uri::fragment
	String_t* ___fragment_7;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_8;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_9;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_10;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_11;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_12;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_13;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_14;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_15;
	// System.UriParser System.Uri::parser
	UriParser_t3890150400 * ___parser_29;

public:
	inline static int32_t get_offset_of_isUnixFilePath_0() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnixFilePath_0)); }
	inline bool get_isUnixFilePath_0() const { return ___isUnixFilePath_0; }
	inline bool* get_address_of_isUnixFilePath_0() { return &___isUnixFilePath_0; }
	inline void set_isUnixFilePath_0(bool value)
	{
		___isUnixFilePath_0 = value;
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_scheme_2() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___scheme_2)); }
	inline String_t* get_scheme_2() const { return ___scheme_2; }
	inline String_t** get_address_of_scheme_2() { return &___scheme_2; }
	inline void set_scheme_2(String_t* value)
	{
		___scheme_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_2), value);
	}

	inline static int32_t get_offset_of_host_3() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___host_3)); }
	inline String_t* get_host_3() const { return ___host_3; }
	inline String_t** get_address_of_host_3() { return &___host_3; }
	inline void set_host_3(String_t* value)
	{
		___host_3 = value;
		Il2CppCodeGenWriteBarrier((&___host_3), value);
	}

	inline static int32_t get_offset_of_port_4() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___port_4)); }
	inline int32_t get_port_4() const { return ___port_4; }
	inline int32_t* get_address_of_port_4() { return &___port_4; }
	inline void set_port_4(int32_t value)
	{
		___port_4 = value;
	}

	inline static int32_t get_offset_of_path_5() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___path_5)); }
	inline String_t* get_path_5() const { return ___path_5; }
	inline String_t** get_address_of_path_5() { return &___path_5; }
	inline void set_path_5(String_t* value)
	{
		___path_5 = value;
		Il2CppCodeGenWriteBarrier((&___path_5), value);
	}

	inline static int32_t get_offset_of_query_6() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___query_6)); }
	inline String_t* get_query_6() const { return ___query_6; }
	inline String_t** get_address_of_query_6() { return &___query_6; }
	inline void set_query_6(String_t* value)
	{
		___query_6 = value;
		Il2CppCodeGenWriteBarrier((&___query_6), value);
	}

	inline static int32_t get_offset_of_fragment_7() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___fragment_7)); }
	inline String_t* get_fragment_7() const { return ___fragment_7; }
	inline String_t** get_address_of_fragment_7() { return &___fragment_7; }
	inline void set_fragment_7(String_t* value)
	{
		___fragment_7 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_7), value);
	}

	inline static int32_t get_offset_of_userinfo_8() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userinfo_8)); }
	inline String_t* get_userinfo_8() const { return ___userinfo_8; }
	inline String_t** get_address_of_userinfo_8() { return &___userinfo_8; }
	inline void set_userinfo_8(String_t* value)
	{
		___userinfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_8), value);
	}

	inline static int32_t get_offset_of_isUnc_9() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnc_9)); }
	inline bool get_isUnc_9() const { return ___isUnc_9; }
	inline bool* get_address_of_isUnc_9() { return &___isUnc_9; }
	inline void set_isUnc_9(bool value)
	{
		___isUnc_9 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_10() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isOpaquePart_10)); }
	inline bool get_isOpaquePart_10() const { return ___isOpaquePart_10; }
	inline bool* get_address_of_isOpaquePart_10() { return &___isOpaquePart_10; }
	inline void set_isOpaquePart_10(bool value)
	{
		___isOpaquePart_10 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_11() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isAbsoluteUri_11)); }
	inline bool get_isAbsoluteUri_11() const { return ___isAbsoluteUri_11; }
	inline bool* get_address_of_isAbsoluteUri_11() { return &___isAbsoluteUri_11; }
	inline void set_isAbsoluteUri_11(bool value)
	{
		___isAbsoluteUri_11 = value;
	}

	inline static int32_t get_offset_of_userEscaped_12() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userEscaped_12)); }
	inline bool get_userEscaped_12() const { return ___userEscaped_12; }
	inline bool* get_address_of_userEscaped_12() { return &___userEscaped_12; }
	inline void set_userEscaped_12(bool value)
	{
		___userEscaped_12 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_13() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedAbsoluteUri_13)); }
	inline String_t* get_cachedAbsoluteUri_13() const { return ___cachedAbsoluteUri_13; }
	inline String_t** get_address_of_cachedAbsoluteUri_13() { return &___cachedAbsoluteUri_13; }
	inline void set_cachedAbsoluteUri_13(String_t* value)
	{
		___cachedAbsoluteUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_13), value);
	}

	inline static int32_t get_offset_of_cachedToString_14() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedToString_14)); }
	inline String_t* get_cachedToString_14() const { return ___cachedToString_14; }
	inline String_t** get_address_of_cachedToString_14() { return &___cachedToString_14; }
	inline void set_cachedToString_14(String_t* value)
	{
		___cachedToString_14 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_14), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_15() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedHashCode_15)); }
	inline int32_t get_cachedHashCode_15() const { return ___cachedHashCode_15; }
	inline int32_t* get_address_of_cachedHashCode_15() { return &___cachedHashCode_15; }
	inline void set_cachedHashCode_15(int32_t value)
	{
		___cachedHashCode_15 = value;
	}

	inline static int32_t get_offset_of_parser_29() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___parser_29)); }
	inline UriParser_t3890150400 * get_parser_29() const { return ___parser_29; }
	inline UriParser_t3890150400 ** get_address_of_parser_29() { return &___parser_29; }
	inline void set_parser_29(UriParser_t3890150400 * value)
	{
		___parser_29 = value;
		Il2CppCodeGenWriteBarrier((&___parser_29), value);
	}
};

struct Uri_t100236324_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_16;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_17;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_18;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_19;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_20;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_21;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_22;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_23;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_24;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_25;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_26;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_27;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_t2082808316* ___schemes_28;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map14_30;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map15_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map16_32;

public:
	inline static int32_t get_offset_of_hexUpperChars_16() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___hexUpperChars_16)); }
	inline String_t* get_hexUpperChars_16() const { return ___hexUpperChars_16; }
	inline String_t** get_address_of_hexUpperChars_16() { return &___hexUpperChars_16; }
	inline void set_hexUpperChars_16(String_t* value)
	{
		___hexUpperChars_16 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_16), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_17() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___SchemeDelimiter_17)); }
	inline String_t* get_SchemeDelimiter_17() const { return ___SchemeDelimiter_17; }
	inline String_t** get_address_of_SchemeDelimiter_17() { return &___SchemeDelimiter_17; }
	inline void set_SchemeDelimiter_17(String_t* value)
	{
		___SchemeDelimiter_17 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_17), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_18() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFile_18)); }
	inline String_t* get_UriSchemeFile_18() const { return ___UriSchemeFile_18; }
	inline String_t** get_address_of_UriSchemeFile_18() { return &___UriSchemeFile_18; }
	inline void set_UriSchemeFile_18(String_t* value)
	{
		___UriSchemeFile_18 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_18), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_19() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFtp_19)); }
	inline String_t* get_UriSchemeFtp_19() const { return ___UriSchemeFtp_19; }
	inline String_t** get_address_of_UriSchemeFtp_19() { return &___UriSchemeFtp_19; }
	inline void set_UriSchemeFtp_19(String_t* value)
	{
		___UriSchemeFtp_19 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_19), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_20() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeGopher_20)); }
	inline String_t* get_UriSchemeGopher_20() const { return ___UriSchemeGopher_20; }
	inline String_t** get_address_of_UriSchemeGopher_20() { return &___UriSchemeGopher_20; }
	inline void set_UriSchemeGopher_20(String_t* value)
	{
		___UriSchemeGopher_20 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_21() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttp_21)); }
	inline String_t* get_UriSchemeHttp_21() const { return ___UriSchemeHttp_21; }
	inline String_t** get_address_of_UriSchemeHttp_21() { return &___UriSchemeHttp_21; }
	inline void set_UriSchemeHttp_21(String_t* value)
	{
		___UriSchemeHttp_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_22() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttps_22)); }
	inline String_t* get_UriSchemeHttps_22() const { return ___UriSchemeHttps_22; }
	inline String_t** get_address_of_UriSchemeHttps_22() { return &___UriSchemeHttps_22; }
	inline void set_UriSchemeHttps_22(String_t* value)
	{
		___UriSchemeHttps_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_23() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeMailto_23)); }
	inline String_t* get_UriSchemeMailto_23() const { return ___UriSchemeMailto_23; }
	inline String_t** get_address_of_UriSchemeMailto_23() { return &___UriSchemeMailto_23; }
	inline void set_UriSchemeMailto_23(String_t* value)
	{
		___UriSchemeMailto_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_24() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNews_24)); }
	inline String_t* get_UriSchemeNews_24() const { return ___UriSchemeNews_24; }
	inline String_t** get_address_of_UriSchemeNews_24() { return &___UriSchemeNews_24; }
	inline void set_UriSchemeNews_24(String_t* value)
	{
		___UriSchemeNews_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_25() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNntp_25)); }
	inline String_t* get_UriSchemeNntp_25() const { return ___UriSchemeNntp_25; }
	inline String_t** get_address_of_UriSchemeNntp_25() { return &___UriSchemeNntp_25; }
	inline void set_UriSchemeNntp_25(String_t* value)
	{
		___UriSchemeNntp_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_26() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetPipe_26)); }
	inline String_t* get_UriSchemeNetPipe_26() const { return ___UriSchemeNetPipe_26; }
	inline String_t** get_address_of_UriSchemeNetPipe_26() { return &___UriSchemeNetPipe_26; }
	inline void set_UriSchemeNetPipe_26(String_t* value)
	{
		___UriSchemeNetPipe_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_27() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetTcp_27)); }
	inline String_t* get_UriSchemeNetTcp_27() const { return ___UriSchemeNetTcp_27; }
	inline String_t** get_address_of_UriSchemeNetTcp_27() { return &___UriSchemeNetTcp_27; }
	inline void set_UriSchemeNetTcp_27(String_t* value)
	{
		___UriSchemeNetTcp_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_27), value);
	}

	inline static int32_t get_offset_of_schemes_28() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___schemes_28)); }
	inline UriSchemeU5BU5D_t2082808316* get_schemes_28() const { return ___schemes_28; }
	inline UriSchemeU5BU5D_t2082808316** get_address_of_schemes_28() { return &___schemes_28; }
	inline void set_schemes_28(UriSchemeU5BU5D_t2082808316* value)
	{
		___schemes_28 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_30() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map14_30)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map14_30() const { return ___U3CU3Ef__switchU24map14_30; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map14_30() { return &___U3CU3Ef__switchU24map14_30; }
	inline void set_U3CU3Ef__switchU24map14_30(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map14_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_31() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map15_31)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map15_31() const { return ___U3CU3Ef__switchU24map15_31; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map15_31() { return &___U3CU3Ef__switchU24map15_31; }
	inline void set_U3CU3Ef__switchU24map15_31(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map15_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_32() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map16_32)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map16_32() const { return ___U3CU3Ef__switchU24map16_32; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map16_32() { return &___U3CU3Ef__switchU24map16_32; }
	inline void set_U3CU3Ef__switchU24map16_32(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map16_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T100236324_H
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
#ifndef WWWFORM_T4064702195_H
#define WWWFORM_T4064702195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WWWForm
struct  WWWForm_t4064702195  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t1293755103 * ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_t3319525431 * ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_t3319525431 * ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_t3319525431 * ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_t4116647657* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;

public:
	inline static int32_t get_offset_of_formData_0() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___formData_0)); }
	inline List_1_t1293755103 * get_formData_0() const { return ___formData_0; }
	inline List_1_t1293755103 ** get_address_of_formData_0() { return &___formData_0; }
	inline void set_formData_0(List_1_t1293755103 * value)
	{
		___formData_0 = value;
		Il2CppCodeGenWriteBarrier((&___formData_0), value);
	}

	inline static int32_t get_offset_of_fieldNames_1() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___fieldNames_1)); }
	inline List_1_t3319525431 * get_fieldNames_1() const { return ___fieldNames_1; }
	inline List_1_t3319525431 ** get_address_of_fieldNames_1() { return &___fieldNames_1; }
	inline void set_fieldNames_1(List_1_t3319525431 * value)
	{
		___fieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((&___fieldNames_1), value);
	}

	inline static int32_t get_offset_of_fileNames_2() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___fileNames_2)); }
	inline List_1_t3319525431 * get_fileNames_2() const { return ___fileNames_2; }
	inline List_1_t3319525431 ** get_address_of_fileNames_2() { return &___fileNames_2; }
	inline void set_fileNames_2(List_1_t3319525431 * value)
	{
		___fileNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___fileNames_2), value);
	}

	inline static int32_t get_offset_of_types_3() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___types_3)); }
	inline List_1_t3319525431 * get_types_3() const { return ___types_3; }
	inline List_1_t3319525431 ** get_address_of_types_3() { return &___types_3; }
	inline void set_types_3(List_1_t3319525431 * value)
	{
		___types_3 = value;
		Il2CppCodeGenWriteBarrier((&___types_3), value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___boundary_4)); }
	inline ByteU5BU5D_t4116647657* get_boundary_4() const { return ___boundary_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(ByteU5BU5D_t4116647657* value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((&___boundary_4), value);
	}

	inline static int32_t get_offset_of_containsFiles_5() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___containsFiles_5)); }
	inline bool get_containsFiles_5() const { return ___containsFiles_5; }
	inline bool* get_address_of_containsFiles_5() { return &___containsFiles_5; }
	inline void set_containsFiles_5(bool value)
	{
		___containsFiles_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWWFORM_T4064702195_H
#ifndef WEBREQUESTUTILS_T3541624225_H
#define WEBREQUESTUTILS_T3541624225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.WebRequestUtils
struct  WebRequestUtils_t3541624225  : public RuntimeObject
{
public:

public:
};

struct WebRequestUtils_t3541624225_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngineInternal.WebRequestUtils::domainRegex
	Regex_t3657309853 * ___domainRegex_0;

public:
	inline static int32_t get_offset_of_domainRegex_0() { return static_cast<int32_t>(offsetof(WebRequestUtils_t3541624225_StaticFields, ___domainRegex_0)); }
	inline Regex_t3657309853 * get_domainRegex_0() const { return ___domainRegex_0; }
	inline Regex_t3657309853 ** get_address_of_domainRegex_0() { return &___domainRegex_0; }
	inline void set_domainRegex_0(Regex_t3657309853 * value)
	{
		___domainRegex_0 = value;
		Il2CppCodeGenWriteBarrier((&___domainRegex_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTUTILS_T3541624225_H
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
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
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
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
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
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
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
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef STRINGCOMPARISON_T3657712135_H
#define STRINGCOMPARISON_T3657712135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t3657712135 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringComparison_t3657712135, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARISON_T3657712135_H
#ifndef REGEXOPTIONS_T92845595_H
#define REGEXOPTIONS_T92845595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RegexOptions
struct  RegexOptions_t92845595 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegexOptions_t92845595, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEXOPTIONS_T92845595_H
#ifndef URIKIND_T3816567336_H
#define URIKIND_T3816567336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriKind
struct  UriKind_t3816567336 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriKind_t3816567336, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIKIND_T3816567336_H
#ifndef CERTIFICATEHANDLER_T2739891000_H
#define CERTIFICATEHANDLER_T2739891000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_t2739891000  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_t2739891000, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // CERTIFICATEHANDLER_T2739891000_H
#ifndef DOWNLOADHANDLER_T2937767557_H
#define DOWNLOADHANDLER_T2937767557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_t2937767557  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t2937767557, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // DOWNLOADHANDLER_T2937767557_H
#ifndef UNITYWEBREQUESTERROR_T359680823_H
#define UNITYWEBREQUESTERROR_T359680823_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError
struct  UnityWebRequestError_t359680823 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/UnityWebRequestError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityWebRequestError_t359680823, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYWEBREQUESTERROR_T359680823_H
#ifndef UPLOADHANDLER_T2993558019_H
#define UPLOADHANDLER_T2993558019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t2993558019  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t2993558019, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // UPLOADHANDLER_T2993558019_H
#ifndef REGEX_T3657309853_H
#define REGEX_T3657309853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Regex
struct  Regex_t3657309853  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::machineFactory
	RuntimeObject* ___machineFactory_1;
	// System.Collections.IDictionary System.Text.RegularExpressions.Regex::mapping
	RuntimeObject* ___mapping_2;
	// System.Int32 System.Text.RegularExpressions.Regex::group_count
	int32_t ___group_count_3;
	// System.Int32 System.Text.RegularExpressions.Regex::gap
	int32_t ___gap_4;
	// System.String[] System.Text.RegularExpressions.Regex::group_names
	StringU5BU5D_t1281789340* ___group_names_5;
	// System.Int32[] System.Text.RegularExpressions.Regex::group_numbers
	Int32U5BU5D_t385246372* ___group_numbers_6;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_7;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_8;

public:
	inline static int32_t get_offset_of_machineFactory_1() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___machineFactory_1)); }
	inline RuntimeObject* get_machineFactory_1() const { return ___machineFactory_1; }
	inline RuntimeObject** get_address_of_machineFactory_1() { return &___machineFactory_1; }
	inline void set_machineFactory_1(RuntimeObject* value)
	{
		___machineFactory_1 = value;
		Il2CppCodeGenWriteBarrier((&___machineFactory_1), value);
	}

	inline static int32_t get_offset_of_mapping_2() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___mapping_2)); }
	inline RuntimeObject* get_mapping_2() const { return ___mapping_2; }
	inline RuntimeObject** get_address_of_mapping_2() { return &___mapping_2; }
	inline void set_mapping_2(RuntimeObject* value)
	{
		___mapping_2 = value;
		Il2CppCodeGenWriteBarrier((&___mapping_2), value);
	}

	inline static int32_t get_offset_of_group_count_3() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___group_count_3)); }
	inline int32_t get_group_count_3() const { return ___group_count_3; }
	inline int32_t* get_address_of_group_count_3() { return &___group_count_3; }
	inline void set_group_count_3(int32_t value)
	{
		___group_count_3 = value;
	}

	inline static int32_t get_offset_of_gap_4() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___gap_4)); }
	inline int32_t get_gap_4() const { return ___gap_4; }
	inline int32_t* get_address_of_gap_4() { return &___gap_4; }
	inline void set_gap_4(int32_t value)
	{
		___gap_4 = value;
	}

	inline static int32_t get_offset_of_group_names_5() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___group_names_5)); }
	inline StringU5BU5D_t1281789340* get_group_names_5() const { return ___group_names_5; }
	inline StringU5BU5D_t1281789340** get_address_of_group_names_5() { return &___group_names_5; }
	inline void set_group_names_5(StringU5BU5D_t1281789340* value)
	{
		___group_names_5 = value;
		Il2CppCodeGenWriteBarrier((&___group_names_5), value);
	}

	inline static int32_t get_offset_of_group_numbers_6() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___group_numbers_6)); }
	inline Int32U5BU5D_t385246372* get_group_numbers_6() const { return ___group_numbers_6; }
	inline Int32U5BU5D_t385246372** get_address_of_group_numbers_6() { return &___group_numbers_6; }
	inline void set_group_numbers_6(Int32U5BU5D_t385246372* value)
	{
		___group_numbers_6 = value;
		Il2CppCodeGenWriteBarrier((&___group_numbers_6), value);
	}

	inline static int32_t get_offset_of_pattern_7() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___pattern_7)); }
	inline String_t* get_pattern_7() const { return ___pattern_7; }
	inline String_t** get_address_of_pattern_7() { return &___pattern_7; }
	inline void set_pattern_7(String_t* value)
	{
		___pattern_7 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_7), value);
	}

	inline static int32_t get_offset_of_roptions_8() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___roptions_8)); }
	inline int32_t get_roptions_8() const { return ___roptions_8; }
	inline int32_t* get_address_of_roptions_8() { return &___roptions_8; }
	inline void set_roptions_8(int32_t value)
	{
		___roptions_8 = value;
	}
};

struct Regex_t3657309853_StaticFields
{
public:
	// System.Text.RegularExpressions.FactoryCache System.Text.RegularExpressions.Regex::cache
	FactoryCache_t2327118887 * ___cache_0;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(Regex_t3657309853_StaticFields, ___cache_0)); }
	inline FactoryCache_t2327118887 * get_cache_0() const { return ___cache_0; }
	inline FactoryCache_t2327118887 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(FactoryCache_t2327118887 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier((&___cache_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEX_T3657309853_H
#ifndef UNITYWEBREQUEST_T463507806_H
#define UNITYWEBREQUEST_T463507806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t463507806  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t2937767557 * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t2993558019 * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t2739891000 * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t100236324 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_DownloadHandler_1)); }
	inline DownloadHandler_t2937767557 * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_t2937767557 ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_t2937767557 * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DownloadHandler_1), value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_UploadHandler_2)); }
	inline UploadHandler_t2993558019 * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t2993558019 ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t2993558019 * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_UploadHandler_2), value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_CertificateHandler_3)); }
	inline CertificateHandler_t2739891000 * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_t2739891000 ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_t2739891000 * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CertificateHandler_3), value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_Uri_4)); }
	inline Uri_t100236324 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t100236324 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t100236324 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uri_4), value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t2937767557_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t2993558019_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t2739891000_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t100236324 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t2937767557_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t2993558019_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t2739891000_marshaled_com* ___m_CertificateHandler_3;
	Uri_t100236324 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
#endif // UNITYWEBREQUEST_T463507806_H
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};

extern "C" void DownloadHandler_t2937767557_marshal_pinvoke(const DownloadHandler_t2937767557& unmarshaled, DownloadHandler_t2937767557_marshaled_pinvoke& marshaled);
extern "C" void DownloadHandler_t2937767557_marshal_pinvoke_back(const DownloadHandler_t2937767557_marshaled_pinvoke& marshaled, DownloadHandler_t2937767557& unmarshaled);
extern "C" void DownloadHandler_t2937767557_marshal_pinvoke_cleanup(DownloadHandler_t2937767557_marshaled_pinvoke& marshaled);
extern "C" void UploadHandler_t2993558019_marshal_pinvoke(const UploadHandler_t2993558019& unmarshaled, UploadHandler_t2993558019_marshaled_pinvoke& marshaled);
extern "C" void UploadHandler_t2993558019_marshal_pinvoke_back(const UploadHandler_t2993558019_marshaled_pinvoke& marshaled, UploadHandler_t2993558019& unmarshaled);
extern "C" void UploadHandler_t2993558019_marshal_pinvoke_cleanup(UploadHandler_t2993558019_marshaled_pinvoke& marshaled);
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke(const CertificateHandler_t2739891000& unmarshaled, CertificateHandler_t2739891000_marshaled_pinvoke& marshaled);
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke_back(const CertificateHandler_t2739891000_marshaled_pinvoke& marshaled, CertificateHandler_t2739891000& unmarshaled);
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke_cleanup(CertificateHandler_t2739891000_marshaled_pinvoke& marshaled);
extern "C" void DownloadHandler_t2937767557_marshal_com(const DownloadHandler_t2937767557& unmarshaled, DownloadHandler_t2937767557_marshaled_com& marshaled);
extern "C" void DownloadHandler_t2937767557_marshal_com_back(const DownloadHandler_t2937767557_marshaled_com& marshaled, DownloadHandler_t2937767557& unmarshaled);
extern "C" void DownloadHandler_t2937767557_marshal_com_cleanup(DownloadHandler_t2937767557_marshaled_com& marshaled);
extern "C" void UploadHandler_t2993558019_marshal_com(const UploadHandler_t2993558019& unmarshaled, UploadHandler_t2993558019_marshaled_com& marshaled);
extern "C" void UploadHandler_t2993558019_marshal_com_back(const UploadHandler_t2993558019_marshaled_com& marshaled, UploadHandler_t2993558019& unmarshaled);
extern "C" void UploadHandler_t2993558019_marshal_com_cleanup(UploadHandler_t2993558019_marshaled_com& marshaled);
extern "C" void CertificateHandler_t2739891000_marshal_com(const CertificateHandler_t2739891000& unmarshaled, CertificateHandler_t2739891000_marshaled_com& marshaled);
extern "C" void CertificateHandler_t2739891000_marshal_com_back(const CertificateHandler_t2739891000_marshaled_com& marshaled, CertificateHandler_t2739891000& unmarshaled);
extern "C" void CertificateHandler_t2739891000_marshal_com_cleanup(CertificateHandler_t2739891000_marshaled_com& marshaled);

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void UnityEngine.Networking.CertificateHandler::Dispose()
extern "C" IL2CPP_METHOD_ATTR void CertificateHandler_Dispose_m2100863831 (CertificateHandler_t2739891000 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m3063970704 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.CertificateHandler::Release()
extern "C" IL2CPP_METHOD_ATTR void CertificateHandler_Release_m648790222 (CertificateHandler_t2739891000 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandler::Dispose()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandler_Dispose_m2747726581 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandler::Release()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandler_Release_m3024555697 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method);
// System.Text.Encoding UnityEngine.Networking.DownloadHandler::GetTextEncoder()
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * DownloadHandler_GetTextEncoder_m3244408468 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::GetContentType()
extern "C" IL2CPP_METHOD_ATTR String_t* DownloadHandler_GetContentType_m4249877960 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m1298810678 (String_t* __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m2466398549 (String_t* __this, Il2CppChar p0, int32_t p1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m2848979100 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.String System.String::Trim()
extern "C" IL2CPP_METHOD_ATTR String_t* String_Trim_m923598732 (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Trim(System.Char[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Trim_m3384720403 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m363431711 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.String)
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * Encoding_GetEncoding_m2599798446 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * Encoding_get_UTF8_m1008486739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::Abort()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_Abort_m1490033122 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::Release()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_Release_m2347155176 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::DisposeHandlers()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_DisposeHandlers_m3575283268 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalDestroy()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_InternalDestroy_m2954597795 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C" IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m1177400158 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeDownloadHandlerOnDispose()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeDownloadHandlerOnDispose_m3413606992 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
extern "C" IL2CPP_METHOD_ATTR DownloadHandler_t2937767557 * UnityWebRequest_get_downloadHandler_m534911913 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeUploadHandlerOnDispose()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeUploadHandlerOnDispose_m2375741633 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::get_uploadHandler()
extern "C" IL2CPP_METHOD_ATTR UploadHandler_t2993558019 * UnityWebRequest_get_uploadHandler_m3692520788 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandler::Dispose()
extern "C" IL2CPP_METHOD_ATTR void UploadHandler_Dispose_m3057340132 (UploadHandler_t2993558019 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeCertificateHandlerOnDispose()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeCertificateHandlerOnDispose_m4051074453 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::get_certificateHandler()
extern "C" IL2CPP_METHOD_ATTR CertificateHandler_t2739891000 * UnityWebRequest_get_certificateHandler_m3453757623 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m1231611882 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isHttpError()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isHttpError_m797082501 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::GetError()
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_GetError_m1229724170 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetWebErrorString_m4076320575 (RuntimeObject * __this /* static, unused */, int32_t ___err0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::GetUrl()
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetUrl_m3419782119 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandler::Release()
extern "C" IL2CPP_METHOD_ATTR void UploadHandler_Release_m2289600429 (UploadHandler_t2993558019 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_m2882708797 (List_1_t1293755103 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1293755103 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m706204246 (List_1_t3319525431 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR void WWWForm_AddField_m1128158655 (WWWForm_t4064702195 * __this, String_t* ___fieldName0, String_t* ___value1, Encoding_t1523322056 * ___e2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m1685793073 (List_1_t3319525431 * __this, String_t* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3319525431 *, String_t*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(!0)
inline void List_1_Add_m4232982637 (List_1_t1293755103 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1293755103 *, ByteU5BU5D_t4116647657*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String,System.UriKind)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m3040793867 (Uri_t100236324 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C" IL2CPP_METHOD_ATTR bool Uri_get_IsAbsoluteUri_m3666899587 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_AbsoluteUri()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_AbsoluteUri_m2582056986 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.Uri,System.Uri)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m253204164 (Uri_t100236324 * __this, Uri_t100236324 * p0, Uri_t100236324 * p1, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Regex__ctor_m897876424 (Regex_t3657309853 * __this, String_t* p0, const RuntimeMethod* method);
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
// Conversion methods for marshalling of: UnityEngine.Networking.CertificateHandler
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke(const CertificateHandler_t2739891000& unmarshaled, CertificateHandler_t2739891000_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke_back(const CertificateHandler_t2739891000_marshaled_pinvoke& marshaled, CertificateHandler_t2739891000& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.CertificateHandler
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke_cleanup(CertificateHandler_t2739891000_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.CertificateHandler
extern "C" void CertificateHandler_t2739891000_marshal_com(const CertificateHandler_t2739891000& unmarshaled, CertificateHandler_t2739891000_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void CertificateHandler_t2739891000_marshal_com_back(const CertificateHandler_t2739891000_marshaled_com& marshaled, CertificateHandler_t2739891000& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.CertificateHandler
extern "C" void CertificateHandler_t2739891000_marshal_com_cleanup(CertificateHandler_t2739891000_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.CertificateHandler::Release()
extern "C" IL2CPP_METHOD_ATTR void CertificateHandler_Release_m648790222 (CertificateHandler_t2739891000 * __this, const RuntimeMethod* method)
{
	typedef void (*CertificateHandler_Release_m648790222_ftn) (CertificateHandler_t2739891000 *);
	static CertificateHandler_Release_m648790222_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CertificateHandler_Release_m648790222_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.CertificateHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.CertificateHandler::Finalize()
extern "C" IL2CPP_METHOD_ATTR void CertificateHandler_Finalize_m2289088740 (CertificateHandler_t2739891000 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		CertificateHandler_Dispose_m2100863831(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificate(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool CertificateHandler_ValidateCertificate_m937187171 (CertificateHandler_t2739891000 * __this, ByteU5BU5D_t4116647657* ___certificateData0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificateNative(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool CertificateHandler_ValidateCertificateNative_m2315002656 (CertificateHandler_t2739891000 * __this, ByteU5BU5D_t4116647657* ___certificateData0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		ByteU5BU5D_t4116647657* L_0 = ___certificateData0;
		bool L_1 = VirtFuncInvoker1< bool, ByteU5BU5D_t4116647657* >::Invoke(5 /* System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificate(System.Byte[]) */, __this, L_0);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Networking.CertificateHandler::Dispose()
extern "C" IL2CPP_METHOD_ATTR void CertificateHandler_Dispose_m2100863831 (CertificateHandler_t2739891000 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CertificateHandler_Dispose_m2100863831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, (intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		CertificateHandler_Release_m648790222(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_0029:
	{
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
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandler
extern "C" void DownloadHandler_t2937767557_marshal_pinvoke(const DownloadHandler_t2937767557& unmarshaled, DownloadHandler_t2937767557_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void DownloadHandler_t2937767557_marshal_pinvoke_back(const DownloadHandler_t2937767557_marshaled_pinvoke& marshaled, DownloadHandler_t2937767557& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandler
extern "C" void DownloadHandler_t2937767557_marshal_pinvoke_cleanup(DownloadHandler_t2937767557_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandler
extern "C" void DownloadHandler_t2937767557_marshal_com(const DownloadHandler_t2937767557& unmarshaled, DownloadHandler_t2937767557_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void DownloadHandler_t2937767557_marshal_com_back(const DownloadHandler_t2937767557_marshaled_com& marshaled, DownloadHandler_t2937767557& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandler
extern "C" void DownloadHandler_t2937767557_marshal_com_cleanup(DownloadHandler_t2937767557_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.DownloadHandler::Release()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandler_Release_m3024555697 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	typedef void (*DownloadHandler_Release_m3024555697_ftn) (DownloadHandler_t2937767557 *);
	static DownloadHandler_Release_m3024555697_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandler_Release_m3024555697_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.DownloadHandler::Finalize()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandler_Finalize_m3135872287 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		DownloadHandler_Dispose_m2747726581(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandler::Dispose()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandler_Dispose_m2747726581 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DownloadHandler_Dispose_m2747726581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, (intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		DownloadHandler_Release_m3024555697(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_0029:
	{
		return;
	}
}
// System.String UnityEngine.Networking.DownloadHandler::get_text()
extern "C" IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_m2427232382 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String UnityEngine.Networking.DownloadHandler::GetText() */, __this);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandler::GetData()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* DownloadHandler_GetData_m364367605 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		V_0 = (ByteU5BU5D_t4116647657*)NULL;
		goto IL_0008;
	}

IL_0008:
	{
		ByteU5BU5D_t4116647657* L_0 = V_0;
		return L_0;
	}
}
// System.String UnityEngine.Networking.DownloadHandler::GetText()
extern "C" IL2CPP_METHOD_ATTR String_t* DownloadHandler_GetText_m600283602 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DownloadHandler_GetText_m600283602_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(5 /* System.Byte[] UnityEngine.Networking.DownloadHandler::GetData() */, __this);
		V_0 = L_0;
		ByteU5BU5D_t4116647657* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_2 = V_0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		Encoding_t1523322056 * L_3 = DownloadHandler_GetTextEncoder_m3244408468(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_4 = V_0;
		ByteU5BU5D_t4116647657* L_5 = V_0;
		String_t* L_6 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(21 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))));
		V_1 = L_6;
		goto IL_003a;
	}

IL_002e:
	{
		V_1 = _stringLiteral757602046;
		goto IL_003a;
	}

IL_003a:
	{
		String_t* L_7 = V_1;
		return L_7;
	}
}
// System.Text.Encoding UnityEngine.Networking.DownloadHandler::GetTextEncoder()
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * DownloadHandler_GetTextEncoder_m3244408468 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DownloadHandler_GetTextEncoder_m3244408468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	Encoding_t1523322056 * V_5 = NULL;
	ArgumentException_t132251570 * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = DownloadHandler_GetContentType_m4249877960(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_3 = V_0;
		int32_t L_4 = String_IndexOf_m1298810678(L_3, _stringLiteral3515428721, 5, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)(-1))))
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = String_IndexOf_m2466398549(L_6, ((int32_t)61), L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) <= ((int32_t)(-1))))
		{
			goto IL_00af;
		}
	}
	{
		String_t* L_10 = V_0;
		int32_t L_11 = V_2;
		String_t* L_12 = String_Substring_m2848979100(L_10, ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)), /*hidden argument*/NULL);
		String_t* L_13 = String_Trim_m923598732(L_12, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_14 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t3528271667* L_15 = L_14;
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)39));
		CharU5BU5D_t3528271667* L_16 = L_15;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)34));
		String_t* L_17 = String_Trim_m3384720403(L_13, L_16, /*hidden argument*/NULL);
		String_t* L_18 = String_Trim_m923598732(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		String_t* L_19 = V_3;
		int32_t L_20 = String_IndexOf_m363431711(L_19, ((int32_t)59), /*hidden argument*/NULL);
		V_4 = L_20;
		int32_t L_21 = V_4;
		if ((((int32_t)L_21) <= ((int32_t)(-1))))
		{
			goto IL_0080;
		}
	}
	{
		String_t* L_22 = V_3;
		int32_t L_23 = V_4;
		String_t* L_24 = String_Substring_m1610150815(L_22, 0, L_23, /*hidden argument*/NULL);
		V_3 = L_24;
	}

IL_0080:
	try
	{ // begin try (depth: 1)
		String_t* L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_26 = Encoding_GetEncoding_m2599798446(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		V_5 = L_26;
		goto IL_00bd;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentException_t132251570_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_008e;
		throw e;
	}

CATCH_008e:
	{ // begin catch(System.ArgumentException)
		V_6 = ((ArgumentException_t132251570 *)__exception_local);
		String_t* L_27 = V_3;
		ArgumentException_t132251570 * L_28 = V_6;
		String_t* L_29 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_28);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_30 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral463295005, L_27, L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		goto IL_00ae;
	} // end catch (depth: 1)

IL_00ae:
	{
	}

IL_00af:
	{
	}

IL_00b0:
	{
	}

IL_00b1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_31 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_5 = L_31;
		goto IL_00bd;
	}

IL_00bd:
	{
		Encoding_t1523322056 * L_32 = V_5;
		return L_32;
	}
}
// System.String UnityEngine.Networking.DownloadHandler::GetContentType()
extern "C" IL2CPP_METHOD_ATTR String_t* DownloadHandler_GetContentType_m4249877960 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*DownloadHandler_GetContentType_m4249877960_ftn) (DownloadHandler_t2937767557 *);
	static DownloadHandler_GetContentType_m4249877960_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandler_GetContentType_m4249877960_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandler::GetContentType()");
	String_t* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif






// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequest
extern "C" void UnityWebRequest_t463507806_marshal_pinvoke(const UnityWebRequest_t463507806& unmarshaled, UnityWebRequest_t463507806_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL, NULL);
}
extern "C" void UnityWebRequest_t463507806_marshal_pinvoke_back(const UnityWebRequest_t463507806_marshaled_pinvoke& marshaled, UnityWebRequest_t463507806& unmarshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequest
extern "C" void UnityWebRequest_t463507806_marshal_pinvoke_cleanup(UnityWebRequest_t463507806_marshaled_pinvoke& marshaled)
{
}






// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequest
extern "C" void UnityWebRequest_t463507806_marshal_com(const UnityWebRequest_t463507806& unmarshaled, UnityWebRequest_t463507806_marshaled_com& marshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL, NULL);
}
extern "C" void UnityWebRequest_t463507806_marshal_com_back(const UnityWebRequest_t463507806_marshaled_com& marshaled, UnityWebRequest_t463507806& unmarshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequest
extern "C" void UnityWebRequest_t463507806_marshal_com_cleanup(UnityWebRequest_t463507806_marshaled_com& marshaled)
{
}
// System.String UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetWebErrorString_m4076320575 (RuntimeObject * __this /* static, unused */, int32_t ___err0, const RuntimeMethod* method)
{
	typedef String_t* (*UnityWebRequest_GetWebErrorString_m4076320575_ftn) (int32_t);
	static UnityWebRequest_GetWebErrorString_m4076320575_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetWebErrorString_m4076320575_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)");
	String_t* retVal = _il2cpp_icall_func(___err0);
	return retVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeCertificateHandlerOnDispose()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeCertificateHandlerOnDispose_m4051074453 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeDownloadHandlerOnDispose()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeDownloadHandlerOnDispose_m3413606992 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeUploadHandlerOnDispose()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeUploadHandlerOnDispose_m2375741633 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Release()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_Release_m2347155176 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef void (*UnityWebRequest_Release_m2347155176_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_Release_m2347155176_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_Release_m2347155176_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalDestroy()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_InternalDestroy_m2954597795 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_InternalDestroy_m2954597795_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, (intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		UnityWebRequest_Abort_m1490033122(__this, /*hidden argument*/NULL);
		UnityWebRequest_Release_m2347155176(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Finalize()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_Finalize_m2219008825 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		UnityWebRequest_DisposeHandlers_m3575283268(__this, /*hidden argument*/NULL);
		UnityWebRequest_InternalDestroy_m2954597795(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x19, FINALLY_0012);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0012;
	}

FINALLY_0012:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(18)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(18)
	{
		IL2CPP_JUMP_TBL(0x19, IL_0019)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m3261105905 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	{
		UnityWebRequest_DisposeHandlers_m3575283268(__this, /*hidden argument*/NULL);
		UnityWebRequest_InternalDestroy_m2954597795(__this, /*hidden argument*/NULL);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::DisposeHandlers()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_DisposeHandlers_m3575283268 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	DownloadHandler_t2937767557 * V_0 = NULL;
	UploadHandler_t2993558019 * V_1 = NULL;
	CertificateHandler_t2739891000 * V_2 = NULL;
	{
		bool L_0 = UnityWebRequest_get_disposeDownloadHandlerOnDispose_m3413606992(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		DownloadHandler_t2937767557 * L_1 = UnityWebRequest_get_downloadHandler_m534911913(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		DownloadHandler_t2937767557 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		DownloadHandler_t2937767557 * L_3 = V_0;
		DownloadHandler_Dispose_m2747726581(L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
	}

IL_0023:
	{
		bool L_4 = UnityWebRequest_get_disposeUploadHandlerOnDispose_m2375741633(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		UploadHandler_t2993558019 * L_5 = UnityWebRequest_get_uploadHandler_m3692520788(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		UploadHandler_t2993558019 * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		UploadHandler_t2993558019 * L_7 = V_1;
		UploadHandler_Dispose_m3057340132(L_7, /*hidden argument*/NULL);
	}

IL_0044:
	{
	}

IL_0045:
	{
		bool L_8 = UnityWebRequest_get_disposeCertificateHandlerOnDispose_m4051074453(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0067;
		}
	}
	{
		CertificateHandler_t2739891000 * L_9 = UnityWebRequest_get_certificateHandler_m3453757623(__this, /*hidden argument*/NULL);
		V_2 = L_9;
		CertificateHandler_t2739891000 * L_10 = V_2;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		CertificateHandler_t2739891000 * L_11 = V_2;
		CertificateHandler_Dispose_m2100863831(L_11, /*hidden argument*/NULL);
	}

IL_0066:
	{
	}

IL_0067:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Abort()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_Abort_m1490033122 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef void (*UnityWebRequest_Abort_m1490033122_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_Abort_m1490033122_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_Abort_m1490033122_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::Abort()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::GetError()
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_GetError_m1229724170 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_GetError_m1229724170_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_GetError_m1229724170_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetError_m1229724170_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetError()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m1613086199 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		bool L_0 = UnityWebRequest_get_isNetworkError_m1231611882(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		bool L_1 = UnityWebRequest_get_isHttpError_m797082501(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		V_0 = (String_t*)NULL;
		goto IL_002f;
	}

IL_001e:
	{
		int32_t L_2 = UnityWebRequest_GetError_m1229724170(__this, /*hidden argument*/NULL);
		String_t* L_3 = UnityWebRequest_GetWebErrorString_m4076320575(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_002f;
	}

IL_002f:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String UnityEngine.Networking.UnityWebRequest::get_url()
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_url_m2568598920 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = UnityWebRequest_GetUrl_m3419782119(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.UnityWebRequest::GetUrl()
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetUrl_m3419782119 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*UnityWebRequest_GetUrl_m3419782119_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_GetUrl_m3419782119_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetUrl_m3419782119_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetUrl()");
	String_t* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
extern "C" IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m1090830473 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef int64_t (*UnityWebRequest_get_responseCode_m1090830473_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_get_responseCode_m1090830473_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_responseCode_m1090830473_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_responseCode()");
	int64_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_m1752128881 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef bool (*UnityWebRequest_get_isDone_m1752128881_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_get_isDone_m1752128881_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_isDone_m1752128881_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_isDone()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m1231611882 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef bool (*UnityWebRequest_get_isNetworkError_m1231611882_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_get_isNetworkError_m1231611882_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_isNetworkError_m1231611882_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_isNetworkError()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isHttpError()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isHttpError_m797082501 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef bool (*UnityWebRequest_get_isHttpError_m797082501_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_get_isHttpError_m797082501_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_isHttpError_m797082501_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_isHttpError()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::get_uploadHandler()
extern "C" IL2CPP_METHOD_ATTR UploadHandler_t2993558019 * UnityWebRequest_get_uploadHandler_m3692520788 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	UploadHandler_t2993558019 * V_0 = NULL;
	{
		UploadHandler_t2993558019 * L_0 = __this->get_m_UploadHandler_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		UploadHandler_t2993558019 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
extern "C" IL2CPP_METHOD_ATTR DownloadHandler_t2937767557 * UnityWebRequest_get_downloadHandler_m534911913 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	DownloadHandler_t2937767557 * V_0 = NULL;
	{
		DownloadHandler_t2937767557 * L_0 = __this->get_m_DownloadHandler_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		DownloadHandler_t2937767557 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::get_certificateHandler()
extern "C" IL2CPP_METHOD_ATTR CertificateHandler_t2739891000 * UnityWebRequest_get_certificateHandler_m3453757623 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	CertificateHandler_t2739891000 * V_0 = NULL;
	{
		CertificateHandler_t2739891000 * L_0 = __this->get_m_CertificateHandler_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		CertificateHandler_t2739891000 * L_1 = V_0;
		return L_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandler
extern "C" void UploadHandler_t2993558019_marshal_pinvoke(const UploadHandler_t2993558019& unmarshaled, UploadHandler_t2993558019_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void UploadHandler_t2993558019_marshal_pinvoke_back(const UploadHandler_t2993558019_marshaled_pinvoke& marshaled, UploadHandler_t2993558019& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandler
extern "C" void UploadHandler_t2993558019_marshal_pinvoke_cleanup(UploadHandler_t2993558019_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandler
extern "C" void UploadHandler_t2993558019_marshal_com(const UploadHandler_t2993558019& unmarshaled, UploadHandler_t2993558019_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void UploadHandler_t2993558019_marshal_com_back(const UploadHandler_t2993558019_marshaled_com& marshaled, UploadHandler_t2993558019& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandler
extern "C" void UploadHandler_t2993558019_marshal_com_cleanup(UploadHandler_t2993558019_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.UploadHandler::Release()
extern "C" IL2CPP_METHOD_ATTR void UploadHandler_Release_m2289600429 (UploadHandler_t2993558019 * __this, const RuntimeMethod* method)
{
	typedef void (*UploadHandler_Release_m2289600429_ftn) (UploadHandler_t2993558019 *);
	static UploadHandler_Release_m2289600429_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UploadHandler_Release_m2289600429_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UploadHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.UploadHandler::Finalize()
extern "C" IL2CPP_METHOD_ATTR void UploadHandler_Finalize_m3322774190 (UploadHandler_t2993558019 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		UploadHandler_Dispose_m3057340132(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::Dispose()
extern "C" IL2CPP_METHOD_ATTR void UploadHandler_Dispose_m3057340132 (UploadHandler_t2993558019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UploadHandler_Dispose_m3057340132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, (intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		UploadHandler_Release_m2289600429(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_0029:
	{
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
// System.Void UnityEngine.WWWForm::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WWWForm__ctor_m2465700452 (WWWForm_t4064702195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWForm__ctor_m2465700452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__this->set_containsFiles_5((bool)0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		List_1_t1293755103 * L_0 = (List_1_t1293755103 *)il2cpp_codegen_object_new(List_1_t1293755103_il2cpp_TypeInfo_var);
		List_1__ctor_m2882708797(L_0, /*hidden argument*/List_1__ctor_m2882708797_RuntimeMethod_var);
		__this->set_formData_0(L_0);
		List_1_t3319525431 * L_1 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_1, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_fieldNames_1(L_1);
		List_1_t3319525431 * L_2 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_2, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_fileNames_2(L_2);
		List_1_t3319525431 * L_3 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_3, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_types_3(L_3);
		ByteU5BU5D_t4116647657* L_4 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)40));
		__this->set_boundary_4(L_4);
		V_0 = 0;
		goto IL_0080;
	}

IL_004e:
	{
		int32_t L_5 = Random_Range_m4054026115(NULL /*static, unused*/, ((int32_t)48), ((int32_t)110), /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)7));
	}

IL_0065:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)6));
	}

IL_0071:
	{
		ByteU5BU5D_t4116647657* L_10 = __this->get_boundary_4();
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11), (uint8_t)(((int32_t)((uint8_t)L_12))));
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0080:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)40))))
		{
			goto IL_004e;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void WWWForm_AddField_m2357902982 (WWWForm_t4064702195 * __this, String_t* ___fieldName0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWForm_AddField_m2357902982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___fieldName0;
		String_t* L_1 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_2 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		WWWForm_AddField_m1128158655(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR void WWWForm_AddField_m1128158655 (WWWForm_t4064702195 * __this, String_t* ___fieldName0, String_t* ___value1, Encoding_t1523322056 * ___e2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWForm_AddField_m1128158655_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3319525431 * L_0 = __this->get_fieldNames_1();
		String_t* L_1 = ___fieldName0;
		List_1_Add_m1685793073(L_0, L_1, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_2 = __this->get_fileNames_2();
		List_1_Add_m1685793073(L_2, (String_t*)NULL, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t1293755103 * L_3 = __this->get_formData_0();
		Encoding_t1523322056 * L_4 = ___e2;
		String_t* L_5 = ___value1;
		ByteU5BU5D_t4116647657* L_6 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, L_5);
		List_1_Add_m4232982637(L_3, L_6, /*hidden argument*/List_1_Add_m4232982637_RuntimeMethod_var);
		List_1_t3319525431 * L_7 = __this->get_types_3();
		Encoding_t1523322056 * L_8 = ___e2;
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Text.Encoding::get_WebName() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral1576728448, L_9, _stringLiteral3452614526, /*hidden argument*/NULL);
		List_1_Add_m1685793073(L_7, L_10, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
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
// System.String UnityEngineInternal.WebRequestUtils::RedirectTo(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* WebRequestUtils_RedirectTo_m55747000 (RuntimeObject * __this /* static, unused */, String_t* ___baseUri0, String_t* ___redirectUri1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestUtils_RedirectTo_m55747000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t100236324 * V_0 = NULL;
	String_t* V_1 = NULL;
	Uri_t100236324 * V_2 = NULL;
	Uri_t100236324 * V_3 = NULL;
	{
		String_t* L_0 = ___redirectUri1;
		Il2CppChar L_1 = String_get_Chars_m2986988803(L_0, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = ___redirectUri1;
		Uri_t100236324 * L_3 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m3040793867(L_3, L_2, 2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0024;
	}

IL_001c:
	{
		String_t* L_4 = ___redirectUri1;
		Uri_t100236324 * L_5 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m3040793867(L_5, L_4, 0, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0024:
	{
		Uri_t100236324 * L_6 = V_0;
		bool L_7 = Uri_get_IsAbsoluteUri_m3666899587(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		Uri_t100236324 * L_8 = V_0;
		String_t* L_9 = Uri_get_AbsoluteUri_m2582056986(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_0057;
	}

IL_003b:
	{
		String_t* L_10 = ___baseUri0;
		Uri_t100236324 * L_11 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m3040793867(L_11, L_10, 1, /*hidden argument*/NULL);
		V_2 = L_11;
		Uri_t100236324 * L_12 = V_2;
		Uri_t100236324 * L_13 = V_0;
		Uri_t100236324 * L_14 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m253204164(L_14, L_12, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		Uri_t100236324 * L_15 = V_3;
		String_t* L_16 = Uri_get_AbsoluteUri_m2582056986(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		goto IL_0057;
	}

IL_0057:
	{
		String_t* L_17 = V_1;
		return L_17;
	}
}
// System.Void UnityEngineInternal.WebRequestUtils::.cctor()
extern "C" IL2CPP_METHOD_ATTR void WebRequestUtils__cctor_m4190982137 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestUtils__cctor_m4190982137_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Regex_t3657309853 * L_0 = (Regex_t3657309853 *)il2cpp_codegen_object_new(Regex_t3657309853_il2cpp_TypeInfo_var);
		Regex__ctor_m897876424(L_0, _stringLiteral97523668, /*hidden argument*/NULL);
		((WebRequestUtils_t3541624225_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestUtils_t3541624225_il2cpp_TypeInfo_var))->set_domainRegex_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
