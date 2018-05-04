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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// ProBuilder2.Common.pb_Vertex
struct pb_Vertex_t4136735762;
// System.String
struct String_t;
// ProBuilder2.Common.pb_Vertex[]
struct pb_VertexU5BU5D_t2681278311;
// pb_Object
struct pb_Object_t647128553;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t471298240;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.Color[]
struct ColorU5BU5D_t941916413;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t934056436;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t496136383;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t2702166353;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Color>
struct IEnumerable_1_t1535539213;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>
struct IEnumerable_1_t2298881826;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>
struct IEnumerable_1_t1136082412;
// UnityEngine.Object
struct Object_t631007953;
// System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>
struct IList_1_t1657088249;
// ProBuilder2.Common.pb_VertexConnection
struct pb_VertexConnection_t1845224009;
// ProBuilder2.Common.pb_Face
struct pb_Face_t613471354;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// ProBuilder2.Common.pb_IntArray[]
struct pb_IntArrayU5BU5D_t1561170814;
// ProBuilder2.Common.pb_IntArray
struct pb_IntArray_t829339271;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1930798642;
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_VertexConnection>
struct List_1_t3317298751;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// ProBuilder2.Common.pb_WingedEdge
struct pb_WingedEdge_t1639999858;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// ProBuilder2.Common.pb_WingedEdgeEnumerator
struct pb_WingedEdgeEnumerator_t1394122259;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// ProBuilder2.Common.pb_EdgeLookup
struct pb_EdgeLookup_t2280733452;
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>
struct List_1_t490620477;
// ProBuilder2.Common.pb_Edge[]
struct pb_EdgeU5BU5D_t4057067710;
// System.Collections.Generic.IEnumerable`1<ProBuilder2.Common.pb_Edge>
struct IEnumerable_1_t2293365920;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>>
struct Dictionary_2_t2000787931;
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>
struct List_1_t3112074600;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1968819495;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t1515895227;
// ProBuilder2.Common.pb_WingedEdge/<SortCommonIndicesByAdjacency>c__AnonStorey0
struct U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t1594996471;
// System.Func`2<ProBuilder2.Common.pb_WingedEdge,System.Boolean>
struct Func_2_t171398137;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t3759279471;
// System.Collections.Generic.IEnumerable`1<ProBuilder2.Common.pb_WingedEdge>
struct IEnumerable_1_t619852747;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Func`2<ProBuilder2.Common.pb_WingedEdge,ProBuilder2.Common.pb_Edge>
struct Func_2_t3387623203;
// System.Func`2<System.Object,ProBuilder2.Common.pb_Edge>
struct Func_2_t2680537241;
// System.Func`2<ProBuilder2.Common.pb_Edge,System.Int32>
struct Func_2_t3531098348;
// ProBuilder2.Common.pb_Face[]
struct pb_FaceU5BU5D_t3313432671;
// System.Collections.Generic.IEnumerable`1<ProBuilder2.Common.pb_Face>
struct IEnumerable_1_t3888291539;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1839659084;
// System.Collections.Generic.Dictionary`2<ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_WingedEdge>
struct Dictionary_2_t4200534527;
// System.Collections.Generic.Dictionary`2<ProBuilder2.Common.pb_Edge,System.Object>
struct Dictionary_2_t1345673537;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// ProBuilder2.Common.pb_XYZ_Color
struct pb_XYZ_Color_t3763960066;
// UnityEngine.Transform
struct Transform_t3600365921;
// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UnityEngine.Transform[]>
struct Dictionary_2_t117942215;
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// ProBuilder2.Common.pbUtil/<TryParseColor>c__AnonStorey1
struct U3CTryParseColorU3Ec__AnonStorey1_t2806735917;
// System.Func`2<System.Char,System.Boolean>
struct Func_2_t148644517;
// System.Collections.Generic.IEnumerable`1<System.Char>
struct IEnumerable_1_t2614313359;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t899420910;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// ProBuilder2.Common.ProGridsConditionalSnapAttribute
struct ProGridsConditionalSnapAttribute_t3544668608;
// System.Attribute
struct Attribute_t861562559;
// ProBuilder2.Common.ProGridsNoSnapAttribute
struct ProGridsNoSnapAttribute_t1046443759;
// System.Collections.Generic.HashSet`1/Slot<System.Int32>[]
struct SlotU5BU5D_t2954163135;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t763310475;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// ProBuilder2.Common.pb_WingedEdge[]
struct pb_WingedEdgeU5BU5D_t3551025287;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32>[]
struct EntryU5BU5D_t742410749;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t2029334555;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t3555703402;
// ProBuilder2.Common.pb_VertexConnection[]
struct pb_VertexConnectionU5BU5D_t1928775284;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>>[]
struct EntryU5BU5D_t2808806738;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>>
struct KeyCollection_t2190463402;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>>
struct ValueCollection_t3716832249;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Globalization.CultureData
struct CultureData_t1899656083;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t3046556399;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t3943099367;
// System.Void
struct Void_t1185182177;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.Generic.Dictionary`2/Entry<ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_WingedEdge>[]
struct EntryU5BU5D_t3134163998;
// System.Collections.Generic.IEqualityComparer`1<ProBuilder2.Common.pb_Edge>
struct IEqualityComparer_1_t1125877753;
// System.Collections.Generic.Dictionary`2/KeyCollection<ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_WingedEdge>
struct KeyCollection_t95242702;
// System.Collections.Generic.Dictionary`2/ValueCollection<ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_WingedEdge>
struct ValueCollection_t1621611549;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Transform,UnityEngine.Transform[]>[]
struct EntryU5BU5D_t1663057462;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Transform>
struct IEqualityComparer_1_t1412730643;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Transform,UnityEngine.Transform[]>
struct KeyCollection_t307617686;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Transform,UnityEngine.Transform[]>
struct ValueCollection_t1833986533;
// pb_UV
struct pb_UV_t3778038557;
// UnityEngine.Material
struct Material_t340375123;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// ProBuilder2.Common.pb_UnwrapParameters
struct pb_UnwrapParameters_t2793299594;
// System.Action`1<pb_Object>
struct Action_1_t819596148;
// System.Func`2<ProBuilder2.Common.pb_Face,System.Int32>
struct Func_2_t2787463309;
// System.Func`2<ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_Edge>
struct Func_2_t3893665626;
// System.Func`2<ProBuilder2.Common.pb_Face,System.Boolean>
struct Func_2_t4228772817;
// System.Func`2<ProBuilder2.Common.pb_Submesh,UnityEngine.Material>
struct Func_2_t2239399596;

extern RuntimeClass* pb_Vertex_t4136735762_il2cpp_TypeInfo_var;
extern const uint32_t pb_Vertex_Equals_m1125187329_MetadataUsageId;
extern const uint32_t pb_Vertex_op_Addition_m3093485097_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector4_t3319028937_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const uint32_t pb_Vertex_Add_m3106850531_MetadataUsageId;
extern const uint32_t pb_Vertex_op_Subtraction_m29949077_MetadataUsageId;
extern const uint32_t pb_Vertex_Subtract_m561667742_MetadataUsageId;
extern const uint32_t pb_Vertex_op_Multiply_m2971565719_MetadataUsageId;
extern const uint32_t pb_Vertex_Multiply_m202452114_MetadataUsageId;
extern const uint32_t pb_Vertex_op_Division_m3003613859_MetadataUsageId;
extern const uint32_t pb_Vertex_Divide_m3627993064_MetadataUsageId;
extern RuntimeClass* ICollection_1_t1484130691_il2cpp_TypeInfo_var;
extern RuntimeClass* pb_VertexU5BU5D_t2681278311_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t496136383_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_1_t471298240_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m4022596417_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Count_TisVector3_t3722313464_m3662092083_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Count_TisColor_t2555686324_m2400385796_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Count_TisVector4_t3319028937_m2634495408_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Count_TisVector2_t2156229523_m4098885708_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m783205072_RuntimeMethod_var;
extern const uint32_t pb_Vertex_GetVertices_m2599809222_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const uint32_t pb_Vertex_GetVertices_m1505931676_MetadataUsageId;
extern RuntimeClass* ICollection_1_t2669920700_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var;
extern RuntimeClass* ColorU5BU5D_t941916413_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector4U5BU5D_t934056436_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_1_t1657088249_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m955356357_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2996644200_RuntimeMethod_var;
extern const uint32_t pb_Vertex_GetArrays_m1138548130_MetadataUsageId;
extern const uint32_t pb_Vertex_SetMesh_m468515096_MetadataUsageId;
extern const uint32_t pb_Vertex_Average_m1010642590_MetadataUsageId;
extern const uint32_t pb_Vertex_Mix_m980538977_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m361000296_RuntimeMethod_var;
extern const uint32_t pb_VertexConnection_get_isValid_m1696791628_MetadataUsageId;
extern RuntimeClass* pb_VertexConnection_t1845224009_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Enumerable_ToList_TisInt32_t2950945753_m2000905797_RuntimeMethod_var;
extern const uint32_t pb_VertexConnection_Distinct_m977226565_MetadataUsageId;
extern const uint32_t pb_VertexConnection_Equals_m1482712525_MetadataUsageId;
extern const RuntimeMethod* pbUtil_ToString_TisInt32_t2950945753_m2571025276_RuntimeMethod_var;
extern String_t* _stringLiteral3787497674;
extern String_t* _stringLiteral3450517380;
extern const uint32_t pb_VertexConnection_ToString_m1523814419_MetadataUsageId;
extern RuntimeClass* List_1_t128053199_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1204004817_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m4209298255_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m3513848896_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m167890124_RuntimeMethod_var;
extern const uint32_t pb_VertexConnection_AllTriangles_m2722753987_MetadataUsageId;
extern RuntimeClass* pb_WingedEdge_t1639999858_il2cpp_TypeInfo_var;
extern RuntimeClass* pb_Edge_t3313513031_il2cpp_TypeInfo_var;
extern const uint32_t pb_WingedEdge_Equals_m3051610784_MetadataUsageId;
extern RuntimeClass* pb_WingedEdgeEnumerator_t1394122259_il2cpp_TypeInfo_var;
extern const uint32_t pb_WingedEdge_GetEnumerator_m1574886498_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral78144138;
extern String_t* _stringLiteral1202628576;
extern const uint32_t pb_WingedEdge_ToString_m1679811687_MetadataUsageId;
extern RuntimeClass* pb_EdgeLookupU5BU5D_t3966966597_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern const uint32_t pb_WingedEdge_MakeQuad_m3024752587_MetadataUsageId;
extern RuntimeClass* List_1_t490620477_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3072246782_RuntimeMethod_var;
extern const uint32_t pb_WingedEdge_SortEdgesByAdjacency_m3594873273_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m2063820192_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m462825244_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2366896369_RuntimeMethod_var;
extern const uint32_t pb_WingedEdge_SortEdgesByAdjacency_m1562573850_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2000787931_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3112074600_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1266425621_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3401906893_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1279332680_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2051880875_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m4000012285_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3016026542_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m4187256803_RuntimeMethod_var;
extern const uint32_t pb_WingedEdge_GetSpokes_m3067573576_MetadataUsageId;
extern RuntimeClass* U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t1594996471_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t171398137_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t3387623203_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t3531098348_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_U3CU3Em__0_m435355717_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m588729392_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Where_Tispb_WingedEdge_t1639999858_m3437621353_RuntimeMethod_var;
extern const RuntimeMethod* pb_WingedEdge_U3CSortCommonIndicesByAdjacencyU3Em__0_m707596671_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m2604616080_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Select_Tispb_WingedEdge_t1639999858_Tispb_Edge_t3313513031_m3668823577_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToList_Tispb_Edge_t3313513031_m1997905656_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_get_Count_m3008068950_RuntimeMethod_var;
extern const RuntimeMethod* pb_WingedEdge_U3CSortCommonIndicesByAdjacencyU3Em__1_m2530997828_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m2324675885_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Select_Tispb_Edge_t3313513031_TisInt32_t2950945753_m478876776_RuntimeMethod_var;
extern const uint32_t pb_WingedEdge_SortCommonIndicesByAdjacency_m2460211161_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t4200534527_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t3888291539_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1046041822_il2cpp_TypeInfo_var;
extern RuntimeClass* pb_EdgeLookup_t2280733452_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Enumerable_Distinct_Tispb_Face_t613471354_m214710561_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2158871500_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m2924502254_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m922471079_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m2936395901_RuntimeMethod_var;
extern const uint32_t pb_WingedEdge_GetWingedEdges_m4013718761_MetadataUsageId;
extern const RuntimeMethod* HashSet_1_Contains_m2757512434_RuntimeMethod_var;
extern const uint32_t U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_U3CU3Em__0_m435355717_MetadataUsageId;
extern RuntimeClass* IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern const RuntimeMethod* pb_WingedEdgeEnumerator_get_Current_m3878133830_RuntimeMethod_var;
extern const uint32_t pb_WingedEdgeEnumerator_get_Current_m3878133830_MetadataUsageId;
extern RuntimeClass* pb_ColorUtil_t2881748417_il2cpp_TypeInfo_var;
extern const uint32_t pb_XYZ_Color_FromRGB_m2209865887_MetadataUsageId;
extern const uint32_t pb_XYZ_Color_FromRGB_m2656173265_MetadataUsageId;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3099091510;
extern const uint32_t pb_XYZ_Color_ToString_m291989509_MetadataUsageId;
extern RuntimeClass* TransformU5BU5D_t807237628_il2cpp_TypeInfo_var;
extern RuntimeClass* pbTransformUtil_t3137016056_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_Add_m1976278845_RuntimeMethod_var;
extern const uint32_t pbTransformUtil_UnparentChildren_m3345795271_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m3079431012_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m3851836367_RuntimeMethod_var;
extern const uint32_t pbTransformUtil_ReparentChildren_m1120109415_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t117942215_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1137353126_RuntimeMethod_var;
extern const uint32_t pbTransformUtil__cctor_m1512817403_MetadataUsageId;
extern const uint32_t pbUtil_ToWorldSpace_m1026666852_MetadataUsageId;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern const uint32_t pbUtil_EmptyGameObjectWithTransform_m488946117_MetadataUsageId;
extern String_t* _stringLiteral984698823;
extern String_t* _stringLiteral2813986916;
extern String_t* _stringLiteral2553807653;
extern String_t* _stringLiteral432759908;
extern const uint32_t pbUtil_ControlKeyString_m3575359564_MetadataUsageId;
extern RuntimeClass* U3CTryParseColorU3Ec__AnonStorey1_t2806735917_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t148644517_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CTryParseColorU3Ec__AnonStorey1_U3CU3Em__0_m3014745815_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m2318007926_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Where_TisChar_t3634460470_m3580589701_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToArray_TisChar_t3634460470_m2668536093_RuntimeMethod_var;
extern String_t* _stringLiteral3270067010;
extern const uint32_t pbUtil_TryParseColor_m3233197579_MetadataUsageId;
extern RuntimeClass* List_1_t899420910_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1778067824_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1524640104_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m495485525_RuntimeMethod_var;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral3450582913;
extern const uint32_t pbUtil_StringToVector3Array_m2411915311_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Contains_TisChar_t3634460470_m2857789489_RuntimeMethod_var;
extern const uint32_t U3CTryParseColorU3Ec__AnonStorey1_U3CU3Em__0_m3014745815_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614613;
extern String_t* _stringLiteral2057739211;
extern const uint32_t SearchRange_ToString_m4109987529_MetadataUsageId;
struct CultureInfo_t4157843068_marshaled_pinvoke;
struct CultureData_t1899656083_marshaled_pinvoke;
struct CultureInfo_t4157843068_marshaled_com;
struct CultureData_t1899656083_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;

struct pb_VertexU5BU5D_t2681278311;
struct Vector3U5BU5D_t1718750761;
struct ColorU5BU5D_t941916413;
struct Vector2U5BU5D_t1457185986;
struct Vector4U5BU5D_t934056436;
struct pb_IntArrayU5BU5D_t1561170814;
struct ObjectU5BU5D_t2843939325;
struct Int32U5BU5D_t385246372;
struct pb_EdgeLookupU5BU5D_t3966966597;
struct pb_EdgeU5BU5D_t4057067710;
struct pb_FaceU5BU5D_t3313432671;
struct TransformU5BU5D_t807237628;
struct StringU5BU5D_t1281789340;
struct CharU5BU5D_t3528271667;


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
#ifndef HASHSET_1_T1515895227_H
#define HASHSET_1_T1515895227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1<System.Int32>
struct  HashSet_1_t1515895227  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t385246372* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t2954163135* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t950877179 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t1515895227, ____buckets_7)); }
	inline Int32U5BU5D_t385246372* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t385246372** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t385246372* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((&____buckets_7), value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t1515895227, ____slots_8)); }
	inline SlotU5BU5D_t2954163135* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t2954163135** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t2954163135* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((&____slots_8), value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t1515895227, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t1515895227, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t1515895227, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t1515895227, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_12), value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t1515895227, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t1515895227, ____siInfo_14)); }
	inline SerializationInfo_t950877179 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t950877179 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t950877179 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&____siInfo_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHSET_1_T1515895227_H
#ifndef LIST_1_T3112074600_H
#define LIST_1_T3112074600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>
struct  List_1_t3112074600  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	pb_WingedEdgeU5BU5D_t3551025287* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3112074600, ____items_1)); }
	inline pb_WingedEdgeU5BU5D_t3551025287* get__items_1() const { return ____items_1; }
	inline pb_WingedEdgeU5BU5D_t3551025287** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(pb_WingedEdgeU5BU5D_t3551025287* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3112074600, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3112074600, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3112074600, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t3112074600_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	pb_WingedEdgeU5BU5D_t3551025287* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3112074600_StaticFields, ____emptyArray_5)); }
	inline pb_WingedEdgeU5BU5D_t3551025287* get__emptyArray_5() const { return ____emptyArray_5; }
	inline pb_WingedEdgeU5BU5D_t3551025287** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(pb_WingedEdgeU5BU5D_t3551025287* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3112074600_H
#ifndef U3CSORTCOMMONINDICESBYADJACENCYU3EC__ANONSTOREY0_T1594996471_H
#define U3CSORTCOMMONINDICESBYADJACENCYU3EC__ANONSTOREY0_T1594996471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pb_WingedEdge/<SortCommonIndicesByAdjacency>c__AnonStorey0
struct  U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t1594996471  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<System.Int32> ProBuilder2.Common.pb_WingedEdge/<SortCommonIndicesByAdjacency>c__AnonStorey0::common
	HashSet_1_t1515895227 * ___common_0;

public:
	inline static int32_t get_offset_of_common_0() { return static_cast<int32_t>(offsetof(U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t1594996471, ___common_0)); }
	inline HashSet_1_t1515895227 * get_common_0() const { return ___common_0; }
	inline HashSet_1_t1515895227 ** get_address_of_common_0() { return &___common_0; }
	inline void set_common_0(HashSet_1_t1515895227 * value)
	{
		___common_0 = value;
		Il2CppCodeGenWriteBarrier((&___common_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSORTCOMMONINDICESBYADJACENCYU3EC__ANONSTOREY0_T1594996471_H
#ifndef PB_INTARRAY_T829339271_H
#define PB_INTARRAY_T829339271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pb_IntArray
struct  pb_IntArray_t829339271  : public RuntimeObject
{
public:
	// System.Int32[] ProBuilder2.Common.pb_IntArray::array
	Int32U5BU5D_t385246372* ___array_0;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(pb_IntArray_t829339271, ___array_0)); }
	inline Int32U5BU5D_t385246372* get_array_0() const { return ___array_0; }
	inline Int32U5BU5D_t385246372** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(Int32U5BU5D_t385246372* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((&___array_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_INTARRAY_T829339271_H
#ifndef DICTIONARY_2_T1839659084_H
#define DICTIONARY_2_T1839659084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct  Dictionary_2_t1839659084  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t742410749* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t2029334555 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3555703402 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1839659084, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1839659084, ___entries_1)); }
	inline EntryU5BU5D_t742410749* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t742410749** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t742410749* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1839659084, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1839659084, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1839659084, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1839659084, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1839659084, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1839659084, ___keys_7)); }
	inline KeyCollection_t2029334555 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t2029334555 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t2029334555 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1839659084, ___values_8)); }
	inline ValueCollection_t3555703402 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3555703402 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3555703402 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1839659084, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1839659084_H
#ifndef PB_WINGEDEDGE_T1639999858_H
#define PB_WINGEDEDGE_T1639999858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pb_WingedEdge
struct  pb_WingedEdge_t1639999858  : public RuntimeObject
{
public:
	// ProBuilder2.Common.pb_EdgeLookup ProBuilder2.Common.pb_WingedEdge::edge
	pb_EdgeLookup_t2280733452 * ___edge_0;
	// ProBuilder2.Common.pb_Face ProBuilder2.Common.pb_WingedEdge::face
	pb_Face_t613471354 * ___face_1;
	// ProBuilder2.Common.pb_WingedEdge ProBuilder2.Common.pb_WingedEdge::next
	pb_WingedEdge_t1639999858 * ___next_2;
	// ProBuilder2.Common.pb_WingedEdge ProBuilder2.Common.pb_WingedEdge::previous
	pb_WingedEdge_t1639999858 * ___previous_3;
	// ProBuilder2.Common.pb_WingedEdge ProBuilder2.Common.pb_WingedEdge::opposite
	pb_WingedEdge_t1639999858 * ___opposite_4;

public:
	inline static int32_t get_offset_of_edge_0() { return static_cast<int32_t>(offsetof(pb_WingedEdge_t1639999858, ___edge_0)); }
	inline pb_EdgeLookup_t2280733452 * get_edge_0() const { return ___edge_0; }
	inline pb_EdgeLookup_t2280733452 ** get_address_of_edge_0() { return &___edge_0; }
	inline void set_edge_0(pb_EdgeLookup_t2280733452 * value)
	{
		___edge_0 = value;
		Il2CppCodeGenWriteBarrier((&___edge_0), value);
	}

	inline static int32_t get_offset_of_face_1() { return static_cast<int32_t>(offsetof(pb_WingedEdge_t1639999858, ___face_1)); }
	inline pb_Face_t613471354 * get_face_1() const { return ___face_1; }
	inline pb_Face_t613471354 ** get_address_of_face_1() { return &___face_1; }
	inline void set_face_1(pb_Face_t613471354 * value)
	{
		___face_1 = value;
		Il2CppCodeGenWriteBarrier((&___face_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(pb_WingedEdge_t1639999858, ___next_2)); }
	inline pb_WingedEdge_t1639999858 * get_next_2() const { return ___next_2; }
	inline pb_WingedEdge_t1639999858 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(pb_WingedEdge_t1639999858 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}

	inline static int32_t get_offset_of_previous_3() { return static_cast<int32_t>(offsetof(pb_WingedEdge_t1639999858, ___previous_3)); }
	inline pb_WingedEdge_t1639999858 * get_previous_3() const { return ___previous_3; }
	inline pb_WingedEdge_t1639999858 ** get_address_of_previous_3() { return &___previous_3; }
	inline void set_previous_3(pb_WingedEdge_t1639999858 * value)
	{
		___previous_3 = value;
		Il2CppCodeGenWriteBarrier((&___previous_3), value);
	}

	inline static int32_t get_offset_of_opposite_4() { return static_cast<int32_t>(offsetof(pb_WingedEdge_t1639999858, ___opposite_4)); }
	inline pb_WingedEdge_t1639999858 * get_opposite_4() const { return ___opposite_4; }
	inline pb_WingedEdge_t1639999858 ** get_address_of_opposite_4() { return &___opposite_4; }
	inline void set_opposite_4(pb_WingedEdge_t1639999858 * value)
	{
		___opposite_4 = value;
		Il2CppCodeGenWriteBarrier((&___opposite_4), value);
	}
};

struct pb_WingedEdge_t1639999858_StaticFields
{
public:
	// System.Func`2<ProBuilder2.Common.pb_WingedEdge,ProBuilder2.Common.pb_Edge> ProBuilder2.Common.pb_WingedEdge::<>f__am$cache0
	Func_2_t3387623203 * ___U3CU3Ef__amU24cache0_5;
	// System.Func`2<ProBuilder2.Common.pb_Edge,System.Int32> ProBuilder2.Common.pb_WingedEdge::<>f__am$cache1
	Func_2_t3531098348 * ___U3CU3Ef__amU24cache1_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(pb_WingedEdge_t1639999858_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline Func_2_t3387623203 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline Func_2_t3387623203 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(Func_2_t3387623203 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_6() { return static_cast<int32_t>(offsetof(pb_WingedEdge_t1639999858_StaticFields, ___U3CU3Ef__amU24cache1_6)); }
	inline Func_2_t3531098348 * get_U3CU3Ef__amU24cache1_6() const { return ___U3CU3Ef__amU24cache1_6; }
	inline Func_2_t3531098348 ** get_address_of_U3CU3Ef__amU24cache1_6() { return &___U3CU3Ef__amU24cache1_6; }
	inline void set_U3CU3Ef__amU24cache1_6(Func_2_t3531098348 * value)
	{
		___U3CU3Ef__amU24cache1_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_WINGEDEDGE_T1639999858_H
#ifndef LIST_1_T3317298751_H
#define LIST_1_T3317298751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<ProBuilder2.Common.pb_VertexConnection>
struct  List_1_t3317298751  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	pb_VertexConnectionU5BU5D_t1928775284* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3317298751, ____items_1)); }
	inline pb_VertexConnectionU5BU5D_t1928775284* get__items_1() const { return ____items_1; }
	inline pb_VertexConnectionU5BU5D_t1928775284** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(pb_VertexConnectionU5BU5D_t1928775284* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3317298751, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3317298751, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3317298751, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t3317298751_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	pb_VertexConnectionU5BU5D_t1928775284* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3317298751_StaticFields, ____emptyArray_5)); }
	inline pb_VertexConnectionU5BU5D_t1928775284* get__emptyArray_5() const { return ____emptyArray_5; }
	inline pb_VertexConnectionU5BU5D_t1928775284** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(pb_VertexConnectionU5BU5D_t1928775284* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3317298751_H
#ifndef PB_WINGEDEDGEENUMERATOR_T1394122259_H
#define PB_WINGEDEDGEENUMERATOR_T1394122259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pb_WingedEdgeEnumerator
struct  pb_WingedEdgeEnumerator_t1394122259  : public RuntimeObject
{
public:
	// ProBuilder2.Common.pb_WingedEdge ProBuilder2.Common.pb_WingedEdgeEnumerator::_start
	pb_WingedEdge_t1639999858 * ____start_0;
	// ProBuilder2.Common.pb_WingedEdge ProBuilder2.Common.pb_WingedEdgeEnumerator::_current
	pb_WingedEdge_t1639999858 * ____current_1;

public:
	inline static int32_t get_offset_of__start_0() { return static_cast<int32_t>(offsetof(pb_WingedEdgeEnumerator_t1394122259, ____start_0)); }
	inline pb_WingedEdge_t1639999858 * get__start_0() const { return ____start_0; }
	inline pb_WingedEdge_t1639999858 ** get_address_of__start_0() { return &____start_0; }
	inline void set__start_0(pb_WingedEdge_t1639999858 * value)
	{
		____start_0 = value;
		Il2CppCodeGenWriteBarrier((&____start_0), value);
	}

	inline static int32_t get_offset_of__current_1() { return static_cast<int32_t>(offsetof(pb_WingedEdgeEnumerator_t1394122259, ____current_1)); }
	inline pb_WingedEdge_t1639999858 * get__current_1() const { return ____current_1; }
	inline pb_WingedEdge_t1639999858 ** get_address_of__current_1() { return &____current_1; }
	inline void set__current_1(pb_WingedEdge_t1639999858 * value)
	{
		____current_1 = value;
		Il2CppCodeGenWriteBarrier((&____current_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_WINGEDEDGEENUMERATOR_T1394122259_H
#ifndef DICTIONARY_2_T2000787931_H
#define DICTIONARY_2_T2000787931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>>
struct  Dictionary_2_t2000787931  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t2808806738* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t2190463402 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3716832249 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2000787931, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2000787931, ___entries_1)); }
	inline EntryU5BU5D_t2808806738* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t2808806738** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t2808806738* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2000787931, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2000787931, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2000787931, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2000787931, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2000787931, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2000787931, ___keys_7)); }
	inline KeyCollection_t2190463402 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t2190463402 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t2190463402 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2000787931, ___values_8)); }
	inline ValueCollection_t3716832249 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3716832249 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3716832249 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2000787931, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2000787931_H
#ifndef LIST_1_T490620477_H
#define LIST_1_T490620477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>
struct  List_1_t490620477  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	pb_EdgeU5BU5D_t4057067710* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t490620477, ____items_1)); }
	inline pb_EdgeU5BU5D_t4057067710* get__items_1() const { return ____items_1; }
	inline pb_EdgeU5BU5D_t4057067710** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(pb_EdgeU5BU5D_t4057067710* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t490620477, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t490620477, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t490620477, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t490620477_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	pb_EdgeU5BU5D_t4057067710* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t490620477_StaticFields, ____emptyArray_5)); }
	inline pb_EdgeU5BU5D_t4057067710* get__emptyArray_5() const { return ____emptyArray_5; }
	inline pb_EdgeU5BU5D_t4057067710** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(pb_EdgeU5BU5D_t4057067710* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T490620477_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t1281789340* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t1899656083 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_10)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_10), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_11), value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_12)); }
	inline TextInfo_t3810425522 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t3810425522 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_12), value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_13), value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_14), value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_15), value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_16), value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_17), value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_18), value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((&___territory_19), value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___native_calendar_names_20)); }
	inline StringU5BU5D_t1281789340* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t1281789340** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t1281789340* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((&___native_calendar_names_20), value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_21)); }
	inline CompareInfo_t1092934962 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t1092934962 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_21), value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_24)); }
	inline Calendar_t1661121569 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t1661121569 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t1661121569 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_24), value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_25)); }
	inline CultureInfo_t4157843068 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t4157843068 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_25), value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_27), value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_cultureData_28)); }
	inline CultureData_t1899656083 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t1899656083 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t1899656083 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureData_28), value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t4157843068 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t4157843068 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t4157843068 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t3046556399 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t3943099367 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_0), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_1), value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t4157843068 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t4157843068 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t4157843068 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((&___default_current_culture_2), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t4157843068 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t4157843068 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t4157843068 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentUICulture_33), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t4157843068 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t4157843068 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t4157843068 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentCulture_34), value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t3046556399 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t3046556399 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t3046556399 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_35), value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t3943099367 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t3943099367 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t3943099367 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_36), value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t4157843068_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t435877138 * ___numInfo_10;
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	TextInfo_t3810425522 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1092934962 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t1661121569 * ___calendar_24;
	CultureInfo_t4157843068_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_t1899656083_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t4157843068_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t435877138 * ___numInfo_10;
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	TextInfo_t3810425522 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1092934962 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t1661121569 * ___calendar_24;
	CultureInfo_t4157843068_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_t1899656083_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
#endif // CULTUREINFO_T4157843068_H
#ifndef LIST_1_T899420910_H
#define LIST_1_T899420910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t899420910  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t1718750761* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____items_1)); }
	inline Vector3U5BU5D_t1718750761* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t1718750761** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t1718750761* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t899420910_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t1718750761* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t899420910_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t1718750761* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t1718750761** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t1718750761* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T899420910_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
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
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
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
#ifndef U3CTRYPARSECOLORU3EC__ANONSTOREY1_T2806735917_H
#define U3CTRYPARSECOLORU3EC__ANONSTOREY1_T2806735917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pbUtil/<TryParseColor>c__AnonStorey1
struct  U3CTryParseColorU3Ec__AnonStorey1_t2806735917  : public RuntimeObject
{
public:
	// System.String ProBuilder2.Common.pbUtil/<TryParseColor>c__AnonStorey1::valid
	String_t* ___valid_0;

public:
	inline static int32_t get_offset_of_valid_0() { return static_cast<int32_t>(offsetof(U3CTryParseColorU3Ec__AnonStorey1_t2806735917, ___valid_0)); }
	inline String_t* get_valid_0() const { return ___valid_0; }
	inline String_t** get_address_of_valid_0() { return &___valid_0; }
	inline void set_valid_0(String_t* value)
	{
		___valid_0 = value;
		Il2CppCodeGenWriteBarrier((&___valid_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTRYPARSECOLORU3EC__ANONSTOREY1_T2806735917_H
#ifndef PB_XYZ_COLOR_T3763960066_H
#define PB_XYZ_COLOR_T3763960066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pb_XYZ_Color
struct  pb_XYZ_Color_t3763960066  : public RuntimeObject
{
public:
	// System.Single ProBuilder2.Common.pb_XYZ_Color::x
	float ___x_0;
	// System.Single ProBuilder2.Common.pb_XYZ_Color::y
	float ___y_1;
	// System.Single ProBuilder2.Common.pb_XYZ_Color::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(pb_XYZ_Color_t3763960066, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(pb_XYZ_Color_t3763960066, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(pb_XYZ_Color_t3763960066, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_XYZ_COLOR_T3763960066_H
#ifndef DICTIONARY_2_T4200534527_H
#define DICTIONARY_2_T4200534527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_WingedEdge>
struct  Dictionary_2_t4200534527  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t3134163998* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t95242702 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1621611549 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t4200534527, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t4200534527, ___entries_1)); }
	inline EntryU5BU5D_t3134163998* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t3134163998** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t3134163998* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t4200534527, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t4200534527, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t4200534527, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t4200534527, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t4200534527, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t4200534527, ___keys_7)); }
	inline KeyCollection_t95242702 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t95242702 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t95242702 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t4200534527, ___values_8)); }
	inline ValueCollection_t1621611549 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1621611549 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1621611549 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t4200534527, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T4200534527_H
#ifndef PBTRANSFORMUTIL_T3137016056_H
#define PBTRANSFORMUTIL_T3137016056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pbTransformUtil
struct  pbTransformUtil_t3137016056  : public RuntimeObject
{
public:

public:
};

struct pbTransformUtil_t3137016056_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UnityEngine.Transform[]> ProBuilder2.Common.pbTransformUtil::_childrenStack
	Dictionary_2_t117942215 * ____childrenStack_0;

public:
	inline static int32_t get_offset_of__childrenStack_0() { return static_cast<int32_t>(offsetof(pbTransformUtil_t3137016056_StaticFields, ____childrenStack_0)); }
	inline Dictionary_2_t117942215 * get__childrenStack_0() const { return ____childrenStack_0; }
	inline Dictionary_2_t117942215 ** get_address_of__childrenStack_0() { return &____childrenStack_0; }
	inline void set__childrenStack_0(Dictionary_2_t117942215 * value)
	{
		____childrenStack_0 = value;
		Il2CppCodeGenWriteBarrier((&____childrenStack_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PBTRANSFORMUTIL_T3137016056_H
#ifndef PBUTIL_T1144709281_H
#define PBUTIL_T1144709281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pbUtil
struct  pbUtil_t1144709281  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PBUTIL_T1144709281_H
#ifndef DICTIONARY_2_T117942215_H
#define DICTIONARY_2_T117942215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UnityEngine.Transform[]>
struct  Dictionary_2_t117942215  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1663057462* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t307617686 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1833986533 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t117942215, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t117942215, ___entries_1)); }
	inline EntryU5BU5D_t1663057462* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1663057462** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1663057462* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t117942215, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t117942215, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t117942215, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t117942215, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t117942215, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t117942215, ___keys_7)); }
	inline KeyCollection_t307617686 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t307617686 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t307617686 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t117942215, ___values_8)); }
	inline ValueCollection_t1833986533 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1833986533 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1833986533 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t117942215, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T117942215_H
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
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef LIST_1_T496136383_H
#define LIST_1_T496136383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct  List_1_t496136383  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_t934056436* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t496136383, ____items_1)); }
	inline Vector4U5BU5D_t934056436* get__items_1() const { return ____items_1; }
	inline Vector4U5BU5D_t934056436** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector4U5BU5D_t934056436* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t496136383, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t496136383, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t496136383, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t496136383_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector4U5BU5D_t934056436* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t496136383_StaticFields, ____emptyArray_5)); }
	inline Vector4U5BU5D_t934056436* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector4U5BU5D_t934056436** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector4U5BU5D_t934056436* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T496136383_H
#ifndef PB_VECTOR_T3764717045_H
#define PB_VECTOR_T3764717045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pb_Vector
struct  pb_Vector_t3764717045  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_VECTOR_T3764717045_H
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
#ifndef PB_FACE_T613471354_H
#define PB_FACE_T613471354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pb_Face
struct  pb_Face_t613471354  : public RuntimeObject
{
public:
	// System.Int32[] ProBuilder2.Common.pb_Face::_indices
	Int32U5BU5D_t385246372* ____indices_0;
	// System.Int32[] ProBuilder2.Common.pb_Face::_distinctIndices
	Int32U5BU5D_t385246372* ____distinctIndices_1;
	// ProBuilder2.Common.pb_Edge[] ProBuilder2.Common.pb_Face::_edges
	pb_EdgeU5BU5D_t4057067710* ____edges_2;
	// System.Int32 ProBuilder2.Common.pb_Face::_smoothingGroup
	int32_t ____smoothingGroup_3;
	// pb_UV ProBuilder2.Common.pb_Face::_uv
	pb_UV_t3778038557 * ____uv_4;
	// UnityEngine.Material ProBuilder2.Common.pb_Face::_mat
	Material_t340375123 * ____mat_5;
	// System.Boolean ProBuilder2.Common.pb_Face::manualUV
	bool ___manualUV_6;
	// System.Int32 ProBuilder2.Common.pb_Face::elementGroup
	int32_t ___elementGroup_7;
	// System.Int32 ProBuilder2.Common.pb_Face::textureGroup
	int32_t ___textureGroup_8;

public:
	inline static int32_t get_offset_of__indices_0() { return static_cast<int32_t>(offsetof(pb_Face_t613471354, ____indices_0)); }
	inline Int32U5BU5D_t385246372* get__indices_0() const { return ____indices_0; }
	inline Int32U5BU5D_t385246372** get_address_of__indices_0() { return &____indices_0; }
	inline void set__indices_0(Int32U5BU5D_t385246372* value)
	{
		____indices_0 = value;
		Il2CppCodeGenWriteBarrier((&____indices_0), value);
	}

	inline static int32_t get_offset_of__distinctIndices_1() { return static_cast<int32_t>(offsetof(pb_Face_t613471354, ____distinctIndices_1)); }
	inline Int32U5BU5D_t385246372* get__distinctIndices_1() const { return ____distinctIndices_1; }
	inline Int32U5BU5D_t385246372** get_address_of__distinctIndices_1() { return &____distinctIndices_1; }
	inline void set__distinctIndices_1(Int32U5BU5D_t385246372* value)
	{
		____distinctIndices_1 = value;
		Il2CppCodeGenWriteBarrier((&____distinctIndices_1), value);
	}

	inline static int32_t get_offset_of__edges_2() { return static_cast<int32_t>(offsetof(pb_Face_t613471354, ____edges_2)); }
	inline pb_EdgeU5BU5D_t4057067710* get__edges_2() const { return ____edges_2; }
	inline pb_EdgeU5BU5D_t4057067710** get_address_of__edges_2() { return &____edges_2; }
	inline void set__edges_2(pb_EdgeU5BU5D_t4057067710* value)
	{
		____edges_2 = value;
		Il2CppCodeGenWriteBarrier((&____edges_2), value);
	}

	inline static int32_t get_offset_of__smoothingGroup_3() { return static_cast<int32_t>(offsetof(pb_Face_t613471354, ____smoothingGroup_3)); }
	inline int32_t get__smoothingGroup_3() const { return ____smoothingGroup_3; }
	inline int32_t* get_address_of__smoothingGroup_3() { return &____smoothingGroup_3; }
	inline void set__smoothingGroup_3(int32_t value)
	{
		____smoothingGroup_3 = value;
	}

	inline static int32_t get_offset_of__uv_4() { return static_cast<int32_t>(offsetof(pb_Face_t613471354, ____uv_4)); }
	inline pb_UV_t3778038557 * get__uv_4() const { return ____uv_4; }
	inline pb_UV_t3778038557 ** get_address_of__uv_4() { return &____uv_4; }
	inline void set__uv_4(pb_UV_t3778038557 * value)
	{
		____uv_4 = value;
		Il2CppCodeGenWriteBarrier((&____uv_4), value);
	}

	inline static int32_t get_offset_of__mat_5() { return static_cast<int32_t>(offsetof(pb_Face_t613471354, ____mat_5)); }
	inline Material_t340375123 * get__mat_5() const { return ____mat_5; }
	inline Material_t340375123 ** get_address_of__mat_5() { return &____mat_5; }
	inline void set__mat_5(Material_t340375123 * value)
	{
		____mat_5 = value;
		Il2CppCodeGenWriteBarrier((&____mat_5), value);
	}

	inline static int32_t get_offset_of_manualUV_6() { return static_cast<int32_t>(offsetof(pb_Face_t613471354, ___manualUV_6)); }
	inline bool get_manualUV_6() const { return ___manualUV_6; }
	inline bool* get_address_of_manualUV_6() { return &___manualUV_6; }
	inline void set_manualUV_6(bool value)
	{
		___manualUV_6 = value;
	}

	inline static int32_t get_offset_of_elementGroup_7() { return static_cast<int32_t>(offsetof(pb_Face_t613471354, ___elementGroup_7)); }
	inline int32_t get_elementGroup_7() const { return ___elementGroup_7; }
	inline int32_t* get_address_of_elementGroup_7() { return &___elementGroup_7; }
	inline void set_elementGroup_7(int32_t value)
	{
		___elementGroup_7 = value;
	}

	inline static int32_t get_offset_of_textureGroup_8() { return static_cast<int32_t>(offsetof(pb_Face_t613471354, ___textureGroup_8)); }
	inline int32_t get_textureGroup_8() const { return ___textureGroup_8; }
	inline int32_t* get_address_of_textureGroup_8() { return &___textureGroup_8; }
	inline void set_textureGroup_8(int32_t value)
	{
		___textureGroup_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_FACE_T613471354_H
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_1)); }
	inline Int32U5BU5D_t385246372* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t385246372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t385246372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t385246372* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t385246372* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t385246372** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t385246372* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef PB_VERTEXCONNECTION_T1845224009_H
#define PB_VERTEXCONNECTION_T1845224009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pb_VertexConnection
struct  pb_VertexConnection_t1845224009  : public RuntimeObject
{
public:
	// ProBuilder2.Common.pb_Face ProBuilder2.Common.pb_VertexConnection::face
	pb_Face_t613471354 * ___face_0;
	// System.Collections.Generic.List`1<System.Int32> ProBuilder2.Common.pb_VertexConnection::indices
	List_1_t128053199 * ___indices_1;

public:
	inline static int32_t get_offset_of_face_0() { return static_cast<int32_t>(offsetof(pb_VertexConnection_t1845224009, ___face_0)); }
	inline pb_Face_t613471354 * get_face_0() const { return ___face_0; }
	inline pb_Face_t613471354 ** get_address_of_face_0() { return &___face_0; }
	inline void set_face_0(pb_Face_t613471354 * value)
	{
		___face_0 = value;
		Il2CppCodeGenWriteBarrier((&___face_0), value);
	}

	inline static int32_t get_offset_of_indices_1() { return static_cast<int32_t>(offsetof(pb_VertexConnection_t1845224009, ___indices_1)); }
	inline List_1_t128053199 * get_indices_1() const { return ___indices_1; }
	inline List_1_t128053199 ** get_address_of_indices_1() { return &___indices_1; }
	inline void set_indices_1(List_1_t128053199 * value)
	{
		___indices_1 = value;
		Il2CppCodeGenWriteBarrier((&___indices_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_VERTEXCONNECTION_T1845224009_H
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
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
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
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
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
#ifndef SEARCHRANGE_T3147983846_H
#define SEARCHRANGE_T3147983846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pbUtil/SearchRange
struct  SearchRange_t3147983846 
{
public:
	// System.Int32 ProBuilder2.Common.pbUtil/SearchRange::begin
	int32_t ___begin_0;
	// System.Int32 ProBuilder2.Common.pbUtil/SearchRange::end
	int32_t ___end_1;

public:
	inline static int32_t get_offset_of_begin_0() { return static_cast<int32_t>(offsetof(SearchRange_t3147983846, ___begin_0)); }
	inline int32_t get_begin_0() const { return ___begin_0; }
	inline int32_t* get_address_of_begin_0() { return &___begin_0; }
	inline void set_begin_0(int32_t value)
	{
		___begin_0 = value;
	}

	inline static int32_t get_offset_of_end_1() { return static_cast<int32_t>(offsetof(SearchRange_t3147983846, ___end_1)); }
	inline int32_t get_end_1() const { return ___end_1; }
	inline int32_t* get_address_of_end_1() { return &___end_1; }
	inline void set_end_1(int32_t value)
	{
		___end_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEARCHRANGE_T3147983846_H
#ifndef PROGRIDSCONDITIONALSNAPATTRIBUTE_T3544668608_H
#define PROGRIDSCONDITIONALSNAPATTRIBUTE_T3544668608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.ProGridsConditionalSnapAttribute
struct  ProGridsConditionalSnapAttribute_t3544668608  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROGRIDSCONDITIONALSNAPATTRIBUTE_T3544668608_H
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
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef PROGRIDSNOSNAPATTRIBUTE_T1046443759_H
#define PROGRIDSNOSNAPATTRIBUTE_T1046443759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.ProGridsNoSnapAttribute
struct  ProGridsNoSnapAttribute_t1046443759  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROGRIDSNOSNAPATTRIBUTE_T1046443759_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
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
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
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
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
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
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
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
#ifndef PB_EDGE_T3313513031_H
#define PB_EDGE_T3313513031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pb_Edge
struct  pb_Edge_t3313513031 
{
public:
	// System.Int32 ProBuilder2.Common.pb_Edge::x
	int32_t ___x_0;
	// System.Int32 ProBuilder2.Common.pb_Edge::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(pb_Edge_t3313513031, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(pb_Edge_t3313513031, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};

struct pb_Edge_t3313513031_StaticFields
{
public:
	// ProBuilder2.Common.pb_Edge ProBuilder2.Common.pb_Edge::Empty
	pb_Edge_t3313513031  ___Empty_2;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(pb_Edge_t3313513031_StaticFields, ___Empty_2)); }
	inline pb_Edge_t3313513031  get_Empty_2() const { return ___Empty_2; }
	inline pb_Edge_t3313513031 * get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(pb_Edge_t3313513031  value)
	{
		___Empty_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_EDGE_T3313513031_H
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
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
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
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_t4116647657* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_t4116647657* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_t4116647657* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
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
#ifndef PROJECTIONAXIS_T2561159243_H
#define PROJECTIONAXIS_T2561159243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.ProjectionAxis
struct  ProjectionAxis_t2561159243 
{
public:
	// System.Int32 ProBuilder2.Common.ProjectionAxis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProjectionAxis_t2561159243, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROJECTIONAXIS_T2561159243_H
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

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

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef SHAPE_T2564421240_H
#define SHAPE_T2564421240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.Shape
struct  Shape_t2564421240 
{
public:
	// System.Int32 ProBuilder2.Common.Shape::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Shape_t2564421240, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAPE_T2564421240_H
#ifndef SELECTIONRENDERSTATE_T2547923187_H
#define SELECTIONRENDERSTATE_T2547923187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.SelectionRenderState
struct  SelectionRenderState_t2547923187 
{
public:
	// System.Int32 ProBuilder2.Common.SelectionRenderState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SelectionRenderState_t2547923187, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONRENDERSTATE_T2547923187_H
#ifndef SELECTMODE_T2401550129_H
#define SELECTMODE_T2401550129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.SelectMode
struct  SelectMode_t2401550129 
{
public:
	// System.Int32 ProBuilder2.Common.SelectMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SelectMode_t2401550129, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTMODE_T2401550129_H
#ifndef SORTMETHOD_T1376871413_H
#define SORTMETHOD_T1376871413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.SortMethod
struct  SortMethod_t1376871413 
{
public:
	// System.Int32 ProBuilder2.Common.SortMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SortMethod_t1376871413, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTMETHOD_T1376871413_H
#ifndef REFRESHMASK_T1666771706_H
#define REFRESHMASK_T1666771706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.RefreshMask
struct  RefreshMask_t1666771706 
{
public:
	// System.UInt16 ProBuilder2.Common.RefreshMask::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RefreshMask_t1666771706, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHMASK_T1666771706_H
#ifndef WINDINGORDER_T2888872530_H
#define WINDINGORDER_T2888872530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.WindingOrder
struct  WindingOrder_t2888872530 
{
public:
	// System.Int32 ProBuilder2.Common.WindingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WindingOrder_t2888872530, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDINGORDER_T2888872530_H
#ifndef UV2METHOD_T3642877820_H
#define UV2METHOD_T3642877820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.UV2Method
struct  UV2Method_t3642877820 
{
public:
	// System.Int32 ProBuilder2.Common.UV2Method::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UV2Method_t3642877820, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UV2METHOD_T3642877820_H
#ifndef STATUS_T3383878626_H
#define STATUS_T3383878626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.Status
struct  Status_t3383878626 
{
public:
	// System.Int32 ProBuilder2.Common.Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t3383878626, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATUS_T3383878626_H
#ifndef INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#define INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_t1578797820  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
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
#ifndef ATTRIBUTETYPE_T2747028701_H
#define ATTRIBUTETYPE_T2747028701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.AttributeType
struct  AttributeType_t2747028701 
{
public:
	// System.UInt16 ProBuilder2.Common.AttributeType::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeType_t2747028701, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTETYPE_T2747028701_H
#ifndef PB_VERTEX_T4136735762_H
#define PB_VERTEX_T4136735762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pb_Vertex
struct  pb_Vertex_t4136735762  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 ProBuilder2.Common.pb_Vertex::position
	Vector3_t3722313464  ___position_0;
	// UnityEngine.Color ProBuilder2.Common.pb_Vertex::color
	Color_t2555686324  ___color_1;
	// UnityEngine.Vector3 ProBuilder2.Common.pb_Vertex::normal
	Vector3_t3722313464  ___normal_2;
	// UnityEngine.Vector4 ProBuilder2.Common.pb_Vertex::tangent
	Vector4_t3319028937  ___tangent_3;
	// UnityEngine.Vector2 ProBuilder2.Common.pb_Vertex::uv0
	Vector2_t2156229523  ___uv0_4;
	// UnityEngine.Vector2 ProBuilder2.Common.pb_Vertex::uv2
	Vector2_t2156229523  ___uv2_5;
	// UnityEngine.Vector4 ProBuilder2.Common.pb_Vertex::uv3
	Vector4_t3319028937  ___uv3_6;
	// UnityEngine.Vector4 ProBuilder2.Common.pb_Vertex::uv4
	Vector4_t3319028937  ___uv4_7;
	// System.Boolean ProBuilder2.Common.pb_Vertex::hasPosition
	bool ___hasPosition_8;
	// System.Boolean ProBuilder2.Common.pb_Vertex::hasColor
	bool ___hasColor_9;
	// System.Boolean ProBuilder2.Common.pb_Vertex::hasNormal
	bool ___hasNormal_10;
	// System.Boolean ProBuilder2.Common.pb_Vertex::hasTangent
	bool ___hasTangent_11;
	// System.Boolean ProBuilder2.Common.pb_Vertex::hasUv0
	bool ___hasUv0_12;
	// System.Boolean ProBuilder2.Common.pb_Vertex::hasUv2
	bool ___hasUv2_13;
	// System.Boolean ProBuilder2.Common.pb_Vertex::hasUv3
	bool ___hasUv3_14;
	// System.Boolean ProBuilder2.Common.pb_Vertex::hasUv4
	bool ___hasUv4_15;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(pb_Vertex_t4136735762, ___position_0)); }
	inline Vector3_t3722313464  get_position_0() const { return ___position_0; }
	inline Vector3_t3722313464 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3722313464  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(pb_Vertex_t4136735762, ___color_1)); }
	inline Color_t2555686324  get_color_1() const { return ___color_1; }
	inline Color_t2555686324 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_t2555686324  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_normal_2() { return static_cast<int32_t>(offsetof(pb_Vertex_t4136735762, ___normal_2)); }
	inline Vector3_t3722313464  get_normal_2() const { return ___normal_2; }
	inline Vector3_t3722313464 * get_address_of_normal_2() { return &___normal_2; }
	inline void set_normal_2(Vector3_t3722313464  value)
	{
		___normal_2 = value;
	}

	inline static int32_t get_offset_of_tangent_3() { return static_cast<int32_t>(offsetof(pb_Vertex_t4136735762, ___tangent_3)); }
	inline Vector4_t3319028937  get_tangent_3() const { return ___tangent_3; }
	inline Vector4_t3319028937 * get_address_of_tangent_3() { return &___tangent_3; }
	inline void set_tangent_3(Vector4_t3319028937  value)
	{
		___tangent_3 = value;
	}

	inline static int32_t get_offset_of_uv0_4() { return static_cast<int32_t>(offsetof(pb_Vertex_t4136735762, ___uv0_4)); }
	inline Vector2_t2156229523  get_uv0_4() const { return ___uv0_4; }
	inline Vector2_t2156229523 * get_address_of_uv0_4() { return &___uv0_4; }
	inline void set_uv0_4(Vector2_t2156229523  value)
	{
		___uv0_4 = value;
	}

	inline static int32_t get_offset_of_uv2_5() { return static_cast<int32_t>(offsetof(pb_Vertex_t4136735762, ___uv2_5)); }
	inline Vector2_t2156229523  get_uv2_5() const { return ___uv2_5; }
	inline Vector2_t2156229523 * get_address_of_uv2_5() { return &___uv2_5; }
	inline void set_uv2_5(Vector2_t2156229523  value)
	{
		___uv2_5 = value;
	}

	inline static int32_t get_offset_of_uv3_6() { return static_cast<int32_t>(offsetof(pb_Vertex_t4136735762, ___uv3_6)); }
	inline Vector4_t3319028937  get_uv3_6() const { return ___uv3_6; }
	inline Vector4_t3319028937 * get_address_of_uv3_6() { return &___uv3_6; }
	inline void set_uv3_6(Vector4_t3319028937  value)
	{
		___uv3_6 = value;
	}

	inline static int32_t get_offset_of_uv4_7() { return static_cast<int32_t>(offsetof(pb_Vertex_t4136735762, ___uv4_7)); }
	inline Vector4_t3319028937  get_uv4_7() const { return ___uv4_7; }
	inline Vector4_t3319028937 * get_address_of_uv4_7() { return &___uv4_7; }
	inline void set_uv4_7(Vector4_t3319028937  value)
	{
		___uv4_7 = value;
	}

	inline static int32_t get_offset_of_hasPosition_8() { return static_cast<int32_t>(offsetof(pb_Vertex_t4136735762, ___hasPosition_8)); }
	inline bool get_hasPosition_8() const { return ___hasPosition_8; }
	inline bool* get_address_of_hasPosition_8() { return &___hasPosition_8; }
	inline void set_hasPosition_8(bool value)
	{
		___hasPosition_8 = value;
	}

	inline static int32_t get_offset_of_hasColor_9() { return static_cast<int32_t>(offsetof(pb_Vertex_t4136735762, ___hasColor_9)); }
	inline bool get_hasColor_9() const { return ___hasColor_9; }
	inline bool* get_address_of_hasColor_9() { return &___hasColor_9; }
	inline void set_hasColor_9(bool value)
	{
		___hasColor_9 = value;
	}

	inline static int32_t get_offset_of_hasNormal_10() { return static_cast<int32_t>(offsetof(pb_Vertex_t4136735762, ___hasNormal_10)); }
	inline bool get_hasNormal_10() const { return ___hasNormal_10; }
	inline bool* get_address_of_hasNormal_10() { return &___hasNormal_10; }
	inline void set_hasNormal_10(bool value)
	{
		___hasNormal_10 = value;
	}

	inline static int32_t get_offset_of_hasTangent_11() { return static_cast<int32_t>(offsetof(pb_Vertex_t4136735762, ___hasTangent_11)); }
	inline bool get_hasTangent_11() const { return ___hasTangent_11; }
	inline bool* get_address_of_hasTangent_11() { return &___hasTangent_11; }
	inline void set_hasTangent_11(bool value)
	{
		___hasTangent_11 = value;
	}

	inline static int32_t get_offset_of_hasUv0_12() { return static_cast<int32_t>(offsetof(pb_Vertex_t4136735762, ___hasUv0_12)); }
	inline bool get_hasUv0_12() const { return ___hasUv0_12; }
	inline bool* get_address_of_hasUv0_12() { return &___hasUv0_12; }
	inline void set_hasUv0_12(bool value)
	{
		___hasUv0_12 = value;
	}

	inline static int32_t get_offset_of_hasUv2_13() { return static_cast<int32_t>(offsetof(pb_Vertex_t4136735762, ___hasUv2_13)); }
	inline bool get_hasUv2_13() const { return ___hasUv2_13; }
	inline bool* get_address_of_hasUv2_13() { return &___hasUv2_13; }
	inline void set_hasUv2_13(bool value)
	{
		___hasUv2_13 = value;
	}

	inline static int32_t get_offset_of_hasUv3_14() { return static_cast<int32_t>(offsetof(pb_Vertex_t4136735762, ___hasUv3_14)); }
	inline bool get_hasUv3_14() const { return ___hasUv3_14; }
	inline bool* get_address_of_hasUv3_14() { return &___hasUv3_14; }
	inline void set_hasUv3_14(bool value)
	{
		___hasUv3_14 = value;
	}

	inline static int32_t get_offset_of_hasUv4_15() { return static_cast<int32_t>(offsetof(pb_Vertex_t4136735762, ___hasUv4_15)); }
	inline bool get_hasUv4_15() const { return ___hasUv4_15; }
	inline bool* get_address_of_hasUv4_15() { return &___hasUv4_15; }
	inline void set_hasUv4_15(bool value)
	{
		___hasUv4_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_VERTEX_T4136735762_H
#ifndef PB_EDGELOOKUP_T2280733452_H
#define PB_EDGELOOKUP_T2280733452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pb_EdgeLookup
struct  pb_EdgeLookup_t2280733452  : public RuntimeObject
{
public:
	// ProBuilder2.Common.pb_Edge ProBuilder2.Common.pb_EdgeLookup::local
	pb_Edge_t3313513031  ___local_0;
	// ProBuilder2.Common.pb_Edge ProBuilder2.Common.pb_EdgeLookup::common
	pb_Edge_t3313513031  ___common_1;

public:
	inline static int32_t get_offset_of_local_0() { return static_cast<int32_t>(offsetof(pb_EdgeLookup_t2280733452, ___local_0)); }
	inline pb_Edge_t3313513031  get_local_0() const { return ___local_0; }
	inline pb_Edge_t3313513031 * get_address_of_local_0() { return &___local_0; }
	inline void set_local_0(pb_Edge_t3313513031  value)
	{
		___local_0 = value;
	}

	inline static int32_t get_offset_of_common_1() { return static_cast<int32_t>(offsetof(pb_EdgeLookup_t2280733452, ___common_1)); }
	inline pb_Edge_t3313513031  get_common_1() const { return ___common_1; }
	inline pb_Edge_t3313513031 * get_address_of_common_1() { return &___common_1; }
	inline void set_common_1(pb_Edge_t3313513031  value)
	{
		___common_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_EDGELOOKUP_T2280733452_H
#ifndef NUMBERSTYLES_T617258130_H
#define NUMBERSTYLES_T617258130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberStyles
struct  NumberStyles_t617258130 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t617258130, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERSTYLES_T617258130_H
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
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
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
#ifndef FUNC_2_T148644517_H
#define FUNC_2_T148644517_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Char,System.Boolean>
struct  Func_2_t148644517  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T148644517_H
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
#ifndef FUNC_2_T3387623203_H
#define FUNC_2_T3387623203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<ProBuilder2.Common.pb_WingedEdge,ProBuilder2.Common.pb_Edge>
struct  Func_2_t3387623203  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3387623203_H
#ifndef FUNC_2_T3531098348_H
#define FUNC_2_T3531098348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<ProBuilder2.Common.pb_Edge,System.Int32>
struct  Func_2_t3531098348  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3531098348_H
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
#ifndef FUNC_2_T171398137_H
#define FUNC_2_T171398137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<ProBuilder2.Common.pb_WingedEdge,System.Boolean>
struct  Func_2_t171398137  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T171398137_H
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
#ifndef PB_OBJECT_T647128553_H
#define PB_OBJECT_T647128553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// pb_Object
struct  pb_Object_t647128553  : public MonoBehaviour_t3962482529
{
public:
	// ProBuilder2.Common.pb_Face[] pb_Object::_quads
	pb_FaceU5BU5D_t3313432671* ____quads_2;
	// ProBuilder2.Common.pb_IntArray[] pb_Object::_sharedIndices
	pb_IntArrayU5BU5D_t1561170814* ____sharedIndices_3;
	// UnityEngine.Vector3[] pb_Object::_vertices
	Vector3U5BU5D_t1718750761* ____vertices_4;
	// UnityEngine.Vector2[] pb_Object::_uv
	Vector2U5BU5D_t1457185986* ____uv_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> pb_Object::_uv3
	List_1_t496136383 * ____uv3_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> pb_Object::_uv4
	List_1_t496136383 * ____uv4_7;
	// UnityEngine.Vector4[] pb_Object::_tangents
	Vector4U5BU5D_t934056436* ____tangents_8;
	// ProBuilder2.Common.pb_IntArray[] pb_Object::_sharedIndicesUV
	pb_IntArrayU5BU5D_t1561170814* ____sharedIndicesUV_9;
	// UnityEngine.Color[] pb_Object::_colors
	ColorU5BU5D_t941916413* ____colors_10;
	// System.Boolean pb_Object::userCollisions
	bool ___userCollisions_11;
	// System.Boolean pb_Object::isSelectable
	bool ___isSelectable_12;
	// ProBuilder2.Common.pb_UnwrapParameters pb_Object::unwrapParameters
	pb_UnwrapParameters_t2793299594 * ___unwrapParameters_13;
	// System.String pb_Object::asset_guid
	String_t* ___asset_guid_14;
	// System.Boolean pb_Object::dontDestroyMeshOnDelete
	bool ___dontDestroyMeshOnDelete_17;
	// System.Int32[] pb_Object::m_selectedFaces
	Int32U5BU5D_t385246372* ___m_selectedFaces_18;
	// ProBuilder2.Common.pb_Edge[] pb_Object::m_SelectedEdges
	pb_EdgeU5BU5D_t4057067710* ___m_SelectedEdges_19;
	// System.Int32[] pb_Object::m_selectedTriangles
	Int32U5BU5D_t385246372* ___m_selectedTriangles_20;

public:
	inline static int32_t get_offset_of__quads_2() { return static_cast<int32_t>(offsetof(pb_Object_t647128553, ____quads_2)); }
	inline pb_FaceU5BU5D_t3313432671* get__quads_2() const { return ____quads_2; }
	inline pb_FaceU5BU5D_t3313432671** get_address_of__quads_2() { return &____quads_2; }
	inline void set__quads_2(pb_FaceU5BU5D_t3313432671* value)
	{
		____quads_2 = value;
		Il2CppCodeGenWriteBarrier((&____quads_2), value);
	}

	inline static int32_t get_offset_of__sharedIndices_3() { return static_cast<int32_t>(offsetof(pb_Object_t647128553, ____sharedIndices_3)); }
	inline pb_IntArrayU5BU5D_t1561170814* get__sharedIndices_3() const { return ____sharedIndices_3; }
	inline pb_IntArrayU5BU5D_t1561170814** get_address_of__sharedIndices_3() { return &____sharedIndices_3; }
	inline void set__sharedIndices_3(pb_IntArrayU5BU5D_t1561170814* value)
	{
		____sharedIndices_3 = value;
		Il2CppCodeGenWriteBarrier((&____sharedIndices_3), value);
	}

	inline static int32_t get_offset_of__vertices_4() { return static_cast<int32_t>(offsetof(pb_Object_t647128553, ____vertices_4)); }
	inline Vector3U5BU5D_t1718750761* get__vertices_4() const { return ____vertices_4; }
	inline Vector3U5BU5D_t1718750761** get_address_of__vertices_4() { return &____vertices_4; }
	inline void set__vertices_4(Vector3U5BU5D_t1718750761* value)
	{
		____vertices_4 = value;
		Il2CppCodeGenWriteBarrier((&____vertices_4), value);
	}

	inline static int32_t get_offset_of__uv_5() { return static_cast<int32_t>(offsetof(pb_Object_t647128553, ____uv_5)); }
	inline Vector2U5BU5D_t1457185986* get__uv_5() const { return ____uv_5; }
	inline Vector2U5BU5D_t1457185986** get_address_of__uv_5() { return &____uv_5; }
	inline void set__uv_5(Vector2U5BU5D_t1457185986* value)
	{
		____uv_5 = value;
		Il2CppCodeGenWriteBarrier((&____uv_5), value);
	}

	inline static int32_t get_offset_of__uv3_6() { return static_cast<int32_t>(offsetof(pb_Object_t647128553, ____uv3_6)); }
	inline List_1_t496136383 * get__uv3_6() const { return ____uv3_6; }
	inline List_1_t496136383 ** get_address_of__uv3_6() { return &____uv3_6; }
	inline void set__uv3_6(List_1_t496136383 * value)
	{
		____uv3_6 = value;
		Il2CppCodeGenWriteBarrier((&____uv3_6), value);
	}

	inline static int32_t get_offset_of__uv4_7() { return static_cast<int32_t>(offsetof(pb_Object_t647128553, ____uv4_7)); }
	inline List_1_t496136383 * get__uv4_7() const { return ____uv4_7; }
	inline List_1_t496136383 ** get_address_of__uv4_7() { return &____uv4_7; }
	inline void set__uv4_7(List_1_t496136383 * value)
	{
		____uv4_7 = value;
		Il2CppCodeGenWriteBarrier((&____uv4_7), value);
	}

	inline static int32_t get_offset_of__tangents_8() { return static_cast<int32_t>(offsetof(pb_Object_t647128553, ____tangents_8)); }
	inline Vector4U5BU5D_t934056436* get__tangents_8() const { return ____tangents_8; }
	inline Vector4U5BU5D_t934056436** get_address_of__tangents_8() { return &____tangents_8; }
	inline void set__tangents_8(Vector4U5BU5D_t934056436* value)
	{
		____tangents_8 = value;
		Il2CppCodeGenWriteBarrier((&____tangents_8), value);
	}

	inline static int32_t get_offset_of__sharedIndicesUV_9() { return static_cast<int32_t>(offsetof(pb_Object_t647128553, ____sharedIndicesUV_9)); }
	inline pb_IntArrayU5BU5D_t1561170814* get__sharedIndicesUV_9() const { return ____sharedIndicesUV_9; }
	inline pb_IntArrayU5BU5D_t1561170814** get_address_of__sharedIndicesUV_9() { return &____sharedIndicesUV_9; }
	inline void set__sharedIndicesUV_9(pb_IntArrayU5BU5D_t1561170814* value)
	{
		____sharedIndicesUV_9 = value;
		Il2CppCodeGenWriteBarrier((&____sharedIndicesUV_9), value);
	}

	inline static int32_t get_offset_of__colors_10() { return static_cast<int32_t>(offsetof(pb_Object_t647128553, ____colors_10)); }
	inline ColorU5BU5D_t941916413* get__colors_10() const { return ____colors_10; }
	inline ColorU5BU5D_t941916413** get_address_of__colors_10() { return &____colors_10; }
	inline void set__colors_10(ColorU5BU5D_t941916413* value)
	{
		____colors_10 = value;
		Il2CppCodeGenWriteBarrier((&____colors_10), value);
	}

	inline static int32_t get_offset_of_userCollisions_11() { return static_cast<int32_t>(offsetof(pb_Object_t647128553, ___userCollisions_11)); }
	inline bool get_userCollisions_11() const { return ___userCollisions_11; }
	inline bool* get_address_of_userCollisions_11() { return &___userCollisions_11; }
	inline void set_userCollisions_11(bool value)
	{
		___userCollisions_11 = value;
	}

	inline static int32_t get_offset_of_isSelectable_12() { return static_cast<int32_t>(offsetof(pb_Object_t647128553, ___isSelectable_12)); }
	inline bool get_isSelectable_12() const { return ___isSelectable_12; }
	inline bool* get_address_of_isSelectable_12() { return &___isSelectable_12; }
	inline void set_isSelectable_12(bool value)
	{
		___isSelectable_12 = value;
	}

	inline static int32_t get_offset_of_unwrapParameters_13() { return static_cast<int32_t>(offsetof(pb_Object_t647128553, ___unwrapParameters_13)); }
	inline pb_UnwrapParameters_t2793299594 * get_unwrapParameters_13() const { return ___unwrapParameters_13; }
	inline pb_UnwrapParameters_t2793299594 ** get_address_of_unwrapParameters_13() { return &___unwrapParameters_13; }
	inline void set_unwrapParameters_13(pb_UnwrapParameters_t2793299594 * value)
	{
		___unwrapParameters_13 = value;
		Il2CppCodeGenWriteBarrier((&___unwrapParameters_13), value);
	}

	inline static int32_t get_offset_of_asset_guid_14() { return static_cast<int32_t>(offsetof(pb_Object_t647128553, ___asset_guid_14)); }
	inline String_t* get_asset_guid_14() const { return ___asset_guid_14; }
	inline String_t** get_address_of_asset_guid_14() { return &___asset_guid_14; }
	inline void set_asset_guid_14(String_t* value)
	{
		___asset_guid_14 = value;
		Il2CppCodeGenWriteBarrier((&___asset_guid_14), value);
	}

	inline static int32_t get_offset_of_dontDestroyMeshOnDelete_17() { return static_cast<int32_t>(offsetof(pb_Object_t647128553, ___dontDestroyMeshOnDelete_17)); }
	inline bool get_dontDestroyMeshOnDelete_17() const { return ___dontDestroyMeshOnDelete_17; }
	inline bool* get_address_of_dontDestroyMeshOnDelete_17() { return &___dontDestroyMeshOnDelete_17; }
	inline void set_dontDestroyMeshOnDelete_17(bool value)
	{
		___dontDestroyMeshOnDelete_17 = value;
	}

	inline static int32_t get_offset_of_m_selectedFaces_18() { return static_cast<int32_t>(offsetof(pb_Object_t647128553, ___m_selectedFaces_18)); }
	inline Int32U5BU5D_t385246372* get_m_selectedFaces_18() const { return ___m_selectedFaces_18; }
	inline Int32U5BU5D_t385246372** get_address_of_m_selectedFaces_18() { return &___m_selectedFaces_18; }
	inline void set_m_selectedFaces_18(Int32U5BU5D_t385246372* value)
	{
		___m_selectedFaces_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_selectedFaces_18), value);
	}

	inline static int32_t get_offset_of_m_SelectedEdges_19() { return static_cast<int32_t>(offsetof(pb_Object_t647128553, ___m_SelectedEdges_19)); }
	inline pb_EdgeU5BU5D_t4057067710* get_m_SelectedEdges_19() const { return ___m_SelectedEdges_19; }
	inline pb_EdgeU5BU5D_t4057067710** get_address_of_m_SelectedEdges_19() { return &___m_SelectedEdges_19; }
	inline void set_m_SelectedEdges_19(pb_EdgeU5BU5D_t4057067710* value)
	{
		___m_SelectedEdges_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectedEdges_19), value);
	}

	inline static int32_t get_offset_of_m_selectedTriangles_20() { return static_cast<int32_t>(offsetof(pb_Object_t647128553, ___m_selectedTriangles_20)); }
	inline Int32U5BU5D_t385246372* get_m_selectedTriangles_20() const { return ___m_selectedTriangles_20; }
	inline Int32U5BU5D_t385246372** get_address_of_m_selectedTriangles_20() { return &___m_selectedTriangles_20; }
	inline void set_m_selectedTriangles_20(Int32U5BU5D_t385246372* value)
	{
		___m_selectedTriangles_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_selectedTriangles_20), value);
	}
};

struct pb_Object_t647128553_StaticFields
{
public:
	// System.Action`1<pb_Object> pb_Object::onDestroyObject
	Action_1_t819596148 * ___onDestroyObject_15;
	// System.Action`1<pb_Object> pb_Object::onElementSelectionChanged
	Action_1_t819596148 * ___onElementSelectionChanged_16;
	// System.Func`2<ProBuilder2.Common.pb_Face,System.Int32> pb_Object::<>f__am$cache0
	Func_2_t2787463309 * ___U3CU3Ef__amU24cache0_21;
	// System.Func`2<ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_Edge> pb_Object::<>f__am$cache1
	Func_2_t3893665626 * ___U3CU3Ef__amU24cache1_22;
	// System.Func`2<ProBuilder2.Common.pb_Face,System.Boolean> pb_Object::<>f__am$cache2
	Func_2_t4228772817 * ___U3CU3Ef__amU24cache2_23;
	// System.Func`2<ProBuilder2.Common.pb_Submesh,UnityEngine.Material> pb_Object::<>f__am$cache3
	Func_2_t2239399596 * ___U3CU3Ef__amU24cache3_24;

public:
	inline static int32_t get_offset_of_onDestroyObject_15() { return static_cast<int32_t>(offsetof(pb_Object_t647128553_StaticFields, ___onDestroyObject_15)); }
	inline Action_1_t819596148 * get_onDestroyObject_15() const { return ___onDestroyObject_15; }
	inline Action_1_t819596148 ** get_address_of_onDestroyObject_15() { return &___onDestroyObject_15; }
	inline void set_onDestroyObject_15(Action_1_t819596148 * value)
	{
		___onDestroyObject_15 = value;
		Il2CppCodeGenWriteBarrier((&___onDestroyObject_15), value);
	}

	inline static int32_t get_offset_of_onElementSelectionChanged_16() { return static_cast<int32_t>(offsetof(pb_Object_t647128553_StaticFields, ___onElementSelectionChanged_16)); }
	inline Action_1_t819596148 * get_onElementSelectionChanged_16() const { return ___onElementSelectionChanged_16; }
	inline Action_1_t819596148 ** get_address_of_onElementSelectionChanged_16() { return &___onElementSelectionChanged_16; }
	inline void set_onElementSelectionChanged_16(Action_1_t819596148 * value)
	{
		___onElementSelectionChanged_16 = value;
		Il2CppCodeGenWriteBarrier((&___onElementSelectionChanged_16), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_21() { return static_cast<int32_t>(offsetof(pb_Object_t647128553_StaticFields, ___U3CU3Ef__amU24cache0_21)); }
	inline Func_2_t2787463309 * get_U3CU3Ef__amU24cache0_21() const { return ___U3CU3Ef__amU24cache0_21; }
	inline Func_2_t2787463309 ** get_address_of_U3CU3Ef__amU24cache0_21() { return &___U3CU3Ef__amU24cache0_21; }
	inline void set_U3CU3Ef__amU24cache0_21(Func_2_t2787463309 * value)
	{
		___U3CU3Ef__amU24cache0_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_22() { return static_cast<int32_t>(offsetof(pb_Object_t647128553_StaticFields, ___U3CU3Ef__amU24cache1_22)); }
	inline Func_2_t3893665626 * get_U3CU3Ef__amU24cache1_22() const { return ___U3CU3Ef__amU24cache1_22; }
	inline Func_2_t3893665626 ** get_address_of_U3CU3Ef__amU24cache1_22() { return &___U3CU3Ef__amU24cache1_22; }
	inline void set_U3CU3Ef__amU24cache1_22(Func_2_t3893665626 * value)
	{
		___U3CU3Ef__amU24cache1_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_23() { return static_cast<int32_t>(offsetof(pb_Object_t647128553_StaticFields, ___U3CU3Ef__amU24cache2_23)); }
	inline Func_2_t4228772817 * get_U3CU3Ef__amU24cache2_23() const { return ___U3CU3Ef__amU24cache2_23; }
	inline Func_2_t4228772817 ** get_address_of_U3CU3Ef__amU24cache2_23() { return &___U3CU3Ef__amU24cache2_23; }
	inline void set_U3CU3Ef__amU24cache2_23(Func_2_t4228772817 * value)
	{
		___U3CU3Ef__amU24cache2_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_24() { return static_cast<int32_t>(offsetof(pb_Object_t647128553_StaticFields, ___U3CU3Ef__amU24cache3_24)); }
	inline Func_2_t2239399596 * get_U3CU3Ef__amU24cache3_24() const { return ___U3CU3Ef__amU24cache3_24; }
	inline Func_2_t2239399596 ** get_address_of_U3CU3Ef__amU24cache3_24() { return &___U3CU3Ef__amU24cache3_24; }
	inline void set_U3CU3Ef__amU24cache3_24(Func_2_t2239399596 * value)
	{
		___U3CU3Ef__amU24cache3_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_OBJECT_T647128553_H
// ProBuilder2.Common.pb_Vertex[]
struct pb_VertexU5BU5D_t2681278311  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) pb_Vertex_t4136735762 * m_Items[1];

public:
	inline pb_Vertex_t4136735762 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline pb_Vertex_t4136735762 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, pb_Vertex_t4136735762 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline pb_Vertex_t4136735762 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline pb_Vertex_t4136735762 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, pb_Vertex_t4136735762 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t941916413  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_t2555686324  m_Items[1];

public:
	inline Color_t2555686324  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_t2555686324 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_t2555686324  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_t2555686324  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_t2555686324 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_t2555686324  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_t2156229523  m_Items[1];

public:
	inline Vector2_t2156229523  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t2156229523  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t934056436  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_t3319028937  m_Items[1];

public:
	inline Vector4_t3319028937  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t3319028937 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t3319028937  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t3319028937  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t3319028937 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t3319028937  value)
	{
		m_Items[index] = value;
	}
};
// ProBuilder2.Common.pb_IntArray[]
struct pb_IntArrayU5BU5D_t1561170814  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) pb_IntArray_t829339271 * m_Items[1];

public:
	inline pb_IntArray_t829339271 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline pb_IntArray_t829339271 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, pb_IntArray_t829339271 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline pb_IntArray_t829339271 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline pb_IntArray_t829339271 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, pb_IntArray_t829339271 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// ProBuilder2.Common.pb_EdgeLookup[]
struct pb_EdgeLookupU5BU5D_t3966966597  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) pb_EdgeLookup_t2280733452 * m_Items[1];

public:
	inline pb_EdgeLookup_t2280733452 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline pb_EdgeLookup_t2280733452 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, pb_EdgeLookup_t2280733452 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline pb_EdgeLookup_t2280733452 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline pb_EdgeLookup_t2280733452 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, pb_EdgeLookup_t2280733452 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// ProBuilder2.Common.pb_Edge[]
struct pb_EdgeU5BU5D_t4057067710  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) pb_Edge_t3313513031  m_Items[1];

public:
	inline pb_Edge_t3313513031  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline pb_Edge_t3313513031 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, pb_Edge_t3313513031  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline pb_Edge_t3313513031  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline pb_Edge_t3313513031 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, pb_Edge_t3313513031  value)
	{
		m_Items[index] = value;
	}
};
// ProBuilder2.Common.pb_Face[]
struct pb_FaceU5BU5D_t3313432671  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) pb_Face_t613471354 * m_Items[1];

public:
	inline pb_Face_t613471354 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline pb_Face_t613471354 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, pb_Face_t613471354 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline pb_Face_t613471354 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline pb_Face_t613471354 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, pb_Face_t613471354 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_t3600365921 * m_Items[1];

public:
	inline Transform_t3600365921 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_t3600365921 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_t3600365921 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Transform_t3600365921 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_t3600365921 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_t3600365921 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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


// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor()
extern "C"  void List_1__ctor_m4022596417_gshared (List_1_t496136383 * __this, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  int32_t Enumerable_Count_TisVector3_t3722313464_m3662092083_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Color>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  int32_t Enumerable_Count_TisColor_t2555686324_m2400385796_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Vector4>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  int32_t Enumerable_Count_TisVector4_t3319028937_m2634495408_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Vector2>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  int32_t Enumerable_Count_TisVector2_t2156229523_m4098885708_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Item(System.Int32)
extern "C"  Vector4_t3319028937  List_1_get_Item_m783205072_gshared (List_1_t496136383 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m955356357_gshared (List_1_t496136383 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Add(!0)
extern "C"  void List_1_Add_m2996644200_gshared (List_1_t496136383 * __this, Vector4_t3319028937  p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C"  int32_t List_1_get_Count_m361000296_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  List_1_t128053199 * Enumerable_ToList_TisInt32_t2950945753_m2000905797_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.String ProBuilder2.Common.pbUtil::ToString<System.Int32>(System.Collections.Generic.IEnumerable`1<T>,System.String)
extern "C"  String_t* pbUtil_ToString_TisInt32_t2950945753_m2571025276_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___arr0, String_t* ___separator1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C"  void List_1__ctor_m1204004817_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m1328026504_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1_AddRange_m3513848896_gshared (List_1_t128053199 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1__ctor_m3072246782_gshared (List_1_t490620477 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>::get_Item(System.Int32)
extern "C"  pb_Edge_t3313513031  List_1_get_Item_m2063820192_gshared (List_1_t490620477 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>::set_Item(System.Int32,!0)
extern "C"  void List_1_set_Item_m462825244_gshared (List_1_t490620477 * __this, int32_t p0, pb_Edge_t3313513031  p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>::get_Count()
extern "C"  int32_t List_1_get_Count_m2366896369_gshared (List_1_t490620477 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m2601736566_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m1190268628_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m1379384250_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m135484220_gshared (Func_2_t3759279471 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C"  RuntimeObject* Enumerable_Where_TisRuntimeObject_m3454096398_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t3759279471 * p1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,ProBuilder2.Common.pb_Edge>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1634456428_gshared (Func_2_t2680537241 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,ProBuilder2.Common.pb_Edge>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C"  RuntimeObject* Enumerable_Select_TisRuntimeObject_Tispb_Edge_t3313513031_m930029922_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t2680537241 * p1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<ProBuilder2.Common.pb_Edge>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  List_1_t490620477 * Enumerable_ToList_Tispb_Edge_t3313513031_m1997905656_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::get_Count()
extern "C"  int32_t HashSet_1_get_Count_m3008068950_gshared (HashSet_1_t1515895227 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<ProBuilder2.Common.pb_Edge,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m2324675885_gshared (Func_2_t3531098348 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<ProBuilder2.Common.pb_Edge,System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C"  RuntimeObject* Enumerable_Select_Tispb_Edge_t3313513031_TisInt32_t2950945753_m478876776_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t3531098348 * p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Distinct<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  RuntimeObject* Enumerable_Distinct_TisRuntimeObject_m1848806572_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ProBuilder2.Common.pb_Edge,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m3816144791_gshared (Dictionary_2_t1345673537 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(!0)
extern "C"  int32_t Dictionary_2_get_Item_m2924502254_gshared (Dictionary_2_t1839659084 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<ProBuilder2.Common.pb_Edge,System.Object>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m2657957682_gshared (Dictionary_2_t1345673537 * __this, pb_Edge_t3313513031  p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ProBuilder2.Common.pb_Edge,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m141250566_gshared (Dictionary_2_t1345673537 * __this, pb_Edge_t3313513031  p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(!0)
extern "C"  bool HashSet_1_Contains_m2757512434_gshared (HashSet_1_t1515895227 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m3105409630_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m1996088172_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C"  bool Dictionary_2_Remove_m2051736387_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Char,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m2318007926_gshared (Func_2_t148644517 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Char>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C"  RuntimeObject* Enumerable_Where_TisChar_t3634460470_m3580589701_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t148644517 * p1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Char>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  CharU5BU5D_t3528271667* Enumerable_ToArray_TisChar_t3634460470_m2668536093_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
extern "C"  void List_1__ctor_m1778067824_gshared (List_1_t899420910 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
extern "C"  void List_1_Add_m1524640104_gshared (List_1_t899420910 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
extern "C"  Vector3U5BU5D_t1718750761* List_1_ToArray_m495485525_gshared (List_1_t899420910 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Contains<System.Char>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
extern "C"  bool Enumerable_Contains_TisChar_t3634460470_m2857789489_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Il2CppChar p1, const RuntimeMethod* method);

// System.Int32 ProBuilder2.Common.pb_Vector::HashFloat(System.Single)
extern "C"  int32_t pb_Vector_HashFloat_m1352012897 (RuntimeObject * __this /* static, unused */, float ___f0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_Vertex::Equals(ProBuilder2.Common.pb_Vertex)
extern "C"  bool pb_Vertex_Equals_m3200161041 (pb_Vertex_t4136735762 * __this, pb_Vertex_t4136735762 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_Math::Approx3(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  bool pb_Math_Approx3_m2054702743 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___v0, Vector3_t3722313464  ___b1, float ___delta2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_Math::ApproxC(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  bool pb_Math_ApproxC_m872275904 (RuntimeObject * __this /* static, unused */, Color_t2555686324  ___a0, Color_t2555686324  ___b1, float ___delta2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_Math::Approx4(UnityEngine.Vector4,UnityEngine.Vector4,System.Single)
extern "C"  bool pb_Math_Approx4_m2908990635 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  ___v0, Vector4_t3319028937  ___b1, float ___delta2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_Math::Approx2(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  bool pb_Math_Approx2_m1899892256 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___v0, Vector2_t2156229523  ___b1, float ___delta2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_Vector::GetHashCode(UnityEngine.Vector3)
extern "C"  int32_t pb_Vector_GetHashCode_m2609267096 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___v0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_Vector::GetHashCode(UnityEngine.Vector2)
extern "C"  int32_t pb_Vector_GetHashCode_m270614936 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___v0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Vertex::.ctor(ProBuilder2.Common.pb_Vertex)
extern "C"  void pb_Vertex__ctor_m667004002 (pb_Vertex_t4136735762 * __this, pb_Vertex_t4136735762 * ___v0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Vertex::Add(ProBuilder2.Common.pb_Vertex)
extern "C"  void pb_Vertex_Add_m3106850531 (pb_Vertex_t4136735762 * __this, pb_Vertex_t4136735762 * ___b0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::op_Addition(UnityEngine.Color,UnityEngine.Color)
extern "C"  Color_t2555686324  Color_op_Addition_m3293657895 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, Color_t2555686324  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Addition(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  Vector4_t3319028937  Vector4_op_Addition_m787366691 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  p0, Vector4_t3319028937  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_Addition_m800700293 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Vertex::Subtract(ProBuilder2.Common.pb_Vertex)
extern "C"  void pb_Vertex_Subtract_m561667742 (pb_Vertex_t4136735762 * __this, pb_Vertex_t4136735762 * ___b0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::op_Subtraction(UnityEngine.Color,UnityEngine.Color)
extern "C"  Color_t2555686324  Color_op_Subtraction_m181229690 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, Color_t2555686324  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  Vector4_t3319028937  Vector4_op_Subtraction_m1632208160 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  p0, Vector4_t3319028937  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_Subtraction_m73004381 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Vertex::Multiply(System.Single)
extern "C"  void pb_Vertex_Multiply_m202452114 (pb_Vertex_t4136735762 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
extern "C"  Color_t2555686324  Color_op_Multiply_m2887457390 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
extern "C"  Vector4_t3319028937  Vector4_op_Multiply_m213790997 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2156229523  Vector2_op_Multiply_m2347887432 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Vertex::Divide(System.Single)
extern "C"  void pb_Vertex_Divide_m3627993064 (pb_Vertex_t4136735762 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Division_m510815599 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::op_Division(UnityEngine.Color,System.Single)
extern "C"  Color_t2555686324  Color_op_Division_m1074517668 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
extern "C"  Vector4_t3319028937  Vector4_op_Division_m264790546 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2156229523  Vector2_op_Division_m132623573 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::Normalize()
extern "C"  void Vector3_Normalize_m914904454 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
extern "C"  Vector4_t3319028937  Color_op_Implicit_m986621988 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::Normalize()
extern "C"  void Vector4_Normalize_m2596230534 (Vector4_t3319028937 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::Normalize()
extern "C"  void Vector2_Normalize_m1906922873 (Vector2_t2156229523 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString()
extern "C"  String_t* Vector3_ToString_m759076600 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 pb_Object::get_vertexCount()
extern "C"  int32_t pb_Object_get_vertexCount_m2373621629 (pb_Object_t647128553 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] pb_Object::get_vertices()
extern "C"  Vector3U5BU5D_t1718750761* pb_Object_get_vertices_m4036343467 (pb_Object_t647128553 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] pb_Object::get_colors()
extern "C"  ColorU5BU5D_t941916413* pb_Object_get_colors_m1446679300 (pb_Object_t647128553 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] pb_Object::get_uv()
extern "C"  Vector2U5BU5D_t1457185986* pb_Object_get_uv_m1582891588 (pb_Object_t647128553 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh pb_Object::get_msh()
extern "C"  Mesh_t3648964284 * pb_Object_get_msh_m2771648845 (pb_Object_t647128553 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
extern "C"  Vector3U5BU5D_t1718750761* Mesh_get_normals_m4099615978 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4[] UnityEngine.Mesh::get_tangents()
extern "C"  Vector4U5BU5D_t934056436* Mesh_get_tangents_m3279676290 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv2()
extern "C"  Vector2U5BU5D_t1457185986* Mesh_get_uv2_m3615020997 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor()
#define List_1__ctor_m4022596417(__this, method) ((  void (*) (List_1_t496136383 *, const RuntimeMethod*))List_1__ctor_m4022596417_gshared)(__this, method)
// System.Void pb_Object::GetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C"  void pb_Object_GetUVs_m2937565246 (pb_Object_t647128553 * __this, int32_t ___channel0, List_1_t496136383 * ___uvs1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Count_TisVector3_t3722313464_m3662092083(__this /* static, unused */, p0, method) ((  int32_t (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisVector3_t3722313464_m3662092083_gshared)(__this /* static, unused */, p0, method)
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Color>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Count_TisColor_t2555686324_m2400385796(__this /* static, unused */, p0, method) ((  int32_t (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisColor_t2555686324_m2400385796_gshared)(__this /* static, unused */, p0, method)
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Vector4>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Count_TisVector4_t3319028937_m2634495408(__this /* static, unused */, p0, method) ((  int32_t (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisVector4_t3319028937_m2634495408_gshared)(__this /* static, unused */, p0, method)
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Vector2>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Count_TisVector2_t2156229523_m4098885708(__this /* static, unused */, p0, method) ((  int32_t (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisVector2_t2156229523_m4098885708_gshared)(__this /* static, unused */, p0, method)
// System.Void ProBuilder2.Common.pb_Vertex::.ctor(System.Boolean)
extern "C"  void pb_Vertex__ctor_m4018012188 (pb_Vertex_t4136735762 * __this, bool ___hasAllValues0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Item(System.Int32)
#define List_1_get_Item_m783205072(__this, p0, method) ((  Vector4_t3319028937  (*) (List_1_t496136383 *, int32_t, const RuntimeMethod*))List_1_get_Item_m783205072_gshared)(__this, p0, method)
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
extern "C"  int32_t Mesh_get_vertexCount_m884140614 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C"  Vector3U5BU5D_t1718750761* Mesh_get_vertices_m3585684815 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Mesh::get_colors()
extern "C"  ColorU5BU5D_t941916413* Mesh_get_colors_m1375263373 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
extern "C"  Vector2U5BU5D_t1457185986* Mesh_get_uv_m4017248 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::GetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C"  void Mesh_GetUVs_m55185155 (Mesh_t3648964284 * __this, int32_t p0, List_1_t496136383 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Vertex::GetArrays(System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>,UnityEngine.Vector3[]&,UnityEngine.Color[]&,UnityEngine.Vector2[]&,UnityEngine.Vector3[]&,UnityEngine.Vector4[]&,UnityEngine.Vector2[]&,System.Collections.Generic.List`1<UnityEngine.Vector4>&,System.Collections.Generic.List`1<UnityEngine.Vector4>&,ProBuilder2.Common.AttributeType)
extern "C"  void pb_Vertex_GetArrays_m1138548130 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___vertices0, Vector3U5BU5D_t1718750761** ___position1, ColorU5BU5D_t941916413** ___color2, Vector2U5BU5D_t1457185986** ___uv03, Vector3U5BU5D_t1718750761** ___normal4, Vector4U5BU5D_t934056436** ___tangent5, Vector2U5BU5D_t1457185986** ___uv26, List_1_t496136383 ** ___uv37, List_1_t496136383 ** ___uv48, uint16_t ___attributes9, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor(System.Int32)
#define List_1__ctor_m955356357(__this, p0, method) ((  void (*) (List_1_t496136383 *, int32_t, const RuntimeMethod*))List_1__ctor_m955356357_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Add(!0)
#define List_1_Add_m2996644200(__this, p0, method) ((  void (*) (List_1_t496136383 *, Vector4_t3319028937 , const RuntimeMethod*))List_1_Add_m2996644200_gshared)(__this, p0, method)
// System.Void ProBuilder2.Common.pb_Vertex::GetArrays(System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>,UnityEngine.Vector3[]&,UnityEngine.Color[]&,UnityEngine.Vector2[]&,UnityEngine.Vector3[]&,UnityEngine.Vector4[]&,UnityEngine.Vector2[]&,System.Collections.Generic.List`1<UnityEngine.Vector4>&,System.Collections.Generic.List`1<UnityEngine.Vector4>&)
extern "C"  void pb_Vertex_GetArrays_m4287872558 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___vertices0, Vector3U5BU5D_t1718750761** ___position1, ColorU5BU5D_t941916413** ___color2, Vector2U5BU5D_t1457185986** ___uv03, Vector3U5BU5D_t1718750761** ___normal4, Vector4U5BU5D_t934056436** ___tangent5, Vector2U5BU5D_t1457185986** ___uv26, List_1_t496136383 ** ___uv37, List_1_t496136383 ** ___uv48, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear()
extern "C"  void Mesh_Clear_m2630385472 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C"  void Mesh_set_vertices_m2084450642 (Mesh_t3648964284 * __this, Vector3U5BU5D_t1718750761* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_colors(UnityEngine.Color[])
extern "C"  void Mesh_set_colors_m2218481242 (Mesh_t3648964284 * __this, ColorU5BU5D_t941916413* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C"  void Mesh_set_uv_m1258646872 (Mesh_t3648964284 * __this, Vector2U5BU5D_t1457185986* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
extern "C"  void Mesh_set_normals_m332514528 (Mesh_t3648964284 * __this, Vector3U5BU5D_t1718750761* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_tangents(UnityEngine.Vector4[])
extern "C"  void Mesh_set_tangents_m1592250690 (Mesh_t3648964284 * __this, Vector4U5BU5D_t934056436* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])
extern "C"  void Mesh_set_uv2_m2840654016 (Mesh_t3648964284 * __this, Vector2U5BU5D_t1457185986* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C"  void Mesh_SetUVs_m3071541108 (Mesh_t3648964284 * __this, int32_t p0, List_1_t496136383 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
#define List_1_get_Count_m361000296(__this, method) ((  int32_t (*) (List_1_t128053199 *, const RuntimeMethod*))List_1_get_Count_m361000296_gshared)(__this, method)
// System.Collections.Generic.IList`1<System.Int32> ProBuilder2.Common.pb_IntArrayUtility::UniqueIndicesWithValues(ProBuilder2.Common.pb_IntArray[],System.Collections.Generic.IList`1<System.Int32>)
extern "C"  RuntimeObject* pb_IntArrayUtility_UniqueIndicesWithValues_m2211007353 (RuntimeObject * __this /* static, unused */, pb_IntArrayU5BU5D_t1561170814* ___pbIntArr0, RuntimeObject* ___indices1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisInt32_t2950945753_m2000905797(__this /* static, unused */, p0, method) ((  List_1_t128053199 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisInt32_t2950945753_m2000905797_gshared)(__this /* static, unused */, p0, method)
// System.Void ProBuilder2.Common.pb_VertexConnection::.ctor(ProBuilder2.Common.pb_Face,System.Collections.Generic.List`1<System.Int32>)
extern "C"  void pb_VertexConnection__ctor_m1364366655 (pb_VertexConnection_t1845224009 * __this, pb_Face_t613471354 * ___face0, List_1_t128053199 * ___indices1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Object::GetHashCode()
extern "C"  int32_t Object_GetHashCode_m2705121830 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pbUtil::ToString<System.Int32>(System.Collections.Generic.IEnumerable`1<T>,System.String)
#define pbUtil_ToString_TisInt32_t2950945753_m2571025276(__this /* static, unused */, ___arr0, ___separator1, method) ((  String_t* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, String_t*, const RuntimeMethod*))pbUtil_ToString_TisInt32_t2950945753_m2571025276_gshared)(__this /* static, unused */, ___arr0, ___separator1, method)
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
#define List_1__ctor_m1204004817(__this, method) ((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1__ctor_m1204004817_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<ProBuilder2.Common.pb_VertexConnection>::get_Item(System.Int32)
#define List_1_get_Item_m4209298255(__this, p0, method) ((  pb_VertexConnection_t1845224009 * (*) (List_1_t3317298751 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m3513848896(__this, p0, method) ((  void (*) (List_1_t128053199 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3513848896_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<ProBuilder2.Common.pb_VertexConnection>::get_Count()
#define List_1_get_Count_m167890124(__this, method) ((  int32_t (*) (List_1_t3317298751 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Boolean ProBuilder2.Common.pb_Edge::Equals(ProBuilder2.Common.pb_Edge)
extern "C"  bool pb_Edge_Equals_m4034993540 (pb_Edge_t3313513031 * __this, pb_Edge_t3313513031  ___edge0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_WingedEdge::Equals(ProBuilder2.Common.pb_WingedEdge)
extern "C"  bool pb_WingedEdge_Equals_m1373828788 (pb_WingedEdge_t1639999858 * __this, pb_WingedEdge_t1639999858 * ___b0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_Edge::GetHashCode()
extern "C"  int32_t pb_Edge_GetHashCode_m3875994764 (pb_Edge_t3313513031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_WingedEdgeEnumerator ProBuilder2.Common.pb_WingedEdge::GetEnumerator()
extern "C"  pb_WingedEdgeEnumerator_t1394122259 * pb_WingedEdge_GetEnumerator_m1574886498 (pb_WingedEdge_t1639999858 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_WingedEdgeEnumerator::.ctor(ProBuilder2.Common.pb_WingedEdge)
extern "C"  void pb_WingedEdgeEnumerator__ctor_m2500975524 (pb_WingedEdgeEnumerator_t1394122259 * __this, pb_WingedEdge_t1639999858 * ___start0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pb_Edge::ToString()
extern "C"  String_t* pb_Edge_ToString_m3137310743 (pb_Edge_t3313513031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object[])
extern "C"  String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_WingedEdge::Count()
extern "C"  int32_t pb_WingedEdge_Count_m1993122302 (pb_WingedEdge_t1639999858 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_EdgeLookup::Equals(ProBuilder2.Common.pb_EdgeLookup)
extern "C"  bool pb_EdgeLookup_Equals_m2537030458 (pb_EdgeLookup_t2280733452 * __this, pb_EdgeLookup_t2280733452 * ___b0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_Edge::Contains(System.Int32)
extern "C"  bool pb_Edge_Contains_m4127993172 (pb_Edge_t3313513031 * __this, int32_t ___a0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Edge[] ProBuilder2.Common.pb_Face::get_edges()
extern "C"  pb_EdgeU5BU5D_t4057067710* pb_Face_get_edges_m2945498854 (pb_Face_t613471354 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1__ctor_m3072246782(__this, p0, method) ((  void (*) (List_1_t490620477 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m3072246782_gshared)(__this, p0, method)
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge> ProBuilder2.Common.pb_WingedEdge::SortEdgesByAdjacency(System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>)
extern "C"  List_1_t490620477 * pb_WingedEdge_SortEdgesByAdjacency_m1562573850 (RuntimeObject * __this /* static, unused */, List_1_t490620477 * ___edges0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>::get_Item(System.Int32)
#define List_1_get_Item_m2063820192(__this, p0, method) ((  pb_Edge_t3313513031  (*) (List_1_t490620477 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2063820192_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>::set_Item(System.Int32,!0)
#define List_1_set_Item_m462825244(__this, p0, p1, method) ((  void (*) (List_1_t490620477 *, int32_t, pb_Edge_t3313513031 , const RuntimeMethod*))List_1_set_Item_m462825244_gshared)(__this, p0, p1, method)
// System.Int32 System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>::get_Count()
#define List_1_get_Count_m2366896369(__this, method) ((  int32_t (*) (List_1_t490620477 *, const RuntimeMethod*))List_1_get_Count_m2366896369_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>>::.ctor()
#define Dictionary_2__ctor_m1266425621(__this, method) ((  void (*) (Dictionary_2_t2000787931 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>::get_Item(System.Int32)
#define List_1_get_Item_m3401906893(__this, p0, method) ((  pb_WingedEdge_t1639999858 * (*) (List_1_t3112074600 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m1279332680(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t2000787931 *, int32_t, List_1_t3112074600 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m1190268628_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>::Add(!0)
#define List_1_Add_m2051880875(__this, p0, method) ((  void (*) (List_1_t3112074600 *, pb_WingedEdge_t1639999858 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>::.ctor()
#define List_1__ctor_m4000012285(__this, method) ((  void (*) (List_1_t3112074600 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>>::Add(!0,!1)
#define Dictionary_2_Add_m3016026542(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2000787931 *, int32_t, List_1_t3112074600 *, const RuntimeMethod*))Dictionary_2_Add_m1379384250_gshared)(__this, p0, p1, method)
// System.Int32 System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>::get_Count()
#define List_1_get_Count_m4187256803(__this, method) ((  int32_t (*) (List_1_t3112074600 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void ProBuilder2.Common.pb_WingedEdge/<SortCommonIndicesByAdjacency>c__AnonStorey0::.ctor()
extern "C"  void U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0__ctor_m2813246198 (U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t1594996471 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`2<ProBuilder2.Common.pb_WingedEdge,System.Boolean>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m588729392(__this, p0, p1, method) ((  void (*) (Func_2_t171398137 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m135484220_gshared)(__this, p0, p1, method)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<ProBuilder2.Common.pb_WingedEdge>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
#define Enumerable_Where_Tispb_WingedEdge_t1639999858_m3437621353(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t171398137 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m3454096398_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void System.Func`2<ProBuilder2.Common.pb_WingedEdge,ProBuilder2.Common.pb_Edge>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m2604616080(__this, p0, p1, method) ((  void (*) (Func_2_t3387623203 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m1634456428_gshared)(__this, p0, p1, method)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<ProBuilder2.Common.pb_WingedEdge,ProBuilder2.Common.pb_Edge>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_Select_Tispb_WingedEdge_t1639999858_Tispb_Edge_t3313513031_m3668823577(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t3387623203 *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_Tispb_Edge_t3313513031_m930029922_gshared)(__this /* static, unused */, p0, p1, method)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<ProBuilder2.Common.pb_Edge>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_Tispb_Edge_t3313513031_m1997905656(__this /* static, unused */, p0, method) ((  List_1_t490620477 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_Tispb_Edge_t3313513031_m1997905656_gshared)(__this /* static, unused */, p0, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::get_Count()
#define HashSet_1_get_Count_m3008068950(__this, method) ((  int32_t (*) (HashSet_1_t1515895227 *, const RuntimeMethod*))HashSet_1_get_Count_m3008068950_gshared)(__this, method)
// System.Void System.Func`2<ProBuilder2.Common.pb_Edge,System.Int32>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m2324675885(__this, p0, p1, method) ((  void (*) (Func_2_t3531098348 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m2324675885_gshared)(__this, p0, p1, method)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<ProBuilder2.Common.pb_Edge,System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_Select_Tispb_Edge_t3313513031_TisInt32_t2950945753_m478876776(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t3531098348 *, const RuntimeMethod*))Enumerable_Select_Tispb_Edge_t3313513031_TisInt32_t2950945753_m478876776_gshared)(__this /* static, unused */, p0, p1, method)
// ProBuilder2.Common.pb_Face[] pb_Object::get_faces()
extern "C"  pb_FaceU5BU5D_t3313432671* pb_Object_get_faces_m1140464784 (pb_Object_t647128553 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge> ProBuilder2.Common.pb_WingedEdge::GetWingedEdges(pb_Object,System.Collections.Generic.IEnumerable`1<ProBuilder2.Common.pb_Face>,System.Boolean,System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>)
extern "C"  List_1_t3112074600 * pb_WingedEdge_GetWingedEdges_m4013718761 (RuntimeObject * __this /* static, unused */, pb_Object_t647128553 * ___pb0, RuntimeObject* ___faces1, bool ___oneWingPerFace2, Dictionary_2_t1839659084 * ___sharedIndexLookup3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_IntArray[] pb_Object::get_sharedIndices()
extern "C"  pb_IntArrayU5BU5D_t1561170814* pb_Object_get_sharedIndices_m3275484082 (pb_Object_t647128553 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> ProBuilder2.Common.pb_IntArrayUtility::ToDictionary(ProBuilder2.Common.pb_IntArray[])
extern "C"  Dictionary_2_t1839659084 * pb_IntArrayUtility_ToDictionary_m2951460823 (RuntimeObject * __this /* static, unused */, pb_IntArrayU5BU5D_t1561170814* ___array0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Distinct<ProBuilder2.Common.pb_Face>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Distinct_Tispb_Face_t613471354_m214710561(__this /* static, unused */, p0, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Distinct_TisRuntimeObject_m1848806572_gshared)(__this /* static, unused */, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_WingedEdge>::.ctor()
#define Dictionary_2__ctor_m2158871500(__this, method) ((  void (*) (Dictionary_2_t4200534527 *, const RuntimeMethod*))Dictionary_2__ctor_m3816144791_gshared)(__this, method)
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge> ProBuilder2.Common.pb_WingedEdge::SortEdgesByAdjacency(ProBuilder2.Common.pb_Face)
extern "C"  List_1_t490620477 * pb_WingedEdge_SortEdgesByAdjacency_m3594873273 (RuntimeObject * __this /* static, unused */, pb_Face_t613471354 * ___face0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_WingedEdge::.ctor()
extern "C"  void pb_WingedEdge__ctor_m2303175295 (pb_WingedEdge_t1639999858 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(!0)
#define Dictionary_2_get_Item_m2924502254(__this, p0, method) ((  int32_t (*) (Dictionary_2_t1839659084 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m2924502254_gshared)(__this, p0, method)
// System.Void ProBuilder2.Common.pb_EdgeLookup::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void pb_EdgeLookup__ctor_m2173607565 (pb_EdgeLookup_t2280733452 * __this, int32_t ___cx0, int32_t ___cy1, int32_t ___x2, int32_t ___y3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_WingedEdge>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m922471079(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t4200534527 *, pb_Edge_t3313513031 , pb_WingedEdge_t1639999858 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m2657957682_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.Dictionary`2<ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_WingedEdge>::Add(!0,!1)
#define Dictionary_2_Add_m2936395901(__this, p0, p1, method) ((  void (*) (Dictionary_2_t4200534527 *, pb_Edge_t3313513031 , pb_WingedEdge_t1639999858 *, const RuntimeMethod*))Dictionary_2_Add_m141250566_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(!0)
#define HashSet_1_Contains_m2757512434(__this, p0, method) ((  bool (*) (HashSet_1_t1515895227 *, int32_t, const RuntimeMethod*))HashSet_1_Contains_m2757512434_gshared)(__this, p0, method)
// ProBuilder2.Common.pb_WingedEdge ProBuilder2.Common.pb_WingedEdgeEnumerator::get_Current()
extern "C"  pb_WingedEdge_t1639999858 * pb_WingedEdgeEnumerator_get_Current_m3878133830 (pb_WingedEdgeEnumerator_t1394122259 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor()
extern "C"  void InvalidOperationException__ctor_m2734335978 (InvalidOperationException_t56020091 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_XYZ_Color ProBuilder2.Common.pb_ColorUtil::RGBToXYZ(UnityEngine.Color)
extern "C"  pb_XYZ_Color_t3763960066 * pb_ColorUtil_RGBToXYZ_m734822614 (RuntimeObject * __this /* static, unused */, Color_t2555686324  ___col0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_XYZ_Color ProBuilder2.Common.pb_ColorUtil::RGBToXYZ(System.Single,System.Single,System.Single)
extern "C"  pb_XYZ_Color_t3763960066 * pb_ColorUtil_RGBToXYZ_m1621613346 (RuntimeObject * __this /* static, unused */, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C"  String_t* String_Format_m3339413201 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C"  int32_t Transform_get_childCount_m3145433196 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C"  Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C"  void Transform_SetParent_m273471670 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UnityEngine.Transform[]>::Add(!0,!1)
#define Dictionary_2_Add_m1976278845(__this, p0, p1, method) ((  void (*) (Dictionary_2_t117942215 *, Transform_t3600365921 *, TransformU5BU5D_t807237628*, const RuntimeMethod*))Dictionary_2_Add_m3105409630_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UnityEngine.Transform[]>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m3079431012(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t117942215 *, Transform_t3600365921 *, TransformU5BU5D_t807237628**, const RuntimeMethod*))Dictionary_2_TryGetValue_m1996088172_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UnityEngine.Transform[]>::Remove(!0)
#define Dictionary_2_Remove_m3851836367(__this, p0, method) ((  bool (*) (Dictionary_2_t117942215 *, Transform_t3600365921 *, const RuntimeMethod*))Dictionary_2_Remove_m2051736387_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UnityEngine.Transform[]>::.ctor()
#define Dictionary_2__ctor_m1137353126(__this, method) ((  void (*) (Dictionary_2_t117942215 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Transform_TransformPoint_m226827784 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor()
extern "C"  void GameObject__ctor_m3707688467 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C"  Quaternion_t2301928331  Transform_get_localRotation_m3487911431 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_localRotation_m19445462 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C"  Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Char::ToString()
extern "C"  String_t* Char_ToString_m3588025615 (Il2CppChar* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C"  Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pbUtil::TryParseColor(System.String,UnityEngine.Color&)
extern "C"  bool pbUtil_TryParseColor_m3233197579 (RuntimeObject * __this /* static, unused */, String_t* ___value0, Color_t2555686324 * ___col1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pbUtil/<TryParseColor>c__AnonStorey1::.ctor()
extern "C"  void U3CTryParseColorU3Ec__AnonStorey1__ctor_m2919959637 (U3CTryParseColorU3Ec__AnonStorey1_t2806735917 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`2<System.Char,System.Boolean>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m2318007926(__this, p0, p1, method) ((  void (*) (Func_2_t148644517 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m2318007926_gshared)(__this, p0, p1, method)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Char>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
#define Enumerable_Where_TisChar_t3634460470_m3580589701(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t148644517 *, const RuntimeMethod*))Enumerable_Where_TisChar_t3634460470_m3580589701_gshared)(__this /* static, unused */, p0, p1, method)
// !!0[] System.Linq.Enumerable::ToArray<System.Char>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisChar_t3634460470_m2668536093(__this /* static, unused */, p0, method) ((  CharU5BU5D_t3528271667* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisChar_t3634460470_m2668536093_gshared)(__this /* static, unused */, p0, method)
// System.String System.String::CreateString(System.Char[])
extern "C"  String_t* String_CreateString_m2818852475 (String_t* __this, CharU5BU5D_t3528271667* ___val0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
extern "C"  StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.Single::Parse(System.String)
extern "C"  float Single_Parse_m364357836 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
#define List_1__ctor_m1778067824(__this, method) ((  void (*) (List_1_t899420910 *, const RuntimeMethod*))List_1__ctor_m1778067824_gshared)(__this, method)
// System.String System.String::Replace(System.String,System.String)
extern "C"  String_t* String_Replace_m1273907647 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Contains(System.String)
extern "C"  bool String_Contains_m1147431944 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Single&)
extern "C"  bool Single_TryParse_m1572008725 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, float* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
#define List_1_Add_m1524640104(__this, p0, method) ((  void (*) (List_1_t899420910 *, Vector3_t3722313464 , const RuntimeMethod*))List_1_Add_m1524640104_gshared)(__this, p0, method)
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
#define List_1_ToArray_m495485525(__this, method) ((  Vector3U5BU5D_t1718750761* (*) (List_1_t899420910 *, const RuntimeMethod*))List_1_ToArray_m495485525_gshared)(__this, method)
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Enumerable::Contains<System.Char>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
#define Enumerable_Contains_TisChar_t3634460470_m2857789489(__this /* static, unused */, p0, p1, method) ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Il2CppChar, const RuntimeMethod*))Enumerable_Contains_TisChar_t3634460470_m2857789489_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void ProBuilder2.Common.pbUtil/SearchRange::.ctor(System.Int32,System.Int32)
extern "C"  void SearchRange__ctor_m3778421911 (SearchRange_t3147983846 * __this, int32_t ___begin0, int32_t ___end1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pbUtil/SearchRange::Valid()
extern "C"  bool SearchRange_Valid_m462159523 (SearchRange_t3147983846 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pbUtil/SearchRange::Center()
extern "C"  int32_t SearchRange_Center_m1132495071 (SearchRange_t3147983846 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pbUtil/SearchRange::ToString()
extern "C"  String_t* SearchRange_ToString_m4109987529 (SearchRange_t3147983846 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Attribute::.ctor()
extern "C"  void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 ProBuilder2.Common.pb_Vector::HashFloat(System.Single)
extern "C"  int32_t pb_Vector_HashFloat_m1352012897 (RuntimeObject * __this /* static, unused */, float ___f0, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		float L_0 = ___f0;
		V_0 = (((int64_t)((uint64_t)((float)il2cpp_codegen_multiply((float)L_0, (float)(1000.0f))))));
		uint64_t L_1 = V_0;
		return (((int32_t)((int32_t)((int64_t)((uint64_t)(int64_t)L_1%(uint64_t)(int64_t)(((int64_t)((int64_t)((int32_t)2147483647LL)))))))));
	}
}
// System.Int32 ProBuilder2.Common.pb_Vector::GetHashCode(UnityEngine.Vector2)
extern "C"  int32_t pb_Vector_GetHashCode_m270614936 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___v0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)27);
		int32_t L_0 = V_0;
		float L_1 = (&___v0)->get_x_0();
		int32_t L_2 = pb_Vector_HashFloat_m1352012897(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)29))), (int32_t)L_2));
		int32_t L_3 = V_0;
		float L_4 = (&___v0)->get_y_1();
		int32_t L_5 = pb_Vector_HashFloat_m1352012897(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)29))), (int32_t)L_5));
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Int32 ProBuilder2.Common.pb_Vector::GetHashCode(UnityEngine.Vector3)
extern "C"  int32_t pb_Vector_GetHashCode_m2609267096 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___v0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)27);
		int32_t L_0 = V_0;
		float L_1 = (&___v0)->get_x_1();
		int32_t L_2 = pb_Vector_HashFloat_m1352012897(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)29))), (int32_t)L_2));
		int32_t L_3 = V_0;
		float L_4 = (&___v0)->get_y_2();
		int32_t L_5 = pb_Vector_HashFloat_m1352012897(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)29))), (int32_t)L_5));
		int32_t L_6 = V_0;
		float L_7 = (&___v0)->get_z_3();
		int32_t L_8 = pb_Vector_HashFloat_m1352012897(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)((int32_t)29))), (int32_t)L_8));
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Int32 ProBuilder2.Common.pb_Vector::GetHashCode(UnityEngine.Vector4)
extern "C"  int32_t pb_Vector_GetHashCode_m3418571160 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  ___v0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)27);
		int32_t L_0 = V_0;
		float L_1 = (&___v0)->get_x_1();
		int32_t L_2 = pb_Vector_HashFloat_m1352012897(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)29))), (int32_t)L_2));
		int32_t L_3 = V_0;
		float L_4 = (&___v0)->get_y_2();
		int32_t L_5 = pb_Vector_HashFloat_m1352012897(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)29))), (int32_t)L_5));
		int32_t L_6 = V_0;
		float L_7 = (&___v0)->get_z_3();
		int32_t L_8 = pb_Vector_HashFloat_m1352012897(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)((int32_t)29))), (int32_t)L_8));
		int32_t L_9 = V_0;
		float L_10 = (&___v0)->get_w_4();
		int32_t L_11 = pb_Vector_HashFloat_m1352012897(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)((int32_t)29))), (int32_t)L_11));
		int32_t L_12 = V_0;
		return L_12;
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
// System.Void ProBuilder2.Common.pb_Vertex::.ctor(System.Boolean)
extern "C"  void pb_Vertex__ctor_m4018012188 (pb_Vertex_t4136735762 * __this, bool ___hasAllValues0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		bool L_0 = ___hasAllValues0;
		__this->set_hasPosition_8(L_0);
		bool L_1 = ___hasAllValues0;
		__this->set_hasColor_9(L_1);
		bool L_2 = ___hasAllValues0;
		__this->set_hasNormal_10(L_2);
		bool L_3 = ___hasAllValues0;
		__this->set_hasTangent_11(L_3);
		bool L_4 = ___hasAllValues0;
		__this->set_hasUv0_12(L_4);
		bool L_5 = ___hasAllValues0;
		__this->set_hasUv2_13(L_5);
		bool L_6 = ___hasAllValues0;
		__this->set_hasUv3_14(L_6);
		bool L_7 = ___hasAllValues0;
		__this->set_hasUv4_15(L_7);
		return;
	}
}
// System.Void ProBuilder2.Common.pb_Vertex::.ctor(ProBuilder2.Common.pb_Vertex)
extern "C"  void pb_Vertex__ctor_m667004002 (pb_Vertex_t4136735762 * __this, pb_Vertex_t4136735762 * ___v0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		pb_Vertex_t4136735762 * L_0 = ___v0;
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = L_0->get_position_0();
		__this->set_position_0(L_1);
		pb_Vertex_t4136735762 * L_2 = ___v0;
		NullCheck(L_2);
		bool L_3 = L_2->get_hasPosition_8();
		__this->set_hasPosition_8(L_3);
		pb_Vertex_t4136735762 * L_4 = ___v0;
		NullCheck(L_4);
		Color_t2555686324  L_5 = L_4->get_color_1();
		__this->set_color_1(L_5);
		pb_Vertex_t4136735762 * L_6 = ___v0;
		NullCheck(L_6);
		bool L_7 = L_6->get_hasColor_9();
		__this->set_hasColor_9(L_7);
		pb_Vertex_t4136735762 * L_8 = ___v0;
		NullCheck(L_8);
		Vector2_t2156229523  L_9 = L_8->get_uv0_4();
		__this->set_uv0_4(L_9);
		pb_Vertex_t4136735762 * L_10 = ___v0;
		NullCheck(L_10);
		bool L_11 = L_10->get_hasUv0_12();
		__this->set_hasUv0_12(L_11);
		pb_Vertex_t4136735762 * L_12 = ___v0;
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = L_12->get_normal_2();
		__this->set_normal_2(L_13);
		pb_Vertex_t4136735762 * L_14 = ___v0;
		NullCheck(L_14);
		bool L_15 = L_14->get_hasNormal_10();
		__this->set_hasNormal_10(L_15);
		pb_Vertex_t4136735762 * L_16 = ___v0;
		NullCheck(L_16);
		Vector4_t3319028937  L_17 = L_16->get_tangent_3();
		__this->set_tangent_3(L_17);
		pb_Vertex_t4136735762 * L_18 = ___v0;
		NullCheck(L_18);
		bool L_19 = L_18->get_hasTangent_11();
		__this->set_hasTangent_11(L_19);
		pb_Vertex_t4136735762 * L_20 = ___v0;
		NullCheck(L_20);
		Vector2_t2156229523  L_21 = L_20->get_uv2_5();
		__this->set_uv2_5(L_21);
		pb_Vertex_t4136735762 * L_22 = ___v0;
		NullCheck(L_22);
		bool L_23 = L_22->get_hasUv2_13();
		__this->set_hasUv2_13(L_23);
		pb_Vertex_t4136735762 * L_24 = ___v0;
		NullCheck(L_24);
		Vector4_t3319028937  L_25 = L_24->get_uv3_6();
		__this->set_uv3_6(L_25);
		pb_Vertex_t4136735762 * L_26 = ___v0;
		NullCheck(L_26);
		bool L_27 = L_26->get_hasUv3_14();
		__this->set_hasUv3_14(L_27);
		pb_Vertex_t4136735762 * L_28 = ___v0;
		NullCheck(L_28);
		Vector4_t3319028937  L_29 = L_28->get_uv4_7();
		__this->set_uv4_7(L_29);
		pb_Vertex_t4136735762 * L_30 = ___v0;
		NullCheck(L_30);
		bool L_31 = L_30->get_hasUv4_15();
		__this->set_hasUv4_15(L_31);
		return;
	}
}
// System.Boolean ProBuilder2.Common.pb_Vertex::Equals(System.Object)
extern "C"  bool pb_Vertex_Equals_m1125187329 (pb_Vertex_t4136735762 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_Equals_m1125187329_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (!((pb_Vertex_t4136735762 *)IsInstClass((RuntimeObject*)L_0, pb_Vertex_t4136735762_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		bool L_2 = pb_Vertex_Equals_m3200161041(__this, ((pb_Vertex_t4136735762 *)IsInstClass((RuntimeObject*)L_1, pb_Vertex_t4136735762_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean ProBuilder2.Common.pb_Vertex::Equals(ProBuilder2.Common.pb_Vertex)
extern "C"  bool pb_Vertex_Equals_m3200161041 (pb_Vertex_t4136735762 * __this, pb_Vertex_t4136735762 * ___other0, const RuntimeMethod* method)
{
	int32_t G_B11_0 = 0;
	{
		pb_Vertex_t4136735762 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		Vector3_t3722313464  L_1 = __this->get_position_0();
		pb_Vertex_t4136735762 * L_2 = ___other0;
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = L_2->get_position_0();
		bool L_4 = pb_Math_Approx3_m2054702743(NULL /*static, unused*/, L_1, L_3, (0.0001f), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00dd;
		}
	}
	{
		Color_t2555686324  L_5 = __this->get_color_1();
		pb_Vertex_t4136735762 * L_6 = ___other0;
		NullCheck(L_6);
		Color_t2555686324  L_7 = L_6->get_color_1();
		bool L_8 = pb_Math_ApproxC_m872275904(NULL /*static, unused*/, L_5, L_7, (0.0001f), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00dd;
		}
	}
	{
		Vector3_t3722313464  L_9 = __this->get_normal_2();
		pb_Vertex_t4136735762 * L_10 = ___other0;
		NullCheck(L_10);
		Vector3_t3722313464  L_11 = L_10->get_normal_2();
		bool L_12 = pb_Math_Approx3_m2054702743(NULL /*static, unused*/, L_9, L_11, (0.0001f), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00dd;
		}
	}
	{
		Vector4_t3319028937  L_13 = __this->get_tangent_3();
		pb_Vertex_t4136735762 * L_14 = ___other0;
		NullCheck(L_14);
		Vector4_t3319028937  L_15 = L_14->get_tangent_3();
		bool L_16 = pb_Math_Approx4_m2908990635(NULL /*static, unused*/, L_13, L_15, (0.0001f), /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00dd;
		}
	}
	{
		Vector2_t2156229523  L_17 = __this->get_uv0_4();
		pb_Vertex_t4136735762 * L_18 = ___other0;
		NullCheck(L_18);
		Vector2_t2156229523  L_19 = L_18->get_uv0_4();
		bool L_20 = pb_Math_Approx2_m1899892256(NULL /*static, unused*/, L_17, L_19, (0.0001f), /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00dd;
		}
	}
	{
		Vector2_t2156229523  L_21 = __this->get_uv2_5();
		pb_Vertex_t4136735762 * L_22 = ___other0;
		NullCheck(L_22);
		Vector2_t2156229523  L_23 = L_22->get_uv2_5();
		bool L_24 = pb_Math_Approx2_m1899892256(NULL /*static, unused*/, L_21, L_23, (0.0001f), /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00dd;
		}
	}
	{
		Vector4_t3319028937  L_25 = __this->get_uv3_6();
		pb_Vertex_t4136735762 * L_26 = ___other0;
		NullCheck(L_26);
		Vector4_t3319028937  L_27 = L_26->get_uv3_6();
		bool L_28 = pb_Math_Approx4_m2908990635(NULL /*static, unused*/, L_25, L_27, (0.0001f), /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00dd;
		}
	}
	{
		Vector4_t3319028937  L_29 = __this->get_uv4_7();
		pb_Vertex_t4136735762 * L_30 = ___other0;
		NullCheck(L_30);
		Vector4_t3319028937  L_31 = L_30->get_uv4_7();
		bool L_32 = pb_Math_Approx4_m2908990635(NULL /*static, unused*/, L_29, L_31, (0.0001f), /*hidden argument*/NULL);
		G_B11_0 = ((int32_t)(L_32));
		goto IL_00de;
	}

IL_00dd:
	{
		G_B11_0 = 0;
	}

IL_00de:
	{
		return (bool)G_B11_0;
	}
}
// System.Int32 ProBuilder2.Common.pb_Vertex::GetHashCode()
extern "C"  int32_t pb_Vertex_GetHashCode_m2587768432 (pb_Vertex_t4136735762 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Vector3_t3722313464  L_0 = __this->get_position_0();
		int32_t L_1 = pb_Vector_GetHashCode_m2609267096(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)783), (int32_t)L_1));
		int32_t L_2 = V_0;
		Vector2_t2156229523  L_3 = __this->get_uv0_4();
		int32_t L_4 = pb_Vector_GetHashCode_m270614936(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)((int32_t)29))), (int32_t)L_4));
		int32_t L_5 = V_0;
		Vector3_t3722313464  L_6 = __this->get_normal_2();
		int32_t L_7 = pb_Vector_GetHashCode_m2609267096(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)((int32_t)31))), (int32_t)L_7));
		int32_t L_8 = V_0;
		return L_8;
	}
}
// ProBuilder2.Common.pb_Vertex ProBuilder2.Common.pb_Vertex::op_Addition(ProBuilder2.Common.pb_Vertex,ProBuilder2.Common.pb_Vertex)
extern "C"  pb_Vertex_t4136735762 * pb_Vertex_op_Addition_m3093485097 (RuntimeObject * __this /* static, unused */, pb_Vertex_t4136735762 * ___a0, pb_Vertex_t4136735762 * ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_op_Addition_m3093485097_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	pb_Vertex_t4136735762 * V_0 = NULL;
	{
		pb_Vertex_t4136735762 * L_0 = ___a0;
		pb_Vertex_t4136735762 * L_1 = (pb_Vertex_t4136735762 *)il2cpp_codegen_object_new(pb_Vertex_t4136735762_il2cpp_TypeInfo_var);
		pb_Vertex__ctor_m667004002(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		pb_Vertex_t4136735762 * L_2 = V_0;
		pb_Vertex_t4136735762 * L_3 = ___b1;
		NullCheck(L_2);
		pb_Vertex_Add_m3106850531(L_2, L_3, /*hidden argument*/NULL);
		pb_Vertex_t4136735762 * L_4 = V_0;
		return L_4;
	}
}
// System.Void ProBuilder2.Common.pb_Vertex::Add(ProBuilder2.Common.pb_Vertex)
extern "C"  void pb_Vertex_Add_m3106850531 (pb_Vertex_t4136735762 * __this, pb_Vertex_t4136735762 * ___b0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_Add_m3106850531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464  L_0 = __this->get_position_0();
		pb_Vertex_t4136735762 * L_1 = ___b0;
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = L_1->get_position_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		__this->set_position_0(L_3);
		Color_t2555686324  L_4 = __this->get_color_1();
		pb_Vertex_t4136735762 * L_5 = ___b0;
		NullCheck(L_5);
		Color_t2555686324  L_6 = L_5->get_color_1();
		Color_t2555686324  L_7 = Color_op_Addition_m3293657895(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		__this->set_color_1(L_7);
		Vector3_t3722313464  L_8 = __this->get_normal_2();
		pb_Vertex_t4136735762 * L_9 = ___b0;
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = L_9->get_normal_2();
		Vector3_t3722313464  L_11 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		__this->set_normal_2(L_11);
		Vector4_t3319028937  L_12 = __this->get_tangent_3();
		pb_Vertex_t4136735762 * L_13 = ___b0;
		NullCheck(L_13);
		Vector4_t3319028937  L_14 = L_13->get_tangent_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_15 = Vector4_op_Addition_m787366691(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
		__this->set_tangent_3(L_15);
		Vector2_t2156229523  L_16 = __this->get_uv0_4();
		pb_Vertex_t4136735762 * L_17 = ___b0;
		NullCheck(L_17);
		Vector2_t2156229523  L_18 = L_17->get_uv0_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_19 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
		__this->set_uv0_4(L_19);
		Vector2_t2156229523  L_20 = __this->get_uv2_5();
		pb_Vertex_t4136735762 * L_21 = ___b0;
		NullCheck(L_21);
		Vector2_t2156229523  L_22 = L_21->get_uv2_5();
		Vector2_t2156229523  L_23 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_20, L_22, /*hidden argument*/NULL);
		__this->set_uv2_5(L_23);
		Vector4_t3319028937  L_24 = __this->get_uv3_6();
		pb_Vertex_t4136735762 * L_25 = ___b0;
		NullCheck(L_25);
		Vector4_t3319028937  L_26 = L_25->get_uv3_6();
		Vector4_t3319028937  L_27 = Vector4_op_Addition_m787366691(NULL /*static, unused*/, L_24, L_26, /*hidden argument*/NULL);
		__this->set_uv3_6(L_27);
		Vector4_t3319028937  L_28 = __this->get_uv4_7();
		pb_Vertex_t4136735762 * L_29 = ___b0;
		NullCheck(L_29);
		Vector4_t3319028937  L_30 = L_29->get_uv4_7();
		Vector4_t3319028937  L_31 = Vector4_op_Addition_m787366691(NULL /*static, unused*/, L_28, L_30, /*hidden argument*/NULL);
		__this->set_uv4_7(L_31);
		return;
	}
}
// ProBuilder2.Common.pb_Vertex ProBuilder2.Common.pb_Vertex::op_Subtraction(ProBuilder2.Common.pb_Vertex,ProBuilder2.Common.pb_Vertex)
extern "C"  pb_Vertex_t4136735762 * pb_Vertex_op_Subtraction_m29949077 (RuntimeObject * __this /* static, unused */, pb_Vertex_t4136735762 * ___a0, pb_Vertex_t4136735762 * ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_op_Subtraction_m29949077_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	pb_Vertex_t4136735762 * V_0 = NULL;
	{
		pb_Vertex_t4136735762 * L_0 = ___a0;
		pb_Vertex_t4136735762 * L_1 = (pb_Vertex_t4136735762 *)il2cpp_codegen_object_new(pb_Vertex_t4136735762_il2cpp_TypeInfo_var);
		pb_Vertex__ctor_m667004002(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		pb_Vertex_t4136735762 * L_2 = V_0;
		pb_Vertex_t4136735762 * L_3 = ___b1;
		NullCheck(L_2);
		pb_Vertex_Subtract_m561667742(L_2, L_3, /*hidden argument*/NULL);
		pb_Vertex_t4136735762 * L_4 = V_0;
		return L_4;
	}
}
// System.Void ProBuilder2.Common.pb_Vertex::Subtract(ProBuilder2.Common.pb_Vertex)
extern "C"  void pb_Vertex_Subtract_m561667742 (pb_Vertex_t4136735762 * __this, pb_Vertex_t4136735762 * ___b0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_Subtract_m561667742_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464  L_0 = __this->get_position_0();
		pb_Vertex_t4136735762 * L_1 = ___b0;
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = L_1->get_position_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		__this->set_position_0(L_3);
		Color_t2555686324  L_4 = __this->get_color_1();
		pb_Vertex_t4136735762 * L_5 = ___b0;
		NullCheck(L_5);
		Color_t2555686324  L_6 = L_5->get_color_1();
		Color_t2555686324  L_7 = Color_op_Subtraction_m181229690(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		__this->set_color_1(L_7);
		Vector3_t3722313464  L_8 = __this->get_normal_2();
		pb_Vertex_t4136735762 * L_9 = ___b0;
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = L_9->get_normal_2();
		Vector3_t3722313464  L_11 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		__this->set_normal_2(L_11);
		Vector4_t3319028937  L_12 = __this->get_tangent_3();
		pb_Vertex_t4136735762 * L_13 = ___b0;
		NullCheck(L_13);
		Vector4_t3319028937  L_14 = L_13->get_tangent_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_15 = Vector4_op_Subtraction_m1632208160(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
		__this->set_tangent_3(L_15);
		Vector2_t2156229523  L_16 = __this->get_uv0_4();
		pb_Vertex_t4136735762 * L_17 = ___b0;
		NullCheck(L_17);
		Vector2_t2156229523  L_18 = L_17->get_uv0_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_19 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
		__this->set_uv0_4(L_19);
		Vector2_t2156229523  L_20 = __this->get_uv2_5();
		pb_Vertex_t4136735762 * L_21 = ___b0;
		NullCheck(L_21);
		Vector2_t2156229523  L_22 = L_21->get_uv2_5();
		Vector2_t2156229523  L_23 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_20, L_22, /*hidden argument*/NULL);
		__this->set_uv2_5(L_23);
		Vector4_t3319028937  L_24 = __this->get_uv3_6();
		pb_Vertex_t4136735762 * L_25 = ___b0;
		NullCheck(L_25);
		Vector4_t3319028937  L_26 = L_25->get_uv3_6();
		Vector4_t3319028937  L_27 = Vector4_op_Subtraction_m1632208160(NULL /*static, unused*/, L_24, L_26, /*hidden argument*/NULL);
		__this->set_uv3_6(L_27);
		Vector4_t3319028937  L_28 = __this->get_uv4_7();
		pb_Vertex_t4136735762 * L_29 = ___b0;
		NullCheck(L_29);
		Vector4_t3319028937  L_30 = L_29->get_uv4_7();
		Vector4_t3319028937  L_31 = Vector4_op_Subtraction_m1632208160(NULL /*static, unused*/, L_28, L_30, /*hidden argument*/NULL);
		__this->set_uv4_7(L_31);
		return;
	}
}
// ProBuilder2.Common.pb_Vertex ProBuilder2.Common.pb_Vertex::op_Multiply(ProBuilder2.Common.pb_Vertex,System.Single)
extern "C"  pb_Vertex_t4136735762 * pb_Vertex_op_Multiply_m2971565719 (RuntimeObject * __this /* static, unused */, pb_Vertex_t4136735762 * ___a0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_op_Multiply_m2971565719_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	pb_Vertex_t4136735762 * V_0 = NULL;
	{
		pb_Vertex_t4136735762 * L_0 = ___a0;
		pb_Vertex_t4136735762 * L_1 = (pb_Vertex_t4136735762 *)il2cpp_codegen_object_new(pb_Vertex_t4136735762_il2cpp_TypeInfo_var);
		pb_Vertex__ctor_m667004002(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		pb_Vertex_t4136735762 * L_2 = V_0;
		float L_3 = ___value1;
		NullCheck(L_2);
		pb_Vertex_Multiply_m202452114(L_2, L_3, /*hidden argument*/NULL);
		pb_Vertex_t4136735762 * L_4 = V_0;
		return L_4;
	}
}
// System.Void ProBuilder2.Common.pb_Vertex::Multiply(System.Single)
extern "C"  void pb_Vertex_Multiply_m202452114 (pb_Vertex_t4136735762 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_Multiply_m202452114_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464  L_0 = __this->get_position_0();
		float L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_position_0(L_2);
		Color_t2555686324  L_3 = __this->get_color_1();
		float L_4 = ___value0;
		Color_t2555686324  L_5 = Color_op_Multiply_m2887457390(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		__this->set_color_1(L_5);
		Vector3_t3722313464  L_6 = __this->get_normal_2();
		float L_7 = ___value0;
		Vector3_t3722313464  L_8 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		__this->set_normal_2(L_8);
		Vector4_t3319028937  L_9 = __this->get_tangent_3();
		float L_10 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_11 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		__this->set_tangent_3(L_11);
		Vector2_t2156229523  L_12 = __this->get_uv0_4();
		float L_13 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_14 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		__this->set_uv0_4(L_14);
		Vector2_t2156229523  L_15 = __this->get_uv2_5();
		float L_16 = ___value0;
		Vector2_t2156229523  L_17 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		__this->set_uv2_5(L_17);
		Vector4_t3319028937  L_18 = __this->get_uv3_6();
		float L_19 = ___value0;
		Vector4_t3319028937  L_20 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		__this->set_uv3_6(L_20);
		Vector4_t3319028937  L_21 = __this->get_uv4_7();
		float L_22 = ___value0;
		Vector4_t3319028937  L_23 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		__this->set_uv4_7(L_23);
		return;
	}
}
// ProBuilder2.Common.pb_Vertex ProBuilder2.Common.pb_Vertex::op_Division(ProBuilder2.Common.pb_Vertex,System.Single)
extern "C"  pb_Vertex_t4136735762 * pb_Vertex_op_Division_m3003613859 (RuntimeObject * __this /* static, unused */, pb_Vertex_t4136735762 * ___a0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_op_Division_m3003613859_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	pb_Vertex_t4136735762 * V_0 = NULL;
	{
		pb_Vertex_t4136735762 * L_0 = ___a0;
		pb_Vertex_t4136735762 * L_1 = (pb_Vertex_t4136735762 *)il2cpp_codegen_object_new(pb_Vertex_t4136735762_il2cpp_TypeInfo_var);
		pb_Vertex__ctor_m667004002(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		pb_Vertex_t4136735762 * L_2 = V_0;
		float L_3 = ___value1;
		NullCheck(L_2);
		pb_Vertex_Divide_m3627993064(L_2, L_3, /*hidden argument*/NULL);
		pb_Vertex_t4136735762 * L_4 = V_0;
		return L_4;
	}
}
// System.Void ProBuilder2.Common.pb_Vertex::Divide(System.Single)
extern "C"  void pb_Vertex_Divide_m3627993064 (pb_Vertex_t4136735762 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_Divide_m3627993064_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464  L_0 = __this->get_position_0();
		float L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_op_Division_m510815599(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_position_0(L_2);
		Color_t2555686324  L_3 = __this->get_color_1();
		float L_4 = ___value0;
		Color_t2555686324  L_5 = Color_op_Division_m1074517668(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		__this->set_color_1(L_5);
		Vector3_t3722313464  L_6 = __this->get_normal_2();
		float L_7 = ___value0;
		Vector3_t3722313464  L_8 = Vector3_op_Division_m510815599(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		__this->set_normal_2(L_8);
		Vector4_t3319028937  L_9 = __this->get_tangent_3();
		float L_10 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_11 = Vector4_op_Division_m264790546(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		__this->set_tangent_3(L_11);
		Vector2_t2156229523  L_12 = __this->get_uv0_4();
		float L_13 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_14 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		__this->set_uv0_4(L_14);
		Vector2_t2156229523  L_15 = __this->get_uv2_5();
		float L_16 = ___value0;
		Vector2_t2156229523  L_17 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		__this->set_uv2_5(L_17);
		Vector4_t3319028937  L_18 = __this->get_uv3_6();
		float L_19 = ___value0;
		Vector4_t3319028937  L_20 = Vector4_op_Division_m264790546(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		__this->set_uv3_6(L_20);
		Vector4_t3319028937  L_21 = __this->get_uv4_7();
		float L_22 = ___value0;
		Vector4_t3319028937  L_23 = Vector4_op_Division_m264790546(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		__this->set_uv4_7(L_23);
		return;
	}
}
// System.Void ProBuilder2.Common.pb_Vertex::Normalize()
extern "C"  void pb_Vertex_Normalize_m4182188776 (pb_Vertex_t4136735762 * __this, const RuntimeMethod* method)
{
	Vector4_t3319028937  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464 * L_0 = __this->get_address_of_position_0();
		Vector3_Normalize_m914904454((Vector3_t3722313464 *)L_0, /*hidden argument*/NULL);
		Color_t2555686324  L_1 = __this->get_color_1();
		Vector4_t3319028937  L_2 = Color_op_Implicit_m986621988(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector4_Normalize_m2596230534((Vector4_t3319028937 *)(&V_0), /*hidden argument*/NULL);
		Color_t2555686324 * L_3 = __this->get_address_of_color_1();
		float L_4 = (&V_0)->get_x_1();
		L_3->set_r_0(L_4);
		Color_t2555686324 * L_5 = __this->get_address_of_color_1();
		float L_6 = (&V_0)->get_y_2();
		L_5->set_g_1(L_6);
		Color_t2555686324 * L_7 = __this->get_address_of_color_1();
		float L_8 = (&V_0)->get_z_3();
		L_7->set_b_2(L_8);
		Color_t2555686324 * L_9 = __this->get_address_of_color_1();
		float L_10 = (&V_0)->get_w_4();
		L_9->set_a_3(L_10);
		Vector3_t3722313464 * L_11 = __this->get_address_of_normal_2();
		Vector3_Normalize_m914904454((Vector3_t3722313464 *)L_11, /*hidden argument*/NULL);
		Vector4_t3319028937 * L_12 = __this->get_address_of_tangent_3();
		Vector4_Normalize_m2596230534((Vector4_t3319028937 *)L_12, /*hidden argument*/NULL);
		Vector2_t2156229523 * L_13 = __this->get_address_of_uv0_4();
		Vector2_Normalize_m1906922873((Vector2_t2156229523 *)L_13, /*hidden argument*/NULL);
		Vector2_t2156229523 * L_14 = __this->get_address_of_uv2_5();
		Vector2_Normalize_m1906922873((Vector2_t2156229523 *)L_14, /*hidden argument*/NULL);
		Vector4_t3319028937 * L_15 = __this->get_address_of_uv3_6();
		Vector4_Normalize_m2596230534((Vector4_t3319028937 *)L_15, /*hidden argument*/NULL);
		Vector4_t3319028937 * L_16 = __this->get_address_of_uv4_7();
		Vector4_Normalize_m2596230534((Vector4_t3319028937 *)L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.String ProBuilder2.Common.pb_Vertex::ToString()
extern "C"  String_t* pb_Vertex_ToString_m604879641 (pb_Vertex_t4136735762 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464 * L_0 = __this->get_address_of_position_0();
		String_t* L_1 = Vector3_ToString_m759076600((Vector3_t3722313464 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// ProBuilder2.Common.pb_Vertex[] ProBuilder2.Common.pb_Vertex::GetVertices(pb_Object,System.Collections.Generic.IList`1<System.Int32>)
extern "C"  pb_VertexU5BU5D_t2681278311* pb_Vertex_GetVertices_m2599809222 (RuntimeObject * __this /* static, unused */, pb_Object_t647128553 * ___pb0, RuntimeObject* ___indices1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_GetVertices_m2599809222_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	pb_VertexU5BU5D_t2681278311* V_2 = NULL;
	Vector3U5BU5D_t1718750761* V_3 = NULL;
	ColorU5BU5D_t941916413* V_4 = NULL;
	Vector2U5BU5D_t1457185986* V_5 = NULL;
	Vector3U5BU5D_t1718750761* V_6 = NULL;
	Vector4U5BU5D_t934056436* V_7 = NULL;
	Vector2U5BU5D_t1457185986* V_8 = NULL;
	List_1_t496136383 * V_9 = NULL;
	List_1_t496136383 * V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B31_0 = 0;
	{
		pb_Object_t647128553 * L_0 = ___pb0;
		NullCheck(L_0);
		int32_t L_1 = pb_Object_get_vertexCount_m2373621629(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = ___indices1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_3 = ___indices1;
		NullCheck(L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, ICollection_1_t1484130691_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = L_4;
		goto IL_001e;
	}

IL_0018:
	{
		pb_Object_t647128553 * L_5 = ___pb0;
		NullCheck(L_5);
		int32_t L_6 = pb_Object_get_vertexCount_m2373621629(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_001e:
	{
		V_1 = G_B3_0;
		int32_t L_7 = V_1;
		V_2 = ((pb_VertexU5BU5D_t2681278311*)SZArrayNew(pb_VertexU5BU5D_t2681278311_il2cpp_TypeInfo_var, (uint32_t)L_7));
		pb_Object_t647128553 * L_8 = ___pb0;
		NullCheck(L_8);
		Vector3U5BU5D_t1718750761* L_9 = pb_Object_get_vertices_m4036343467(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		pb_Object_t647128553 * L_10 = ___pb0;
		NullCheck(L_10);
		ColorU5BU5D_t941916413* L_11 = pb_Object_get_colors_m1446679300(L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		pb_Object_t647128553 * L_12 = ___pb0;
		NullCheck(L_12);
		Vector2U5BU5D_t1457185986* L_13 = pb_Object_get_uv_m1582891588(L_12, /*hidden argument*/NULL);
		V_5 = L_13;
		pb_Object_t647128553 * L_14 = ___pb0;
		NullCheck(L_14);
		Mesh_t3648964284 * L_15 = pb_Object_get_msh_m2771648845(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3U5BU5D_t1718750761* L_16 = Mesh_get_normals_m4099615978(L_15, /*hidden argument*/NULL);
		V_6 = L_16;
		pb_Object_t647128553 * L_17 = ___pb0;
		NullCheck(L_17);
		Mesh_t3648964284 * L_18 = pb_Object_get_msh_m2771648845(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector4U5BU5D_t934056436* L_19 = Mesh_get_tangents_m3279676290(L_18, /*hidden argument*/NULL);
		V_7 = L_19;
		pb_Object_t647128553 * L_20 = ___pb0;
		NullCheck(L_20);
		Mesh_t3648964284 * L_21 = pb_Object_get_msh_m2771648845(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector2U5BU5D_t1457185986* L_22 = Mesh_get_uv2_m3615020997(L_21, /*hidden argument*/NULL);
		V_8 = L_22;
		List_1_t496136383 * L_23 = (List_1_t496136383 *)il2cpp_codegen_object_new(List_1_t496136383_il2cpp_TypeInfo_var);
		List_1__ctor_m4022596417(L_23, /*hidden argument*/List_1__ctor_m4022596417_RuntimeMethod_var);
		V_9 = L_23;
		List_1_t496136383 * L_24 = (List_1_t496136383 *)il2cpp_codegen_object_new(List_1_t496136383_il2cpp_TypeInfo_var);
		List_1__ctor_m4022596417(L_24, /*hidden argument*/List_1__ctor_m4022596417_RuntimeMethod_var);
		V_10 = L_24;
		pb_Object_t647128553 * L_25 = ___pb0;
		List_1_t496136383 * L_26 = V_9;
		NullCheck(L_25);
		pb_Object_GetUVs_m2937565246(L_25, 2, L_26, /*hidden argument*/NULL);
		pb_Object_t647128553 * L_27 = ___pb0;
		List_1_t496136383 * L_28 = V_10;
		NullCheck(L_27);
		pb_Object_GetUVs_m2937565246(L_27, 3, L_28, /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_29 = V_3;
		if (!L_29)
		{
			goto IL_0095;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_30 = V_3;
		int32_t L_31 = Enumerable_Count_TisVector3_t3722313464_m3662092083(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_30, /*hidden argument*/Enumerable_Count_TisVector3_t3722313464_m3662092083_RuntimeMethod_var);
		int32_t L_32 = V_0;
		G_B6_0 = ((((int32_t)L_31) == ((int32_t)L_32))? 1 : 0);
		goto IL_0096;
	}

IL_0095:
	{
		G_B6_0 = 0;
	}

IL_0096:
	{
		V_11 = (bool)G_B6_0;
		ColorU5BU5D_t941916413* L_33 = V_4;
		if (!L_33)
		{
			goto IL_00ab;
		}
	}
	{
		ColorU5BU5D_t941916413* L_34 = V_4;
		int32_t L_35 = Enumerable_Count_TisColor_t2555686324_m2400385796(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_34, /*hidden argument*/Enumerable_Count_TisColor_t2555686324_m2400385796_RuntimeMethod_var);
		int32_t L_36 = V_0;
		G_B9_0 = ((((int32_t)L_35) == ((int32_t)L_36))? 1 : 0);
		goto IL_00ac;
	}

IL_00ab:
	{
		G_B9_0 = 0;
	}

IL_00ac:
	{
		V_12 = (bool)G_B9_0;
		Vector3U5BU5D_t1718750761* L_37 = V_6;
		if (!L_37)
		{
			goto IL_00c1;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_38 = V_6;
		int32_t L_39 = Enumerable_Count_TisVector3_t3722313464_m3662092083(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_38, /*hidden argument*/Enumerable_Count_TisVector3_t3722313464_m3662092083_RuntimeMethod_var);
		int32_t L_40 = V_0;
		G_B12_0 = ((((int32_t)L_39) == ((int32_t)L_40))? 1 : 0);
		goto IL_00c2;
	}

IL_00c1:
	{
		G_B12_0 = 0;
	}

IL_00c2:
	{
		V_13 = (bool)G_B12_0;
		Vector4U5BU5D_t934056436* L_41 = V_7;
		if (!L_41)
		{
			goto IL_00d7;
		}
	}
	{
		Vector4U5BU5D_t934056436* L_42 = V_7;
		int32_t L_43 = Enumerable_Count_TisVector4_t3319028937_m2634495408(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_42, /*hidden argument*/Enumerable_Count_TisVector4_t3319028937_m2634495408_RuntimeMethod_var);
		int32_t L_44 = V_0;
		G_B15_0 = ((((int32_t)L_43) == ((int32_t)L_44))? 1 : 0);
		goto IL_00d8;
	}

IL_00d7:
	{
		G_B15_0 = 0;
	}

IL_00d8:
	{
		V_14 = (bool)G_B15_0;
		Vector2U5BU5D_t1457185986* L_45 = V_5;
		if (!L_45)
		{
			goto IL_00ed;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_46 = V_5;
		int32_t L_47 = Enumerable_Count_TisVector2_t2156229523_m4098885708(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_46, /*hidden argument*/Enumerable_Count_TisVector2_t2156229523_m4098885708_RuntimeMethod_var);
		int32_t L_48 = V_0;
		G_B18_0 = ((((int32_t)L_47) == ((int32_t)L_48))? 1 : 0);
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B18_0 = 0;
	}

IL_00ee:
	{
		V_15 = (bool)G_B18_0;
		Vector2U5BU5D_t1457185986* L_49 = V_8;
		if (!L_49)
		{
			goto IL_0103;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_50 = V_8;
		int32_t L_51 = Enumerable_Count_TisVector2_t2156229523_m4098885708(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_50, /*hidden argument*/Enumerable_Count_TisVector2_t2156229523_m4098885708_RuntimeMethod_var);
		int32_t L_52 = V_0;
		G_B21_0 = ((((int32_t)L_51) == ((int32_t)L_52))? 1 : 0);
		goto IL_0104;
	}

IL_0103:
	{
		G_B21_0 = 0;
	}

IL_0104:
	{
		V_16 = (bool)G_B21_0;
		List_1_t496136383 * L_53 = V_9;
		if (!L_53)
		{
			goto IL_0119;
		}
	}
	{
		List_1_t496136383 * L_54 = V_9;
		int32_t L_55 = Enumerable_Count_TisVector4_t3319028937_m2634495408(NULL /*static, unused*/, L_54, /*hidden argument*/Enumerable_Count_TisVector4_t3319028937_m2634495408_RuntimeMethod_var);
		int32_t L_56 = V_0;
		G_B24_0 = ((((int32_t)L_55) == ((int32_t)L_56))? 1 : 0);
		goto IL_011a;
	}

IL_0119:
	{
		G_B24_0 = 0;
	}

IL_011a:
	{
		V_17 = (bool)G_B24_0;
		List_1_t496136383 * L_57 = V_10;
		if (!L_57)
		{
			goto IL_012f;
		}
	}
	{
		List_1_t496136383 * L_58 = V_10;
		int32_t L_59 = Enumerable_Count_TisVector4_t3319028937_m2634495408(NULL /*static, unused*/, L_58, /*hidden argument*/Enumerable_Count_TisVector4_t3319028937_m2634495408_RuntimeMethod_var);
		int32_t L_60 = V_0;
		G_B27_0 = ((((int32_t)L_59) == ((int32_t)L_60))? 1 : 0);
		goto IL_0130;
	}

IL_012f:
	{
		G_B27_0 = 0;
	}

IL_0130:
	{
		V_18 = (bool)G_B27_0;
		V_19 = 0;
		goto IL_0296;
	}

IL_013a:
	{
		pb_VertexU5BU5D_t2681278311* L_61 = V_2;
		int32_t L_62 = V_19;
		pb_Vertex_t4136735762 * L_63 = (pb_Vertex_t4136735762 *)il2cpp_codegen_object_new(pb_Vertex_t4136735762_il2cpp_TypeInfo_var);
		pb_Vertex__ctor_m4018012188(L_63, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_63);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (pb_Vertex_t4136735762 *)L_63);
		RuntimeObject* L_64 = ___indices1;
		if (L_64)
		{
			goto IL_0151;
		}
	}
	{
		int32_t L_65 = V_19;
		G_B31_0 = L_65;
		goto IL_0159;
	}

IL_0151:
	{
		RuntimeObject* L_66 = ___indices1;
		int32_t L_67 = V_19;
		NullCheck(L_66);
		int32_t L_68 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32) */, IList_1_t471298240_il2cpp_TypeInfo_var, L_66, L_67);
		G_B31_0 = L_68;
	}

IL_0159:
	{
		V_20 = G_B31_0;
		bool L_69 = V_11;
		if (!L_69)
		{
			goto IL_0182;
		}
	}
	{
		pb_VertexU5BU5D_t2681278311* L_70 = V_2;
		int32_t L_71 = V_19;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		pb_Vertex_t4136735762 * L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		L_73->set_hasPosition_8((bool)1);
		pb_VertexU5BU5D_t2681278311* L_74 = V_2;
		int32_t L_75 = V_19;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		pb_Vertex_t4136735762 * L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		Vector3U5BU5D_t1718750761* L_78 = V_3;
		int32_t L_79 = V_20;
		NullCheck(L_78);
		NullCheck(L_77);
		L_77->set_position_0((*(Vector3_t3722313464 *)((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))));
	}

IL_0182:
	{
		bool L_80 = V_12;
		if (!L_80)
		{
			goto IL_01aa;
		}
	}
	{
		pb_VertexU5BU5D_t2681278311* L_81 = V_2;
		int32_t L_82 = V_19;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		pb_Vertex_t4136735762 * L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_84);
		L_84->set_hasColor_9((bool)1);
		pb_VertexU5BU5D_t2681278311* L_85 = V_2;
		int32_t L_86 = V_19;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		pb_Vertex_t4136735762 * L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		ColorU5BU5D_t941916413* L_89 = V_4;
		int32_t L_90 = V_20;
		NullCheck(L_89);
		NullCheck(L_88);
		L_88->set_color_1((*(Color_t2555686324 *)((L_89)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_90)))));
	}

IL_01aa:
	{
		bool L_91 = V_13;
		if (!L_91)
		{
			goto IL_01d2;
		}
	}
	{
		pb_VertexU5BU5D_t2681278311* L_92 = V_2;
		int32_t L_93 = V_19;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		pb_Vertex_t4136735762 * L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		NullCheck(L_95);
		L_95->set_hasNormal_10((bool)1);
		pb_VertexU5BU5D_t2681278311* L_96 = V_2;
		int32_t L_97 = V_19;
		NullCheck(L_96);
		int32_t L_98 = L_97;
		pb_Vertex_t4136735762 * L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		Vector3U5BU5D_t1718750761* L_100 = V_6;
		int32_t L_101 = V_20;
		NullCheck(L_100);
		NullCheck(L_99);
		L_99->set_normal_2((*(Vector3_t3722313464 *)((L_100)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_101)))));
	}

IL_01d2:
	{
		bool L_102 = V_14;
		if (!L_102)
		{
			goto IL_01fa;
		}
	}
	{
		pb_VertexU5BU5D_t2681278311* L_103 = V_2;
		int32_t L_104 = V_19;
		NullCheck(L_103);
		int32_t L_105 = L_104;
		pb_Vertex_t4136735762 * L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		NullCheck(L_106);
		L_106->set_hasTangent_11((bool)1);
		pb_VertexU5BU5D_t2681278311* L_107 = V_2;
		int32_t L_108 = V_19;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		pb_Vertex_t4136735762 * L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		Vector4U5BU5D_t934056436* L_111 = V_7;
		int32_t L_112 = V_20;
		NullCheck(L_111);
		NullCheck(L_110);
		L_110->set_tangent_3((*(Vector4_t3319028937 *)((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)))));
	}

IL_01fa:
	{
		bool L_113 = V_15;
		if (!L_113)
		{
			goto IL_0222;
		}
	}
	{
		pb_VertexU5BU5D_t2681278311* L_114 = V_2;
		int32_t L_115 = V_19;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		pb_Vertex_t4136735762 * L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		NullCheck(L_117);
		L_117->set_hasUv0_12((bool)1);
		pb_VertexU5BU5D_t2681278311* L_118 = V_2;
		int32_t L_119 = V_19;
		NullCheck(L_118);
		int32_t L_120 = L_119;
		pb_Vertex_t4136735762 * L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		Vector2U5BU5D_t1457185986* L_122 = V_5;
		int32_t L_123 = V_20;
		NullCheck(L_122);
		NullCheck(L_121);
		L_121->set_uv0_4((*(Vector2_t2156229523 *)((L_122)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_123)))));
	}

IL_0222:
	{
		bool L_124 = V_16;
		if (!L_124)
		{
			goto IL_024a;
		}
	}
	{
		pb_VertexU5BU5D_t2681278311* L_125 = V_2;
		int32_t L_126 = V_19;
		NullCheck(L_125);
		int32_t L_127 = L_126;
		pb_Vertex_t4136735762 * L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		NullCheck(L_128);
		L_128->set_hasUv2_13((bool)1);
		pb_VertexU5BU5D_t2681278311* L_129 = V_2;
		int32_t L_130 = V_19;
		NullCheck(L_129);
		int32_t L_131 = L_130;
		pb_Vertex_t4136735762 * L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		Vector2U5BU5D_t1457185986* L_133 = V_8;
		int32_t L_134 = V_20;
		NullCheck(L_133);
		NullCheck(L_132);
		L_132->set_uv2_5((*(Vector2_t2156229523 *)((L_133)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_134)))));
	}

IL_024a:
	{
		bool L_135 = V_17;
		if (!L_135)
		{
			goto IL_026d;
		}
	}
	{
		pb_VertexU5BU5D_t2681278311* L_136 = V_2;
		int32_t L_137 = V_19;
		NullCheck(L_136);
		int32_t L_138 = L_137;
		pb_Vertex_t4136735762 * L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		NullCheck(L_139);
		L_139->set_hasUv3_14((bool)1);
		pb_VertexU5BU5D_t2681278311* L_140 = V_2;
		int32_t L_141 = V_19;
		NullCheck(L_140);
		int32_t L_142 = L_141;
		pb_Vertex_t4136735762 * L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		List_1_t496136383 * L_144 = V_9;
		int32_t L_145 = V_20;
		NullCheck(L_144);
		Vector4_t3319028937  L_146 = List_1_get_Item_m783205072(L_144, L_145, /*hidden argument*/List_1_get_Item_m783205072_RuntimeMethod_var);
		NullCheck(L_143);
		L_143->set_uv3_6(L_146);
	}

IL_026d:
	{
		bool L_147 = V_18;
		if (!L_147)
		{
			goto IL_0290;
		}
	}
	{
		pb_VertexU5BU5D_t2681278311* L_148 = V_2;
		int32_t L_149 = V_19;
		NullCheck(L_148);
		int32_t L_150 = L_149;
		pb_Vertex_t4136735762 * L_151 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		NullCheck(L_151);
		L_151->set_hasUv4_15((bool)1);
		pb_VertexU5BU5D_t2681278311* L_152 = V_2;
		int32_t L_153 = V_19;
		NullCheck(L_152);
		int32_t L_154 = L_153;
		pb_Vertex_t4136735762 * L_155 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		List_1_t496136383 * L_156 = V_10;
		int32_t L_157 = V_20;
		NullCheck(L_156);
		Vector4_t3319028937  L_158 = List_1_get_Item_m783205072(L_156, L_157, /*hidden argument*/List_1_get_Item_m783205072_RuntimeMethod_var);
		NullCheck(L_155);
		L_155->set_uv4_7(L_158);
	}

IL_0290:
	{
		int32_t L_159 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_159, (int32_t)1));
	}

IL_0296:
	{
		int32_t L_160 = V_19;
		int32_t L_161 = V_1;
		if ((((int32_t)L_160) < ((int32_t)L_161)))
		{
			goto IL_013a;
		}
	}
	{
		pb_VertexU5BU5D_t2681278311* L_162 = V_2;
		return L_162;
	}
}
// ProBuilder2.Common.pb_Vertex[] ProBuilder2.Common.pb_Vertex::GetVertices(UnityEngine.Mesh)
extern "C"  pb_VertexU5BU5D_t2681278311* pb_Vertex_GetVertices_m1505931676 (RuntimeObject * __this /* static, unused */, Mesh_t3648964284 * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_GetVertices_m1505931676_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	pb_VertexU5BU5D_t2681278311* V_1 = NULL;
	Vector3U5BU5D_t1718750761* V_2 = NULL;
	ColorU5BU5D_t941916413* V_3 = NULL;
	Vector3U5BU5D_t1718750761* V_4 = NULL;
	Vector4U5BU5D_t934056436* V_5 = NULL;
	Vector2U5BU5D_t1457185986* V_6 = NULL;
	Vector2U5BU5D_t1457185986* V_7 = NULL;
	List_1_t496136383 * V_8 = NULL;
	List_1_t496136383 * V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	int32_t V_18 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B26_0 = 0;
	{
		Mesh_t3648964284 * L_0 = ___m0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (pb_VertexU5BU5D_t2681278311*)NULL;
	}

IL_000e:
	{
		Mesh_t3648964284 * L_2 = ___m0;
		NullCheck(L_2);
		int32_t L_3 = Mesh_get_vertexCount_m884140614(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		V_1 = ((pb_VertexU5BU5D_t2681278311*)SZArrayNew(pb_VertexU5BU5D_t2681278311_il2cpp_TypeInfo_var, (uint32_t)L_4));
		Mesh_t3648964284 * L_5 = ___m0;
		NullCheck(L_5);
		Vector3U5BU5D_t1718750761* L_6 = Mesh_get_vertices_m3585684815(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		Mesh_t3648964284 * L_7 = ___m0;
		NullCheck(L_7);
		ColorU5BU5D_t941916413* L_8 = Mesh_get_colors_m1375263373(L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		Mesh_t3648964284 * L_9 = ___m0;
		NullCheck(L_9);
		Vector3U5BU5D_t1718750761* L_10 = Mesh_get_normals_m4099615978(L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		Mesh_t3648964284 * L_11 = ___m0;
		NullCheck(L_11);
		Vector4U5BU5D_t934056436* L_12 = Mesh_get_tangents_m3279676290(L_11, /*hidden argument*/NULL);
		V_5 = L_12;
		Mesh_t3648964284 * L_13 = ___m0;
		NullCheck(L_13);
		Vector2U5BU5D_t1457185986* L_14 = Mesh_get_uv_m4017248(L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		Mesh_t3648964284 * L_15 = ___m0;
		NullCheck(L_15);
		Vector2U5BU5D_t1457185986* L_16 = Mesh_get_uv2_m3615020997(L_15, /*hidden argument*/NULL);
		V_7 = L_16;
		List_1_t496136383 * L_17 = (List_1_t496136383 *)il2cpp_codegen_object_new(List_1_t496136383_il2cpp_TypeInfo_var);
		List_1__ctor_m4022596417(L_17, /*hidden argument*/List_1__ctor_m4022596417_RuntimeMethod_var);
		V_8 = L_17;
		List_1_t496136383 * L_18 = (List_1_t496136383 *)il2cpp_codegen_object_new(List_1_t496136383_il2cpp_TypeInfo_var);
		List_1__ctor_m4022596417(L_18, /*hidden argument*/List_1__ctor_m4022596417_RuntimeMethod_var);
		V_9 = L_18;
		Mesh_t3648964284 * L_19 = ___m0;
		List_1_t496136383 * L_20 = V_8;
		NullCheck(L_19);
		Mesh_GetUVs_m55185155(L_19, 2, L_20, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_21 = ___m0;
		List_1_t496136383 * L_22 = V_9;
		NullCheck(L_21);
		Mesh_GetUVs_m55185155(L_21, 3, L_22, /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_23 = V_2;
		if (!L_23)
		{
			goto IL_007b;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_24 = V_2;
		int32_t L_25 = Enumerable_Count_TisVector3_t3722313464_m3662092083(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_24, /*hidden argument*/Enumerable_Count_TisVector3_t3722313464_m3662092083_RuntimeMethod_var);
		int32_t L_26 = V_0;
		G_B5_0 = ((((int32_t)L_25) == ((int32_t)L_26))? 1 : 0);
		goto IL_007c;
	}

IL_007b:
	{
		G_B5_0 = 0;
	}

IL_007c:
	{
		V_10 = (bool)G_B5_0;
		ColorU5BU5D_t941916413* L_27 = V_3;
		if (!L_27)
		{
			goto IL_008f;
		}
	}
	{
		ColorU5BU5D_t941916413* L_28 = V_3;
		int32_t L_29 = Enumerable_Count_TisColor_t2555686324_m2400385796(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_28, /*hidden argument*/Enumerable_Count_TisColor_t2555686324_m2400385796_RuntimeMethod_var);
		int32_t L_30 = V_0;
		G_B8_0 = ((((int32_t)L_29) == ((int32_t)L_30))? 1 : 0);
		goto IL_0090;
	}

IL_008f:
	{
		G_B8_0 = 0;
	}

IL_0090:
	{
		V_11 = (bool)G_B8_0;
		Vector3U5BU5D_t1718750761* L_31 = V_4;
		if (!L_31)
		{
			goto IL_00a5;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_32 = V_4;
		int32_t L_33 = Enumerable_Count_TisVector3_t3722313464_m3662092083(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_32, /*hidden argument*/Enumerable_Count_TisVector3_t3722313464_m3662092083_RuntimeMethod_var);
		int32_t L_34 = V_0;
		G_B11_0 = ((((int32_t)L_33) == ((int32_t)L_34))? 1 : 0);
		goto IL_00a6;
	}

IL_00a5:
	{
		G_B11_0 = 0;
	}

IL_00a6:
	{
		V_12 = (bool)G_B11_0;
		Vector4U5BU5D_t934056436* L_35 = V_5;
		if (!L_35)
		{
			goto IL_00bb;
		}
	}
	{
		Vector4U5BU5D_t934056436* L_36 = V_5;
		int32_t L_37 = Enumerable_Count_TisVector4_t3319028937_m2634495408(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_36, /*hidden argument*/Enumerable_Count_TisVector4_t3319028937_m2634495408_RuntimeMethod_var);
		int32_t L_38 = V_0;
		G_B14_0 = ((((int32_t)L_37) == ((int32_t)L_38))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_13 = (bool)G_B14_0;
		Vector2U5BU5D_t1457185986* L_39 = V_6;
		if (!L_39)
		{
			goto IL_00d1;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_40 = V_6;
		int32_t L_41 = Enumerable_Count_TisVector2_t2156229523_m4098885708(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_40, /*hidden argument*/Enumerable_Count_TisVector2_t2156229523_m4098885708_RuntimeMethod_var);
		int32_t L_42 = V_0;
		G_B17_0 = ((((int32_t)L_41) == ((int32_t)L_42))? 1 : 0);
		goto IL_00d2;
	}

IL_00d1:
	{
		G_B17_0 = 0;
	}

IL_00d2:
	{
		V_14 = (bool)G_B17_0;
		Vector2U5BU5D_t1457185986* L_43 = V_7;
		if (!L_43)
		{
			goto IL_00e7;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_44 = V_7;
		int32_t L_45 = Enumerable_Count_TisVector2_t2156229523_m4098885708(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_44, /*hidden argument*/Enumerable_Count_TisVector2_t2156229523_m4098885708_RuntimeMethod_var);
		int32_t L_46 = V_0;
		G_B20_0 = ((((int32_t)L_45) == ((int32_t)L_46))? 1 : 0);
		goto IL_00e8;
	}

IL_00e7:
	{
		G_B20_0 = 0;
	}

IL_00e8:
	{
		V_15 = (bool)G_B20_0;
		List_1_t496136383 * L_47 = V_8;
		if (!L_47)
		{
			goto IL_00fd;
		}
	}
	{
		List_1_t496136383 * L_48 = V_8;
		int32_t L_49 = Enumerable_Count_TisVector4_t3319028937_m2634495408(NULL /*static, unused*/, L_48, /*hidden argument*/Enumerable_Count_TisVector4_t3319028937_m2634495408_RuntimeMethod_var);
		int32_t L_50 = V_0;
		G_B23_0 = ((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0);
		goto IL_00fe;
	}

IL_00fd:
	{
		G_B23_0 = 0;
	}

IL_00fe:
	{
		V_16 = (bool)G_B23_0;
		List_1_t496136383 * L_51 = V_9;
		if (!L_51)
		{
			goto IL_0113;
		}
	}
	{
		List_1_t496136383 * L_52 = V_9;
		int32_t L_53 = Enumerable_Count_TisVector4_t3319028937_m2634495408(NULL /*static, unused*/, L_52, /*hidden argument*/Enumerable_Count_TisVector4_t3319028937_m2634495408_RuntimeMethod_var);
		int32_t L_54 = V_0;
		G_B26_0 = ((((int32_t)L_53) == ((int32_t)L_54))? 1 : 0);
		goto IL_0114;
	}

IL_0113:
	{
		G_B26_0 = 0;
	}

IL_0114:
	{
		V_17 = (bool)G_B26_0;
		V_18 = 0;
		goto IL_0262;
	}

IL_011e:
	{
		pb_VertexU5BU5D_t2681278311* L_55 = V_1;
		int32_t L_56 = V_18;
		pb_Vertex_t4136735762 * L_57 = (pb_Vertex_t4136735762 *)il2cpp_codegen_object_new(pb_Vertex_t4136735762_il2cpp_TypeInfo_var);
		pb_Vertex__ctor_m4018012188(L_57, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_57);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (pb_Vertex_t4136735762 *)L_57);
		bool L_58 = V_10;
		if (!L_58)
		{
			goto IL_014f;
		}
	}
	{
		pb_VertexU5BU5D_t2681278311* L_59 = V_1;
		int32_t L_60 = V_18;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		pb_Vertex_t4136735762 * L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_62);
		L_62->set_hasPosition_8((bool)1);
		pb_VertexU5BU5D_t2681278311* L_63 = V_1;
		int32_t L_64 = V_18;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		pb_Vertex_t4136735762 * L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		Vector3U5BU5D_t1718750761* L_67 = V_2;
		int32_t L_68 = V_18;
		NullCheck(L_67);
		NullCheck(L_66);
		L_66->set_position_0((*(Vector3_t3722313464 *)((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68)))));
	}

IL_014f:
	{
		bool L_69 = V_11;
		if (!L_69)
		{
			goto IL_0176;
		}
	}
	{
		pb_VertexU5BU5D_t2681278311* L_70 = V_1;
		int32_t L_71 = V_18;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		pb_Vertex_t4136735762 * L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		L_73->set_hasColor_9((bool)1);
		pb_VertexU5BU5D_t2681278311* L_74 = V_1;
		int32_t L_75 = V_18;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		pb_Vertex_t4136735762 * L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		ColorU5BU5D_t941916413* L_78 = V_3;
		int32_t L_79 = V_18;
		NullCheck(L_78);
		NullCheck(L_77);
		L_77->set_color_1((*(Color_t2555686324 *)((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))));
	}

IL_0176:
	{
		bool L_80 = V_12;
		if (!L_80)
		{
			goto IL_019e;
		}
	}
	{
		pb_VertexU5BU5D_t2681278311* L_81 = V_1;
		int32_t L_82 = V_18;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		pb_Vertex_t4136735762 * L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_84);
		L_84->set_hasNormal_10((bool)1);
		pb_VertexU5BU5D_t2681278311* L_85 = V_1;
		int32_t L_86 = V_18;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		pb_Vertex_t4136735762 * L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		Vector3U5BU5D_t1718750761* L_89 = V_4;
		int32_t L_90 = V_18;
		NullCheck(L_89);
		NullCheck(L_88);
		L_88->set_normal_2((*(Vector3_t3722313464 *)((L_89)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_90)))));
	}

IL_019e:
	{
		bool L_91 = V_13;
		if (!L_91)
		{
			goto IL_01c6;
		}
	}
	{
		pb_VertexU5BU5D_t2681278311* L_92 = V_1;
		int32_t L_93 = V_18;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		pb_Vertex_t4136735762 * L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		NullCheck(L_95);
		L_95->set_hasTangent_11((bool)1);
		pb_VertexU5BU5D_t2681278311* L_96 = V_1;
		int32_t L_97 = V_18;
		NullCheck(L_96);
		int32_t L_98 = L_97;
		pb_Vertex_t4136735762 * L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		Vector4U5BU5D_t934056436* L_100 = V_5;
		int32_t L_101 = V_18;
		NullCheck(L_100);
		NullCheck(L_99);
		L_99->set_tangent_3((*(Vector4_t3319028937 *)((L_100)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_101)))));
	}

IL_01c6:
	{
		bool L_102 = V_14;
		if (!L_102)
		{
			goto IL_01ee;
		}
	}
	{
		pb_VertexU5BU5D_t2681278311* L_103 = V_1;
		int32_t L_104 = V_18;
		NullCheck(L_103);
		int32_t L_105 = L_104;
		pb_Vertex_t4136735762 * L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		NullCheck(L_106);
		L_106->set_hasUv0_12((bool)1);
		pb_VertexU5BU5D_t2681278311* L_107 = V_1;
		int32_t L_108 = V_18;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		pb_Vertex_t4136735762 * L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		Vector2U5BU5D_t1457185986* L_111 = V_6;
		int32_t L_112 = V_18;
		NullCheck(L_111);
		NullCheck(L_110);
		L_110->set_uv0_4((*(Vector2_t2156229523 *)((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)))));
	}

IL_01ee:
	{
		bool L_113 = V_15;
		if (!L_113)
		{
			goto IL_0216;
		}
	}
	{
		pb_VertexU5BU5D_t2681278311* L_114 = V_1;
		int32_t L_115 = V_18;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		pb_Vertex_t4136735762 * L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		NullCheck(L_117);
		L_117->set_hasUv2_13((bool)1);
		pb_VertexU5BU5D_t2681278311* L_118 = V_1;
		int32_t L_119 = V_18;
		NullCheck(L_118);
		int32_t L_120 = L_119;
		pb_Vertex_t4136735762 * L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		Vector2U5BU5D_t1457185986* L_122 = V_7;
		int32_t L_123 = V_18;
		NullCheck(L_122);
		NullCheck(L_121);
		L_121->set_uv2_5((*(Vector2_t2156229523 *)((L_122)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_123)))));
	}

IL_0216:
	{
		bool L_124 = V_16;
		if (!L_124)
		{
			goto IL_0239;
		}
	}
	{
		pb_VertexU5BU5D_t2681278311* L_125 = V_1;
		int32_t L_126 = V_18;
		NullCheck(L_125);
		int32_t L_127 = L_126;
		pb_Vertex_t4136735762 * L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		NullCheck(L_128);
		L_128->set_hasUv3_14((bool)1);
		pb_VertexU5BU5D_t2681278311* L_129 = V_1;
		int32_t L_130 = V_18;
		NullCheck(L_129);
		int32_t L_131 = L_130;
		pb_Vertex_t4136735762 * L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		List_1_t496136383 * L_133 = V_8;
		int32_t L_134 = V_18;
		NullCheck(L_133);
		Vector4_t3319028937  L_135 = List_1_get_Item_m783205072(L_133, L_134, /*hidden argument*/List_1_get_Item_m783205072_RuntimeMethod_var);
		NullCheck(L_132);
		L_132->set_uv3_6(L_135);
	}

IL_0239:
	{
		bool L_136 = V_17;
		if (!L_136)
		{
			goto IL_025c;
		}
	}
	{
		pb_VertexU5BU5D_t2681278311* L_137 = V_1;
		int32_t L_138 = V_18;
		NullCheck(L_137);
		int32_t L_139 = L_138;
		pb_Vertex_t4136735762 * L_140 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		NullCheck(L_140);
		L_140->set_hasUv4_15((bool)1);
		pb_VertexU5BU5D_t2681278311* L_141 = V_1;
		int32_t L_142 = V_18;
		NullCheck(L_141);
		int32_t L_143 = L_142;
		pb_Vertex_t4136735762 * L_144 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		List_1_t496136383 * L_145 = V_9;
		int32_t L_146 = V_18;
		NullCheck(L_145);
		Vector4_t3319028937  L_147 = List_1_get_Item_m783205072(L_145, L_146, /*hidden argument*/List_1_get_Item_m783205072_RuntimeMethod_var);
		NullCheck(L_144);
		L_144->set_uv4_7(L_147);
	}

IL_025c:
	{
		int32_t L_148 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_148, (int32_t)1));
	}

IL_0262:
	{
		int32_t L_149 = V_18;
		int32_t L_150 = V_0;
		if ((((int32_t)L_149) < ((int32_t)L_150)))
		{
			goto IL_011e;
		}
	}
	{
		pb_VertexU5BU5D_t2681278311* L_151 = V_1;
		return L_151;
	}
}
// System.Void ProBuilder2.Common.pb_Vertex::GetArrays(System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>,UnityEngine.Vector3[]&,UnityEngine.Color[]&,UnityEngine.Vector2[]&,UnityEngine.Vector3[]&,UnityEngine.Vector4[]&,UnityEngine.Vector2[]&,System.Collections.Generic.List`1<UnityEngine.Vector4>&,System.Collections.Generic.List`1<UnityEngine.Vector4>&)
extern "C"  void pb_Vertex_GetArrays_m4287872558 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___vertices0, Vector3U5BU5D_t1718750761** ___position1, ColorU5BU5D_t941916413** ___color2, Vector2U5BU5D_t1457185986** ___uv03, Vector3U5BU5D_t1718750761** ___normal4, Vector4U5BU5D_t934056436** ___tangent5, Vector2U5BU5D_t1457185986** ___uv26, List_1_t496136383 ** ___uv37, List_1_t496136383 ** ___uv48, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___vertices0;
		Vector3U5BU5D_t1718750761** L_1 = ___position1;
		ColorU5BU5D_t941916413** L_2 = ___color2;
		Vector2U5BU5D_t1457185986** L_3 = ___uv03;
		Vector3U5BU5D_t1718750761** L_4 = ___normal4;
		Vector4U5BU5D_t934056436** L_5 = ___tangent5;
		Vector2U5BU5D_t1457185986** L_6 = ___uv26;
		List_1_t496136383 ** L_7 = ___uv37;
		List_1_t496136383 ** L_8 = ___uv48;
		pb_Vertex_GetArrays_m1138548130(NULL /*static, unused*/, L_0, (Vector3U5BU5D_t1718750761**)L_1, (ColorU5BU5D_t941916413**)L_2, (Vector2U5BU5D_t1457185986**)L_3, (Vector3U5BU5D_t1718750761**)L_4, (Vector4U5BU5D_t934056436**)L_5, (Vector2U5BU5D_t1457185986**)L_6, (List_1_t496136383 **)L_7, (List_1_t496136383 **)L_8, ((int32_t)255), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProBuilder2.Common.pb_Vertex::GetArrays(System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>,UnityEngine.Vector3[]&,UnityEngine.Color[]&,UnityEngine.Vector2[]&,UnityEngine.Vector3[]&,UnityEngine.Vector4[]&,UnityEngine.Vector2[]&,System.Collections.Generic.List`1<UnityEngine.Vector4>&,System.Collections.Generic.List`1<UnityEngine.Vector4>&,ProBuilder2.Common.AttributeType)
extern "C"  void pb_Vertex_GetArrays_m1138548130 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___vertices0, Vector3U5BU5D_t1718750761** ___position1, ColorU5BU5D_t941916413** ___color2, Vector2U5BU5D_t1457185986** ___uv03, Vector3U5BU5D_t1718750761** ___normal4, Vector4U5BU5D_t934056436** ___tangent5, Vector2U5BU5D_t1457185986** ___uv26, List_1_t496136383 ** ___uv37, List_1_t496136383 ** ___uv48, uint16_t ___attributes9, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_GetArrays_m1138548130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	Vector3U5BU5D_t1718750761** G_B2_0 = NULL;
	Vector3U5BU5D_t1718750761** G_B1_0 = NULL;
	Vector3U5BU5D_t1718750761* G_B3_0 = NULL;
	Vector3U5BU5D_t1718750761** G_B3_1 = NULL;
	ColorU5BU5D_t941916413** G_B5_0 = NULL;
	ColorU5BU5D_t941916413** G_B4_0 = NULL;
	ColorU5BU5D_t941916413* G_B6_0 = NULL;
	ColorU5BU5D_t941916413** G_B6_1 = NULL;
	Vector2U5BU5D_t1457185986** G_B8_0 = NULL;
	Vector2U5BU5D_t1457185986** G_B7_0 = NULL;
	Vector2U5BU5D_t1457185986* G_B9_0 = NULL;
	Vector2U5BU5D_t1457185986** G_B9_1 = NULL;
	Vector3U5BU5D_t1718750761** G_B11_0 = NULL;
	Vector3U5BU5D_t1718750761** G_B10_0 = NULL;
	Vector3U5BU5D_t1718750761* G_B12_0 = NULL;
	Vector3U5BU5D_t1718750761** G_B12_1 = NULL;
	Vector4U5BU5D_t934056436** G_B14_0 = NULL;
	Vector4U5BU5D_t934056436** G_B13_0 = NULL;
	Vector4U5BU5D_t934056436* G_B15_0 = NULL;
	Vector4U5BU5D_t934056436** G_B15_1 = NULL;
	Vector2U5BU5D_t1457185986** G_B17_0 = NULL;
	Vector2U5BU5D_t1457185986** G_B16_0 = NULL;
	Vector2U5BU5D_t1457185986* G_B18_0 = NULL;
	Vector2U5BU5D_t1457185986** G_B18_1 = NULL;
	List_1_t496136383 ** G_B20_0 = NULL;
	List_1_t496136383 ** G_B19_0 = NULL;
	List_1_t496136383 * G_B21_0 = NULL;
	List_1_t496136383 ** G_B21_1 = NULL;
	List_1_t496136383 ** G_B23_0 = NULL;
	List_1_t496136383 ** G_B22_0 = NULL;
	List_1_t496136383 * G_B24_0 = NULL;
	List_1_t496136383 ** G_B24_1 = NULL;
	{
		RuntimeObject* L_0 = ___vertices0;
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<ProBuilder2.Common.pb_Vertex>::get_Count() */, ICollection_1_t2669920700_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		uint16_t L_2 = ___attributes9;
		V_1 = (bool)((((int32_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_2&(int32_t)1)))))) == ((int32_t)1))? 1 : 0);
		uint16_t L_3 = ___attributes9;
		V_2 = (bool)((((int32_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)32))))))) == ((int32_t)((int32_t)32)))? 1 : 0);
		uint16_t L_4 = ___attributes9;
		V_3 = (bool)((((int32_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_4&(int32_t)2)))))) == ((int32_t)2))? 1 : 0);
		uint16_t L_5 = ___attributes9;
		V_4 = (bool)((((int32_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)64))))))) == ((int32_t)((int32_t)64)))? 1 : 0);
		uint16_t L_6 = ___attributes9;
		V_5 = (bool)((((int32_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)128))))))) == ((int32_t)((int32_t)128)))? 1 : 0);
		uint16_t L_7 = ___attributes9;
		V_6 = (bool)((((int32_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_7&(int32_t)4)))))) == ((int32_t)4))? 1 : 0);
		uint16_t L_8 = ___attributes9;
		V_7 = (bool)((((int32_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_8&(int32_t)8)))))) == ((int32_t)8))? 1 : 0);
		uint16_t L_9 = ___attributes9;
		V_8 = (bool)((((int32_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)16))))))) == ((int32_t)((int32_t)16)))? 1 : 0);
		Vector3U5BU5D_t1718750761** L_10 = ___position1;
		bool L_11 = V_1;
		G_B1_0 = L_10;
		if (!L_11)
		{
			G_B2_0 = L_10;
			goto IL_0074;
		}
	}
	{
		int32_t L_12 = V_0;
		G_B3_0 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)L_12));
		G_B3_1 = G_B1_0;
		goto IL_0075;
	}

IL_0074:
	{
		G_B3_0 = ((Vector3U5BU5D_t1718750761*)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0075:
	{
		*((RuntimeObject **)(G_B3_1)) = (RuntimeObject *)G_B3_0;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(G_B3_1), (RuntimeObject *)G_B3_0);
		ColorU5BU5D_t941916413** L_13 = ___color2;
		bool L_14 = V_2;
		G_B4_0 = L_13;
		if (!L_14)
		{
			G_B5_0 = L_13;
			goto IL_0088;
		}
	}
	{
		int32_t L_15 = V_0;
		G_B6_0 = ((ColorU5BU5D_t941916413*)SZArrayNew(ColorU5BU5D_t941916413_il2cpp_TypeInfo_var, (uint32_t)L_15));
		G_B6_1 = G_B4_0;
		goto IL_0089;
	}

IL_0088:
	{
		G_B6_0 = ((ColorU5BU5D_t941916413*)(NULL));
		G_B6_1 = G_B5_0;
	}

IL_0089:
	{
		*((RuntimeObject **)(G_B6_1)) = (RuntimeObject *)G_B6_0;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(G_B6_1), (RuntimeObject *)G_B6_0);
		Vector2U5BU5D_t1457185986** L_16 = ___uv03;
		bool L_17 = V_3;
		G_B7_0 = L_16;
		if (!L_17)
		{
			G_B8_0 = L_16;
			goto IL_009c;
		}
	}
	{
		int32_t L_18 = V_0;
		G_B9_0 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)L_18));
		G_B9_1 = G_B7_0;
		goto IL_009d;
	}

IL_009c:
	{
		G_B9_0 = ((Vector2U5BU5D_t1457185986*)(NULL));
		G_B9_1 = G_B8_0;
	}

IL_009d:
	{
		*((RuntimeObject **)(G_B9_1)) = (RuntimeObject *)G_B9_0;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(G_B9_1), (RuntimeObject *)G_B9_0);
		Vector3U5BU5D_t1718750761** L_19 = ___normal4;
		bool L_20 = V_4;
		G_B10_0 = L_19;
		if (!L_20)
		{
			G_B11_0 = L_19;
			goto IL_00b2;
		}
	}
	{
		int32_t L_21 = V_0;
		G_B12_0 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)L_21));
		G_B12_1 = G_B10_0;
		goto IL_00b3;
	}

IL_00b2:
	{
		G_B12_0 = ((Vector3U5BU5D_t1718750761*)(NULL));
		G_B12_1 = G_B11_0;
	}

IL_00b3:
	{
		*((RuntimeObject **)(G_B12_1)) = (RuntimeObject *)G_B12_0;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(G_B12_1), (RuntimeObject *)G_B12_0);
		Vector4U5BU5D_t934056436** L_22 = ___tangent5;
		bool L_23 = V_5;
		G_B13_0 = L_22;
		if (!L_23)
		{
			G_B14_0 = L_22;
			goto IL_00c8;
		}
	}
	{
		int32_t L_24 = V_0;
		G_B15_0 = ((Vector4U5BU5D_t934056436*)SZArrayNew(Vector4U5BU5D_t934056436_il2cpp_TypeInfo_var, (uint32_t)L_24));
		G_B15_1 = G_B13_0;
		goto IL_00c9;
	}

IL_00c8:
	{
		G_B15_0 = ((Vector4U5BU5D_t934056436*)(NULL));
		G_B15_1 = G_B14_0;
	}

IL_00c9:
	{
		*((RuntimeObject **)(G_B15_1)) = (RuntimeObject *)G_B15_0;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(G_B15_1), (RuntimeObject *)G_B15_0);
		Vector2U5BU5D_t1457185986** L_25 = ___uv26;
		bool L_26 = V_6;
		G_B16_0 = L_25;
		if (!L_26)
		{
			G_B17_0 = L_25;
			goto IL_00de;
		}
	}
	{
		int32_t L_27 = V_0;
		G_B18_0 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)L_27));
		G_B18_1 = G_B16_0;
		goto IL_00df;
	}

IL_00de:
	{
		G_B18_0 = ((Vector2U5BU5D_t1457185986*)(NULL));
		G_B18_1 = G_B17_0;
	}

IL_00df:
	{
		*((RuntimeObject **)(G_B18_1)) = (RuntimeObject *)G_B18_0;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(G_B18_1), (RuntimeObject *)G_B18_0);
		List_1_t496136383 ** L_28 = ___uv37;
		bool L_29 = V_7;
		G_B19_0 = L_28;
		if (!L_29)
		{
			G_B20_0 = L_28;
			goto IL_00f4;
		}
	}
	{
		int32_t L_30 = V_0;
		List_1_t496136383 * L_31 = (List_1_t496136383 *)il2cpp_codegen_object_new(List_1_t496136383_il2cpp_TypeInfo_var);
		List_1__ctor_m955356357(L_31, L_30, /*hidden argument*/List_1__ctor_m955356357_RuntimeMethod_var);
		G_B21_0 = L_31;
		G_B21_1 = G_B19_0;
		goto IL_00f5;
	}

IL_00f4:
	{
		G_B21_0 = ((List_1_t496136383 *)(NULL));
		G_B21_1 = G_B20_0;
	}

IL_00f5:
	{
		*((RuntimeObject **)(G_B21_1)) = (RuntimeObject *)G_B21_0;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(G_B21_1), (RuntimeObject *)G_B21_0);
		List_1_t496136383 ** L_32 = ___uv48;
		bool L_33 = V_8;
		G_B22_0 = L_32;
		if (!L_33)
		{
			G_B23_0 = L_32;
			goto IL_010a;
		}
	}
	{
		int32_t L_34 = V_0;
		List_1_t496136383 * L_35 = (List_1_t496136383 *)il2cpp_codegen_object_new(List_1_t496136383_il2cpp_TypeInfo_var);
		List_1__ctor_m955356357(L_35, L_34, /*hidden argument*/List_1__ctor_m955356357_RuntimeMethod_var);
		G_B24_0 = L_35;
		G_B24_1 = G_B22_0;
		goto IL_010b;
	}

IL_010a:
	{
		G_B24_0 = ((List_1_t496136383 *)(NULL));
		G_B24_1 = G_B23_0;
	}

IL_010b:
	{
		*((RuntimeObject **)(G_B24_1)) = (RuntimeObject *)G_B24_0;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(G_B24_1), (RuntimeObject *)G_B24_0);
		V_9 = 0;
		goto IL_021e;
	}

IL_0114:
	{
		bool L_36 = V_1;
		if (!L_36)
		{
			goto IL_0135;
		}
	}
	{
		Vector3U5BU5D_t1718750761** L_37 = ___position1;
		int32_t L_38 = V_9;
		NullCheck((*((Vector3U5BU5D_t1718750761**)L_37)));
		RuntimeObject* L_39 = ___vertices0;
		int32_t L_40 = V_9;
		NullCheck(L_39);
		pb_Vertex_t4136735762 * L_41 = InterfaceFuncInvoker1< pb_Vertex_t4136735762 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_t1657088249_il2cpp_TypeInfo_var, L_39, L_40);
		NullCheck(L_41);
		Vector3_t3722313464  L_42 = L_41->get_position_0();
		*(Vector3_t3722313464 *)(((*((Vector3U5BU5D_t1718750761**)L_37)))->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38))) = L_42;
	}

IL_0135:
	{
		bool L_43 = V_2;
		if (!L_43)
		{
			goto IL_0156;
		}
	}
	{
		ColorU5BU5D_t941916413** L_44 = ___color2;
		int32_t L_45 = V_9;
		NullCheck((*((ColorU5BU5D_t941916413**)L_44)));
		RuntimeObject* L_46 = ___vertices0;
		int32_t L_47 = V_9;
		NullCheck(L_46);
		pb_Vertex_t4136735762 * L_48 = InterfaceFuncInvoker1< pb_Vertex_t4136735762 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_t1657088249_il2cpp_TypeInfo_var, L_46, L_47);
		NullCheck(L_48);
		Color_t2555686324  L_49 = L_48->get_color_1();
		*(Color_t2555686324 *)(((*((ColorU5BU5D_t941916413**)L_44)))->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45))) = L_49;
	}

IL_0156:
	{
		bool L_50 = V_3;
		if (!L_50)
		{
			goto IL_0177;
		}
	}
	{
		Vector2U5BU5D_t1457185986** L_51 = ___uv03;
		int32_t L_52 = V_9;
		NullCheck((*((Vector2U5BU5D_t1457185986**)L_51)));
		RuntimeObject* L_53 = ___vertices0;
		int32_t L_54 = V_9;
		NullCheck(L_53);
		pb_Vertex_t4136735762 * L_55 = InterfaceFuncInvoker1< pb_Vertex_t4136735762 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_t1657088249_il2cpp_TypeInfo_var, L_53, L_54);
		NullCheck(L_55);
		Vector2_t2156229523  L_56 = L_55->get_uv0_4();
		*(Vector2_t2156229523 *)(((*((Vector2U5BU5D_t1457185986**)L_51)))->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52))) = L_56;
	}

IL_0177:
	{
		bool L_57 = V_4;
		if (!L_57)
		{
			goto IL_019a;
		}
	}
	{
		Vector3U5BU5D_t1718750761** L_58 = ___normal4;
		int32_t L_59 = V_9;
		NullCheck((*((Vector3U5BU5D_t1718750761**)L_58)));
		RuntimeObject* L_60 = ___vertices0;
		int32_t L_61 = V_9;
		NullCheck(L_60);
		pb_Vertex_t4136735762 * L_62 = InterfaceFuncInvoker1< pb_Vertex_t4136735762 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_t1657088249_il2cpp_TypeInfo_var, L_60, L_61);
		NullCheck(L_62);
		Vector3_t3722313464  L_63 = L_62->get_normal_2();
		*(Vector3_t3722313464 *)(((*((Vector3U5BU5D_t1718750761**)L_58)))->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59))) = L_63;
	}

IL_019a:
	{
		bool L_64 = V_5;
		if (!L_64)
		{
			goto IL_01bd;
		}
	}
	{
		Vector4U5BU5D_t934056436** L_65 = ___tangent5;
		int32_t L_66 = V_9;
		NullCheck((*((Vector4U5BU5D_t934056436**)L_65)));
		RuntimeObject* L_67 = ___vertices0;
		int32_t L_68 = V_9;
		NullCheck(L_67);
		pb_Vertex_t4136735762 * L_69 = InterfaceFuncInvoker1< pb_Vertex_t4136735762 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_t1657088249_il2cpp_TypeInfo_var, L_67, L_68);
		NullCheck(L_69);
		Vector4_t3319028937  L_70 = L_69->get_tangent_3();
		*(Vector4_t3319028937 *)(((*((Vector4U5BU5D_t934056436**)L_65)))->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66))) = L_70;
	}

IL_01bd:
	{
		bool L_71 = V_6;
		if (!L_71)
		{
			goto IL_01e0;
		}
	}
	{
		Vector2U5BU5D_t1457185986** L_72 = ___uv26;
		int32_t L_73 = V_9;
		NullCheck((*((Vector2U5BU5D_t1457185986**)L_72)));
		RuntimeObject* L_74 = ___vertices0;
		int32_t L_75 = V_9;
		NullCheck(L_74);
		pb_Vertex_t4136735762 * L_76 = InterfaceFuncInvoker1< pb_Vertex_t4136735762 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_t1657088249_il2cpp_TypeInfo_var, L_74, L_75);
		NullCheck(L_76);
		Vector2_t2156229523  L_77 = L_76->get_uv2_5();
		*(Vector2_t2156229523 *)(((*((Vector2U5BU5D_t1457185986**)L_72)))->GetAddressAt(static_cast<il2cpp_array_size_t>(L_73))) = L_77;
	}

IL_01e0:
	{
		bool L_78 = V_7;
		if (!L_78)
		{
			goto IL_01fc;
		}
	}
	{
		List_1_t496136383 ** L_79 = ___uv37;
		RuntimeObject* L_80 = ___vertices0;
		int32_t L_81 = V_9;
		NullCheck(L_80);
		pb_Vertex_t4136735762 * L_82 = InterfaceFuncInvoker1< pb_Vertex_t4136735762 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_t1657088249_il2cpp_TypeInfo_var, L_80, L_81);
		NullCheck(L_82);
		Vector4_t3319028937  L_83 = L_82->get_uv3_6();
		NullCheck((*((List_1_t496136383 **)L_79)));
		List_1_Add_m2996644200((*((List_1_t496136383 **)L_79)), L_83, /*hidden argument*/List_1_Add_m2996644200_RuntimeMethod_var);
	}

IL_01fc:
	{
		bool L_84 = V_8;
		if (!L_84)
		{
			goto IL_0218;
		}
	}
	{
		List_1_t496136383 ** L_85 = ___uv48;
		RuntimeObject* L_86 = ___vertices0;
		int32_t L_87 = V_9;
		NullCheck(L_86);
		pb_Vertex_t4136735762 * L_88 = InterfaceFuncInvoker1< pb_Vertex_t4136735762 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_t1657088249_il2cpp_TypeInfo_var, L_86, L_87);
		NullCheck(L_88);
		Vector4_t3319028937  L_89 = L_88->get_uv4_7();
		NullCheck((*((List_1_t496136383 **)L_85)));
		List_1_Add_m2996644200((*((List_1_t496136383 **)L_85)), L_89, /*hidden argument*/List_1_Add_m2996644200_RuntimeMethod_var);
	}

IL_0218:
	{
		int32_t L_90 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1));
	}

IL_021e:
	{
		int32_t L_91 = V_9;
		int32_t L_92 = V_0;
		if ((((int32_t)L_91) < ((int32_t)L_92)))
		{
			goto IL_0114;
		}
	}
	{
		return;
	}
}
// System.Void ProBuilder2.Common.pb_Vertex::SetMesh(UnityEngine.Mesh,System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>)
extern "C"  void pb_Vertex_SetMesh_m468515096 (RuntimeObject * __this /* static, unused */, Mesh_t3648964284 * ___m0, RuntimeObject* ___vertices1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_SetMesh_m468515096_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_t1718750761* V_0 = NULL;
	ColorU5BU5D_t941916413* V_1 = NULL;
	Vector2U5BU5D_t1457185986* V_2 = NULL;
	Vector3U5BU5D_t1718750761* V_3 = NULL;
	Vector4U5BU5D_t934056436* V_4 = NULL;
	Vector2U5BU5D_t1457185986* V_5 = NULL;
	List_1_t496136383 * V_6 = NULL;
	List_1_t496136383 * V_7 = NULL;
	pb_Vertex_t4136735762 * V_8 = NULL;
	{
		V_0 = (Vector3U5BU5D_t1718750761*)NULL;
		V_1 = (ColorU5BU5D_t941916413*)NULL;
		V_2 = (Vector2U5BU5D_t1457185986*)NULL;
		V_3 = (Vector3U5BU5D_t1718750761*)NULL;
		V_4 = (Vector4U5BU5D_t934056436*)NULL;
		V_5 = (Vector2U5BU5D_t1457185986*)NULL;
		V_6 = (List_1_t496136383 *)NULL;
		V_7 = (List_1_t496136383 *)NULL;
		RuntimeObject* L_0 = ___vertices1;
		pb_Vertex_GetArrays_m4287872558(NULL /*static, unused*/, L_0, (Vector3U5BU5D_t1718750761**)(&V_0), (ColorU5BU5D_t941916413**)(&V_1), (Vector2U5BU5D_t1457185986**)(&V_2), (Vector3U5BU5D_t1718750761**)(&V_3), (Vector4U5BU5D_t934056436**)(&V_4), (Vector2U5BU5D_t1457185986**)(&V_5), (List_1_t496136383 **)(&V_6), (List_1_t496136383 **)(&V_7), /*hidden argument*/NULL);
		Mesh_t3648964284 * L_1 = ___m0;
		NullCheck(L_1);
		Mesh_Clear_m2630385472(L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___vertices1;
		NullCheck(L_2);
		pb_Vertex_t4136735762 * L_3 = InterfaceFuncInvoker1< pb_Vertex_t4136735762 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_t1657088249_il2cpp_TypeInfo_var, L_2, 0);
		V_8 = L_3;
		pb_Vertex_t4136735762 * L_4 = V_8;
		NullCheck(L_4);
		bool L_5 = L_4->get_hasPosition_8();
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		Mesh_t3648964284 * L_6 = ___m0;
		Vector3U5BU5D_t1718750761* L_7 = V_0;
		NullCheck(L_6);
		Mesh_set_vertices_m2084450642(L_6, L_7, /*hidden argument*/NULL);
	}

IL_004c:
	{
		pb_Vertex_t4136735762 * L_8 = V_8;
		NullCheck(L_8);
		bool L_9 = L_8->get_hasColor_9();
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		Mesh_t3648964284 * L_10 = ___m0;
		ColorU5BU5D_t941916413* L_11 = V_1;
		NullCheck(L_10);
		Mesh_set_colors_m2218481242(L_10, L_11, /*hidden argument*/NULL);
	}

IL_005f:
	{
		pb_Vertex_t4136735762 * L_12 = V_8;
		NullCheck(L_12);
		bool L_13 = L_12->get_hasUv0_12();
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Mesh_t3648964284 * L_14 = ___m0;
		Vector2U5BU5D_t1457185986* L_15 = V_2;
		NullCheck(L_14);
		Mesh_set_uv_m1258646872(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0072:
	{
		pb_Vertex_t4136735762 * L_16 = V_8;
		NullCheck(L_16);
		bool L_17 = L_16->get_hasNormal_10();
		if (!L_17)
		{
			goto IL_0085;
		}
	}
	{
		Mesh_t3648964284 * L_18 = ___m0;
		Vector3U5BU5D_t1718750761* L_19 = V_3;
		NullCheck(L_18);
		Mesh_set_normals_m332514528(L_18, L_19, /*hidden argument*/NULL);
	}

IL_0085:
	{
		pb_Vertex_t4136735762 * L_20 = V_8;
		NullCheck(L_20);
		bool L_21 = L_20->get_hasTangent_11();
		if (!L_21)
		{
			goto IL_0099;
		}
	}
	{
		Mesh_t3648964284 * L_22 = ___m0;
		Vector4U5BU5D_t934056436* L_23 = V_4;
		NullCheck(L_22);
		Mesh_set_tangents_m1592250690(L_22, L_23, /*hidden argument*/NULL);
	}

IL_0099:
	{
		pb_Vertex_t4136735762 * L_24 = V_8;
		NullCheck(L_24);
		bool L_25 = L_24->get_hasUv2_13();
		if (!L_25)
		{
			goto IL_00ad;
		}
	}
	{
		Mesh_t3648964284 * L_26 = ___m0;
		Vector2U5BU5D_t1457185986* L_27 = V_5;
		NullCheck(L_26);
		Mesh_set_uv2_m2840654016(L_26, L_27, /*hidden argument*/NULL);
	}

IL_00ad:
	{
		pb_Vertex_t4136735762 * L_28 = V_8;
		NullCheck(L_28);
		bool L_29 = L_28->get_hasUv3_14();
		if (!L_29)
		{
			goto IL_00c9;
		}
	}
	{
		List_1_t496136383 * L_30 = V_6;
		if (!L_30)
		{
			goto IL_00c9;
		}
	}
	{
		Mesh_t3648964284 * L_31 = ___m0;
		List_1_t496136383 * L_32 = V_6;
		NullCheck(L_31);
		Mesh_SetUVs_m3071541108(L_31, 2, L_32, /*hidden argument*/NULL);
	}

IL_00c9:
	{
		pb_Vertex_t4136735762 * L_33 = V_8;
		NullCheck(L_33);
		bool L_34 = L_33->get_hasUv4_15();
		if (!L_34)
		{
			goto IL_00e5;
		}
	}
	{
		List_1_t496136383 * L_35 = V_7;
		if (!L_35)
		{
			goto IL_00e5;
		}
	}
	{
		Mesh_t3648964284 * L_36 = ___m0;
		List_1_t496136383 * L_37 = V_7;
		NullCheck(L_36);
		Mesh_SetUVs_m3071541108(L_36, 3, L_37, /*hidden argument*/NULL);
	}

IL_00e5:
	{
		return;
	}
}
// ProBuilder2.Common.pb_Vertex ProBuilder2.Common.pb_Vertex::Average(System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>,System.Collections.Generic.IList`1<System.Int32>)
extern "C"  pb_Vertex_t4136735762 * pb_Vertex_Average_m1010642590 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___vertices0, RuntimeObject* ___indices1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_Average_m1010642590_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	pb_Vertex_t4136735762 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	{
		pb_Vertex_t4136735762 * L_0 = (pb_Vertex_t4136735762 *)il2cpp_codegen_object_new(pb_Vertex_t4136735762_il2cpp_TypeInfo_var);
		pb_Vertex__ctor_m4018012188(L_0, (bool)0, /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___indices1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_2 = ___indices1;
		NullCheck(L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, ICollection_1_t1484130691_il2cpp_TypeInfo_var, L_2);
		G_B3_0 = L_3;
		goto IL_001e;
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___vertices0;
		NullCheck(L_4);
		int32_t L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<ProBuilder2.Common.pb_Vertex>::get_Count() */, ICollection_1_t2669920700_il2cpp_TypeInfo_var, L_4);
		G_B3_0 = L_5;
	}

IL_001e:
	{
		V_1 = G_B3_0;
		V_2 = 0;
		V_3 = 0;
		V_4 = 0;
		V_5 = 0;
		V_6 = 0;
		V_7 = 0;
		goto IL_01b5;
	}

IL_0034:
	{
		RuntimeObject* L_6 = ___indices1;
		if (L_6)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_7 = V_7;
		G_B7_0 = L_7;
		goto IL_0049;
	}

IL_0041:
	{
		RuntimeObject* L_8 = ___indices1;
		int32_t L_9 = V_7;
		NullCheck(L_8);
		int32_t L_10 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32) */, IList_1_t471298240_il2cpp_TypeInfo_var, L_8, L_9);
		G_B7_0 = L_10;
	}

IL_0049:
	{
		V_8 = G_B7_0;
		pb_Vertex_t4136735762 * L_11 = V_0;
		pb_Vertex_t4136735762 * L_12 = L_11;
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = L_12->get_position_0();
		RuntimeObject* L_14 = ___vertices0;
		int32_t L_15 = V_8;
		NullCheck(L_14);
		pb_Vertex_t4136735762 * L_16 = InterfaceFuncInvoker1< pb_Vertex_t4136735762 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_t1657088249_il2cpp_TypeInfo_var, L_14, L_15);
		NullCheck(L_16);
		Vector3_t3722313464  L_17 = L_16->get_position_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_18 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_13, L_17, /*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_position_0(L_18);
		pb_Vertex_t4136735762 * L_19 = V_0;
		pb_Vertex_t4136735762 * L_20 = L_19;
		NullCheck(L_20);
		Color_t2555686324  L_21 = L_20->get_color_1();
		RuntimeObject* L_22 = ___vertices0;
		int32_t L_23 = V_8;
		NullCheck(L_22);
		pb_Vertex_t4136735762 * L_24 = InterfaceFuncInvoker1< pb_Vertex_t4136735762 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_t1657088249_il2cpp_TypeInfo_var, L_22, L_23);
		NullCheck(L_24);
		Color_t2555686324  L_25 = L_24->get_color_1();
		Color_t2555686324  L_26 = Color_op_Addition_m3293657895(NULL /*static, unused*/, L_21, L_25, /*hidden argument*/NULL);
		NullCheck(L_20);
		L_20->set_color_1(L_26);
		pb_Vertex_t4136735762 * L_27 = V_0;
		pb_Vertex_t4136735762 * L_28 = L_27;
		NullCheck(L_28);
		Vector2_t2156229523  L_29 = L_28->get_uv0_4();
		RuntimeObject* L_30 = ___vertices0;
		int32_t L_31 = V_8;
		NullCheck(L_30);
		pb_Vertex_t4136735762 * L_32 = InterfaceFuncInvoker1< pb_Vertex_t4136735762 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_t1657088249_il2cpp_TypeInfo_var, L_30, L_31);
		NullCheck(L_32);
		Vector2_t2156229523  L_33 = L_32->get_uv0_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_34 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_29, L_33, /*hidden argument*/NULL);
		NullCheck(L_28);
		L_28->set_uv0_4(L_34);
		RuntimeObject* L_35 = ___vertices0;
		int32_t L_36 = V_8;
		NullCheck(L_35);
		pb_Vertex_t4136735762 * L_37 = InterfaceFuncInvoker1< pb_Vertex_t4136735762 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_t1657088249_il2cpp_TypeInfo_var, L_35, L_36);
		NullCheck(L_37);
		bool L_38 = L_37->get_hasNormal_10();
		if (!L_38)
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		pb_Vertex_t4136735762 * L_40 = V_0;
		pb_Vertex_t4136735762 * L_41 = L_40;
		NullCheck(L_41);
		Vector3_t3722313464  L_42 = L_41->get_normal_2();
		RuntimeObject* L_43 = ___vertices0;
		int32_t L_44 = V_8;
		NullCheck(L_43);
		pb_Vertex_t4136735762 * L_45 = InterfaceFuncInvoker1< pb_Vertex_t4136735762 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_t1657088249_il2cpp_TypeInfo_var, L_43, L_44);
		NullCheck(L_45);
		Vector3_t3722313464  L_46 = L_45->get_normal_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_47 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_42, L_46, /*hidden argument*/NULL);
		NullCheck(L_41);
		L_41->set_normal_2(L_47);
	}

IL_00d9:
	{
		RuntimeObject* L_48 = ___vertices0;
		int32_t L_49 = V_8;
		NullCheck(L_48);
		pb_Vertex_t4136735762 * L_50 = InterfaceFuncInvoker1< pb_Vertex_t4136735762 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_t1657088249_il2cpp_TypeInfo_var, L_48, L_49);
		NullCheck(L_50);
		bool L_51 = L_50->get_hasTangent_11();
		if (!L_51)
		{
			goto IL_010d;
		}
	}
	{
		int32_t L_52 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		pb_Vertex_t4136735762 * L_53 = V_0;
		pb_Vertex_t4136735762 * L_54 = L_53;
		NullCheck(L_54);
		Vector4_t3319028937  L_55 = L_54->get_tangent_3();
		RuntimeObject* L_56 = ___vertices0;
		int32_t L_57 = V_8;
		NullCheck(L_56);
		pb_Vertex_t4136735762 * L_58 = InterfaceFuncInvoker1< pb_Vertex_t4136735762 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_t1657088249_il2cpp_TypeInfo_var, L_56, L_57);
		NullCheck(L_58);
		Vector4_t3319028937  L_59 = L_58->get_tangent_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_60 = Vector4_op_Addition_m787366691(NULL /*static, unused*/, L_55, L_59, /*hidden argument*/NULL);
		NullCheck(L_54);
		L_54->set_tangent_3(L_60);
	}

IL_010d:
	{
		RuntimeObject* L_61 = ___vertices0;
		int32_t L_62 = V_8;
		NullCheck(L_61);
		pb_Vertex_t4136735762 * L_63 = InterfaceFuncInvoker1< pb_Vertex_t4136735762 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_t1657088249_il2cpp_TypeInfo_var, L_61, L_62);
		NullCheck(L_63);
		bool L_64 = L_63->get_hasUv2_13();
		if (!L_64)
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_65 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
		pb_Vertex_t4136735762 * L_66 = V_0;
		pb_Vertex_t4136735762 * L_67 = L_66;
		NullCheck(L_67);
		Vector2_t2156229523  L_68 = L_67->get_uv2_5();
		RuntimeObject* L_69 = ___vertices0;
		int32_t L_70 = V_8;
		NullCheck(L_69);
		pb_Vertex_t4136735762 * L_71 = InterfaceFuncInvoker1< pb_Vertex_t4136735762 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_t1657088249_il2cpp_TypeInfo_var, L_69, L_70);
		NullCheck(L_71);
		Vector2_t2156229523  L_72 = L_71->get_uv2_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_73 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_68, L_72, /*hidden argument*/NULL);
		NullCheck(L_67);
		L_67->set_uv2_5(L_73);
	}

IL_0143:
	{
		RuntimeObject* L_74 = ___vertices0;
		int32_t L_75 = V_8;
		NullCheck(L_74);
		pb_Vertex_t4136735762 * L_76 = InterfaceFuncInvoker1< pb_Vertex_t4136735762 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_t1657088249_il2cpp_TypeInfo_var, L_74, L_75);
		NullCheck(L_76);
		bool L_77 = L_76->get_hasUv3_14();
		if (!L_77)
		{
			goto IL_0179;
		}
	}
	{
		int32_t L_78 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1));
		pb_Vertex_t4136735762 * L_79 = V_0;
		pb_Vertex_t4136735762 * L_80 = L_79;
		NullCheck(L_80);
		Vector4_t3319028937  L_81 = L_80->get_uv3_6();
		RuntimeObject* L_82 = ___vertices0;
		int32_t L_83 = V_8;
		NullCheck(L_82);
		pb_Vertex_t4136735762 * L_84 = InterfaceFuncInvoker1< pb_Vertex_t4136735762 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_t1657088249_il2cpp_TypeInfo_var, L_82, L_83);
		NullCheck(L_84);
		Vector4_t3319028937  L_85 = L_84->get_uv3_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_86 = Vector4_op_Addition_m787366691(NULL /*static, unused*/, L_81, L_85, /*hidden argument*/NULL);
		NullCheck(L_80);
		L_80->set_uv3_6(L_86);
	}

IL_0179:
	{
		RuntimeObject* L_87 = ___vertices0;
		int32_t L_88 = V_8;
		NullCheck(L_87);
		pb_Vertex_t4136735762 * L_89 = InterfaceFuncInvoker1< pb_Vertex_t4136735762 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_t1657088249_il2cpp_TypeInfo_var, L_87, L_88);
		NullCheck(L_89);
		bool L_90 = L_89->get_hasUv4_15();
		if (!L_90)
		{
			goto IL_01af;
		}
	}
	{
		int32_t L_91 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1));
		pb_Vertex_t4136735762 * L_92 = V_0;
		pb_Vertex_t4136735762 * L_93 = L_92;
		NullCheck(L_93);
		Vector4_t3319028937  L_94 = L_93->get_uv4_7();
		RuntimeObject* L_95 = ___vertices0;
		int32_t L_96 = V_8;
		NullCheck(L_95);
		pb_Vertex_t4136735762 * L_97 = InterfaceFuncInvoker1< pb_Vertex_t4136735762 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_t1657088249_il2cpp_TypeInfo_var, L_95, L_96);
		NullCheck(L_97);
		Vector4_t3319028937  L_98 = L_97->get_uv4_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_99 = Vector4_op_Addition_m787366691(NULL /*static, unused*/, L_94, L_98, /*hidden argument*/NULL);
		NullCheck(L_93);
		L_93->set_uv4_7(L_99);
	}

IL_01af:
	{
		int32_t L_100 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1));
	}

IL_01b5:
	{
		int32_t L_101 = V_7;
		int32_t L_102 = V_1;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_0034;
		}
	}
	{
		pb_Vertex_t4136735762 * L_103 = V_0;
		pb_Vertex_t4136735762 * L_104 = L_103;
		NullCheck(L_104);
		Vector3_t3722313464  L_105 = L_104->get_position_0();
		int32_t L_106 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_107 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_105, ((float)((float)(1.0f)/(float)(((float)((float)L_106))))), /*hidden argument*/NULL);
		NullCheck(L_104);
		L_104->set_position_0(L_107);
		pb_Vertex_t4136735762 * L_108 = V_0;
		pb_Vertex_t4136735762 * L_109 = L_108;
		NullCheck(L_109);
		Color_t2555686324  L_110 = L_109->get_color_1();
		int32_t L_111 = V_1;
		Color_t2555686324  L_112 = Color_op_Multiply_m2887457390(NULL /*static, unused*/, L_110, ((float)((float)(1.0f)/(float)(((float)((float)L_111))))), /*hidden argument*/NULL);
		NullCheck(L_109);
		L_109->set_color_1(L_112);
		pb_Vertex_t4136735762 * L_113 = V_0;
		pb_Vertex_t4136735762 * L_114 = L_113;
		NullCheck(L_114);
		Vector2_t2156229523  L_115 = L_114->get_uv0_4();
		int32_t L_116 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_117 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_115, ((float)((float)(1.0f)/(float)(((float)((float)L_116))))), /*hidden argument*/NULL);
		NullCheck(L_114);
		L_114->set_uv0_4(L_117);
		pb_Vertex_t4136735762 * L_118 = V_0;
		pb_Vertex_t4136735762 * L_119 = L_118;
		NullCheck(L_119);
		Vector3_t3722313464  L_120 = L_119->get_normal_2();
		int32_t L_121 = V_2;
		Vector3_t3722313464  L_122 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_120, ((float)((float)(1.0f)/(float)(((float)((float)L_121))))), /*hidden argument*/NULL);
		NullCheck(L_119);
		L_119->set_normal_2(L_122);
		pb_Vertex_t4136735762 * L_123 = V_0;
		pb_Vertex_t4136735762 * L_124 = L_123;
		NullCheck(L_124);
		Vector4_t3319028937  L_125 = L_124->get_tangent_3();
		int32_t L_126 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_127 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_125, ((float)((float)(1.0f)/(float)(((float)((float)L_126))))), /*hidden argument*/NULL);
		NullCheck(L_124);
		L_124->set_tangent_3(L_127);
		pb_Vertex_t4136735762 * L_128 = V_0;
		pb_Vertex_t4136735762 * L_129 = L_128;
		NullCheck(L_129);
		Vector2_t2156229523  L_130 = L_129->get_uv2_5();
		int32_t L_131 = V_4;
		Vector2_t2156229523  L_132 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_130, ((float)((float)(1.0f)/(float)(((float)((float)L_131))))), /*hidden argument*/NULL);
		NullCheck(L_129);
		L_129->set_uv2_5(L_132);
		pb_Vertex_t4136735762 * L_133 = V_0;
		pb_Vertex_t4136735762 * L_134 = L_133;
		NullCheck(L_134);
		Vector4_t3319028937  L_135 = L_134->get_uv3_6();
		int32_t L_136 = V_5;
		Vector4_t3319028937  L_137 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_135, ((float)((float)(1.0f)/(float)(((float)((float)L_136))))), /*hidden argument*/NULL);
		NullCheck(L_134);
		L_134->set_uv3_6(L_137);
		pb_Vertex_t4136735762 * L_138 = V_0;
		pb_Vertex_t4136735762 * L_139 = L_138;
		NullCheck(L_139);
		Vector4_t3319028937  L_140 = L_139->get_uv4_7();
		int32_t L_141 = V_6;
		Vector4_t3319028937  L_142 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_140, ((float)((float)(1.0f)/(float)(((float)((float)L_141))))), /*hidden argument*/NULL);
		NullCheck(L_139);
		L_139->set_uv4_7(L_142);
		pb_Vertex_t4136735762 * L_143 = V_0;
		return L_143;
	}
}
// ProBuilder2.Common.pb_Vertex ProBuilder2.Common.pb_Vertex::Mix(ProBuilder2.Common.pb_Vertex,ProBuilder2.Common.pb_Vertex,System.Single)
extern "C"  pb_Vertex_t4136735762 * pb_Vertex_Mix_m980538977 (RuntimeObject * __this /* static, unused */, pb_Vertex_t4136735762 * ___x0, pb_Vertex_t4136735762 * ___y1, float ___a2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_Mix_m980538977_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	pb_Vertex_t4136735762 * V_1 = NULL;
	{
		float L_0 = ___a2;
		V_0 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_0));
		pb_Vertex_t4136735762 * L_1 = (pb_Vertex_t4136735762 *)il2cpp_codegen_object_new(pb_Vertex_t4136735762_il2cpp_TypeInfo_var);
		pb_Vertex__ctor_m4018012188(L_1, (bool)0, /*hidden argument*/NULL);
		V_1 = L_1;
		pb_Vertex_t4136735762 * L_2 = V_1;
		pb_Vertex_t4136735762 * L_3 = ___x0;
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = L_3->get_position_0();
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		pb_Vertex_t4136735762 * L_7 = ___y1;
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = L_7->get_position_0();
		float L_9 = ___a2;
		Vector3_t3722313464  L_10 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_6, L_10, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_position_0(L_11);
		pb_Vertex_t4136735762 * L_12 = V_1;
		pb_Vertex_t4136735762 * L_13 = ___x0;
		NullCheck(L_13);
		Color_t2555686324  L_14 = L_13->get_color_1();
		float L_15 = V_0;
		Color_t2555686324  L_16 = Color_op_Multiply_m2887457390(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		pb_Vertex_t4136735762 * L_17 = ___y1;
		NullCheck(L_17);
		Color_t2555686324  L_18 = L_17->get_color_1();
		float L_19 = ___a2;
		Color_t2555686324  L_20 = Color_op_Multiply_m2887457390(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		Color_t2555686324  L_21 = Color_op_Addition_m3293657895(NULL /*static, unused*/, L_16, L_20, /*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_color_1(L_21);
		pb_Vertex_t4136735762 * L_22 = V_1;
		pb_Vertex_t4136735762 * L_23 = ___x0;
		NullCheck(L_23);
		Vector2_t2156229523  L_24 = L_23->get_uv0_4();
		float L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_26 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		pb_Vertex_t4136735762 * L_27 = ___y1;
		NullCheck(L_27);
		Vector2_t2156229523  L_28 = L_27->get_uv0_4();
		float L_29 = ___a2;
		Vector2_t2156229523  L_30 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		Vector2_t2156229523  L_31 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_26, L_30, /*hidden argument*/NULL);
		NullCheck(L_22);
		L_22->set_uv0_4(L_31);
		pb_Vertex_t4136735762 * L_32 = ___x0;
		NullCheck(L_32);
		bool L_33 = L_32->get_hasNormal_10();
		if (!L_33)
		{
			goto IL_00b6;
		}
	}
	{
		pb_Vertex_t4136735762 * L_34 = ___y1;
		NullCheck(L_34);
		bool L_35 = L_34->get_hasNormal_10();
		if (!L_35)
		{
			goto IL_00b6;
		}
	}
	{
		pb_Vertex_t4136735762 * L_36 = V_1;
		pb_Vertex_t4136735762 * L_37 = ___x0;
		NullCheck(L_37);
		Vector3_t3722313464  L_38 = L_37->get_normal_2();
		float L_39 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_40 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		pb_Vertex_t4136735762 * L_41 = ___y1;
		NullCheck(L_41);
		Vector3_t3722313464  L_42 = L_41->get_normal_2();
		float L_43 = ___a2;
		Vector3_t3722313464  L_44 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_42, L_43, /*hidden argument*/NULL);
		Vector3_t3722313464  L_45 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_40, L_44, /*hidden argument*/NULL);
		NullCheck(L_36);
		L_36->set_normal_2(L_45);
		goto IL_00e9;
	}

IL_00b6:
	{
		pb_Vertex_t4136735762 * L_46 = ___x0;
		NullCheck(L_46);
		bool L_47 = L_46->get_hasNormal_10();
		if (!L_47)
		{
			goto IL_00d2;
		}
	}
	{
		pb_Vertex_t4136735762 * L_48 = V_1;
		pb_Vertex_t4136735762 * L_49 = ___x0;
		NullCheck(L_49);
		Vector3_t3722313464  L_50 = L_49->get_normal_2();
		NullCheck(L_48);
		L_48->set_normal_2(L_50);
		goto IL_00e9;
	}

IL_00d2:
	{
		pb_Vertex_t4136735762 * L_51 = ___y1;
		NullCheck(L_51);
		bool L_52 = L_51->get_hasNormal_10();
		if (!L_52)
		{
			goto IL_00e9;
		}
	}
	{
		pb_Vertex_t4136735762 * L_53 = V_1;
		pb_Vertex_t4136735762 * L_54 = ___y1;
		NullCheck(L_54);
		Vector3_t3722313464  L_55 = L_54->get_normal_2();
		NullCheck(L_53);
		L_53->set_normal_2(L_55);
	}

IL_00e9:
	{
		pb_Vertex_t4136735762 * L_56 = ___x0;
		NullCheck(L_56);
		bool L_57 = L_56->get_hasTangent_11();
		if (!L_57)
		{
			goto IL_0127;
		}
	}
	{
		pb_Vertex_t4136735762 * L_58 = ___y1;
		NullCheck(L_58);
		bool L_59 = L_58->get_hasTangent_11();
		if (!L_59)
		{
			goto IL_0127;
		}
	}
	{
		pb_Vertex_t4136735762 * L_60 = V_1;
		pb_Vertex_t4136735762 * L_61 = ___x0;
		NullCheck(L_61);
		Vector4_t3319028937  L_62 = L_61->get_tangent_3();
		float L_63 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_64 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_62, L_63, /*hidden argument*/NULL);
		pb_Vertex_t4136735762 * L_65 = ___y1;
		NullCheck(L_65);
		Vector4_t3319028937  L_66 = L_65->get_tangent_3();
		float L_67 = ___a2;
		Vector4_t3319028937  L_68 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_66, L_67, /*hidden argument*/NULL);
		Vector4_t3319028937  L_69 = Vector4_op_Addition_m787366691(NULL /*static, unused*/, L_64, L_68, /*hidden argument*/NULL);
		NullCheck(L_60);
		L_60->set_tangent_3(L_69);
		goto IL_015a;
	}

IL_0127:
	{
		pb_Vertex_t4136735762 * L_70 = ___x0;
		NullCheck(L_70);
		bool L_71 = L_70->get_hasTangent_11();
		if (!L_71)
		{
			goto IL_0143;
		}
	}
	{
		pb_Vertex_t4136735762 * L_72 = V_1;
		pb_Vertex_t4136735762 * L_73 = ___x0;
		NullCheck(L_73);
		Vector4_t3319028937  L_74 = L_73->get_tangent_3();
		NullCheck(L_72);
		L_72->set_tangent_3(L_74);
		goto IL_015a;
	}

IL_0143:
	{
		pb_Vertex_t4136735762 * L_75 = ___y1;
		NullCheck(L_75);
		bool L_76 = L_75->get_hasTangent_11();
		if (!L_76)
		{
			goto IL_015a;
		}
	}
	{
		pb_Vertex_t4136735762 * L_77 = V_1;
		pb_Vertex_t4136735762 * L_78 = ___y1;
		NullCheck(L_78);
		Vector4_t3319028937  L_79 = L_78->get_tangent_3();
		NullCheck(L_77);
		L_77->set_tangent_3(L_79);
	}

IL_015a:
	{
		pb_Vertex_t4136735762 * L_80 = ___x0;
		NullCheck(L_80);
		bool L_81 = L_80->get_hasUv2_13();
		if (!L_81)
		{
			goto IL_0198;
		}
	}
	{
		pb_Vertex_t4136735762 * L_82 = ___y1;
		NullCheck(L_82);
		bool L_83 = L_82->get_hasUv2_13();
		if (!L_83)
		{
			goto IL_0198;
		}
	}
	{
		pb_Vertex_t4136735762 * L_84 = V_1;
		pb_Vertex_t4136735762 * L_85 = ___x0;
		NullCheck(L_85);
		Vector2_t2156229523  L_86 = L_85->get_uv2_5();
		float L_87 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_88 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_86, L_87, /*hidden argument*/NULL);
		pb_Vertex_t4136735762 * L_89 = ___y1;
		NullCheck(L_89);
		Vector2_t2156229523  L_90 = L_89->get_uv2_5();
		float L_91 = ___a2;
		Vector2_t2156229523  L_92 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_90, L_91, /*hidden argument*/NULL);
		Vector2_t2156229523  L_93 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_88, L_92, /*hidden argument*/NULL);
		NullCheck(L_84);
		L_84->set_uv2_5(L_93);
		goto IL_01cb;
	}

IL_0198:
	{
		pb_Vertex_t4136735762 * L_94 = ___x0;
		NullCheck(L_94);
		bool L_95 = L_94->get_hasUv2_13();
		if (!L_95)
		{
			goto IL_01b4;
		}
	}
	{
		pb_Vertex_t4136735762 * L_96 = V_1;
		pb_Vertex_t4136735762 * L_97 = ___x0;
		NullCheck(L_97);
		Vector2_t2156229523  L_98 = L_97->get_uv2_5();
		NullCheck(L_96);
		L_96->set_uv2_5(L_98);
		goto IL_01cb;
	}

IL_01b4:
	{
		pb_Vertex_t4136735762 * L_99 = ___y1;
		NullCheck(L_99);
		bool L_100 = L_99->get_hasUv2_13();
		if (!L_100)
		{
			goto IL_01cb;
		}
	}
	{
		pb_Vertex_t4136735762 * L_101 = V_1;
		pb_Vertex_t4136735762 * L_102 = ___y1;
		NullCheck(L_102);
		Vector2_t2156229523  L_103 = L_102->get_uv2_5();
		NullCheck(L_101);
		L_101->set_uv2_5(L_103);
	}

IL_01cb:
	{
		pb_Vertex_t4136735762 * L_104 = ___x0;
		NullCheck(L_104);
		bool L_105 = L_104->get_hasUv3_14();
		if (!L_105)
		{
			goto IL_0209;
		}
	}
	{
		pb_Vertex_t4136735762 * L_106 = ___y1;
		NullCheck(L_106);
		bool L_107 = L_106->get_hasUv3_14();
		if (!L_107)
		{
			goto IL_0209;
		}
	}
	{
		pb_Vertex_t4136735762 * L_108 = V_1;
		pb_Vertex_t4136735762 * L_109 = ___x0;
		NullCheck(L_109);
		Vector4_t3319028937  L_110 = L_109->get_uv3_6();
		float L_111 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_112 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_110, L_111, /*hidden argument*/NULL);
		pb_Vertex_t4136735762 * L_113 = ___y1;
		NullCheck(L_113);
		Vector4_t3319028937  L_114 = L_113->get_uv3_6();
		float L_115 = ___a2;
		Vector4_t3319028937  L_116 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_114, L_115, /*hidden argument*/NULL);
		Vector4_t3319028937  L_117 = Vector4_op_Addition_m787366691(NULL /*static, unused*/, L_112, L_116, /*hidden argument*/NULL);
		NullCheck(L_108);
		L_108->set_uv3_6(L_117);
		goto IL_023c;
	}

IL_0209:
	{
		pb_Vertex_t4136735762 * L_118 = ___x0;
		NullCheck(L_118);
		bool L_119 = L_118->get_hasUv3_14();
		if (!L_119)
		{
			goto IL_0225;
		}
	}
	{
		pb_Vertex_t4136735762 * L_120 = V_1;
		pb_Vertex_t4136735762 * L_121 = ___x0;
		NullCheck(L_121);
		Vector4_t3319028937  L_122 = L_121->get_uv3_6();
		NullCheck(L_120);
		L_120->set_uv3_6(L_122);
		goto IL_023c;
	}

IL_0225:
	{
		pb_Vertex_t4136735762 * L_123 = ___y1;
		NullCheck(L_123);
		bool L_124 = L_123->get_hasUv3_14();
		if (!L_124)
		{
			goto IL_023c;
		}
	}
	{
		pb_Vertex_t4136735762 * L_125 = V_1;
		pb_Vertex_t4136735762 * L_126 = ___y1;
		NullCheck(L_126);
		Vector4_t3319028937  L_127 = L_126->get_uv3_6();
		NullCheck(L_125);
		L_125->set_uv3_6(L_127);
	}

IL_023c:
	{
		pb_Vertex_t4136735762 * L_128 = ___x0;
		NullCheck(L_128);
		bool L_129 = L_128->get_hasUv4_15();
		if (!L_129)
		{
			goto IL_027a;
		}
	}
	{
		pb_Vertex_t4136735762 * L_130 = ___y1;
		NullCheck(L_130);
		bool L_131 = L_130->get_hasUv4_15();
		if (!L_131)
		{
			goto IL_027a;
		}
	}
	{
		pb_Vertex_t4136735762 * L_132 = V_1;
		pb_Vertex_t4136735762 * L_133 = ___x0;
		NullCheck(L_133);
		Vector4_t3319028937  L_134 = L_133->get_uv4_7();
		float L_135 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_136 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_134, L_135, /*hidden argument*/NULL);
		pb_Vertex_t4136735762 * L_137 = ___y1;
		NullCheck(L_137);
		Vector4_t3319028937  L_138 = L_137->get_uv4_7();
		float L_139 = ___a2;
		Vector4_t3319028937  L_140 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_138, L_139, /*hidden argument*/NULL);
		Vector4_t3319028937  L_141 = Vector4_op_Addition_m787366691(NULL /*static, unused*/, L_136, L_140, /*hidden argument*/NULL);
		NullCheck(L_132);
		L_132->set_uv4_7(L_141);
		goto IL_02ad;
	}

IL_027a:
	{
		pb_Vertex_t4136735762 * L_142 = ___x0;
		NullCheck(L_142);
		bool L_143 = L_142->get_hasUv4_15();
		if (!L_143)
		{
			goto IL_0296;
		}
	}
	{
		pb_Vertex_t4136735762 * L_144 = V_1;
		pb_Vertex_t4136735762 * L_145 = ___x0;
		NullCheck(L_145);
		Vector4_t3319028937  L_146 = L_145->get_uv4_7();
		NullCheck(L_144);
		L_144->set_uv4_7(L_146);
		goto IL_02ad;
	}

IL_0296:
	{
		pb_Vertex_t4136735762 * L_147 = ___y1;
		NullCheck(L_147);
		bool L_148 = L_147->get_hasUv4_15();
		if (!L_148)
		{
			goto IL_02ad;
		}
	}
	{
		pb_Vertex_t4136735762 * L_149 = V_1;
		pb_Vertex_t4136735762 * L_150 = ___y1;
		NullCheck(L_150);
		Vector4_t3319028937  L_151 = L_150->get_uv4_7();
		NullCheck(L_149);
		L_149->set_uv4_7(L_151);
	}

IL_02ad:
	{
		pb_Vertex_t4136735762 * L_152 = V_1;
		return L_152;
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
// System.Void ProBuilder2.Common.pb_VertexConnection::.ctor(ProBuilder2.Common.pb_Face,System.Collections.Generic.List`1<System.Int32>)
extern "C"  void pb_VertexConnection__ctor_m1364366655 (pb_VertexConnection_t1845224009 * __this, pb_Face_t613471354 * ___face0, List_1_t128053199 * ___indices1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		pb_Face_t613471354 * L_0 = ___face0;
		__this->set_face_0(L_0);
		List_1_t128053199 * L_1 = ___indices1;
		__this->set_indices_1(L_1);
		return;
	}
}
// System.Boolean ProBuilder2.Common.pb_VertexConnection::get_isValid()
extern "C"  bool pb_VertexConnection_get_isValid_m1696791628 (pb_VertexConnection_t1845224009 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_VertexConnection_get_isValid_m1696791628_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		List_1_t128053199 * L_0 = __this->get_indices_1();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		List_1_t128053199 * L_1 = __this->get_indices_1();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m361000296(L_1, /*hidden argument*/List_1_get_Count_m361000296_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)1))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		return (bool)G_B3_0;
	}
}
// ProBuilder2.Common.pb_VertexConnection ProBuilder2.Common.pb_VertexConnection::Distinct(ProBuilder2.Common.pb_IntArray[])
extern "C"  pb_VertexConnection_t1845224009 * pb_VertexConnection_Distinct_m977226565 (pb_VertexConnection_t1845224009 * __this, pb_IntArrayU5BU5D_t1561170814* ___sharedIndices0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_VertexConnection_Distinct_m977226565_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		pb_Face_t613471354 * L_0 = __this->get_face_0();
		pb_IntArrayU5BU5D_t1561170814* L_1 = ___sharedIndices0;
		List_1_t128053199 * L_2 = __this->get_indices_1();
		RuntimeObject* L_3 = pb_IntArrayUtility_UniqueIndicesWithValues_m2211007353(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		List_1_t128053199 * L_4 = Enumerable_ToList_TisInt32_t2950945753_m2000905797(NULL /*static, unused*/, L_3, /*hidden argument*/Enumerable_ToList_TisInt32_t2950945753_m2000905797_RuntimeMethod_var);
		pb_VertexConnection_t1845224009 * L_5 = (pb_VertexConnection_t1845224009 *)il2cpp_codegen_object_new(pb_VertexConnection_t1845224009_il2cpp_TypeInfo_var);
		pb_VertexConnection__ctor_m1364366655(L_5, L_0, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean ProBuilder2.Common.pb_VertexConnection::Equals(System.Object)
extern "C"  bool pb_VertexConnection_Equals_m1482712525 (pb_VertexConnection_t1845224009 * __this, RuntimeObject * ___b0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_VertexConnection_Equals_m1482712525_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___b0;
		if (!((pb_VertexConnection_t1845224009 *)IsInstClass((RuntimeObject*)L_0, pb_VertexConnection_t1845224009_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		pb_Face_t613471354 * L_1 = __this->get_face_0();
		RuntimeObject * L_2 = ___b0;
		NullCheck(((pb_VertexConnection_t1845224009 *)CastclassClass((RuntimeObject*)L_2, pb_VertexConnection_t1845224009_il2cpp_TypeInfo_var)));
		pb_Face_t613471354 * L_3 = ((pb_VertexConnection_t1845224009 *)CastclassClass((RuntimeObject*)L_2, pb_VertexConnection_t1845224009_il2cpp_TypeInfo_var))->get_face_0();
		G_B3_0 = ((((RuntimeObject*)(pb_Face_t613471354 *)L_1) == ((RuntimeObject*)(pb_Face_t613471354 *)L_3))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
	}

IL_0024:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean ProBuilder2.Common.pb_VertexConnection::Equals(ProBuilder2.Common.pb_VertexConnection)
extern "C"  bool pb_VertexConnection_Equals_m2143319505 (pb_VertexConnection_t1845224009 * __this, pb_VertexConnection_t1845224009 * ___vc0, const RuntimeMethod* method)
{
	{
		pb_Face_t613471354 * L_0 = __this->get_face_0();
		pb_VertexConnection_t1845224009 * L_1 = ___vc0;
		NullCheck(L_1);
		pb_Face_t613471354 * L_2 = L_1->get_face_0();
		return (bool)((((RuntimeObject*)(pb_Face_t613471354 *)L_0) == ((RuntimeObject*)(pb_Face_t613471354 *)L_2))? 1 : 0);
	}
}
// ProBuilder2.Common.pb_Face ProBuilder2.Common.pb_VertexConnection::op_Implicit(ProBuilder2.Common.pb_VertexConnection)
extern "C"  pb_Face_t613471354 * pb_VertexConnection_op_Implicit_m3777704175 (RuntimeObject * __this /* static, unused */, pb_VertexConnection_t1845224009 * ___vc0, const RuntimeMethod* method)
{
	{
		pb_VertexConnection_t1845224009 * L_0 = ___vc0;
		NullCheck(L_0);
		pb_Face_t613471354 * L_1 = L_0->get_face_0();
		return L_1;
	}
}
// System.Int32 ProBuilder2.Common.pb_VertexConnection::GetHashCode()
extern "C"  int32_t pb_VertexConnection_GetHashCode_m4289177061 (pb_VertexConnection_t1845224009 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Object_GetHashCode_m2705121830(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String ProBuilder2.Common.pb_VertexConnection::ToString()
extern "C"  String_t* pb_VertexConnection_ToString_m1523814419 (pb_VertexConnection_t1845224009 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_VertexConnection_ToString_m1523814419_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		pb_Face_t613471354 * L_0 = __this->get_face_0();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		List_1_t128053199 * L_2 = __this->get_indices_1();
		String_t* L_3 = pbUtil_ToString_TisInt32_t2950945753_m2571025276(NULL /*static, unused*/, L_2, _stringLiteral3450517380, /*hidden argument*/pbUtil_ToString_TisInt32_t2950945753_m2571025276_RuntimeMethod_var);
		String_t* L_4 = String_Concat_m3755062657(NULL /*static, unused*/, L_1, _stringLiteral3787497674, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Collections.Generic.List`1<System.Int32> ProBuilder2.Common.pb_VertexConnection::AllTriangles(System.Collections.Generic.List`1<ProBuilder2.Common.pb_VertexConnection>)
extern "C"  List_1_t128053199 * pb_VertexConnection_AllTriangles_m2722753987 (RuntimeObject * __this /* static, unused */, List_1_t3317298751 * ___vcs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_VertexConnection_AllTriangles_m2722753987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t128053199 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1_t128053199 * L_0 = (List_1_t128053199 *)il2cpp_codegen_object_new(List_1_t128053199_il2cpp_TypeInfo_var);
		List_1__ctor_m1204004817(L_0, /*hidden argument*/List_1__ctor_m1204004817_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000d:
	{
		List_1_t128053199 * L_1 = V_0;
		List_1_t3317298751 * L_2 = ___vcs0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		pb_VertexConnection_t1845224009 * L_4 = List_1_get_Item_m4209298255(L_2, L_3, /*hidden argument*/List_1_get_Item_m4209298255_RuntimeMethod_var);
		NullCheck(L_4);
		List_1_t128053199 * L_5 = L_4->get_indices_1();
		NullCheck(L_1);
		List_1_AddRange_m3513848896(L_1, L_5, /*hidden argument*/List_1_AddRange_m3513848896_RuntimeMethod_var);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_7 = V_1;
		List_1_t3317298751 * L_8 = ___vcs0;
		NullCheck(L_8);
		int32_t L_9 = List_1_get_Count_m167890124(L_8, /*hidden argument*/List_1_get_Count_m167890124_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t128053199 * L_10 = V_0;
		return L_10;
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
// System.Void ProBuilder2.Common.pb_WingedEdge::.ctor()
extern "C"  void pb_WingedEdge__ctor_m2303175295 (pb_WingedEdge_t1639999858 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ProBuilder2.Common.pb_WingedEdge::Equals(ProBuilder2.Common.pb_WingedEdge)
extern "C"  bool pb_WingedEdge_Equals_m1373828788 (pb_WingedEdge_t1639999858 * __this, pb_WingedEdge_t1639999858 * ___b0, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		pb_WingedEdge_t1639999858 * L_0 = ___b0;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		pb_EdgeLookup_t2280733452 * L_1 = __this->get_edge_0();
		NullCheck(L_1);
		pb_Edge_t3313513031 * L_2 = L_1->get_address_of_local_0();
		pb_WingedEdge_t1639999858 * L_3 = ___b0;
		NullCheck(L_3);
		pb_EdgeLookup_t2280733452 * L_4 = L_3->get_edge_0();
		NullCheck(L_4);
		pb_Edge_t3313513031  L_5 = L_4->get_local_0();
		bool L_6 = pb_Edge_Equals_m4034993540((pb_Edge_t3313513031 *)L_2, L_5, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
	}

IL_0024:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean ProBuilder2.Common.pb_WingedEdge::Equals(System.Object)
extern "C"  bool pb_WingedEdge_Equals_m3051610784 (pb_WingedEdge_t1639999858 * __this, RuntimeObject * ___b0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_WingedEdge_Equals_m3051610784_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	pb_WingedEdge_t1639999858 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___b0;
		V_0 = ((pb_WingedEdge_t1639999858 *)IsInstClass((RuntimeObject*)L_0, pb_WingedEdge_t1639999858_il2cpp_TypeInfo_var));
		pb_WingedEdge_t1639999858 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		pb_WingedEdge_t1639999858 * L_2 = V_0;
		bool L_3 = pb_WingedEdge_Equals_m1373828788(__this, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		return (bool)1;
	}

IL_001b:
	{
		RuntimeObject * L_4 = ___b0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, pb_Edge_t3313513031_il2cpp_TypeInfo_var)))
		{
			goto IL_0043;
		}
	}
	{
		pb_EdgeLookup_t2280733452 * L_5 = __this->get_edge_0();
		NullCheck(L_5);
		pb_Edge_t3313513031 * L_6 = L_5->get_address_of_local_0();
		RuntimeObject * L_7 = ___b0;
		bool L_8 = pb_Edge_Equals_m4034993540((pb_Edge_t3313513031 *)L_6, ((*(pb_Edge_t3313513031 *)((pb_Edge_t3313513031 *)UnBox(L_7, pb_Edge_t3313513031_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		return (bool)1;
	}

IL_0043:
	{
		return (bool)1;
	}
}
// System.Int32 ProBuilder2.Common.pb_WingedEdge::GetHashCode()
extern "C"  int32_t pb_WingedEdge_GetHashCode_m146973492 (pb_WingedEdge_t1639999858 * __this, const RuntimeMethod* method)
{
	{
		pb_EdgeLookup_t2280733452 * L_0 = __this->get_edge_0();
		NullCheck(L_0);
		pb_Edge_t3313513031 * L_1 = L_0->get_address_of_local_0();
		int32_t L_2 = pb_Edge_GetHashCode_m3875994764((pb_Edge_t3313513031 *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Collections.IEnumerator ProBuilder2.Common.pb_WingedEdge::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* pb_WingedEdge_System_Collections_IEnumerable_GetEnumerator_m3181488617 (pb_WingedEdge_t1639999858 * __this, const RuntimeMethod* method)
{
	{
		pb_WingedEdgeEnumerator_t1394122259 * L_0 = pb_WingedEdge_GetEnumerator_m1574886498(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// ProBuilder2.Common.pb_WingedEdgeEnumerator ProBuilder2.Common.pb_WingedEdge::GetEnumerator()
extern "C"  pb_WingedEdgeEnumerator_t1394122259 * pb_WingedEdge_GetEnumerator_m1574886498 (pb_WingedEdge_t1639999858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_WingedEdge_GetEnumerator_m1574886498_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		pb_WingedEdgeEnumerator_t1394122259 * L_0 = (pb_WingedEdgeEnumerator_t1394122259 *)il2cpp_codegen_object_new(pb_WingedEdgeEnumerator_t1394122259_il2cpp_TypeInfo_var);
		pb_WingedEdgeEnumerator__ctor_m2500975524(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 ProBuilder2.Common.pb_WingedEdge::Count()
extern "C"  int32_t pb_WingedEdge_Count_m1993122302 (pb_WingedEdge_t1639999858 * __this, const RuntimeMethod* method)
{
	pb_WingedEdge_t1639999858 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = __this;
		V_1 = 0;
	}

IL_0004:
	{
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		pb_WingedEdge_t1639999858 * L_1 = V_0;
		NullCheck(L_1);
		pb_WingedEdge_t1639999858 * L_2 = L_1->get_next_2();
		V_0 = L_2;
		pb_WingedEdge_t1639999858 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		pb_WingedEdge_t1639999858 * L_4 = V_0;
		if ((!(((RuntimeObject*)(pb_WingedEdge_t1639999858 *)L_4) == ((RuntimeObject*)(pb_WingedEdge_t1639999858 *)__this))))
		{
			goto IL_0004;
		}
	}

IL_001c:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
// System.String ProBuilder2.Common.pb_WingedEdge::ToString()
extern "C"  String_t* pb_WingedEdge_ToString_m1679811687 (pb_WingedEdge_t1639999858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_WingedEdge_ToString_m1679811687_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t2843939325* G_B2_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t2843939325* G_B1_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t2843939325* G_B3_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		pb_EdgeLookup_t2280733452 * L_1 = __this->get_edge_0();
		NullCheck(L_1);
		pb_Edge_t3313513031 * L_2 = L_1->get_address_of_common_1();
		String_t* L_3 = pb_Edge_ToString_m3137310743((pb_Edge_t3313513031 *)L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_0;
		pb_EdgeLookup_t2280733452 * L_5 = __this->get_edge_0();
		NullCheck(L_5);
		pb_Edge_t3313513031 * L_6 = L_5->get_address_of_local_0();
		String_t* L_7 = pb_Edge_ToString_m3137310743((pb_Edge_t3313513031 *)L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_4;
		pb_WingedEdge_t1639999858 * L_9 = __this->get_opposite_4();
		G_B1_0 = 2;
		G_B1_1 = L_8;
		G_B1_2 = L_8;
		G_B1_3 = _stringLiteral78144138;
		if (L_9)
		{
			G_B2_0 = 2;
			G_B2_1 = L_8;
			G_B2_2 = L_8;
			G_B2_3 = _stringLiteral78144138;
			goto IL_0054;
		}
	}
	{
		G_B3_0 = _stringLiteral1202628576;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0064;
	}

IL_0054:
	{
		pb_WingedEdge_t1639999858 * L_10 = __this->get_opposite_4();
		NullCheck(L_10);
		pb_EdgeLookup_t2280733452 * L_11 = L_10->get_edge_0();
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		G_B3_0 = L_12;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0064:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_t2843939325* L_13 = G_B3_3;
		pb_Face_t613471354 * L_14 = __this->get_face_1();
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		String_t* L_16 = String_Format_m630303134(NULL /*static, unused*/, G_B3_4, L_13, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Int32[] ProBuilder2.Common.pb_WingedEdge::MakeQuad(ProBuilder2.Common.pb_WingedEdge,ProBuilder2.Common.pb_WingedEdge)
extern "C"  Int32U5BU5D_t385246372* pb_WingedEdge_MakeQuad_m3024752587 (RuntimeObject * __this /* static, unused */, pb_WingedEdge_t1639999858 * ___left0, pb_WingedEdge_t1639999858 * ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_WingedEdge_MakeQuad_m3024752587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	pb_EdgeLookupU5BU5D_t3966966597* V_0 = NULL;
	Int32U5BU5D_t385246372* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	pb_EdgeLookupU5BU5D_t3966966597* V_6 = NULL;
	int32_t V_7 = 0;
	Int32U5BU5D_t385246372* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		pb_WingedEdge_t1639999858 * L_0 = ___left0;
		NullCheck(L_0);
		int32_t L_1 = pb_WingedEdge_Count_m1993122302(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0018;
		}
	}
	{
		pb_WingedEdge_t1639999858 * L_2 = ___right1;
		NullCheck(L_2);
		int32_t L_3 = pb_WingedEdge_Count_m1993122302(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (Int32U5BU5D_t385246372*)NULL;
	}

IL_001a:
	{
		pb_EdgeLookupU5BU5D_t3966966597* L_4 = ((pb_EdgeLookupU5BU5D_t3966966597*)SZArrayNew(pb_EdgeLookupU5BU5D_t3966966597_il2cpp_TypeInfo_var, (uint32_t)6));
		pb_WingedEdge_t1639999858 * L_5 = ___left0;
		NullCheck(L_5);
		pb_EdgeLookup_t2280733452 * L_6 = L_5->get_edge_0();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (pb_EdgeLookup_t2280733452 *)L_6);
		pb_EdgeLookupU5BU5D_t3966966597* L_7 = L_4;
		pb_WingedEdge_t1639999858 * L_8 = ___left0;
		NullCheck(L_8);
		pb_WingedEdge_t1639999858 * L_9 = L_8->get_next_2();
		NullCheck(L_9);
		pb_EdgeLookup_t2280733452 * L_10 = L_9->get_edge_0();
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (pb_EdgeLookup_t2280733452 *)L_10);
		pb_EdgeLookupU5BU5D_t3966966597* L_11 = L_7;
		pb_WingedEdge_t1639999858 * L_12 = ___left0;
		NullCheck(L_12);
		pb_WingedEdge_t1639999858 * L_13 = L_12->get_next_2();
		NullCheck(L_13);
		pb_WingedEdge_t1639999858 * L_14 = L_13->get_next_2();
		NullCheck(L_14);
		pb_EdgeLookup_t2280733452 * L_15 = L_14->get_edge_0();
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (pb_EdgeLookup_t2280733452 *)L_15);
		pb_EdgeLookupU5BU5D_t3966966597* L_16 = L_11;
		pb_WingedEdge_t1639999858 * L_17 = ___right1;
		NullCheck(L_17);
		pb_EdgeLookup_t2280733452 * L_18 = L_17->get_edge_0();
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (pb_EdgeLookup_t2280733452 *)L_18);
		pb_EdgeLookupU5BU5D_t3966966597* L_19 = L_16;
		pb_WingedEdge_t1639999858 * L_20 = ___right1;
		NullCheck(L_20);
		pb_WingedEdge_t1639999858 * L_21 = L_20->get_next_2();
		NullCheck(L_21);
		pb_EdgeLookup_t2280733452 * L_22 = L_21->get_edge_0();
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (pb_EdgeLookup_t2280733452 *)L_22);
		pb_EdgeLookupU5BU5D_t3966966597* L_23 = L_19;
		pb_WingedEdge_t1639999858 * L_24 = ___right1;
		NullCheck(L_24);
		pb_WingedEdge_t1639999858 * L_25 = L_24->get_next_2();
		NullCheck(L_25);
		pb_WingedEdge_t1639999858 * L_26 = L_25->get_next_2();
		NullCheck(L_26);
		pb_EdgeLookup_t2280733452 * L_27 = L_26->get_edge_0();
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_27);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(5), (pb_EdgeLookup_t2280733452 *)L_27);
		V_0 = L_23;
		V_1 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)6));
		V_2 = 0;
		V_3 = 0;
		goto IL_00c2;
	}

IL_0085:
	{
		V_4 = 3;
		goto IL_00b6;
	}

IL_008d:
	{
		pb_EdgeLookupU5BU5D_t3966966597* L_28 = V_0;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		pb_EdgeLookup_t2280733452 * L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		pb_EdgeLookupU5BU5D_t3966966597* L_32 = V_0;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		pb_EdgeLookup_t2280733452 * L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		bool L_36 = pb_EdgeLookup_Equals_m2537030458(L_31, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_00b0;
		}
	}
	{
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
		Int32U5BU5D_t385246372* L_38 = V_1;
		int32_t L_39 = V_3;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (int32_t)1);
		Int32U5BU5D_t385246372* L_40 = V_1;
		int32_t L_41 = V_4;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (int32_t)1);
		goto IL_00be;
	}

IL_00b0:
	{
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00b6:
	{
		int32_t L_43 = V_4;
		if ((((int32_t)L_43) < ((int32_t)6)))
		{
			goto IL_008d;
		}
	}

IL_00be:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00c2:
	{
		int32_t L_45 = V_3;
		if ((((int32_t)L_45) < ((int32_t)3)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_46 = V_2;
		if ((((int32_t)L_46) == ((int32_t)1)))
		{
			goto IL_00d2;
		}
	}
	{
		return (Int32U5BU5D_t385246372*)NULL;
	}

IL_00d2:
	{
		V_5 = 0;
		V_6 = ((pb_EdgeLookupU5BU5D_t3966966597*)SZArrayNew(pb_EdgeLookupU5BU5D_t3966966597_il2cpp_TypeInfo_var, (uint32_t)4));
		V_7 = 0;
		goto IL_0103;
	}

IL_00e5:
	{
		Int32U5BU5D_t385246372* L_47 = V_1;
		int32_t L_48 = V_7;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		int32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		if ((((int32_t)L_50) >= ((int32_t)1)))
		{
			goto IL_00fd;
		}
	}
	{
		pb_EdgeLookupU5BU5D_t3966966597* L_51 = V_6;
		int32_t L_52 = V_5;
		int32_t L_53 = L_52;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
		pb_EdgeLookupU5BU5D_t3966966597* L_54 = V_0;
		int32_t L_55 = V_7;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		pb_EdgeLookup_t2280733452 * L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_57);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (pb_EdgeLookup_t2280733452 *)L_57);
	}

IL_00fd:
	{
		int32_t L_58 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
	}

IL_0103:
	{
		int32_t L_59 = V_7;
		if ((((int32_t)L_59) < ((int32_t)6)))
		{
			goto IL_00e5;
		}
	}
	{
		Int32U5BU5D_t385246372* L_60 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)4));
		pb_EdgeLookupU5BU5D_t3966966597* L_61 = V_6;
		NullCheck(L_61);
		int32_t L_62 = 0;
		pb_EdgeLookup_t2280733452 * L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		pb_Edge_t3313513031 * L_64 = L_63->get_address_of_local_0();
		int32_t L_65 = L_64->get_x_0();
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_65);
		Int32U5BU5D_t385246372* L_66 = L_60;
		pb_EdgeLookupU5BU5D_t3966966597* L_67 = V_6;
		NullCheck(L_67);
		int32_t L_68 = 0;
		pb_EdgeLookup_t2280733452 * L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_69);
		pb_Edge_t3313513031 * L_70 = L_69->get_address_of_local_0();
		int32_t L_71 = L_70->get_y_1();
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_71);
		Int32U5BU5D_t385246372* L_72 = L_66;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)(-1));
		Int32U5BU5D_t385246372* L_73 = L_72;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)(-1));
		V_8 = L_73;
		pb_EdgeLookupU5BU5D_t3966966597* L_74 = V_6;
		NullCheck(L_74);
		int32_t L_75 = 0;
		pb_EdgeLookup_t2280733452 * L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_76);
		pb_Edge_t3313513031 * L_77 = L_76->get_address_of_common_1();
		int32_t L_78 = L_77->get_y_1();
		V_9 = L_78;
		V_10 = (-1);
		pb_EdgeLookupU5BU5D_t3966966597* L_79 = V_6;
		NullCheck(L_79);
		int32_t L_80 = 1;
		pb_EdgeLookup_t2280733452 * L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_81);
		pb_Edge_t3313513031 * L_82 = L_81->get_address_of_common_1();
		int32_t L_83 = L_82->get_x_0();
		int32_t L_84 = V_9;
		if ((!(((uint32_t)L_83) == ((uint32_t)L_84))))
		{
			goto IL_018c;
		}
	}
	{
		Int32U5BU5D_t385246372* L_85 = V_8;
		pb_EdgeLookupU5BU5D_t3966966597* L_86 = V_6;
		NullCheck(L_86);
		int32_t L_87 = 1;
		pb_EdgeLookup_t2280733452 * L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		NullCheck(L_88);
		pb_Edge_t3313513031 * L_89 = L_88->get_address_of_local_0();
		int32_t L_90 = L_89->get_y_1();
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_90);
		pb_EdgeLookupU5BU5D_t3966966597* L_91 = V_6;
		NullCheck(L_91);
		int32_t L_92 = 1;
		pb_EdgeLookup_t2280733452 * L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_93);
		pb_Edge_t3313513031 * L_94 = L_93->get_address_of_common_1();
		int32_t L_95 = L_94->get_y_1();
		V_10 = L_95;
		goto IL_01ff;
	}

IL_018c:
	{
		pb_EdgeLookupU5BU5D_t3966966597* L_96 = V_6;
		NullCheck(L_96);
		int32_t L_97 = 2;
		pb_EdgeLookup_t2280733452 * L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		NullCheck(L_98);
		pb_Edge_t3313513031 * L_99 = L_98->get_address_of_common_1();
		int32_t L_100 = L_99->get_x_0();
		int32_t L_101 = V_9;
		if ((!(((uint32_t)L_100) == ((uint32_t)L_101))))
		{
			goto IL_01c8;
		}
	}
	{
		Int32U5BU5D_t385246372* L_102 = V_8;
		pb_EdgeLookupU5BU5D_t3966966597* L_103 = V_6;
		NullCheck(L_103);
		int32_t L_104 = 2;
		pb_EdgeLookup_t2280733452 * L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		NullCheck(L_105);
		pb_Edge_t3313513031 * L_106 = L_105->get_address_of_local_0();
		int32_t L_107 = L_106->get_y_1();
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_107);
		pb_EdgeLookupU5BU5D_t3966966597* L_108 = V_6;
		NullCheck(L_108);
		int32_t L_109 = 2;
		pb_EdgeLookup_t2280733452 * L_110 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		NullCheck(L_110);
		pb_Edge_t3313513031 * L_111 = L_110->get_address_of_common_1();
		int32_t L_112 = L_111->get_y_1();
		V_10 = L_112;
		goto IL_01ff;
	}

IL_01c8:
	{
		pb_EdgeLookupU5BU5D_t3966966597* L_113 = V_6;
		NullCheck(L_113);
		int32_t L_114 = 3;
		pb_EdgeLookup_t2280733452 * L_115 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		NullCheck(L_115);
		pb_Edge_t3313513031 * L_116 = L_115->get_address_of_common_1();
		int32_t L_117 = L_116->get_x_0();
		int32_t L_118 = V_9;
		if ((!(((uint32_t)L_117) == ((uint32_t)L_118))))
		{
			goto IL_01ff;
		}
	}
	{
		Int32U5BU5D_t385246372* L_119 = V_8;
		pb_EdgeLookupU5BU5D_t3966966597* L_120 = V_6;
		NullCheck(L_120);
		int32_t L_121 = 3;
		pb_EdgeLookup_t2280733452 * L_122 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		NullCheck(L_122);
		pb_Edge_t3313513031 * L_123 = L_122->get_address_of_local_0();
		int32_t L_124 = L_123->get_y_1();
		NullCheck(L_119);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_124);
		pb_EdgeLookupU5BU5D_t3966966597* L_125 = V_6;
		NullCheck(L_125);
		int32_t L_126 = 3;
		pb_EdgeLookup_t2280733452 * L_127 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		NullCheck(L_127);
		pb_Edge_t3313513031 * L_128 = L_127->get_address_of_common_1();
		int32_t L_129 = L_128->get_y_1();
		V_10 = L_129;
	}

IL_01ff:
	{
		pb_EdgeLookupU5BU5D_t3966966597* L_130 = V_6;
		NullCheck(L_130);
		int32_t L_131 = 1;
		pb_EdgeLookup_t2280733452 * L_132 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		NullCheck(L_132);
		pb_Edge_t3313513031 * L_133 = L_132->get_address_of_common_1();
		int32_t L_134 = L_133->get_x_0();
		int32_t L_135 = V_10;
		if ((!(((uint32_t)L_134) == ((uint32_t)L_135))))
		{
			goto IL_022b;
		}
	}
	{
		Int32U5BU5D_t385246372* L_136 = V_8;
		pb_EdgeLookupU5BU5D_t3966966597* L_137 = V_6;
		NullCheck(L_137);
		int32_t L_138 = 1;
		pb_EdgeLookup_t2280733452 * L_139 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		NullCheck(L_139);
		pb_Edge_t3313513031 * L_140 = L_139->get_address_of_local_0();
		int32_t L_141 = L_140->get_y_1();
		NullCheck(L_136);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_141);
		goto IL_027e;
	}

IL_022b:
	{
		pb_EdgeLookupU5BU5D_t3966966597* L_142 = V_6;
		NullCheck(L_142);
		int32_t L_143 = 2;
		pb_EdgeLookup_t2280733452 * L_144 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		NullCheck(L_144);
		pb_Edge_t3313513031 * L_145 = L_144->get_address_of_common_1();
		int32_t L_146 = L_145->get_x_0();
		int32_t L_147 = V_10;
		if ((!(((uint32_t)L_146) == ((uint32_t)L_147))))
		{
			goto IL_0257;
		}
	}
	{
		Int32U5BU5D_t385246372* L_148 = V_8;
		pb_EdgeLookupU5BU5D_t3966966597* L_149 = V_6;
		NullCheck(L_149);
		int32_t L_150 = 2;
		pb_EdgeLookup_t2280733452 * L_151 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		NullCheck(L_151);
		pb_Edge_t3313513031 * L_152 = L_151->get_address_of_local_0();
		int32_t L_153 = L_152->get_y_1();
		NullCheck(L_148);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_153);
		goto IL_027e;
	}

IL_0257:
	{
		pb_EdgeLookupU5BU5D_t3966966597* L_154 = V_6;
		NullCheck(L_154);
		int32_t L_155 = 3;
		pb_EdgeLookup_t2280733452 * L_156 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_155));
		NullCheck(L_156);
		pb_Edge_t3313513031 * L_157 = L_156->get_address_of_common_1();
		int32_t L_158 = L_157->get_x_0();
		int32_t L_159 = V_10;
		if ((!(((uint32_t)L_158) == ((uint32_t)L_159))))
		{
			goto IL_027e;
		}
	}
	{
		Int32U5BU5D_t385246372* L_160 = V_8;
		pb_EdgeLookupU5BU5D_t3966966597* L_161 = V_6;
		NullCheck(L_161);
		int32_t L_162 = 3;
		pb_EdgeLookup_t2280733452 * L_163 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		NullCheck(L_163);
		pb_Edge_t3313513031 * L_164 = L_163->get_address_of_local_0();
		int32_t L_165 = L_164->get_y_1();
		NullCheck(L_160);
		(L_160)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_165);
	}

IL_027e:
	{
		Int32U5BU5D_t385246372* L_166 = V_8;
		NullCheck(L_166);
		int32_t L_167 = 2;
		int32_t L_168 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		if ((((int32_t)L_168) == ((int32_t)(-1))))
		{
			goto IL_0292;
		}
	}
	{
		Int32U5BU5D_t385246372* L_169 = V_8;
		NullCheck(L_169);
		int32_t L_170 = 3;
		int32_t L_171 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		if ((!(((uint32_t)L_171) == ((uint32_t)(-1)))))
		{
			goto IL_0294;
		}
	}

IL_0292:
	{
		return (Int32U5BU5D_t385246372*)NULL;
	}

IL_0294:
	{
		Int32U5BU5D_t385246372* L_172 = V_8;
		return L_172;
	}
}
// ProBuilder2.Common.pb_WingedEdge ProBuilder2.Common.pb_WingedEdge::GetAdjacentEdgeWithCommonIndex(System.Int32)
extern "C"  pb_WingedEdge_t1639999858 * pb_WingedEdge_GetAdjacentEdgeWithCommonIndex_m2564195632 (pb_WingedEdge_t1639999858 * __this, int32_t ___common0, const RuntimeMethod* method)
{
	{
		pb_WingedEdge_t1639999858 * L_0 = __this->get_next_2();
		NullCheck(L_0);
		pb_EdgeLookup_t2280733452 * L_1 = L_0->get_edge_0();
		NullCheck(L_1);
		pb_Edge_t3313513031 * L_2 = L_1->get_address_of_common_1();
		int32_t L_3 = ___common0;
		bool L_4 = pb_Edge_Contains_m4127993172((pb_Edge_t3313513031 *)L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		pb_WingedEdge_t1639999858 * L_5 = __this->get_next_2();
		return L_5;
	}

IL_0022:
	{
		pb_WingedEdge_t1639999858 * L_6 = __this->get_previous_3();
		NullCheck(L_6);
		pb_EdgeLookup_t2280733452 * L_7 = L_6->get_edge_0();
		NullCheck(L_7);
		pb_Edge_t3313513031 * L_8 = L_7->get_address_of_common_1();
		int32_t L_9 = ___common0;
		bool L_10 = pb_Edge_Contains_m4127993172((pb_Edge_t3313513031 *)L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0044;
		}
	}
	{
		pb_WingedEdge_t1639999858 * L_11 = __this->get_previous_3();
		return L_11;
	}

IL_0044:
	{
		return (pb_WingedEdge_t1639999858 *)NULL;
	}
}
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge> ProBuilder2.Common.pb_WingedEdge::SortEdgesByAdjacency(ProBuilder2.Common.pb_Face)
extern "C"  List_1_t490620477 * pb_WingedEdge_SortEdgesByAdjacency_m3594873273 (RuntimeObject * __this /* static, unused */, pb_Face_t613471354 * ___face0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_WingedEdge_SortEdgesByAdjacency_m3594873273_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t490620477 * V_0 = NULL;
	{
		pb_Face_t613471354 * L_0 = ___face0;
		NullCheck(L_0);
		pb_EdgeU5BU5D_t4057067710* L_1 = pb_Face_get_edges_m2945498854(L_0, /*hidden argument*/NULL);
		List_1_t490620477 * L_2 = (List_1_t490620477 *)il2cpp_codegen_object_new(List_1_t490620477_il2cpp_TypeInfo_var);
		List_1__ctor_m3072246782(L_2, (RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/List_1__ctor_m3072246782_RuntimeMethod_var);
		V_0 = L_2;
		List_1_t490620477 * L_3 = V_0;
		List_1_t490620477 * L_4 = pb_WingedEdge_SortEdgesByAdjacency_m1562573850(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge> ProBuilder2.Common.pb_WingedEdge::SortEdgesByAdjacency(System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>)
extern "C"  List_1_t490620477 * pb_WingedEdge_SortEdgesByAdjacency_m1562573850 (RuntimeObject * __this /* static, unused */, List_1_t490620477 * ___edges0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_WingedEdge_SortEdgesByAdjacency_m1562573850_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	pb_Edge_t3313513031  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	pb_Edge_t3313513031  V_4;
	memset(&V_4, 0, sizeof(V_4));
	pb_Edge_t3313513031  V_5;
	memset(&V_5, 0, sizeof(V_5));
	pb_Edge_t3313513031  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		V_0 = 1;
		goto IL_0082;
	}

IL_0007:
	{
		List_1_t490620477 * L_0 = ___edges0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		pb_Edge_t3313513031  L_2 = List_1_get_Item_m2063820192(L_0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)), /*hidden argument*/List_1_get_Item_m2063820192_RuntimeMethod_var);
		V_2 = L_2;
		int32_t L_3 = (&V_2)->get_y_1();
		V_1 = L_3;
		int32_t L_4 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		goto IL_0072;
	}

IL_0022:
	{
		List_1_t490620477 * L_5 = ___edges0;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		pb_Edge_t3313513031  L_7 = List_1_get_Item_m2063820192(L_5, L_6, /*hidden argument*/List_1_get_Item_m2063820192_RuntimeMethod_var);
		V_4 = L_7;
		int32_t L_8 = (&V_4)->get_x_0();
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_004e;
		}
	}
	{
		List_1_t490620477 * L_10 = ___edges0;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		pb_Edge_t3313513031  L_12 = List_1_get_Item_m2063820192(L_10, L_11, /*hidden argument*/List_1_get_Item_m2063820192_RuntimeMethod_var);
		V_5 = L_12;
		int32_t L_13 = (&V_5)->get_y_1();
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_006e;
		}
	}

IL_004e:
	{
		List_1_t490620477 * L_15 = ___edges0;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		pb_Edge_t3313513031  L_17 = List_1_get_Item_m2063820192(L_15, L_16, /*hidden argument*/List_1_get_Item_m2063820192_RuntimeMethod_var);
		V_6 = L_17;
		List_1_t490620477 * L_18 = ___edges0;
		int32_t L_19 = V_3;
		List_1_t490620477 * L_20 = ___edges0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		pb_Edge_t3313513031  L_22 = List_1_get_Item_m2063820192(L_20, L_21, /*hidden argument*/List_1_get_Item_m2063820192_RuntimeMethod_var);
		NullCheck(L_18);
		List_1_set_Item_m462825244(L_18, L_19, L_22, /*hidden argument*/List_1_set_Item_m462825244_RuntimeMethod_var);
		List_1_t490620477 * L_23 = ___edges0;
		int32_t L_24 = V_0;
		pb_Edge_t3313513031  L_25 = V_6;
		NullCheck(L_23);
		List_1_set_Item_m462825244(L_23, L_24, L_25, /*hidden argument*/List_1_set_Item_m462825244_RuntimeMethod_var);
	}

IL_006e:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0072:
	{
		int32_t L_27 = V_3;
		List_1_t490620477 * L_28 = ___edges0;
		NullCheck(L_28);
		int32_t L_29 = List_1_get_Count_m2366896369(L_28, /*hidden argument*/List_1_get_Count_m2366896369_RuntimeMethod_var);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_0082:
	{
		int32_t L_31 = V_0;
		List_1_t490620477 * L_32 = ___edges0;
		NullCheck(L_32);
		int32_t L_33 = List_1_get_Count_m2366896369(L_32, /*hidden argument*/List_1_get_Count_m2366896369_RuntimeMethod_var);
		if ((((int32_t)L_31) < ((int32_t)L_33)))
		{
			goto IL_0007;
		}
	}
	{
		List_1_t490620477 * L_34 = ___edges0;
		return L_34;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>> ProBuilder2.Common.pb_WingedEdge::GetSpokes(System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>)
extern "C"  Dictionary_2_t2000787931 * pb_WingedEdge_GetSpokes_m3067573576 (RuntimeObject * __this /* static, unused */, List_1_t3112074600 * ___wings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_WingedEdge_GetSpokes_m3067573576_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t2000787931 * V_0 = NULL;
	List_1_t3112074600 * V_1 = NULL;
	int32_t V_2 = 0;
	List_1_t3112074600 * V_3 = NULL;
	{
		Dictionary_2_t2000787931 * L_0 = (Dictionary_2_t2000787931 *)il2cpp_codegen_object_new(Dictionary_2_t2000787931_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1266425621(L_0, /*hidden argument*/Dictionary_2__ctor_m1266425621_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = (List_1_t3112074600 *)NULL;
		V_2 = 0;
		goto IL_00dd;
	}

IL_000f:
	{
		Dictionary_2_t2000787931 * L_1 = V_0;
		List_1_t3112074600 * L_2 = ___wings0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		pb_WingedEdge_t1639999858 * L_4 = List_1_get_Item_m3401906893(L_2, L_3, /*hidden argument*/List_1_get_Item_m3401906893_RuntimeMethod_var);
		NullCheck(L_4);
		pb_EdgeLookup_t2280733452 * L_5 = L_4->get_edge_0();
		NullCheck(L_5);
		pb_Edge_t3313513031 * L_6 = L_5->get_address_of_common_1();
		int32_t L_7 = L_6->get_x_0();
		NullCheck(L_1);
		bool L_8 = Dictionary_2_TryGetValue_m1279332680(L_1, L_7, (List_1_t3112074600 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m1279332680_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		List_1_t3112074600 * L_9 = V_1;
		List_1_t3112074600 * L_10 = ___wings0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		pb_WingedEdge_t1639999858 * L_12 = List_1_get_Item_m3401906893(L_10, L_11, /*hidden argument*/List_1_get_Item_m3401906893_RuntimeMethod_var);
		NullCheck(L_9);
		List_1_Add_m2051880875(L_9, L_12, /*hidden argument*/List_1_Add_m2051880875_RuntimeMethod_var);
		goto IL_0074;
	}

IL_0044:
	{
		Dictionary_2_t2000787931 * L_13 = V_0;
		List_1_t3112074600 * L_14 = ___wings0;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		pb_WingedEdge_t1639999858 * L_16 = List_1_get_Item_m3401906893(L_14, L_15, /*hidden argument*/List_1_get_Item_m3401906893_RuntimeMethod_var);
		NullCheck(L_16);
		pb_EdgeLookup_t2280733452 * L_17 = L_16->get_edge_0();
		NullCheck(L_17);
		pb_Edge_t3313513031 * L_18 = L_17->get_address_of_common_1();
		int32_t L_19 = L_18->get_x_0();
		List_1_t3112074600 * L_20 = (List_1_t3112074600 *)il2cpp_codegen_object_new(List_1_t3112074600_il2cpp_TypeInfo_var);
		List_1__ctor_m4000012285(L_20, /*hidden argument*/List_1__ctor_m4000012285_RuntimeMethod_var);
		V_3 = L_20;
		List_1_t3112074600 * L_21 = V_3;
		List_1_t3112074600 * L_22 = ___wings0;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		pb_WingedEdge_t1639999858 * L_24 = List_1_get_Item_m3401906893(L_22, L_23, /*hidden argument*/List_1_get_Item_m3401906893_RuntimeMethod_var);
		NullCheck(L_21);
		List_1_Add_m2051880875(L_21, L_24, /*hidden argument*/List_1_Add_m2051880875_RuntimeMethod_var);
		List_1_t3112074600 * L_25 = V_3;
		NullCheck(L_13);
		Dictionary_2_Add_m3016026542(L_13, L_19, L_25, /*hidden argument*/Dictionary_2_Add_m3016026542_RuntimeMethod_var);
	}

IL_0074:
	{
		Dictionary_2_t2000787931 * L_26 = V_0;
		List_1_t3112074600 * L_27 = ___wings0;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		pb_WingedEdge_t1639999858 * L_29 = List_1_get_Item_m3401906893(L_27, L_28, /*hidden argument*/List_1_get_Item_m3401906893_RuntimeMethod_var);
		NullCheck(L_29);
		pb_EdgeLookup_t2280733452 * L_30 = L_29->get_edge_0();
		NullCheck(L_30);
		pb_Edge_t3313513031 * L_31 = L_30->get_address_of_common_1();
		int32_t L_32 = L_31->get_y_1();
		NullCheck(L_26);
		bool L_33 = Dictionary_2_TryGetValue_m1279332680(L_26, L_32, (List_1_t3112074600 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m1279332680_RuntimeMethod_var);
		if (!L_33)
		{
			goto IL_00a9;
		}
	}
	{
		List_1_t3112074600 * L_34 = V_1;
		List_1_t3112074600 * L_35 = ___wings0;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		pb_WingedEdge_t1639999858 * L_37 = List_1_get_Item_m3401906893(L_35, L_36, /*hidden argument*/List_1_get_Item_m3401906893_RuntimeMethod_var);
		NullCheck(L_34);
		List_1_Add_m2051880875(L_34, L_37, /*hidden argument*/List_1_Add_m2051880875_RuntimeMethod_var);
		goto IL_00d9;
	}

IL_00a9:
	{
		Dictionary_2_t2000787931 * L_38 = V_0;
		List_1_t3112074600 * L_39 = ___wings0;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		pb_WingedEdge_t1639999858 * L_41 = List_1_get_Item_m3401906893(L_39, L_40, /*hidden argument*/List_1_get_Item_m3401906893_RuntimeMethod_var);
		NullCheck(L_41);
		pb_EdgeLookup_t2280733452 * L_42 = L_41->get_edge_0();
		NullCheck(L_42);
		pb_Edge_t3313513031 * L_43 = L_42->get_address_of_common_1();
		int32_t L_44 = L_43->get_y_1();
		List_1_t3112074600 * L_45 = (List_1_t3112074600 *)il2cpp_codegen_object_new(List_1_t3112074600_il2cpp_TypeInfo_var);
		List_1__ctor_m4000012285(L_45, /*hidden argument*/List_1__ctor_m4000012285_RuntimeMethod_var);
		V_3 = L_45;
		List_1_t3112074600 * L_46 = V_3;
		List_1_t3112074600 * L_47 = ___wings0;
		int32_t L_48 = V_2;
		NullCheck(L_47);
		pb_WingedEdge_t1639999858 * L_49 = List_1_get_Item_m3401906893(L_47, L_48, /*hidden argument*/List_1_get_Item_m3401906893_RuntimeMethod_var);
		NullCheck(L_46);
		List_1_Add_m2051880875(L_46, L_49, /*hidden argument*/List_1_Add_m2051880875_RuntimeMethod_var);
		List_1_t3112074600 * L_50 = V_3;
		NullCheck(L_38);
		Dictionary_2_Add_m3016026542(L_38, L_44, L_50, /*hidden argument*/Dictionary_2_Add_m3016026542_RuntimeMethod_var);
	}

IL_00d9:
	{
		int32_t L_51 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_00dd:
	{
		int32_t L_52 = V_2;
		List_1_t3112074600 * L_53 = ___wings0;
		NullCheck(L_53);
		int32_t L_54 = List_1_get_Count_m4187256803(L_53, /*hidden argument*/List_1_get_Count_m4187256803_RuntimeMethod_var);
		if ((((int32_t)L_52) < ((int32_t)L_54)))
		{
			goto IL_000f;
		}
	}
	{
		Dictionary_2_t2000787931 * L_55 = V_0;
		return L_55;
	}
}
// System.Collections.Generic.List`1<System.Int32> ProBuilder2.Common.pb_WingedEdge::SortCommonIndicesByAdjacency(System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>,System.Collections.Generic.HashSet`1<System.Int32>)
extern "C"  List_1_t128053199 * pb_WingedEdge_SortCommonIndicesByAdjacency_m2460211161 (RuntimeObject * __this /* static, unused */, List_1_t3112074600 * ___wings0, HashSet_1_t1515895227 * ___common1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_WingedEdge_SortCommonIndicesByAdjacency_m2460211161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t1594996471 * V_0 = NULL;
	List_1_t490620477 * V_1 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	List_1_t490620477 * G_B6_0 = NULL;
	List_1_t490620477 * G_B5_0 = NULL;
	{
		U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t1594996471 * L_0 = (U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t1594996471 *)il2cpp_codegen_object_new(U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t1594996471_il2cpp_TypeInfo_var);
		U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0__ctor_m2813246198(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t1594996471 * L_1 = V_0;
		HashSet_1_t1515895227 * L_2 = ___common1;
		NullCheck(L_1);
		L_1->set_common_0(L_2);
		List_1_t3112074600 * L_3 = ___wings0;
		U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t1594996471 * L_4 = V_0;
		intptr_t L_5 = (intptr_t)U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_U3CU3Em__0_m435355717_RuntimeMethod_var;
		Func_2_t171398137 * L_6 = (Func_2_t171398137 *)il2cpp_codegen_object_new(Func_2_t171398137_il2cpp_TypeInfo_var);
		Func_2__ctor_m588729392(L_6, L_4, L_5, /*hidden argument*/Func_2__ctor_m588729392_RuntimeMethod_var);
		RuntimeObject* L_7 = Enumerable_Where_Tispb_WingedEdge_t1639999858_m3437621353(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/Enumerable_Where_Tispb_WingedEdge_t1639999858_m3437621353_RuntimeMethod_var);
		Func_2_t3387623203 * L_8 = ((pb_WingedEdge_t1639999858_StaticFields*)il2cpp_codegen_static_fields_for(pb_WingedEdge_t1639999858_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_5();
		G_B1_0 = L_7;
		if (L_8)
		{
			G_B2_0 = L_7;
			goto IL_0037;
		}
	}
	{
		intptr_t L_9 = (intptr_t)pb_WingedEdge_U3CSortCommonIndicesByAdjacencyU3Em__0_m707596671_RuntimeMethod_var;
		Func_2_t3387623203 * L_10 = (Func_2_t3387623203 *)il2cpp_codegen_object_new(Func_2_t3387623203_il2cpp_TypeInfo_var);
		Func_2__ctor_m2604616080(L_10, NULL, L_9, /*hidden argument*/Func_2__ctor_m2604616080_RuntimeMethod_var);
		((pb_WingedEdge_t1639999858_StaticFields*)il2cpp_codegen_static_fields_for(pb_WingedEdge_t1639999858_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_5(L_10);
		G_B2_0 = G_B1_0;
	}

IL_0037:
	{
		Func_2_t3387623203 * L_11 = ((pb_WingedEdge_t1639999858_StaticFields*)il2cpp_codegen_static_fields_for(pb_WingedEdge_t1639999858_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_5();
		RuntimeObject* L_12 = Enumerable_Select_Tispb_WingedEdge_t1639999858_Tispb_Edge_t3313513031_m3668823577(NULL /*static, unused*/, G_B2_0, L_11, /*hidden argument*/Enumerable_Select_Tispb_WingedEdge_t1639999858_Tispb_Edge_t3313513031_m3668823577_RuntimeMethod_var);
		List_1_t490620477 * L_13 = Enumerable_ToList_Tispb_Edge_t3313513031_m1997905656(NULL /*static, unused*/, L_12, /*hidden argument*/Enumerable_ToList_Tispb_Edge_t3313513031_m1997905656_RuntimeMethod_var);
		V_1 = L_13;
		List_1_t490620477 * L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = List_1_get_Count_m2366896369(L_14, /*hidden argument*/List_1_get_Count_m2366896369_RuntimeMethod_var);
		U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t1594996471 * L_16 = V_0;
		NullCheck(L_16);
		HashSet_1_t1515895227 * L_17 = L_16->get_common_0();
		NullCheck(L_17);
		int32_t L_18 = HashSet_1_get_Count_m3008068950(L_17, /*hidden argument*/HashSet_1_get_Count_m3008068950_RuntimeMethod_var);
		if ((((int32_t)L_15) == ((int32_t)L_18)))
		{
			goto IL_005f;
		}
	}
	{
		return (List_1_t128053199 *)NULL;
	}

IL_005f:
	{
		List_1_t490620477 * L_19 = V_1;
		List_1_t490620477 * L_20 = pb_WingedEdge_SortEdgesByAdjacency_m1562573850(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		Func_2_t3531098348 * L_21 = ((pb_WingedEdge_t1639999858_StaticFields*)il2cpp_codegen_static_fields_for(pb_WingedEdge_t1639999858_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_6();
		G_B5_0 = L_20;
		if (L_21)
		{
			G_B6_0 = L_20;
			goto IL_007d;
		}
	}
	{
		intptr_t L_22 = (intptr_t)pb_WingedEdge_U3CSortCommonIndicesByAdjacencyU3Em__1_m2530997828_RuntimeMethod_var;
		Func_2_t3531098348 * L_23 = (Func_2_t3531098348 *)il2cpp_codegen_object_new(Func_2_t3531098348_il2cpp_TypeInfo_var);
		Func_2__ctor_m2324675885(L_23, NULL, L_22, /*hidden argument*/Func_2__ctor_m2324675885_RuntimeMethod_var);
		((pb_WingedEdge_t1639999858_StaticFields*)il2cpp_codegen_static_fields_for(pb_WingedEdge_t1639999858_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_6(L_23);
		G_B6_0 = G_B5_0;
	}

IL_007d:
	{
		Func_2_t3531098348 * L_24 = ((pb_WingedEdge_t1639999858_StaticFields*)il2cpp_codegen_static_fields_for(pb_WingedEdge_t1639999858_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_6();
		RuntimeObject* L_25 = Enumerable_Select_Tispb_Edge_t3313513031_TisInt32_t2950945753_m478876776(NULL /*static, unused*/, G_B6_0, L_24, /*hidden argument*/Enumerable_Select_Tispb_Edge_t3313513031_TisInt32_t2950945753_m478876776_RuntimeMethod_var);
		List_1_t128053199 * L_26 = Enumerable_ToList_TisInt32_t2950945753_m2000905797(NULL /*static, unused*/, L_25, /*hidden argument*/Enumerable_ToList_TisInt32_t2950945753_m2000905797_RuntimeMethod_var);
		return L_26;
	}
}
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge> ProBuilder2.Common.pb_WingedEdge::GetWingedEdges(pb_Object,System.Boolean)
extern "C"  List_1_t3112074600 * pb_WingedEdge_GetWingedEdges_m869186976 (RuntimeObject * __this /* static, unused */, pb_Object_t647128553 * ___pb0, bool ___oneWingPerFace1, const RuntimeMethod* method)
{
	{
		pb_Object_t647128553 * L_0 = ___pb0;
		pb_Object_t647128553 * L_1 = ___pb0;
		NullCheck(L_1);
		pb_FaceU5BU5D_t3313432671* L_2 = pb_Object_get_faces_m1140464784(L_1, /*hidden argument*/NULL);
		bool L_3 = ___oneWingPerFace1;
		List_1_t3112074600 * L_4 = pb_WingedEdge_GetWingedEdges_m4013718761(NULL /*static, unused*/, L_0, (RuntimeObject*)(RuntimeObject*)L_2, L_3, (Dictionary_2_t1839659084 *)NULL, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge> ProBuilder2.Common.pb_WingedEdge::GetWingedEdges(pb_Object,System.Collections.Generic.IEnumerable`1<ProBuilder2.Common.pb_Face>,System.Boolean,System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>)
extern "C"  List_1_t3112074600 * pb_WingedEdge_GetWingedEdges_m4013718761 (RuntimeObject * __this /* static, unused */, pb_Object_t647128553 * ___pb0, RuntimeObject* ___faces1, bool ___oneWingPerFace2, Dictionary_2_t1839659084 * ___sharedIndexLookup3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_WingedEdge_GetWingedEdges_m4013718761_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1839659084 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	List_1_t3112074600 * V_2 = NULL;
	Dictionary_2_t4200534527 * V_3 = NULL;
	int32_t V_4 = 0;
	pb_Face_t613471354 * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	List_1_t490620477 * V_7 = NULL;
	int32_t V_8 = 0;
	pb_WingedEdge_t1639999858 * V_9 = NULL;
	pb_WingedEdge_t1639999858 * V_10 = NULL;
	int32_t V_11 = 0;
	pb_Edge_t3313513031  V_12;
	memset(&V_12, 0, sizeof(V_12));
	pb_WingedEdge_t1639999858 * V_13 = NULL;
	pb_WingedEdge_t1639999858 * V_14 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	Dictionary_2_t1839659084 * G_B3_0 = NULL;
	{
		Dictionary_2_t1839659084 * L_0 = ___sharedIndexLookup3;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		pb_Object_t647128553 * L_1 = ___pb0;
		NullCheck(L_1);
		pb_IntArrayU5BU5D_t1561170814* L_2 = pb_Object_get_sharedIndices_m3275484082(L_1, /*hidden argument*/NULL);
		Dictionary_2_t1839659084 * L_3 = pb_IntArrayUtility_ToDictionary_m2951460823(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0017;
	}

IL_0016:
	{
		Dictionary_2_t1839659084 * L_4 = ___sharedIndexLookup3;
		G_B3_0 = L_4;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		RuntimeObject* L_5 = ___faces1;
		RuntimeObject* L_6 = Enumerable_Distinct_Tispb_Face_t613471354_m214710561(NULL /*static, unused*/, L_5, /*hidden argument*/Enumerable_Distinct_Tispb_Face_t613471354_m214710561_RuntimeMethod_var);
		V_1 = L_6;
		List_1_t3112074600 * L_7 = (List_1_t3112074600 *)il2cpp_codegen_object_new(List_1_t3112074600_il2cpp_TypeInfo_var);
		List_1__ctor_m4000012285(L_7, /*hidden argument*/List_1__ctor_m4000012285_RuntimeMethod_var);
		V_2 = L_7;
		Dictionary_2_t4200534527 * L_8 = (Dictionary_2_t4200534527 *)il2cpp_codegen_object_new(Dictionary_2_t4200534527_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2158871500(L_8, /*hidden argument*/Dictionary_2__ctor_m2158871500_RuntimeMethod_var);
		V_3 = L_8;
		V_4 = 0;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<ProBuilder2.Common.pb_Face>::GetEnumerator() */, IEnumerable_1_t3888291539_il2cpp_TypeInfo_var, L_9);
		V_6 = L_10;
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0172;
		}

IL_003b:
		{
			RuntimeObject* L_11 = V_6;
			NullCheck(L_11);
			pb_Face_t613471354 * L_12 = InterfaceFuncInvoker0< pb_Face_t613471354 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<ProBuilder2.Common.pb_Face>::get_Current() */, IEnumerator_1_t1046041822_il2cpp_TypeInfo_var, L_11);
			V_5 = L_12;
			pb_Face_t613471354 * L_13 = V_5;
			List_1_t490620477 * L_14 = pb_WingedEdge_SortEdgesByAdjacency_m3594873273(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
			V_7 = L_14;
			List_1_t490620477 * L_15 = V_7;
			NullCheck(L_15);
			int32_t L_16 = List_1_get_Count_m2366896369(L_15, /*hidden argument*/List_1_get_Count_m2366896369_RuntimeMethod_var);
			V_8 = L_16;
			V_9 = (pb_WingedEdge_t1639999858 *)NULL;
			V_10 = (pb_WingedEdge_t1639999858 *)NULL;
			V_11 = 0;
			goto IL_0162;
		}

IL_0064:
		{
			List_1_t490620477 * L_17 = V_7;
			int32_t L_18 = V_11;
			NullCheck(L_17);
			pb_Edge_t3313513031  L_19 = List_1_get_Item_m2063820192(L_17, L_18, /*hidden argument*/List_1_get_Item_m2063820192_RuntimeMethod_var);
			V_12 = L_19;
			pb_WingedEdge_t1639999858 * L_20 = (pb_WingedEdge_t1639999858 *)il2cpp_codegen_object_new(pb_WingedEdge_t1639999858_il2cpp_TypeInfo_var);
			pb_WingedEdge__ctor_m2303175295(L_20, /*hidden argument*/NULL);
			V_13 = L_20;
			pb_WingedEdge_t1639999858 * L_21 = V_13;
			Dictionary_2_t1839659084 * L_22 = V_0;
			int32_t L_23 = (&V_12)->get_x_0();
			NullCheck(L_22);
			int32_t L_24 = Dictionary_2_get_Item_m2924502254(L_22, L_23, /*hidden argument*/Dictionary_2_get_Item_m2924502254_RuntimeMethod_var);
			Dictionary_2_t1839659084 * L_25 = V_0;
			int32_t L_26 = (&V_12)->get_y_1();
			NullCheck(L_25);
			int32_t L_27 = Dictionary_2_get_Item_m2924502254(L_25, L_26, /*hidden argument*/Dictionary_2_get_Item_m2924502254_RuntimeMethod_var);
			int32_t L_28 = (&V_12)->get_x_0();
			int32_t L_29 = (&V_12)->get_y_1();
			pb_EdgeLookup_t2280733452 * L_30 = (pb_EdgeLookup_t2280733452 *)il2cpp_codegen_object_new(pb_EdgeLookup_t2280733452_il2cpp_TypeInfo_var);
			pb_EdgeLookup__ctor_m2173607565(L_30, L_24, L_27, L_28, L_29, /*hidden argument*/NULL);
			NullCheck(L_21);
			L_21->set_edge_0(L_30);
			pb_WingedEdge_t1639999858 * L_31 = V_13;
			pb_Face_t613471354 * L_32 = V_5;
			NullCheck(L_31);
			L_31->set_face_1(L_32);
			int32_t L_33 = V_11;
			if ((((int32_t)L_33) >= ((int32_t)1)))
			{
				goto IL_00bf;
			}
		}

IL_00bb:
		{
			pb_WingedEdge_t1639999858 * L_34 = V_13;
			V_9 = L_34;
		}

IL_00bf:
		{
			int32_t L_35 = V_11;
			if ((((int32_t)L_35) <= ((int32_t)0)))
			{
				goto IL_00d9;
			}
		}

IL_00c7:
		{
			pb_WingedEdge_t1639999858 * L_36 = V_13;
			pb_WingedEdge_t1639999858 * L_37 = V_10;
			NullCheck(L_36);
			L_36->set_previous_3(L_37);
			pb_WingedEdge_t1639999858 * L_38 = V_10;
			pb_WingedEdge_t1639999858 * L_39 = V_13;
			NullCheck(L_38);
			L_38->set_next_2(L_39);
		}

IL_00d9:
		{
			int32_t L_40 = V_11;
			int32_t L_41 = V_8;
			if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1))))))
			{
				goto IL_00f6;
			}
		}

IL_00e4:
		{
			pb_WingedEdge_t1639999858 * L_42 = V_13;
			pb_WingedEdge_t1639999858 * L_43 = V_9;
			NullCheck(L_42);
			L_42->set_next_2(L_43);
			pb_WingedEdge_t1639999858 * L_44 = V_9;
			pb_WingedEdge_t1639999858 * L_45 = V_13;
			NullCheck(L_44);
			L_44->set_previous_3(L_45);
		}

IL_00f6:
		{
			pb_WingedEdge_t1639999858 * L_46 = V_13;
			V_10 = L_46;
			Dictionary_2_t4200534527 * L_47 = V_3;
			pb_WingedEdge_t1639999858 * L_48 = V_13;
			NullCheck(L_48);
			pb_EdgeLookup_t2280733452 * L_49 = L_48->get_edge_0();
			NullCheck(L_49);
			pb_Edge_t3313513031  L_50 = L_49->get_common_1();
			NullCheck(L_47);
			bool L_51 = Dictionary_2_TryGetValue_m922471079(L_47, L_50, (pb_WingedEdge_t1639999858 **)(&V_14), /*hidden argument*/Dictionary_2_TryGetValue_m922471079_RuntimeMethod_var);
			if (!L_51)
			{
				goto IL_012a;
			}
		}

IL_0113:
		{
			pb_WingedEdge_t1639999858 * L_52 = V_14;
			pb_WingedEdge_t1639999858 * L_53 = V_13;
			NullCheck(L_52);
			L_52->set_opposite_4(L_53);
			pb_WingedEdge_t1639999858 * L_54 = V_13;
			pb_WingedEdge_t1639999858 * L_55 = V_14;
			NullCheck(L_54);
			L_54->set_opposite_4(L_55);
			goto IL_0146;
		}

IL_012a:
		{
			pb_WingedEdge_t1639999858 * L_56 = V_13;
			NullCheck(L_56);
			L_56->set_opposite_4((pb_WingedEdge_t1639999858 *)NULL);
			Dictionary_2_t4200534527 * L_57 = V_3;
			pb_WingedEdge_t1639999858 * L_58 = V_13;
			NullCheck(L_58);
			pb_EdgeLookup_t2280733452 * L_59 = L_58->get_edge_0();
			NullCheck(L_59);
			pb_Edge_t3313513031  L_60 = L_59->get_common_1();
			pb_WingedEdge_t1639999858 * L_61 = V_13;
			NullCheck(L_57);
			Dictionary_2_Add_m2936395901(L_57, L_60, L_61, /*hidden argument*/Dictionary_2_Add_m2936395901_RuntimeMethod_var);
		}

IL_0146:
		{
			bool L_62 = ___oneWingPerFace2;
			if (!L_62)
			{
				goto IL_0154;
			}
		}

IL_014c:
		{
			int32_t L_63 = V_11;
			if ((((int32_t)L_63) >= ((int32_t)1)))
			{
				goto IL_015c;
			}
		}

IL_0154:
		{
			List_1_t3112074600 * L_64 = V_2;
			pb_WingedEdge_t1639999858 * L_65 = V_13;
			NullCheck(L_64);
			List_1_Add_m2051880875(L_64, L_65, /*hidden argument*/List_1_Add_m2051880875_RuntimeMethod_var);
		}

IL_015c:
		{
			int32_t L_66 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
		}

IL_0162:
		{
			int32_t L_67 = V_11;
			int32_t L_68 = V_8;
			if ((((int32_t)L_67) < ((int32_t)L_68)))
			{
				goto IL_0064;
			}
		}

IL_016b:
		{
			int32_t L_69 = V_4;
			int32_t L_70 = V_8;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)L_70));
		}

IL_0172:
		{
			RuntimeObject* L_71 = V_6;
			NullCheck(L_71);
			bool L_72 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_71);
			if (L_72)
			{
				goto IL_003b;
			}
		}

IL_017e:
		{
			IL2CPP_LEAVE(0x192, FINALLY_0183);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0183;
	}

FINALLY_0183:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_73 = V_6;
			if (!L_73)
			{
				goto IL_0191;
			}
		}

IL_018a:
		{
			RuntimeObject* L_74 = V_6;
			NullCheck(L_74);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_74);
		}

IL_0191:
		{
			IL2CPP_END_FINALLY(387)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(387)
	{
		IL2CPP_JUMP_TBL(0x192, IL_0192)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0192:
	{
		List_1_t3112074600 * L_75 = V_2;
		return L_75;
	}
}
// ProBuilder2.Common.pb_Edge ProBuilder2.Common.pb_WingedEdge::<SortCommonIndicesByAdjacency>m__0(ProBuilder2.Common.pb_WingedEdge)
extern "C"  pb_Edge_t3313513031  pb_WingedEdge_U3CSortCommonIndicesByAdjacencyU3Em__0_m707596671 (RuntimeObject * __this /* static, unused */, pb_WingedEdge_t1639999858 * ___y0, const RuntimeMethod* method)
{
	{
		pb_WingedEdge_t1639999858 * L_0 = ___y0;
		NullCheck(L_0);
		pb_EdgeLookup_t2280733452 * L_1 = L_0->get_edge_0();
		NullCheck(L_1);
		pb_Edge_t3313513031  L_2 = L_1->get_common_1();
		return L_2;
	}
}
// System.Int32 ProBuilder2.Common.pb_WingedEdge::<SortCommonIndicesByAdjacency>m__1(ProBuilder2.Common.pb_Edge)
extern "C"  int32_t pb_WingedEdge_U3CSortCommonIndicesByAdjacencyU3Em__1_m2530997828 (RuntimeObject * __this /* static, unused */, pb_Edge_t3313513031  ___x0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (&___x0)->get_x_0();
		return L_0;
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
// System.Void ProBuilder2.Common.pb_WingedEdge/<SortCommonIndicesByAdjacency>c__AnonStorey0::.ctor()
extern "C"  void U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0__ctor_m2813246198 (U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t1594996471 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ProBuilder2.Common.pb_WingedEdge/<SortCommonIndicesByAdjacency>c__AnonStorey0::<>m__0(ProBuilder2.Common.pb_WingedEdge)
extern "C"  bool U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_U3CU3Em__0_m435355717 (U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t1594996471 * __this, pb_WingedEdge_t1639999858 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_U3CU3Em__0_m435355717_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		HashSet_1_t1515895227 * L_0 = __this->get_common_0();
		pb_WingedEdge_t1639999858 * L_1 = ___x0;
		NullCheck(L_1);
		pb_EdgeLookup_t2280733452 * L_2 = L_1->get_edge_0();
		NullCheck(L_2);
		pb_Edge_t3313513031 * L_3 = L_2->get_address_of_common_1();
		int32_t L_4 = L_3->get_x_0();
		NullCheck(L_0);
		bool L_5 = HashSet_1_Contains_m2757512434(L_0, L_4, /*hidden argument*/HashSet_1_Contains_m2757512434_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		HashSet_1_t1515895227 * L_6 = __this->get_common_0();
		pb_WingedEdge_t1639999858 * L_7 = ___x0;
		NullCheck(L_7);
		pb_EdgeLookup_t2280733452 * L_8 = L_7->get_edge_0();
		NullCheck(L_8);
		pb_Edge_t3313513031 * L_9 = L_8->get_address_of_common_1();
		int32_t L_10 = L_9->get_y_1();
		NullCheck(L_6);
		bool L_11 = HashSet_1_Contains_m2757512434(L_6, L_10, /*hidden argument*/HashSet_1_Contains_m2757512434_RuntimeMethod_var);
		G_B3_0 = ((int32_t)(L_11));
		goto IL_003e;
	}

IL_003d:
	{
		G_B3_0 = 0;
	}

IL_003e:
	{
		return (bool)G_B3_0;
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
// System.Void ProBuilder2.Common.pb_WingedEdgeEnumerator::.ctor(ProBuilder2.Common.pb_WingedEdge)
extern "C"  void pb_WingedEdgeEnumerator__ctor_m2500975524 (pb_WingedEdgeEnumerator_t1394122259 * __this, pb_WingedEdge_t1639999858 * ___start0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		pb_WingedEdge_t1639999858 * L_0 = ___start0;
		__this->set__start_0(L_0);
		__this->set__current_1((pb_WingedEdge_t1639999858 *)NULL);
		return;
	}
}
// System.Boolean ProBuilder2.Common.pb_WingedEdgeEnumerator::MoveNext()
extern "C"  bool pb_WingedEdgeEnumerator_MoveNext_m2720216052 (pb_WingedEdgeEnumerator_t1394122259 * __this, const RuntimeMethod* method)
{
	int32_t G_B5_0 = 0;
	{
		pb_WingedEdge_t1639999858 * L_0 = __this->get__current_1();
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		pb_WingedEdge_t1639999858 * L_1 = __this->get__start_0();
		__this->set__current_1(L_1);
		pb_WingedEdge_t1639999858 * L_2 = __this->get__current_1();
		return (bool)((((int32_t)((((RuntimeObject*)(pb_WingedEdge_t1639999858 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0024:
	{
		pb_WingedEdge_t1639999858 * L_3 = __this->get__current_1();
		NullCheck(L_3);
		pb_WingedEdge_t1639999858 * L_4 = L_3->get_next_2();
		__this->set__current_1(L_4);
		pb_WingedEdge_t1639999858 * L_5 = __this->get__current_1();
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		pb_WingedEdge_t1639999858 * L_6 = __this->get__current_1();
		pb_WingedEdge_t1639999858 * L_7 = __this->get__start_0();
		G_B5_0 = ((((int32_t)((((RuntimeObject*)(pb_WingedEdge_t1639999858 *)L_6) == ((RuntimeObject*)(pb_WingedEdge_t1639999858 *)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0054;
	}

IL_0053:
	{
		G_B5_0 = 0;
	}

IL_0054:
	{
		return (bool)G_B5_0;
	}
}
// System.Void ProBuilder2.Common.pb_WingedEdgeEnumerator::Reset()
extern "C"  void pb_WingedEdgeEnumerator_Reset_m4074781521 (pb_WingedEdgeEnumerator_t1394122259 * __this, const RuntimeMethod* method)
{
	{
		__this->set__current_1((pb_WingedEdge_t1639999858 *)NULL);
		return;
	}
}
// System.Object ProBuilder2.Common.pb_WingedEdgeEnumerator::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * pb_WingedEdgeEnumerator_System_Collections_IEnumerator_get_Current_m3224291190 (pb_WingedEdgeEnumerator_t1394122259 * __this, const RuntimeMethod* method)
{
	{
		pb_WingedEdge_t1639999858 * L_0 = pb_WingedEdgeEnumerator_get_Current_m3878133830(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// ProBuilder2.Common.pb_WingedEdge ProBuilder2.Common.pb_WingedEdgeEnumerator::get_Current()
extern "C"  pb_WingedEdge_t1639999858 * pb_WingedEdgeEnumerator_get_Current_m3878133830 (pb_WingedEdgeEnumerator_t1394122259 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_WingedEdgeEnumerator_get_Current_m3878133830_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	pb_WingedEdge_t1639999858 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		pb_WingedEdge_t1639999858 * L_0 = __this->get__current_1();
		V_0 = L_0;
		goto IL_0013;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000c;
		throw e;
	}

CATCH_000c:
	{ // begin catch(System.IndexOutOfRangeException)
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, pb_WingedEdgeEnumerator_get_Current_m3878133830_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0013:
	{
		pb_WingedEdge_t1639999858 * L_2 = V_0;
		return L_2;
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
// System.Void ProBuilder2.Common.pb_XYZ_Color::.ctor(System.Single,System.Single,System.Single)
extern "C"  void pb_XYZ_Color__ctor_m2676480167 (pb_XYZ_Color_t3763960066 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		float L_2 = ___z2;
		__this->set_z_2(L_2);
		return;
	}
}
// ProBuilder2.Common.pb_XYZ_Color ProBuilder2.Common.pb_XYZ_Color::FromRGB(UnityEngine.Color)
extern "C"  pb_XYZ_Color_t3763960066 * pb_XYZ_Color_FromRGB_m2209865887 (RuntimeObject * __this /* static, unused */, Color_t2555686324  ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_XYZ_Color_FromRGB_m2209865887_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color_t2555686324  L_0 = ___col0;
		IL2CPP_RUNTIME_CLASS_INIT(pb_ColorUtil_t2881748417_il2cpp_TypeInfo_var);
		pb_XYZ_Color_t3763960066 * L_1 = pb_ColorUtil_RGBToXYZ_m734822614(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// ProBuilder2.Common.pb_XYZ_Color ProBuilder2.Common.pb_XYZ_Color::FromRGB(System.Single,System.Single,System.Single)
extern "C"  pb_XYZ_Color_t3763960066 * pb_XYZ_Color_FromRGB_m2656173265 (RuntimeObject * __this /* static, unused */, float ___R0, float ___G1, float ___B2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_XYZ_Color_FromRGB_m2656173265_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___R0;
		float L_1 = ___G1;
		float L_2 = ___B2;
		IL2CPP_RUNTIME_CLASS_INIT(pb_ColorUtil_t2881748417_il2cpp_TypeInfo_var);
		pb_XYZ_Color_t3763960066 * L_3 = pb_ColorUtil_RGBToXYZ_m1621613346(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String ProBuilder2.Common.pb_XYZ_Color::ToString()
extern "C"  String_t* pb_XYZ_Color_ToString_m291989509 (pb_XYZ_Color_t3763960066 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_XYZ_Color_ToString_m291989509_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_x_0();
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_1);
		float L_3 = __this->get_y_1();
		float L_4 = L_3;
		RuntimeObject * L_5 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_4);
		float L_6 = __this->get_z_2();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9 = String_Format_m3339413201(NULL /*static, unused*/, _stringLiteral3099091510, L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
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
// System.Void ProBuilder2.Common.pbTransformUtil::UnparentChildren(UnityEngine.Transform)
extern "C"  void pbTransformUtil_UnparentChildren_m3345795271 (RuntimeObject * __this /* static, unused */, Transform_t3600365921 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pbTransformUtil_UnparentChildren_m3345795271_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TransformU5BU5D_t807237628* V_0 = NULL;
	int32_t V_1 = 0;
	Transform_t3600365921 * V_2 = NULL;
	{
		Transform_t3600365921 * L_0 = ___t0;
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m3145433196(L_0, /*hidden argument*/NULL);
		V_0 = ((TransformU5BU5D_t807237628*)SZArrayNew(TransformU5BU5D_t807237628_il2cpp_TypeInfo_var, (uint32_t)L_1));
		V_1 = 0;
		goto IL_002b;
	}

IL_0013:
	{
		Transform_t3600365921 * L_2 = ___t0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Transform_t3600365921 * L_4 = Transform_GetChild_m1092972975(L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		TransformU5BU5D_t807237628* L_5 = V_0;
		int32_t L_6 = V_1;
		Transform_t3600365921 * L_7 = V_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (Transform_t3600365921 *)L_7);
		Transform_t3600365921 * L_8 = V_2;
		NullCheck(L_8);
		Transform_SetParent_m273471670(L_8, (Transform_t3600365921 *)NULL, (bool)1, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_10 = V_1;
		Transform_t3600365921 * L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = Transform_get_childCount_m3145433196(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(pbTransformUtil_t3137016056_il2cpp_TypeInfo_var);
		Dictionary_2_t117942215 * L_13 = ((pbTransformUtil_t3137016056_StaticFields*)il2cpp_codegen_static_fields_for(pbTransformUtil_t3137016056_il2cpp_TypeInfo_var))->get__childrenStack_0();
		Transform_t3600365921 * L_14 = ___t0;
		TransformU5BU5D_t807237628* L_15 = V_0;
		NullCheck(L_13);
		Dictionary_2_Add_m1976278845(L_13, L_14, L_15, /*hidden argument*/Dictionary_2_Add_m1976278845_RuntimeMethod_var);
		return;
	}
}
// System.Void ProBuilder2.Common.pbTransformUtil::ReparentChildren(UnityEngine.Transform)
extern "C"  void pbTransformUtil_ReparentChildren_m1120109415 (RuntimeObject * __this /* static, unused */, Transform_t3600365921 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pbTransformUtil_ReparentChildren_m1120109415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TransformU5BU5D_t807237628* V_0 = NULL;
	Transform_t3600365921 * V_1 = NULL;
	TransformU5BU5D_t807237628* V_2 = NULL;
	int32_t V_3 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(pbTransformUtil_t3137016056_il2cpp_TypeInfo_var);
		Dictionary_2_t117942215 * L_0 = ((pbTransformUtil_t3137016056_StaticFields*)il2cpp_codegen_static_fields_for(pbTransformUtil_t3137016056_il2cpp_TypeInfo_var))->get__childrenStack_0();
		Transform_t3600365921 * L_1 = ___t0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m3079431012(L_0, L_1, (TransformU5BU5D_t807237628**)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m3079431012_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		TransformU5BU5D_t807237628* L_3 = V_0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_002b;
	}

IL_001b:
	{
		TransformU5BU5D_t807237628* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Transform_t3600365921 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		Transform_t3600365921 * L_8 = V_1;
		Transform_t3600365921 * L_9 = ___t0;
		NullCheck(L_8);
		Transform_SetParent_m273471670(L_8, L_9, (bool)1, /*hidden argument*/NULL);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_11 = V_3;
		TransformU5BU5D_t807237628* L_12 = V_2;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(pbTransformUtil_t3137016056_il2cpp_TypeInfo_var);
		Dictionary_2_t117942215 * L_13 = ((pbTransformUtil_t3137016056_StaticFields*)il2cpp_codegen_static_fields_for(pbTransformUtil_t3137016056_il2cpp_TypeInfo_var))->get__childrenStack_0();
		Transform_t3600365921 * L_14 = ___t0;
		NullCheck(L_13);
		Dictionary_2_Remove_m3851836367(L_13, L_14, /*hidden argument*/Dictionary_2_Remove_m3851836367_RuntimeMethod_var);
	}

IL_0040:
	{
		return;
	}
}
// System.Void ProBuilder2.Common.pbTransformUtil::.cctor()
extern "C"  void pbTransformUtil__cctor_m1512817403 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pbTransformUtil__cctor_m1512817403_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t117942215 * L_0 = (Dictionary_2_t117942215 *)il2cpp_codegen_object_new(Dictionary_2_t117942215_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1137353126(L_0, /*hidden argument*/Dictionary_2__ctor_m1137353126_RuntimeMethod_var);
		((pbTransformUtil_t3137016056_StaticFields*)il2cpp_codegen_static_fields_for(pbTransformUtil_t3137016056_il2cpp_TypeInfo_var))->set__childrenStack_0(L_0);
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
// UnityEngine.Vector3[] ProBuilder2.Common.pbUtil::ToWorldSpace(UnityEngine.Transform,UnityEngine.Vector3[])
extern "C"  Vector3U5BU5D_t1718750761* pbUtil_ToWorldSpace_m1026666852 (RuntimeObject * __this /* static, unused */, Transform_t3600365921 * ___t0, Vector3U5BU5D_t1718750761* ___v1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pbUtil_ToWorldSpace_m1026666852_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_t1718750761* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Vector3U5BU5D_t1718750761* L_0 = ___v1;
		NullCheck(L_0);
		V_0 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))));
		V_1 = 0;
		goto IL_0032;
	}

IL_0010:
	{
		Vector3U5BU5D_t1718750761* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Transform_t3600365921 * L_3 = ___t0;
		Vector3U5BU5D_t1718750761* L_4 = ___v1;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		NullCheck(L_3);
		Vector3_t3722313464  L_6 = Transform_TransformPoint_m226827784(L_3, (*(Vector3_t3722313464 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))), /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))) = L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_8 = V_1;
		Vector3U5BU5D_t1718750761* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.GameObject ProBuilder2.Common.pbUtil::EmptyGameObjectWithTransform(UnityEngine.Transform)
extern "C"  GameObject_t1113636619 * pbUtil_EmptyGameObjectWithTransform_m488946117 (RuntimeObject * __this /* static, unused */, Transform_t3600365921 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pbUtil_EmptyGameObjectWithTransform_m488946117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m3707688467(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t1113636619 * L_1 = V_0;
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = GameObject_get_transform_m1369836730(L_1, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = ___t0;
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_m3387557959(L_2, L_4, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = V_0;
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		Transform_t3600365921 * L_7 = ___t0;
		NullCheck(L_7);
		Quaternion_t2301928331  L_8 = Transform_get_localRotation_m3487911431(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localRotation_m19445462(L_6, L_8, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_9 = V_0;
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = GameObject_get_transform_m1369836730(L_9, /*hidden argument*/NULL);
		Transform_t3600365921 * L_11 = ___t0;
		NullCheck(L_11);
		Vector3_t3722313464  L_12 = Transform_get_localScale_m129152068(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localScale_m3053443106(L_10, L_12, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_13 = V_0;
		return L_13;
	}
}
// System.String ProBuilder2.Common.pbUtil::ControlKeyString(System.Char)
extern "C"  String_t* pbUtil_ControlKeyString_m3575359564 (RuntimeObject * __this /* static, unused */, Il2CppChar ___character0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pbUtil_ControlKeyString_m3575359564_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___character0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)8984)))))
		{
			goto IL_0011;
		}
	}
	{
		return _stringLiteral984698823;
	}

IL_0011:
	{
		Il2CppChar L_1 = ___character0;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)8679)))))
		{
			goto IL_0022;
		}
	}
	{
		return _stringLiteral2813986916;
	}

IL_0022:
	{
		Il2CppChar L_2 = ___character0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)8997)))))
		{
			goto IL_0033;
		}
	}
	{
		return _stringLiteral2553807653;
	}

IL_0033:
	{
		Il2CppChar L_3 = ___character0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)9095)))))
		{
			goto IL_0044;
		}
	}
	{
		return _stringLiteral2553807653;
	}

IL_0044:
	{
		Il2CppChar L_4 = ___character0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)9003)))))
		{
			goto IL_0055;
		}
	}
	{
		return _stringLiteral432759908;
	}

IL_0055:
	{
		String_t* L_5 = Char_ToString_m3588025615((Il2CppChar*)(&___character0), /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean ProBuilder2.Common.pbUtil::ColorWithString(System.String,UnityEngine.Color&)
extern "C"  bool pbUtil_ColorWithString_m3096575860 (RuntimeObject * __this /* static, unused */, String_t* ___value0, Color_t2555686324 * ___col1, const RuntimeMethod* method)
{
	{
		Color_t2555686324 * L_0 = ___col1;
		Color_t2555686324  L_1 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Color_t2555686324 *)L_0 = L_1;
		String_t* L_2 = ___value0;
		Color_t2555686324 * L_3 = ___col1;
		bool L_4 = pbUtil_TryParseColor_m3233197579(NULL /*static, unused*/, L_2, (Color_t2555686324 *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean ProBuilder2.Common.pbUtil::TryParseColor(System.String,UnityEngine.Color&)
extern "C"  bool pbUtil_TryParseColor_m3233197579 (RuntimeObject * __this /* static, unused */, String_t* ___value0, Color_t2555686324 * ___col1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pbUtil_TryParseColor_m3233197579_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CTryParseColorU3Ec__AnonStorey1_t2806735917 * V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	bool V_6 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		U3CTryParseColorU3Ec__AnonStorey1_t2806735917 * L_0 = (U3CTryParseColorU3Ec__AnonStorey1_t2806735917 *)il2cpp_codegen_object_new(U3CTryParseColorU3Ec__AnonStorey1_t2806735917_il2cpp_TypeInfo_var);
		U3CTryParseColorU3Ec__AnonStorey1__ctor_m2919959637(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CTryParseColorU3Ec__AnonStorey1_t2806735917 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_valid_0(_stringLiteral3270067010);
		String_t* L_2 = ___value0;
		U3CTryParseColorU3Ec__AnonStorey1_t2806735917 * L_3 = V_0;
		intptr_t L_4 = (intptr_t)U3CTryParseColorU3Ec__AnonStorey1_U3CU3Em__0_m3014745815_RuntimeMethod_var;
		Func_2_t148644517 * L_5 = (Func_2_t148644517 *)il2cpp_codegen_object_new(Func_2_t148644517_il2cpp_TypeInfo_var);
		Func_2__ctor_m2318007926(L_5, L_3, L_4, /*hidden argument*/Func_2__ctor_m2318007926_RuntimeMethod_var);
		RuntimeObject* L_6 = Enumerable_Where_TisChar_t3634460470_m3580589701(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/Enumerable_Where_TisChar_t3634460470_m3580589701_RuntimeMethod_var);
		CharU5BU5D_t3528271667* L_7 = Enumerable_ToArray_TisChar_t3634460470_m2668536093(NULL /*static, unused*/, L_6, /*hidden argument*/Enumerable_ToArray_TisChar_t3634460470_m2668536093_RuntimeMethod_var);
		String_t* L_8 = String_CreateString_m2818852475(NULL, L_7, /*hidden argument*/NULL);
		___value0 = L_8;
		String_t* L_9 = ___value0;
		CharU5BU5D_t3528271667* L_10 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_9);
		StringU5BU5D_t1281789340* L_11 = String_Split_m3646115398(L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		StringU5BU5D_t1281789340* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length))))) >= ((int32_t)4)))
		{
			goto IL_004c;
		}
	}
	{
		return (bool)0;
	}

IL_004c:
	try
	{ // begin try (depth: 1)
		StringU5BU5D_t1281789340* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		float L_16 = Single_Parse_m364357836(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		StringU5BU5D_t1281789340* L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18 = 1;
		String_t* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		float L_20 = Single_Parse_m364357836(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		StringU5BU5D_t1281789340* L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22 = 2;
		String_t* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		float L_24 = Single_Parse_m364357836(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		StringU5BU5D_t1281789340* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = 3;
		String_t* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		float L_28 = Single_Parse_m364357836(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		V_5 = L_28;
		Color_t2555686324 * L_29 = ___col1;
		float L_30 = V_2;
		L_29->set_r_0(L_30);
		Color_t2555686324 * L_31 = ___col1;
		float L_32 = V_3;
		L_31->set_g_1(L_32);
		Color_t2555686324 * L_33 = ___col1;
		float L_34 = V_4;
		L_33->set_b_2(L_34);
		Color_t2555686324 * L_35 = ___col1;
		float L_36 = V_5;
		L_35->set_a_3(L_36);
		goto IL_009e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0095;
		throw e;
	}

CATCH_0095:
	{ // begin catch(System.Object)
		V_6 = (bool)0;
		goto IL_00a0;
	} // end catch (depth: 1)

IL_009e:
	{
		return (bool)1;
	}

IL_00a0:
	{
		bool L_37 = V_6;
		return L_37;
	}
}
// UnityEngine.Vector3[] ProBuilder2.Common.pbUtil::StringToVector3Array(System.String)
extern "C"  Vector3U5BU5D_t1718750761* pbUtil_StringToVector3Array_m2411915311 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pbUtil_StringToVector3Array_m2411915311_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t899420910 * V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	String_t* V_2 = NULL;
	StringU5BU5D_t1281789340* V_3 = NULL;
	int32_t V_4 = 0;
	StringU5BU5D_t1281789340* V_5 = NULL;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	{
		List_1_t899420910 * L_0 = (List_1_t899420910 *)il2cpp_codegen_object_new(List_1_t899420910_il2cpp_TypeInfo_var);
		List_1__ctor_m1778067824(L_0, /*hidden argument*/List_1__ctor_m1778067824_RuntimeMethod_var);
		V_0 = L_0;
		String_t* L_1 = ___str0;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_1);
		String_t* L_3 = String_Replace_m1273907647(L_1, _stringLiteral3452614528, L_2, /*hidden argument*/NULL);
		___str0 = L_3;
		String_t* L_4 = ___str0;
		CharU5BU5D_t3528271667* L_5 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_4);
		StringU5BU5D_t1281789340* L_6 = String_Split_m3646115398(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		StringU5BU5D_t1281789340* L_7 = V_1;
		V_3 = L_7;
		V_4 = 0;
		goto IL_00e4;
	}

IL_0034:
	{
		StringU5BU5D_t1281789340* L_8 = V_3;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		String_t* L_12 = V_2;
		NullCheck(L_12);
		bool L_13 = String_Contains_m1147431944(L_12, _stringLiteral3450582913, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_00de;
	}

IL_004e:
	{
		String_t* L_14 = V_2;
		CharU5BU5D_t3528271667* L_15 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_14);
		StringU5BU5D_t1281789340* L_16 = String_Split_m3646115398(L_14, L_15, /*hidden argument*/NULL);
		V_5 = L_16;
		StringU5BU5D_t1281789340* L_17 = V_5;
		NullCheck(L_17);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length))))) >= ((int32_t)3)))
		{
			goto IL_0070;
		}
	}
	{
		goto IL_00de;
	}

IL_0070:
	{
		StringU5BU5D_t1281789340* L_18 = V_5;
		NullCheck(L_18);
		int32_t L_19 = 0;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_21 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_22 = Single_TryParse_m1572008725(NULL /*static, unused*/, L_20, ((int32_t)511), L_21, (float*)(&V_6), /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_008f;
		}
	}
	{
		goto IL_00de;
	}

IL_008f:
	{
		StringU5BU5D_t1281789340* L_23 = V_5;
		NullCheck(L_23);
		int32_t L_24 = 1;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_26 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_27 = Single_TryParse_m1572008725(NULL /*static, unused*/, L_25, ((int32_t)511), L_26, (float*)(&V_7), /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_00de;
	}

IL_00ae:
	{
		StringU5BU5D_t1281789340* L_28 = V_5;
		NullCheck(L_28);
		int32_t L_29 = 2;
		String_t* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_31 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_32 = Single_TryParse_m1572008725(NULL /*static, unused*/, L_30, ((int32_t)511), L_31, (float*)(&V_8), /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_00de;
	}

IL_00cd:
	{
		List_1_t899420910 * L_33 = V_0;
		float L_34 = V_6;
		float L_35 = V_7;
		float L_36 = V_8;
		Vector3_t3722313464  L_37;
		memset(&L_37, 0, sizeof(L_37));
		Vector3__ctor_m3353183577((&L_37), L_34, L_35, L_36, /*hidden argument*/NULL);
		NullCheck(L_33);
		List_1_Add_m1524640104(L_33, L_37, /*hidden argument*/List_1_Add_m1524640104_RuntimeMethod_var);
	}

IL_00de:
	{
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00e4:
	{
		int32_t L_39 = V_4;
		StringU5BU5D_t1281789340* L_40 = V_3;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_40)->max_length)))))))
		{
			goto IL_0034;
		}
	}
	{
		List_1_t899420910 * L_41 = V_0;
		NullCheck(L_41);
		Vector3U5BU5D_t1718750761* L_42 = List_1_ToArray_m495485525(L_41, /*hidden argument*/List_1_ToArray_m495485525_RuntimeMethod_var);
		return L_42;
	}
}
// UnityEngine.Vector2 ProBuilder2.Common.pbUtil::DivideBy(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  pbUtil_DivideBy_m3774269124 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___v0, Vector2_t2156229523  ___o1, const RuntimeMethod* method)
{
	{
		float L_0 = (&___v0)->get_x_0();
		float L_1 = (&___o1)->get_x_0();
		float L_2 = (&___v0)->get_y_1();
		float L_3 = (&___o1)->get_y_1();
		Vector2_t2156229523  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3970636864((&L_4), ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 ProBuilder2.Common.pbUtil::DivideBy(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  pbUtil_DivideBy_m3778626634 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___v0, Vector3_t3722313464  ___o1, const RuntimeMethod* method)
{
	{
		float L_0 = (&___v0)->get_x_1();
		float L_1 = (&___o1)->get_x_1();
		float L_2 = (&___v0)->get_y_2();
		float L_3 = (&___o1)->get_y_2();
		float L_4 = (&___v0)->get_z_3();
		float L_5 = (&___o1)->get_z_3();
		Vector3_t3722313464  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m3353183577((&L_6), ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		return L_6;
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
// System.Void ProBuilder2.Common.pbUtil/<TryParseColor>c__AnonStorey1::.ctor()
extern "C"  void U3CTryParseColorU3Ec__AnonStorey1__ctor_m2919959637 (U3CTryParseColorU3Ec__AnonStorey1_t2806735917 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ProBuilder2.Common.pbUtil/<TryParseColor>c__AnonStorey1::<>m__0(System.Char)
extern "C"  bool U3CTryParseColorU3Ec__AnonStorey1_U3CU3Em__0_m3014745815 (U3CTryParseColorU3Ec__AnonStorey1_t2806735917 * __this, Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTryParseColorU3Ec__AnonStorey1_U3CU3Em__0_m3014745815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_valid_0();
		Il2CppChar L_1 = ___c0;
		bool L_2 = Enumerable_Contains_TisChar_t3634460470_m2857789489(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/Enumerable_Contains_TisChar_t3634460470_m2857789489_RuntimeMethod_var);
		return L_2;
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
// System.Void ProBuilder2.Common.pbUtil/SearchRange::.ctor(System.Int32,System.Int32)
extern "C"  void SearchRange__ctor_m3778421911 (SearchRange_t3147983846 * __this, int32_t ___begin0, int32_t ___end1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___begin0;
		__this->set_begin_0(L_0);
		int32_t L_1 = ___end1;
		__this->set_end_1(L_1);
		return;
	}
}
extern "C"  void SearchRange__ctor_m3778421911_AdjustorThunk (RuntimeObject * __this, int32_t ___begin0, int32_t ___end1, const RuntimeMethod* method)
{
	SearchRange_t3147983846 * _thisAdjusted = reinterpret_cast<SearchRange_t3147983846 *>(__this + 1);
	SearchRange__ctor_m3778421911(_thisAdjusted, ___begin0, ___end1, method);
}
// System.Boolean ProBuilder2.Common.pbUtil/SearchRange::Valid()
extern "C"  bool SearchRange_Valid_m462159523 (SearchRange_t3147983846 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_end_1();
		int32_t L_1 = __this->get_begin_0();
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) > ((int32_t)1))? 1 : 0);
	}
}
extern "C"  bool SearchRange_Valid_m462159523_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	SearchRange_t3147983846 * _thisAdjusted = reinterpret_cast<SearchRange_t3147983846 *>(__this + 1);
	return SearchRange_Valid_m462159523(_thisAdjusted, method);
}
// System.Int32 ProBuilder2.Common.pbUtil/SearchRange::Center()
extern "C"  int32_t SearchRange_Center_m1132495071 (SearchRange_t3147983846 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_begin_0();
		int32_t L_1 = __this->get_end_1();
		int32_t L_2 = __this->get_begin_0();
		return ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2))/(int32_t)2))));
	}
}
extern "C"  int32_t SearchRange_Center_m1132495071_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	SearchRange_t3147983846 * _thisAdjusted = reinterpret_cast<SearchRange_t3147983846 *>(__this + 1);
	return SearchRange_Center_m1132495071(_thisAdjusted, method);
}
// System.String ProBuilder2.Common.pbUtil/SearchRange::ToString()
extern "C"  String_t* SearchRange_ToString_m4109987529 (SearchRange_t3147983846 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SearchRange_ToString_m4109987529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)6));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3452614613);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3452614613);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		int32_t L_2 = __this->get_begin_0();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral3450517380);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3450517380);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		int32_t L_7 = __this->get_end_1();
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral2057739211);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral2057739211);
		ObjectU5BU5D_t2843939325* L_11 = L_10;
		int32_t L_12 = SearchRange_Center_m1132495071((SearchRange_t3147983846 *)__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_14);
		String_t* L_15 = String_Concat_m2971454694(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return L_15;
	}
}
extern "C"  String_t* SearchRange_ToString_m4109987529_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	SearchRange_t3147983846 * _thisAdjusted = reinterpret_cast<SearchRange_t3147983846 *>(__this + 1);
	return SearchRange_ToString_m4109987529(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ProBuilder2.Common.ProGridsConditionalSnapAttribute::.ctor()
extern "C"  void ProGridsConditionalSnapAttribute__ctor_m2262343732 (ProGridsConditionalSnapAttribute_t3544668608 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
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
// System.Void ProBuilder2.Common.ProGridsNoSnapAttribute::.ctor()
extern "C"  void ProGridsNoSnapAttribute__ctor_m2894448684 (ProGridsNoSnapAttribute_t1046443759 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
