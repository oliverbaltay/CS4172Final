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

template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InterfaceFuncInvoker9
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Cloo.Bindings.ICL11
struct ICL11_t839902496;
// System.NotImplementedException
struct NotImplementedException_t3489357830;
// Cloo.Bindings.ICL12
struct ICL12_t436617969;
// Cloo.Bindings.ComputeContextNotifier
struct ComputeContextNotifier_t2458212493;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// Cloo.Bindings.ComputeEventCallback
struct ComputeEventCallback_t888729672;
// Cloo.Bindings.ComputeProgramBuildNotifier
struct ComputeProgramBuildNotifier_t317311244;
// Cloo.BuildProgramFailureComputeException
struct BuildProgramFailureComputeException_t2506631677;
// Cloo.ComputeException
struct ComputeException_t3978051080;
// Cloo.CompilerNotAvailableComputeException
struct CompilerNotAvailableComputeException_t3264770924;
// Cloo.ComputeCommandQueue
struct ComputeCommandQueue_t3979026963;
// Cloo.ComputeContext
struct ComputeContext_t1365812911;
// Cloo.ComputeDevice
struct ComputeDevice_t4083180286;
// Cloo.ComputeResource
struct ComputeResource_t542138890;
// Cloo.ComputeObject
struct ComputeObject_t1791575355;
// System.Collections.Generic.List`1<Cloo.ComputeEventBase>
struct List_1_t3592367935;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// Cloo.ComputeKernel
struct ComputeKernel_t2923705153;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.Generic.ICollection`1<Cloo.ComputeEventBase>
struct ICollection_1_t653478131;
// Cloo.Bindings.CLEventHandle[]
struct CLEventHandleU5BU5D_t4276533782;
// Cloo.ComputeEvent
struct ComputeEvent_t249674601;
// Cloo.ComputeEventBase
struct ComputeEventBase_t2120293193;
// Cloo.ComputeCommandStatusArgs
struct ComputeCommandStatusArgs_t2147780983;
// System.EventArgs
struct EventArgs_t3591816995;
// Cloo.ComputeCommandStatusChanged
struct ComputeCommandStatusChanged_t248714690;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Cloo.ComputeDevice>
struct ReadOnlyCollection_1_t1000789277;
// Cloo.ComputePlatform
struct ComputePlatform_t3600789258;
// System.Collections.Generic.ICollection`1<Cloo.ComputeDevice>
struct ICollection_1_t2616365224;
// Cloo.ComputeContextPropertyList
struct ComputeContextPropertyList_t3830085294;
// Cloo.Bindings.CLDeviceHandle[]
struct CLDeviceHandleU5BU5D_t3725102763;
// Cloo.ComputeContextProperty
struct ComputeContextProperty_t1024854822;
// Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLContextHandle,Cloo.ComputeContextInfo>
struct GetInfoDelegate_2_t1033342548;
// System.Collections.Generic.List`1<Cloo.Bindings.CLDeviceHandle>
struct List_1_t3127987988;
// System.Collections.Generic.IEnumerable`1<Cloo.Bindings.CLDeviceHandle>
struct IEnumerable_1_t635766135;
// System.Collections.Generic.List`1<Cloo.ComputeDevice>
struct List_1_t1260287732;
// System.Collections.Generic.IList`1<Cloo.ComputePlatform>
struct IList_1_t1121141745;
// System.Collections.Generic.IEnumerator`1<Cloo.ComputeDevice>
struct IEnumerator_1_t220783458;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t4292682451;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t3512676632;
// System.Collections.Generic.IList`1<Cloo.ComputeDevice>
struct IList_1_t1603532773;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t600458651;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Collections.Generic.List`1<Cloo.ComputeContextProperty>
struct List_1_t2496929564;
// Cloo.ComputeContextProperty[]
struct ComputeContextPropertyU5BU5D_t1074107779;
// System.Collections.Generic.IEnumerator`1<Cloo.ComputeContextProperty>
struct IEnumerator_1_t1457425290;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_t3060026976;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t3662770472;
// Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLDeviceHandle,Cloo.ComputeDeviceInfo>
struct GetInfoDelegate_2_t3735710902;
// System.Int64[]
struct Int64U5BU5D_t2559172825;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int64>
struct ReadOnlyCollection_1_t654176295;
// System.Collections.Generic.IList`1<System.Int64>
struct IList_1_t1256919791;
// Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLEventHandle,Cloo.ComputeEventInfo>
struct GetInfoDelegate_2_t3807037534;
// System.Version
struct Version_t3456873960;
// System.Delegate
struct Delegate_t1188392813;
// System.Exception
struct Exception_t;
// Cloo.DeviceNotFoundComputeException
struct DeviceNotFoundComputeException_t2803661270;
// Cloo.DeviceNotAvailableComputeException
struct DeviceNotAvailableComputeException_t1010603520;
// Cloo.MemoryObjectAllocationFailureComputeException
struct MemoryObjectAllocationFailureComputeException_t1033166821;
// Cloo.OutOfResourcesComputeException
struct OutOfResourcesComputeException_t3780973734;
// Cloo.OutOfHostMemoryComputeException
struct OutOfHostMemoryComputeException_t2750237157;
// Cloo.ProfilingInfoNotAvailableComputeException
struct ProfilingInfoNotAvailableComputeException_t3456066642;
// Cloo.MemoryCopyOverlapComputeException
struct MemoryCopyOverlapComputeException_t861502170;
// Cloo.ImageFormatMismatchComputeException
struct ImageFormatMismatchComputeException_t110044459;
// Cloo.ImageFormatNotSupportedComputeException
struct ImageFormatNotSupportedComputeException_t824198691;
// Cloo.MapFailureComputeException
struct MapFailureComputeException_t609039928;
// Cloo.InvalidValueComputeException
struct InvalidValueComputeException_t1884546994;
// Cloo.InvalidDeviceTypeComputeException
struct InvalidDeviceTypeComputeException_t3015842128;
// Cloo.InvalidPlatformComputeException
struct InvalidPlatformComputeException_t1484941494;
// Cloo.InvalidDeviceComputeException
struct InvalidDeviceComputeException_t696285512;
// Cloo.InvalidContextComputeException
struct InvalidContextComputeException_t2857043932;
// Cloo.InvalidCommandQueueFlagsComputeException
struct InvalidCommandQueueFlagsComputeException_t1130645332;
// Cloo.InvalidCommandQueueComputeException
struct InvalidCommandQueueComputeException_t3760823054;
// Cloo.InvalidHostPointerComputeException
struct InvalidHostPointerComputeException_t3920245830;
// Cloo.InvalidMemoryObjectComputeException
struct InvalidMemoryObjectComputeException_t1584946539;
// Cloo.InvalidImageFormatDescriptorComputeException
struct InvalidImageFormatDescriptorComputeException_t1307689117;
// Cloo.InvalidImageSizeComputeException
struct InvalidImageSizeComputeException_t811168388;
// Cloo.InvalidSamplerComputeException
struct InvalidSamplerComputeException_t500922945;
// Cloo.InvalidBinaryComputeException
struct InvalidBinaryComputeException_t3216170158;
// Cloo.InvalidBuildOptionsComputeException
struct InvalidBuildOptionsComputeException_t696878590;
// Cloo.InvalidProgramComputeException
struct InvalidProgramComputeException_t1992991535;
// Cloo.InvalidProgramExecutableComputeException
struct InvalidProgramExecutableComputeException_t315365513;
// Cloo.InvalidKernelNameComputeException
struct InvalidKernelNameComputeException_t1206973794;
// Cloo.InvalidKernelDefinitionComputeException
struct InvalidKernelDefinitionComputeException_t1910702029;
// Cloo.InvalidKernelComputeException
struct InvalidKernelComputeException_t926678227;
// Cloo.InvalidArgumentIndexComputeException
struct InvalidArgumentIndexComputeException_t2375232228;
// Cloo.InvalidArgumentValueComputeException
struct InvalidArgumentValueComputeException_t4274550977;
// Cloo.InvalidArgumentSizeComputeException
struct InvalidArgumentSizeComputeException_t126175770;
// Cloo.InvalidKernelArgumentsComputeException
struct InvalidKernelArgumentsComputeException_t1122558706;
// Cloo.InvalidWorkDimensionsComputeException
struct InvalidWorkDimensionsComputeException_t3766439885;
// Cloo.InvalidWorkGroupSizeComputeException
struct InvalidWorkGroupSizeComputeException_t2659536362;
// Cloo.InvalidWorkItemSizeComputeException
struct InvalidWorkItemSizeComputeException_t3193750300;
// Cloo.InvalidGlobalOffsetComputeException
struct InvalidGlobalOffsetComputeException_t637889218;
// Cloo.InvalidEventWaitListComputeException
struct InvalidEventWaitListComputeException_t1652478454;
// Cloo.InvalidEventComputeException
struct InvalidEventComputeException_t3815158586;
// Cloo.InvalidOperationComputeException
struct InvalidOperationComputeException_t1009558057;
// Cloo.InvalidGLObjectComputeException
struct InvalidGLObjectComputeException_t3268435956;
// Cloo.InvalidBufferSizeComputeException
struct InvalidBufferSizeComputeException_t3765795266;
// Cloo.InvalidMipLevelComputeException
struct InvalidMipLevelComputeException_t2097497037;
// Cloo.ComputeImage
struct ComputeImage_t2206698626;
// Cloo.ComputeMemory
struct ComputeMemory_t2270500267;
// Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLMemoryHandle,Cloo.ComputeImageInfo>
struct GetInfoDelegate_2_t3255322841;
// Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLMemoryHandle,Cloo.ComputeMemoryInfo>
struct GetInfoDelegate_2_t3751609436;
// Cloo.ComputeImage2D
struct ComputeImage2D_t234885228;
// Cloo.ComputeImage3D
struct ComputeImage3D_t234819692;
// Cloo.ComputeProgram
struct ComputeProgram_t346198837;
// Cloo.ComputeSampler
struct ComputeSampler_t3833417323;
// System.Collections.Generic.List`1<Cloo.ComputePlatform>
struct List_1_t777896704;
// Cloo.ComputePlatform[]
struct ComputePlatformU5BU5D_t2938311055;
// Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLPlatformHandle,Cloo.ComputePlatformInfo>
struct GetInfoDelegate_2_t3652029919;
// Cloo.ComputeObject/GetInfoDelegateEx`3<Cloo.Bindings.CLProgramHandle,Cloo.Bindings.CLDeviceHandle,Cloo.ComputeProgramBuildInfo>
struct GetInfoDelegateEx_3_t3669348736;
// System.Collections.Generic.IList`1<Cloo.ComputeContextProperty>
struct IList_1_t2840174605;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// Cloo.ComputeDevice[]
struct ComputeDeviceU5BU5D_t2787470155;
// Cloo.ComputeEventBase[]
struct ComputeEventBaseU5BU5D_t832604532;
// System.Void
struct Void_t1185182177;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>
struct ReadOnlyCollection_1_t1034256648;
// System.Collections.Generic.IList`1<Cloo.ComputeEventBase>
struct IList_1_t3935612976;

extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t CLCommandQueueHandle_get_IsValid_m2224107261_MetadataUsageId;
extern const uint32_t CLCommandQueueHandle_Invalidate_m917873785_MetadataUsageId;
extern const uint32_t CLContextHandle_get_IsValid_m3325934603_MetadataUsageId;
extern const uint32_t CLContextHandle_Invalidate_m2084838429_MetadataUsageId;
extern const uint32_t CLEventHandle_get_IsValid_m2311008441_MetadataUsageId;
extern const uint32_t CLEventHandle_Invalidate_m1997689511_MetadataUsageId;
extern RuntimeClass* CLInterface_t4186500370_il2cpp_TypeInfo_var;
extern RuntimeClass* NotImplementedException_t3489357830_il2cpp_TypeInfo_var;
extern const RuntimeMethod* CLInterface_get_CL11_m1440148108_RuntimeMethod_var;
extern const uint32_t CLInterface_get_CL11_m1440148108_MetadataUsageId;
extern const RuntimeMethod* CLInterface_get_CL12_m886088080_RuntimeMethod_var;
extern const uint32_t CLInterface_get_CL12_m886088080_MetadataUsageId;
extern const uint32_t CLInterface_IsAvailable_m590777017_MetadataUsageId;
extern const uint32_t CLKernelHandle_get_IsValid_m3501045517_MetadataUsageId;
extern const uint32_t CLKernelHandle_Invalidate_m478856493_MetadataUsageId;
extern const uint32_t CLMemoryHandle_get_IsValid_m2235700658_MetadataUsageId;
extern const uint32_t CLMemoryHandle_Invalidate_m1796141593_MetadataUsageId;
extern const uint32_t CLProgramHandle_get_IsValid_m98553484_MetadataUsageId;
extern const uint32_t CLProgramHandle_Invalidate_m1993159295_MetadataUsageId;
extern const uint32_t CLSamplerHandle_get_IsValid_m3163180585_MetadataUsageId;
extern const uint32_t CLSamplerHandle_Invalidate_m3540269400_MetadataUsageId;
extern const uint32_t ComputeContextNotifier_BeginInvoke_m793741032_MetadataUsageId;
extern RuntimeClass* CLEventHandle_t1689096655_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern const uint32_t ComputeEventCallback_BeginInvoke_m2327356030_MetadataUsageId;
extern RuntimeClass* CLProgramHandle_t2486937744_il2cpp_TypeInfo_var;
extern const uint32_t ComputeProgramBuildNotifier_BeginInvoke_m1599707172_MetadataUsageId;
extern RuntimeClass* ICL10_t3568785851_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3592367935_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3130116931_RuntimeMethod_var;
extern const uint32_t ComputeCommandQueue__ctor_m4255704759_MetadataUsageId;
extern RuntimeClass* ICollection_1_t653478131_il2cpp_TypeInfo_var;
extern RuntimeClass* CLEventHandleU5BU5D_t4276533782_il2cpp_TypeInfo_var;
extern RuntimeClass* ComputeEvent_t249674601_il2cpp_TypeInfo_var;
extern const uint32_t ComputeCommandQueue_Execute_m3365502879_MetadataUsageId;
extern const uint32_t ComputeCommandQueue_Finish_m1809255829_MetadataUsageId;
extern const uint32_t ComputeCommandQueue_Flush_m3352194512_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t1100146082_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t2552863661_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t ComputeCommandQueue_Dispose_m3057069637_MetadataUsageId;
extern RuntimeClass* EventArgs_t3591816995_il2cpp_TypeInfo_var;
extern const uint32_t ComputeCommandStatusArgs__ctor_m1631833591_MetadataUsageId;
extern RuntimeClass* ComputePlatform_t3600789258_il2cpp_TypeInfo_var;
extern const uint32_t ComputeContext__ctor_m4211662731_MetadataUsageId;
extern const uint32_t ComputeContext_Dispose_m681108975_MetadataUsageId;
extern RuntimeClass* GetInfoDelegate_2_t1033342548_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3127987988_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1260287732_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t2580642147_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t4033359726_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t220783458_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyCollection_1_t1000789277_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GetInfoDelegate_2__ctor_m3127054146_RuntimeMethod_var;
extern const RuntimeMethod* ComputeObject_GetArrayInfo_TisCLContextHandle_t447015429_TisComputeContextInfo_t761728730_TisCLDeviceHandle_t1655913246_m615519784_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1633211235_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2551690417_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_m477749655_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m1910289345_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1881868367_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1__ctor_m2800920346_RuntimeMethod_var;
extern const uint32_t ComputeContext_GetDevices_m1689598945_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* ComputeContextPropertyName_t2082884555_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614536;
extern String_t* _stringLiteral3450517380;
extern String_t* _stringLiteral3452614535;
extern const uint32_t ComputeContextProperty_ToString_m3823103117_MetadataUsageId;
extern RuntimeClass* List_1_t2496929564_il2cpp_TypeInfo_var;
extern RuntimeClass* ComputeContextProperty_t1024854822_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t3853007056_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3683943297_RuntimeMethod_var;
extern const uint32_t ComputeContextPropertyList__ctor_m3937292277_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t4707711_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1457425290_il2cpp_TypeInfo_var;
extern const uint32_t ComputeContextPropertyList_GetByName_m1411803165_MetadataUsageId;
extern RuntimeClass* IntPtrU5BU5D_t4013366056_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_1_t2840174605_il2cpp_TypeInfo_var;
extern const uint32_t ComputeContextPropertyList_ToIntPtrArray_m4263506384_MetadataUsageId;
extern const uint32_t ComputeContextPropertyList_Add_m2531543869_MetadataUsageId;
extern const uint32_t ComputeContextPropertyList_Clear_m2148520491_MetadataUsageId;
extern const uint32_t ComputeContextPropertyList_Contains_m1550688600_MetadataUsageId;
extern const uint32_t ComputeContextPropertyList_CopyTo_m118583163_MetadataUsageId;
extern const uint32_t ComputeContextPropertyList_get_Count_m951898811_MetadataUsageId;
extern const uint32_t ComputeContextPropertyList_Remove_m2982303660_MetadataUsageId;
extern const uint32_t ComputeContextPropertyList_GetEnumerator_m3893238765_MetadataUsageId;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern const uint32_t ComputeContextPropertyList_System_Collections_IEnumerable_GetEnumerator_m732532468_MetadataUsageId;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyCollection_1_t3060026976_il2cpp_TypeInfo_var;
extern RuntimeClass* GetInfoDelegate_2_t3735710902_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyCollection_1_t654176295_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316_RuntimeMethod_var;
extern const RuntimeMethod* ComputeDevice_GetInfo_TisInt64_t3736567304_m1988361387_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1__ctor_m627134177_RuntimeMethod_var;
extern const RuntimeMethod* ComputeDevice_GetInfo_TisUInt64_t4134040092_m162120734_RuntimeMethod_var;
extern const RuntimeMethod* ComputeDevice_GetInfo_TisIntPtr_t_m2083192018_RuntimeMethod_var;
extern const RuntimeMethod* GetInfoDelegate_2__ctor_m1840618001_RuntimeMethod_var;
extern const RuntimeMethod* ComputeObject_GetArrayInfo_TisCLDeviceHandle_t1655913246_TisComputeDeviceInfo_t746502873_TisIntPtr_t_m2586711721_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1__ctor_m1693222885_RuntimeMethod_var;
extern const uint32_t ComputeDevice__ctor_m4162545325_MetadataUsageId;
extern const RuntimeMethod* ComputeObject_GetBoolInfo_TisCLDeviceHandle_t1655913246_TisComputeDeviceInfo_t746502873_m3668400665_RuntimeMethod_var;
extern const uint32_t ComputeDevice_GetBoolInfo_m3389773502_MetadataUsageId;
extern const RuntimeMethod* ComputeObject_GetStringInfo_TisCLDeviceHandle_t1655913246_TisComputeDeviceInfo_t746502873_m848664460_RuntimeMethod_var;
extern const uint32_t ComputeDevice_GetStringInfo_m3390052655_MetadataUsageId;
extern RuntimeClass* GetInfoDelegate_2_t3807037534_il2cpp_TypeInfo_var;
extern RuntimeClass* Version_t3456873960_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GetInfoDelegate_2__ctor_m4073742661_RuntimeMethod_var;
extern const RuntimeMethod* ComputeObject_GetInfo_TisCLEventHandle_t1689096655_TisComputeEventInfo_t266398486_TisInt32_t2950945753_m2804187208_RuntimeMethod_var;
extern const uint32_t ComputeEvent__ctor_m3536432089_MetadataUsageId;
extern RuntimeClass* ComputeCommandStatusChanged_t248714690_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ComputeEvent_Cleanup_m1437905592_RuntimeMethod_var;
extern const uint32_t ComputeEvent_TrackGCHandle_m1613658150_MetadataUsageId;
extern const uint32_t ComputeEvent_Cleanup_m1437905592_MetadataUsageId;
extern const uint32_t ComputeEventBase_add_aborted_m1213948935_MetadataUsageId;
extern const uint32_t ComputeEventBase_remove_aborted_m3701654316_MetadataUsageId;
extern const uint32_t ComputeEventBase_add_completed_m626990973_MetadataUsageId;
extern const uint32_t ComputeEventBase_remove_completed_m2496688581_MetadataUsageId;
extern const uint32_t ComputeEventBase_Dispose_m1883981520_MetadataUsageId;
extern RuntimeClass* ComputeEventCallback_t888729672_il2cpp_TypeInfo_var;
extern RuntimeClass* ICL11_t839902496_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ComputeEventBase_StatusNotify_m984476418_RuntimeMethod_var;
extern const uint32_t ComputeEventBase_HookNotifier_m2639630227_MetadataUsageId;
extern RuntimeClass* ComputeCommandStatusArgs_t2147780983_il2cpp_TypeInfo_var;
extern const uint32_t ComputeEventBase_StatusNotify_m984476418_MetadataUsageId;
extern RuntimeClass* ComputeErrorCode_t2380417756_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1790301335;
extern String_t* _stringLiteral3452614530;
extern const uint32_t ComputeException__ctor_m941830565_MetadataUsageId;
extern RuntimeClass* DeviceNotFoundComputeException_t2803661270_il2cpp_TypeInfo_var;
extern RuntimeClass* DeviceNotAvailableComputeException_t1010603520_il2cpp_TypeInfo_var;
extern RuntimeClass* CompilerNotAvailableComputeException_t3264770924_il2cpp_TypeInfo_var;
extern RuntimeClass* MemoryObjectAllocationFailureComputeException_t1033166821_il2cpp_TypeInfo_var;
extern RuntimeClass* OutOfResourcesComputeException_t3780973734_il2cpp_TypeInfo_var;
extern RuntimeClass* OutOfHostMemoryComputeException_t2750237157_il2cpp_TypeInfo_var;
extern RuntimeClass* ProfilingInfoNotAvailableComputeException_t3456066642_il2cpp_TypeInfo_var;
extern RuntimeClass* MemoryCopyOverlapComputeException_t861502170_il2cpp_TypeInfo_var;
extern RuntimeClass* ImageFormatMismatchComputeException_t110044459_il2cpp_TypeInfo_var;
extern RuntimeClass* ImageFormatNotSupportedComputeException_t824198691_il2cpp_TypeInfo_var;
extern RuntimeClass* BuildProgramFailureComputeException_t2506631677_il2cpp_TypeInfo_var;
extern RuntimeClass* MapFailureComputeException_t609039928_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidValueComputeException_t1884546994_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidDeviceTypeComputeException_t3015842128_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidPlatformComputeException_t1484941494_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidDeviceComputeException_t696285512_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidContextComputeException_t2857043932_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidCommandQueueFlagsComputeException_t1130645332_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidCommandQueueComputeException_t3760823054_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidHostPointerComputeException_t3920245830_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidMemoryObjectComputeException_t1584946539_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidImageFormatDescriptorComputeException_t1307689117_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidImageSizeComputeException_t811168388_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidSamplerComputeException_t500922945_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidBinaryComputeException_t3216170158_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidBuildOptionsComputeException_t696878590_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidProgramComputeException_t1992991535_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidProgramExecutableComputeException_t315365513_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidKernelNameComputeException_t1206973794_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidKernelDefinitionComputeException_t1910702029_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidKernelComputeException_t926678227_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidArgumentIndexComputeException_t2375232228_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidArgumentValueComputeException_t4274550977_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidArgumentSizeComputeException_t126175770_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidKernelArgumentsComputeException_t1122558706_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidWorkDimensionsComputeException_t3766439885_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidWorkGroupSizeComputeException_t2659536362_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidWorkItemSizeComputeException_t3193750300_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidGlobalOffsetComputeException_t637889218_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidEventWaitListComputeException_t1652478454_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidEventComputeException_t3815158586_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationComputeException_t1009558057_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidGLObjectComputeException_t3268435956_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidBufferSizeComputeException_t3765795266_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidMipLevelComputeException_t2097497037_il2cpp_TypeInfo_var;
extern RuntimeClass* ComputeException_t3978051080_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var;
extern const uint32_t ComputeException_ThrowOnError_m4115276668_MetadataUsageId;
extern RuntimeClass* GetInfoDelegate_2_t3255322841_il2cpp_TypeInfo_var;
extern RuntimeClass* GetInfoDelegate_2_t3751609436_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GetInfoDelegate_2__ctor_m2956066229_RuntimeMethod_var;
extern const RuntimeMethod* ComputeObject_GetInfo_TisCLMemoryHandle_t2389804491_TisComputeImageInfo_t1608465149_TisIntPtr_t_m3606957894_RuntimeMethod_var;
extern const RuntimeMethod* GetInfoDelegate_2__ctor_m334136073_RuntimeMethod_var;
extern const RuntimeMethod* ComputeObject_GetInfo_TisCLMemoryHandle_t2389804491_TisComputeMemoryInfo_t2104751744_TisIntPtr_t_m546006113_RuntimeMethod_var;
extern const uint32_t ComputeImage_Init_m2341954491_MetadataUsageId;
extern RuntimeClass* ICL12_t436617969_il2cpp_TypeInfo_var;
extern RuntimeClass* ComputeImage2D_t234885228_il2cpp_TypeInfo_var;
extern const uint32_t ComputeImage2D_CreateFromGLTexture2D_m1004196562_MetadataUsageId;
extern RuntimeClass* ComputeImage3D_t234819692_il2cpp_TypeInfo_var;
extern const uint32_t ComputeImage3D_CreateFromGLTexture3D_m2175080094_MetadataUsageId;
extern const uint32_t ComputeKernel__ctor_m1969448358_MetadataUsageId;
extern const uint32_t ComputeKernel_SetArgument_m574529611_MetadataUsageId;
extern const RuntimeMethod* ComputeKernel_SetValueArgument_TisCLMemoryHandle_t2389804491_m3042893746_RuntimeMethod_var;
extern const uint32_t ComputeKernel_SetMemoryArgument_m2446314345_MetadataUsageId;
extern const RuntimeMethod* ComputeKernel_SetValueArgument_TisCLSamplerHandle_t915650828_m2985095415_RuntimeMethod_var;
extern const uint32_t ComputeKernel_SetSamplerArgument_m4112179692_MetadataUsageId;
extern const uint32_t ComputeKernel_Dispose_m2728367641_MetadataUsageId;
extern const uint32_t ComputeMemory_Dispose_m3784571219_MetadataUsageId;
extern RuntimeClass* ComputeObject_t1791575355_il2cpp_TypeInfo_var;
extern const uint32_t ComputeObject_Equals_m1721182432_MetadataUsageId;
extern const uint32_t ComputeObject_Equals_m3003917961_MetadataUsageId;
extern const uint32_t ComputeObject_ToString_m1934266934_MetadataUsageId;
extern const RuntimeMethod* List_1_CopyTo_m2597516554_RuntimeMethod_var;
extern const uint32_t ComputePlatform_get_Platforms_m1134595370_MetadataUsageId;
extern const RuntimeType* ComputePlatform_t3600789258_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* CLPlatformHandleU5BU5D_t3365766632_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t777896704_il2cpp_TypeInfo_var;
extern RuntimeClass* ComputePlatformU5BU5D_t2938311055_il2cpp_TypeInfo_var;
extern RuntimeClass* DllNotFoundException_t2721418633_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3476885814_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m665838036_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m239222480_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1246932516_RuntimeMethod_var;
extern const uint32_t ComputePlatform__cctor_m1149194429_MetadataUsageId;
extern RuntimeClass* GetInfoDelegate_2_t3652029919_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GetInfoDelegate_2__ctor_m148456036_RuntimeMethod_var;
extern const RuntimeMethod* ComputeObject_GetStringInfo_TisCLPlatformHandle_t3404269797_TisComputePlatformInfo_t1022158021_m1537078130_RuntimeMethod_var;
extern const uint32_t ComputePlatform__ctor_m1484747161_MetadataUsageId;
extern const uint32_t ComputePlatform_GetByHandle_m3317553206_MetadataUsageId;
extern RuntimeClass* CLDeviceHandleU5BU5D_t3725102763_il2cpp_TypeInfo_var;
extern RuntimeClass* ComputeDeviceU5BU5D_t2787470155_il2cpp_TypeInfo_var;
extern RuntimeClass* ComputeDevice_t4083180286_il2cpp_TypeInfo_var;
extern const uint32_t ComputePlatform_QueryDevices_m2202516624_MetadataUsageId;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern const uint32_t ComputeProgram__ctor_m876899197_MetadataUsageId;
extern String_t* _stringLiteral757602046;
extern const uint32_t ComputeProgram_Build_m316114664_MetadataUsageId;
extern RuntimeClass* ComputeKernel_t2923705153_il2cpp_TypeInfo_var;
extern const uint32_t ComputeProgram_CreateKernel_m1314287053_MetadataUsageId;
extern RuntimeClass* GetInfoDelegateEx_3_t3669348736_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GetInfoDelegateEx_3__ctor_m877644504_RuntimeMethod_var;
extern const RuntimeMethod* ComputeObject_GetStringInfo_TisCLProgramHandle_t2486937744_TisCLDeviceHandle_t1655913246_TisComputeProgramBuildInfo_t3516951054_m75492913_RuntimeMethod_var;
extern const uint32_t ComputeProgram_GetBuildLog_m3671221401_MetadataUsageId;
extern const RuntimeMethod* ComputeObject_GetInfo_TisCLProgramHandle_t2486937744_TisCLDeviceHandle_t1655913246_TisComputeProgramBuildInfo_t3516951054_TisUInt32_t2560061978_m3082471654_RuntimeMethod_var;
extern const uint32_t ComputeProgram_GetBuildStatus_m1112738881_MetadataUsageId;
extern const uint32_t ComputeProgram_Dispose_m707426446_MetadataUsageId;
extern const uint32_t ComputeSampler__ctor_m98172160_MetadataUsageId;
extern const uint32_t ComputeSampler_Dispose_m323759396_MetadataUsageId;
extern const uint32_t ComputeTools_ParseVersionString_m689330921_MetadataUsageId;
extern RuntimeClass* Int64U5BU5D_t2559172825_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ComputeTools_ConvertArray_m269020480_RuntimeMethod_var;
extern const uint32_t ComputeTools_ConvertArray_m269020480_MetadataUsageId;
extern RuntimeClass* ICollection_1_t2616365224_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t3063033175_il2cpp_TypeInfo_var;
extern const uint32_t ComputeTools_ExtractHandles_m603623554_MetadataUsageId;
extern const uint32_t ComputeTools_ExtractHandles_m2843993479_MetadataUsageId;

struct IntPtrU5BU5D_t4013366056;
struct CLEventHandleU5BU5D_t4276533782;
struct CLDeviceHandleU5BU5D_t3725102763;
struct ObjectU5BU5D_t2843939325;
struct ComputeContextPropertyU5BU5D_t1074107779;
struct CharU5BU5D_t3528271667;
struct StringU5BU5D_t1281789340;
struct Int64U5BU5D_t2559172825;
struct ComputePlatformU5BU5D_t2938311055;
struct CLPlatformHandleU5BU5D_t3365766632;
struct ComputeDeviceU5BU5D_t2787470155;


#ifndef U3CMODULEU3E_T692745548_H
#define U3CMODULEU3E_T692745548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745548 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745548_H
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
#ifndef LIST_1_T777896704_H
#define LIST_1_T777896704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Cloo.ComputePlatform>
struct  List_1_t777896704  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ComputePlatformU5BU5D_t2938311055* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t777896704, ____items_1)); }
	inline ComputePlatformU5BU5D_t2938311055* get__items_1() const { return ____items_1; }
	inline ComputePlatformU5BU5D_t2938311055** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ComputePlatformU5BU5D_t2938311055* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t777896704, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t777896704, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t777896704_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ComputePlatformU5BU5D_t2938311055* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t777896704_StaticFields, ___EmptyArray_4)); }
	inline ComputePlatformU5BU5D_t2938311055* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ComputePlatformU5BU5D_t2938311055** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ComputePlatformU5BU5D_t2938311055* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T777896704_H
#ifndef COMPUTECONTEXTPROPERTYLIST_T3830085294_H
#define COMPUTECONTEXTPROPERTYLIST_T3830085294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeContextPropertyList
struct  ComputeContextPropertyList_t3830085294  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<Cloo.ComputeContextProperty> Cloo.ComputeContextPropertyList::properties
	RuntimeObject* ___properties_0;

public:
	inline static int32_t get_offset_of_properties_0() { return static_cast<int32_t>(offsetof(ComputeContextPropertyList_t3830085294, ___properties_0)); }
	inline RuntimeObject* get_properties_0() const { return ___properties_0; }
	inline RuntimeObject** get_address_of_properties_0() { return &___properties_0; }
	inline void set_properties_0(RuntimeObject* value)
	{
		___properties_0 = value;
		Il2CppCodeGenWriteBarrier((&___properties_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTECONTEXTPROPERTYLIST_T3830085294_H
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
#ifndef READONLYCOLLECTION_1_T1000789277_H
#define READONLYCOLLECTION_1_T1000789277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<Cloo.ComputeDevice>
struct  ReadOnlyCollection_1_t1000789277  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t1000789277, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T1000789277_H
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
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef VERSION_T3456873960_H
#define VERSION_T3456873960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t3456873960  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_1;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_2;
	// System.Int32 System.Version::_Build
	int32_t ____Build_3;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_4;

public:
	inline static int32_t get_offset_of__Major_1() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Major_1)); }
	inline int32_t get__Major_1() const { return ____Major_1; }
	inline int32_t* get_address_of__Major_1() { return &____Major_1; }
	inline void set__Major_1(int32_t value)
	{
		____Major_1 = value;
	}

	inline static int32_t get_offset_of__Minor_2() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Minor_2)); }
	inline int32_t get__Minor_2() const { return ____Minor_2; }
	inline int32_t* get_address_of__Minor_2() { return &____Minor_2; }
	inline void set__Minor_2(int32_t value)
	{
		____Minor_2 = value;
	}

	inline static int32_t get_offset_of__Build_3() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Build_3)); }
	inline int32_t get__Build_3() const { return ____Build_3; }
	inline int32_t* get_address_of__Build_3() { return &____Build_3; }
	inline void set__Build_3(int32_t value)
	{
		____Build_3 = value;
	}

	inline static int32_t get_offset_of__Revision_4() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Revision_4)); }
	inline int32_t get__Revision_4() const { return ____Revision_4; }
	inline int32_t* get_address_of__Revision_4() { return &____Revision_4; }
	inline void set__Revision_4(int32_t value)
	{
		____Revision_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T3456873960_H
#ifndef READONLYCOLLECTION_1_T654176295_H
#define READONLYCOLLECTION_1_T654176295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int64>
struct  ReadOnlyCollection_1_t654176295  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t654176295, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T654176295_H
#ifndef READONLYCOLLECTION_1_T3060026976_H
#define READONLYCOLLECTION_1_T3060026976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct  ReadOnlyCollection_1_t3060026976  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t3060026976, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T3060026976_H
#ifndef LIST_1_T2496929564_H
#define LIST_1_T2496929564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Cloo.ComputeContextProperty>
struct  List_1_t2496929564  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ComputeContextPropertyU5BU5D_t1074107779* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2496929564, ____items_1)); }
	inline ComputeContextPropertyU5BU5D_t1074107779* get__items_1() const { return ____items_1; }
	inline ComputeContextPropertyU5BU5D_t1074107779** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ComputeContextPropertyU5BU5D_t1074107779* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2496929564, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2496929564, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2496929564_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ComputeContextPropertyU5BU5D_t1074107779* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2496929564_StaticFields, ___EmptyArray_4)); }
	inline ComputeContextPropertyU5BU5D_t1074107779* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ComputeContextPropertyU5BU5D_t1074107779** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ComputeContextPropertyU5BU5D_t1074107779* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2496929564_H
#ifndef LIST_1_T1260287732_H
#define LIST_1_T1260287732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Cloo.ComputeDevice>
struct  List_1_t1260287732  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ComputeDeviceU5BU5D_t2787470155* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1260287732, ____items_1)); }
	inline ComputeDeviceU5BU5D_t2787470155* get__items_1() const { return ____items_1; }
	inline ComputeDeviceU5BU5D_t2787470155** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ComputeDeviceU5BU5D_t2787470155* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1260287732, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1260287732, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1260287732_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ComputeDeviceU5BU5D_t2787470155* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1260287732_StaticFields, ___EmptyArray_4)); }
	inline ComputeDeviceU5BU5D_t2787470155* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ComputeDeviceU5BU5D_t2787470155** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ComputeDeviceU5BU5D_t2787470155* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1260287732_H
#ifndef LIST_1_T3592367935_H
#define LIST_1_T3592367935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Cloo.ComputeEventBase>
struct  List_1_t3592367935  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ComputeEventBaseU5BU5D_t832604532* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3592367935, ____items_1)); }
	inline ComputeEventBaseU5BU5D_t832604532* get__items_1() const { return ____items_1; }
	inline ComputeEventBaseU5BU5D_t832604532** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ComputeEventBaseU5BU5D_t832604532* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3592367935, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3592367935, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3592367935_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ComputeEventBaseU5BU5D_t832604532* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3592367935_StaticFields, ___EmptyArray_4)); }
	inline ComputeEventBaseU5BU5D_t832604532* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ComputeEventBaseU5BU5D_t832604532** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ComputeEventBaseU5BU5D_t832604532* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3592367935_H
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
#ifndef CLINTERFACE_T4186500370_H
#define CLINTERFACE_T4186500370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.Bindings.CLInterface
struct  CLInterface_t4186500370  : public RuntimeObject
{
public:

public:
};

struct CLInterface_t4186500370_StaticFields
{
public:
	// Cloo.Bindings.ICL11 Cloo.Bindings.CLInterface::_CL11
	RuntimeObject* ____CL11_0;
	// Cloo.Bindings.ICL12 Cloo.Bindings.CLInterface::_CL12
	RuntimeObject* ____CL12_1;

public:
	inline static int32_t get_offset_of__CL11_0() { return static_cast<int32_t>(offsetof(CLInterface_t4186500370_StaticFields, ____CL11_0)); }
	inline RuntimeObject* get__CL11_0() const { return ____CL11_0; }
	inline RuntimeObject** get_address_of__CL11_0() { return &____CL11_0; }
	inline void set__CL11_0(RuntimeObject* value)
	{
		____CL11_0 = value;
		Il2CppCodeGenWriteBarrier((&____CL11_0), value);
	}

	inline static int32_t get_offset_of__CL12_1() { return static_cast<int32_t>(offsetof(CLInterface_t4186500370_StaticFields, ____CL12_1)); }
	inline RuntimeObject* get__CL12_1() const { return ____CL12_1; }
	inline RuntimeObject** get_address_of__CL12_1() { return &____CL12_1; }
	inline void set__CL12_1(RuntimeObject* value)
	{
		____CL12_1 = value;
		Il2CppCodeGenWriteBarrier((&____CL12_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLINTERFACE_T4186500370_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef LIST_1_T3127987988_H
#define LIST_1_T3127987988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Cloo.Bindings.CLDeviceHandle>
struct  List_1_t3127987988  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CLDeviceHandleU5BU5D_t3725102763* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3127987988, ____items_1)); }
	inline CLDeviceHandleU5BU5D_t3725102763* get__items_1() const { return ____items_1; }
	inline CLDeviceHandleU5BU5D_t3725102763** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CLDeviceHandleU5BU5D_t3725102763* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3127987988, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3127987988, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3127987988_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	CLDeviceHandleU5BU5D_t3725102763* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3127987988_StaticFields, ___EmptyArray_4)); }
	inline CLDeviceHandleU5BU5D_t3725102763* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline CLDeviceHandleU5BU5D_t3725102763** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(CLDeviceHandleU5BU5D_t3725102763* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3127987988_H
#ifndef COMPUTETOOLS_T1492647419_H
#define COMPUTETOOLS_T1492647419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeTools
struct  ComputeTools_t1492647419  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTETOOLS_T1492647419_H
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
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
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
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
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
#ifndef COMPUTEDEVICETYPES_T3507985234_H
#define COMPUTEDEVICETYPES_T3507985234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeDeviceTypes
struct  ComputeDeviceTypes_t3507985234 
{
public:
	// System.Int64 Cloo.ComputeDeviceTypes::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComputeDeviceTypes_t3507985234, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTEDEVICETYPES_T3507985234_H
#ifndef COMPUTEDEVICEINFO_T746502873_H
#define COMPUTEDEVICEINFO_T746502873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeDeviceInfo
struct  ComputeDeviceInfo_t746502873 
{
public:
	// System.Int32 Cloo.ComputeDeviceInfo::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComputeDeviceInfo_t746502873, ___value___1)); }
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
#endif // COMPUTEDEVICEINFO_T746502873_H
#ifndef COMPUTEDEVICEEXECUTIONCAPABILITIES_T3160218274_H
#define COMPUTEDEVICEEXECUTIONCAPABILITIES_T3160218274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeDeviceExecutionCapabilities
struct  ComputeDeviceExecutionCapabilities_t3160218274 
{
public:
	// System.Int32 Cloo.ComputeDeviceExecutionCapabilities::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComputeDeviceExecutionCapabilities_t3160218274, ___value___1)); }
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
#endif // COMPUTEDEVICEEXECUTIONCAPABILITIES_T3160218274_H
#ifndef STRINGSPLITOPTIONS_T641086070_H
#define STRINGSPLITOPTIONS_T641086070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringSplitOptions
struct  StringSplitOptions_t641086070 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringSplitOptions_t641086070, ___value___1)); }
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
#endif // STRINGSPLITOPTIONS_T641086070_H
#ifndef COMPUTEIMAGEADDRESSING_T635132850_H
#define COMPUTEIMAGEADDRESSING_T635132850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeImageAddressing
struct  ComputeImageAddressing_t635132850 
{
public:
	// System.Int32 Cloo.ComputeImageAddressing::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComputeImageAddressing_t635132850, ___value___1)); }
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
#endif // COMPUTEIMAGEADDRESSING_T635132850_H
#ifndef COMPUTEIMAGEFILTERING_T1919212353_H
#define COMPUTEIMAGEFILTERING_T1919212353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeImageFiltering
struct  ComputeImageFiltering_t1919212353 
{
public:
	// System.Int32 Cloo.ComputeImageFiltering::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComputeImageFiltering_t1919212353, ___value___1)); }
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
#endif // COMPUTEIMAGEFILTERING_T1919212353_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef COMPUTEPLATFORMINFO_T1022158021_H
#define COMPUTEPLATFORMINFO_T1022158021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputePlatformInfo
struct  ComputePlatformInfo_t1022158021 
{
public:
	// System.Int32 Cloo.ComputePlatformInfo::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComputePlatformInfo_t1022158021, ___value___1)); }
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
#endif // COMPUTEPLATFORMINFO_T1022158021_H
#ifndef COMPUTEPROGRAMBUILDINFO_T3516951054_H
#define COMPUTEPROGRAMBUILDINFO_T3516951054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeProgramBuildInfo
struct  ComputeProgramBuildInfo_t3516951054 
{
public:
	// System.Int32 Cloo.ComputeProgramBuildInfo::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComputeProgramBuildInfo_t3516951054, ___value___1)); }
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
#endif // COMPUTEPROGRAMBUILDINFO_T3516951054_H
#ifndef COMPUTEPROGRAMBUILDSTATUS_T2685628132_H
#define COMPUTEPROGRAMBUILDSTATUS_T2685628132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeProgramBuildStatus
struct  ComputeProgramBuildStatus_t2685628132 
{
public:
	// System.Int32 Cloo.ComputeProgramBuildStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComputeProgramBuildStatus_t2685628132, ___value___1)); }
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
#endif // COMPUTEPROGRAMBUILDSTATUS_T2685628132_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef COMPUTEMEMORYINFO_T2104751744_H
#define COMPUTEMEMORYINFO_T2104751744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeMemoryInfo
struct  ComputeMemoryInfo_t2104751744 
{
public:
	// System.Int32 Cloo.ComputeMemoryInfo::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComputeMemoryInfo_t2104751744, ___value___1)); }
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
#endif // COMPUTEMEMORYINFO_T2104751744_H
#ifndef COMPUTEDEVICEMEMORYCACHETYPE_T2960843894_H
#define COMPUTEDEVICEMEMORYCACHETYPE_T2960843894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeDeviceMemoryCacheType
struct  ComputeDeviceMemoryCacheType_t2960843894 
{
public:
	// System.Int32 Cloo.ComputeDeviceMemoryCacheType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComputeDeviceMemoryCacheType_t2960843894, ___value___1)); }
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
#endif // COMPUTEDEVICEMEMORYCACHETYPE_T2960843894_H
#ifndef COMPUTEDEVICELOCALMEMORYTYPE_T2898622001_H
#define COMPUTEDEVICELOCALMEMORYTYPE_T2898622001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeDeviceLocalMemoryType
struct  ComputeDeviceLocalMemoryType_t2898622001 
{
public:
	// System.Int32 Cloo.ComputeDeviceLocalMemoryType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComputeDeviceLocalMemoryType_t2898622001, ___value___1)); }
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
#endif // COMPUTEDEVICELOCALMEMORYTYPE_T2898622001_H
#ifndef COMPUTEDEVICESINGLECAPABILITIES_T540781476_H
#define COMPUTEDEVICESINGLECAPABILITIES_T540781476_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeDeviceSingleCapabilities
struct  ComputeDeviceSingleCapabilities_t540781476 
{
public:
	// System.Int64 Cloo.ComputeDeviceSingleCapabilities::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComputeDeviceSingleCapabilities_t540781476, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTEDEVICESINGLECAPABILITIES_T540781476_H
#ifndef COMPUTEEVENTINFO_T266398486_H
#define COMPUTEEVENTINFO_T266398486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeEventInfo
struct  ComputeEventInfo_t266398486 
{
public:
	// System.Int32 Cloo.ComputeEventInfo::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComputeEventInfo_t266398486, ___value___1)); }
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
#endif // COMPUTEEVENTINFO_T266398486_H
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
#ifndef COMPUTEMEMORYFLAGS_T1360453944_H
#define COMPUTEMEMORYFLAGS_T1360453944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeMemoryFlags
struct  ComputeMemoryFlags_t1360453944 
{
public:
	// System.Int64 Cloo.ComputeMemoryFlags::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComputeMemoryFlags_t1360453944, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTEMEMORYFLAGS_T1360453944_H
#ifndef COMPUTEIMAGEINFO_T1608465149_H
#define COMPUTEIMAGEINFO_T1608465149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeImageInfo
struct  ComputeImageInfo_t1608465149 
{
public:
	// System.Int32 Cloo.ComputeImageInfo::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComputeImageInfo_t1608465149, ___value___1)); }
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
#endif // COMPUTEIMAGEINFO_T1608465149_H
#ifndef TYPELOADEXCEPTION_T3707937253_H
#define TYPELOADEXCEPTION_T3707937253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t3707937253  : public SystemException_t176217640
{
public:
	// System.String System.TypeLoadException::className
	String_t* ___className_12;
	// System.String System.TypeLoadException::assemblyName
	String_t* ___assemblyName_13;

public:
	inline static int32_t get_offset_of_className_12() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___className_12)); }
	inline String_t* get_className_12() const { return ___className_12; }
	inline String_t** get_address_of_className_12() { return &___className_12; }
	inline void set_className_12(String_t* value)
	{
		___className_12 = value;
		Il2CppCodeGenWriteBarrier((&___className_12), value);
	}

	inline static int32_t get_offset_of_assemblyName_13() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___assemblyName_13)); }
	inline String_t* get_assemblyName_13() const { return ___assemblyName_13; }
	inline String_t** get_address_of_assemblyName_13() { return &___assemblyName_13; }
	inline void set_assemblyName_13(String_t* value)
	{
		___assemblyName_13 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T3707937253_H
#ifndef CLDEVICEHANDLE_T1655913246_H
#define CLDEVICEHANDLE_T1655913246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.Bindings.CLDeviceHandle
struct  CLDeviceHandle_t1655913246 
{
public:
	// System.IntPtr Cloo.Bindings.CLDeviceHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(CLDeviceHandle_t1655913246, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLDEVICEHANDLE_T1655913246_H
#ifndef COMPUTEOBJECT_T1791575355_H
#define COMPUTEOBJECT_T1791575355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeObject
struct  ComputeObject_t1791575355  : public RuntimeObject
{
public:
	// System.IntPtr Cloo.ComputeObject::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(ComputeObject_t1791575355, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTEOBJECT_T1791575355_H
#ifndef COMPUTECOMMANDQUEUEFLAGS_T2043407197_H
#define COMPUTECOMMANDQUEUEFLAGS_T2043407197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeCommandQueueFlags
struct  ComputeCommandQueueFlags_t2043407197 
{
public:
	// System.Int64 Cloo.ComputeCommandQueueFlags::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComputeCommandQueueFlags_t2043407197, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTECOMMANDQUEUEFLAGS_T2043407197_H
#ifndef CLEVENTHANDLE_T1689096655_H
#define CLEVENTHANDLE_T1689096655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.Bindings.CLEventHandle
struct  CLEventHandle_t1689096655 
{
public:
	// System.IntPtr Cloo.Bindings.CLEventHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(CLEventHandle_t1689096655, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLEVENTHANDLE_T1689096655_H
#ifndef CLMEMORYHANDLE_T2389804491_H
#define CLMEMORYHANDLE_T2389804491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.Bindings.CLMemoryHandle
struct  CLMemoryHandle_t2389804491 
{
public:
	// System.IntPtr Cloo.Bindings.CLMemoryHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(CLMemoryHandle_t2389804491, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLMEMORYHANDLE_T2389804491_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#define NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3489357830  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifndef CLKERNELHANDLE_T2809987897_H
#define CLKERNELHANDLE_T2809987897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.Bindings.CLKernelHandle
struct  CLKernelHandle_t2809987897 
{
public:
	// System.IntPtr Cloo.Bindings.CLKernelHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(CLKernelHandle_t2809987897, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLKERNELHANDLE_T2809987897_H
#ifndef COMPUTECOMMANDEXECUTIONSTATUS_T2902715730_H
#define COMPUTECOMMANDEXECUTIONSTATUS_T2902715730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeCommandExecutionStatus
struct  ComputeCommandExecutionStatus_t2902715730 
{
public:
	// System.Int32 Cloo.ComputeCommandExecutionStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComputeCommandExecutionStatus_t2902715730, ___value___1)); }
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
#endif // COMPUTECOMMANDEXECUTIONSTATUS_T2902715730_H
#ifndef COMPUTEERRORCODE_T2380417756_H
#define COMPUTEERRORCODE_T2380417756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeErrorCode
struct  ComputeErrorCode_t2380417756 
{
public:
	// System.Int32 Cloo.ComputeErrorCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComputeErrorCode_t2380417756, ___value___1)); }
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
#endif // COMPUTEERRORCODE_T2380417756_H
#ifndef CLSAMPLERHANDLE_T915650828_H
#define CLSAMPLERHANDLE_T915650828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.Bindings.CLSamplerHandle
struct  CLSamplerHandle_t915650828 
{
public:
	// System.IntPtr Cloo.Bindings.CLSamplerHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(CLSamplerHandle_t915650828, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLSAMPLERHANDLE_T915650828_H
#ifndef COMPUTECONTEXTINFO_T761728730_H
#define COMPUTECONTEXTINFO_T761728730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeContextInfo
struct  ComputeContextInfo_t761728730 
{
public:
	// System.Int32 Cloo.ComputeContextInfo::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComputeContextInfo_t761728730, ___value___1)); }
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
#endif // COMPUTECONTEXTINFO_T761728730_H
#ifndef CLPROGRAMHANDLE_T2486937744_H
#define CLPROGRAMHANDLE_T2486937744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.Bindings.CLProgramHandle
struct  CLProgramHandle_t2486937744 
{
public:
	// System.IntPtr Cloo.Bindings.CLProgramHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(CLProgramHandle_t2486937744, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLPROGRAMHANDLE_T2486937744_H
#ifndef COMPUTECONTEXTPROPERTYNAME_T2082884555_H
#define COMPUTECONTEXTPROPERTYNAME_T2082884555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeContextPropertyName
struct  ComputeContextPropertyName_t2082884555 
{
public:
	// System.Int32 Cloo.ComputeContextPropertyName::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComputeContextPropertyName_t2082884555, ___value___1)); }
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
#endif // COMPUTECONTEXTPROPERTYNAME_T2082884555_H
#ifndef COMPUTECOMMANDTYPE_T1466395591_H
#define COMPUTECOMMANDTYPE_T1466395591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeCommandType
struct  ComputeCommandType_t1466395591 
{
public:
	// System.Int32 Cloo.ComputeCommandType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComputeCommandType_t1466395591, ___value___1)); }
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
#endif // COMPUTECOMMANDTYPE_T1466395591_H
#ifndef CLCOMMANDQUEUEHANDLE_T218408696_H
#define CLCOMMANDQUEUEHANDLE_T218408696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.Bindings.CLCommandQueueHandle
struct  CLCommandQueueHandle_t218408696 
{
public:
	// System.IntPtr Cloo.Bindings.CLCommandQueueHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(CLCommandQueueHandle_t218408696, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLCOMMANDQUEUEHANDLE_T218408696_H
#ifndef CLPLATFORMHANDLE_T3404269797_H
#define CLPLATFORMHANDLE_T3404269797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.Bindings.CLPlatformHandle
struct  CLPlatformHandle_t3404269797 
{
public:
	// System.IntPtr Cloo.Bindings.CLPlatformHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(CLPlatformHandle_t3404269797, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLPLATFORMHANDLE_T3404269797_H
#ifndef CLCONTEXTHANDLE_T447015429_H
#define CLCONTEXTHANDLE_T447015429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.Bindings.CLContextHandle
struct  CLContextHandle_t447015429 
{
public:
	// System.IntPtr Cloo.Bindings.CLContextHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(CLContextHandle_t447015429, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLCONTEXTHANDLE_T447015429_H
#ifndef DLLNOTFOUNDEXCEPTION_T2721418633_H
#define DLLNOTFOUNDEXCEPTION_T2721418633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DllNotFoundException
struct  DllNotFoundException_t2721418633  : public TypeLoadException_t3707937253
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DLLNOTFOUNDEXCEPTION_T2721418633_H
#ifndef COMPUTEEXCEPTION_T3978051080_H
#define COMPUTEEXCEPTION_T3978051080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeException
struct  ComputeException_t3978051080  : public Exception_t
{
public:
	// Cloo.ComputeErrorCode Cloo.ComputeException::code
	int32_t ___code_11;

public:
	inline static int32_t get_offset_of_code_11() { return static_cast<int32_t>(offsetof(ComputeException_t3978051080, ___code_11)); }
	inline int32_t get_code_11() const { return ___code_11; }
	inline int32_t* get_address_of_code_11() { return &___code_11; }
	inline void set_code_11(int32_t value)
	{
		___code_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTEEXCEPTION_T3978051080_H
#ifndef COMPUTEPLATFORM_T3600789258_H
#define COMPUTEPLATFORM_T3600789258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputePlatform
struct  ComputePlatform_t3600789258  : public ComputeObject_t1791575355
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Cloo.ComputeDevice> Cloo.ComputePlatform::devices
	ReadOnlyCollection_1_t1000789277 * ___devices_1;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Cloo.ComputePlatform::extensions
	ReadOnlyCollection_1_t3060026976 * ___extensions_2;
	// System.String Cloo.ComputePlatform::name
	String_t* ___name_3;
	// System.String Cloo.ComputePlatform::profile
	String_t* ___profile_6;
	// System.String Cloo.ComputePlatform::vendor
	String_t* ___vendor_7;
	// System.String Cloo.ComputePlatform::version
	String_t* ___version_8;
	// Cloo.Bindings.CLPlatformHandle Cloo.ComputePlatform::<Handle>k__BackingField
	CLPlatformHandle_t3404269797  ___U3CHandleU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_devices_1() { return static_cast<int32_t>(offsetof(ComputePlatform_t3600789258, ___devices_1)); }
	inline ReadOnlyCollection_1_t1000789277 * get_devices_1() const { return ___devices_1; }
	inline ReadOnlyCollection_1_t1000789277 ** get_address_of_devices_1() { return &___devices_1; }
	inline void set_devices_1(ReadOnlyCollection_1_t1000789277 * value)
	{
		___devices_1 = value;
		Il2CppCodeGenWriteBarrier((&___devices_1), value);
	}

	inline static int32_t get_offset_of_extensions_2() { return static_cast<int32_t>(offsetof(ComputePlatform_t3600789258, ___extensions_2)); }
	inline ReadOnlyCollection_1_t3060026976 * get_extensions_2() const { return ___extensions_2; }
	inline ReadOnlyCollection_1_t3060026976 ** get_address_of_extensions_2() { return &___extensions_2; }
	inline void set_extensions_2(ReadOnlyCollection_1_t3060026976 * value)
	{
		___extensions_2 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_2), value);
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(ComputePlatform_t3600789258, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_profile_6() { return static_cast<int32_t>(offsetof(ComputePlatform_t3600789258, ___profile_6)); }
	inline String_t* get_profile_6() const { return ___profile_6; }
	inline String_t** get_address_of_profile_6() { return &___profile_6; }
	inline void set_profile_6(String_t* value)
	{
		___profile_6 = value;
		Il2CppCodeGenWriteBarrier((&___profile_6), value);
	}

	inline static int32_t get_offset_of_vendor_7() { return static_cast<int32_t>(offsetof(ComputePlatform_t3600789258, ___vendor_7)); }
	inline String_t* get_vendor_7() const { return ___vendor_7; }
	inline String_t** get_address_of_vendor_7() { return &___vendor_7; }
	inline void set_vendor_7(String_t* value)
	{
		___vendor_7 = value;
		Il2CppCodeGenWriteBarrier((&___vendor_7), value);
	}

	inline static int32_t get_offset_of_version_8() { return static_cast<int32_t>(offsetof(ComputePlatform_t3600789258, ___version_8)); }
	inline String_t* get_version_8() const { return ___version_8; }
	inline String_t** get_address_of_version_8() { return &___version_8; }
	inline void set_version_8(String_t* value)
	{
		___version_8 = value;
		Il2CppCodeGenWriteBarrier((&___version_8), value);
	}

	inline static int32_t get_offset_of_U3CHandleU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ComputePlatform_t3600789258, ___U3CHandleU3Ek__BackingField_9)); }
	inline CLPlatformHandle_t3404269797  get_U3CHandleU3Ek__BackingField_9() const { return ___U3CHandleU3Ek__BackingField_9; }
	inline CLPlatformHandle_t3404269797 * get_address_of_U3CHandleU3Ek__BackingField_9() { return &___U3CHandleU3Ek__BackingField_9; }
	inline void set_U3CHandleU3Ek__BackingField_9(CLPlatformHandle_t3404269797  value)
	{
		___U3CHandleU3Ek__BackingField_9 = value;
	}
};

struct ComputePlatform_t3600789258_StaticFields
{
public:
	// System.Collections.Generic.List`1<Cloo.ComputePlatform> Cloo.ComputePlatform::platforms
	List_1_t777896704 * ___platforms_4;
	// Cloo.ComputePlatform[] Cloo.ComputePlatform::platformsArray
	ComputePlatformU5BU5D_t2938311055* ___platformsArray_5;

public:
	inline static int32_t get_offset_of_platforms_4() { return static_cast<int32_t>(offsetof(ComputePlatform_t3600789258_StaticFields, ___platforms_4)); }
	inline List_1_t777896704 * get_platforms_4() const { return ___platforms_4; }
	inline List_1_t777896704 ** get_address_of_platforms_4() { return &___platforms_4; }
	inline void set_platforms_4(List_1_t777896704 * value)
	{
		___platforms_4 = value;
		Il2CppCodeGenWriteBarrier((&___platforms_4), value);
	}

	inline static int32_t get_offset_of_platformsArray_5() { return static_cast<int32_t>(offsetof(ComputePlatform_t3600789258_StaticFields, ___platformsArray_5)); }
	inline ComputePlatformU5BU5D_t2938311055* get_platformsArray_5() const { return ___platformsArray_5; }
	inline ComputePlatformU5BU5D_t2938311055** get_address_of_platformsArray_5() { return &___platformsArray_5; }
	inline void set_platformsArray_5(ComputePlatformU5BU5D_t2938311055* value)
	{
		___platformsArray_5 = value;
		Il2CppCodeGenWriteBarrier((&___platformsArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTEPLATFORM_T3600789258_H
#ifndef COMPUTEDEVICE_T4083180286_H
#define COMPUTEDEVICE_T4083180286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeDevice
struct  ComputeDevice_t4083180286  : public ComputeObject_t1791575355
{
public:
	// System.Int64 Cloo.ComputeDevice::addressBits
	int64_t ___addressBits_1;
	// System.Boolean Cloo.ComputeDevice::available
	bool ___available_2;
	// System.Boolean Cloo.ComputeDevice::compilerAvailable
	bool ___compilerAvailable_3;
	// System.String Cloo.ComputeDevice::driverVersion
	String_t* ___driverVersion_4;
	// System.Boolean Cloo.ComputeDevice::endianLittle
	bool ___endianLittle_5;
	// System.Boolean Cloo.ComputeDevice::errorCorrectionSupport
	bool ___errorCorrectionSupport_6;
	// Cloo.ComputeDeviceExecutionCapabilities Cloo.ComputeDevice::executionCapabilities
	int32_t ___executionCapabilities_7;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Cloo.ComputeDevice::extensions
	ReadOnlyCollection_1_t3060026976 * ___extensions_8;
	// System.Int64 Cloo.ComputeDevice::globalMemoryCachelineSize
	int64_t ___globalMemoryCachelineSize_9;
	// System.Int64 Cloo.ComputeDevice::globalMemoryCacheSize
	int64_t ___globalMemoryCacheSize_10;
	// Cloo.ComputeDeviceMemoryCacheType Cloo.ComputeDevice::globalMemoryCacheType
	int32_t ___globalMemoryCacheType_11;
	// System.Int64 Cloo.ComputeDevice::globalMemorySize
	int64_t ___globalMemorySize_12;
	// System.Boolean Cloo.ComputeDevice::imageSupport
	bool ___imageSupport_13;
	// System.Int64 Cloo.ComputeDevice::image2DMaxHeight
	int64_t ___image2DMaxHeight_14;
	// System.Int64 Cloo.ComputeDevice::image2DMaxWidth
	int64_t ___image2DMaxWidth_15;
	// System.Int64 Cloo.ComputeDevice::image3DMaxDepth
	int64_t ___image3DMaxDepth_16;
	// System.Int64 Cloo.ComputeDevice::image3DMaxHeight
	int64_t ___image3DMaxHeight_17;
	// System.Int64 Cloo.ComputeDevice::image3DMaxWidth
	int64_t ___image3DMaxWidth_18;
	// System.Int64 Cloo.ComputeDevice::localMemorySize
	int64_t ___localMemorySize_19;
	// Cloo.ComputeDeviceLocalMemoryType Cloo.ComputeDevice::localMemoryType
	int32_t ___localMemoryType_20;
	// System.Int64 Cloo.ComputeDevice::maxClockFrequency
	int64_t ___maxClockFrequency_21;
	// System.Int64 Cloo.ComputeDevice::maxComputeUnits
	int64_t ___maxComputeUnits_22;
	// System.Int64 Cloo.ComputeDevice::maxConstantArguments
	int64_t ___maxConstantArguments_23;
	// System.Int64 Cloo.ComputeDevice::maxConstantBufferSize
	int64_t ___maxConstantBufferSize_24;
	// System.Int64 Cloo.ComputeDevice::maxMemAllocSize
	int64_t ___maxMemAllocSize_25;
	// System.Int64 Cloo.ComputeDevice::maxParameterSize
	int64_t ___maxParameterSize_26;
	// System.Int64 Cloo.ComputeDevice::maxReadImageArgs
	int64_t ___maxReadImageArgs_27;
	// System.Int64 Cloo.ComputeDevice::maxSamplers
	int64_t ___maxSamplers_28;
	// System.Int64 Cloo.ComputeDevice::maxWorkGroupSize
	int64_t ___maxWorkGroupSize_29;
	// System.Int64 Cloo.ComputeDevice::maxWorkItemDimensions
	int64_t ___maxWorkItemDimensions_30;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int64> Cloo.ComputeDevice::maxWorkItemSizes
	ReadOnlyCollection_1_t654176295 * ___maxWorkItemSizes_31;
	// System.Int64 Cloo.ComputeDevice::maxWriteImageArgs
	int64_t ___maxWriteImageArgs_32;
	// System.Int64 Cloo.ComputeDevice::memBaseAddrAlign
	int64_t ___memBaseAddrAlign_33;
	// System.Int64 Cloo.ComputeDevice::minDataTypeAlignSize
	int64_t ___minDataTypeAlignSize_34;
	// System.String Cloo.ComputeDevice::name
	String_t* ___name_35;
	// Cloo.ComputePlatform Cloo.ComputeDevice::platform
	ComputePlatform_t3600789258 * ___platform_36;
	// System.Int64 Cloo.ComputeDevice::preferredVectorWidthChar
	int64_t ___preferredVectorWidthChar_37;
	// System.Int64 Cloo.ComputeDevice::preferredVectorWidthFloat
	int64_t ___preferredVectorWidthFloat_38;
	// System.Int64 Cloo.ComputeDevice::preferredVectorWidthInt
	int64_t ___preferredVectorWidthInt_39;
	// System.Int64 Cloo.ComputeDevice::preferredVectorWidthLong
	int64_t ___preferredVectorWidthLong_40;
	// System.Int64 Cloo.ComputeDevice::preferredVectorWidthShort
	int64_t ___preferredVectorWidthShort_41;
	// System.String Cloo.ComputeDevice::profile
	String_t* ___profile_42;
	// System.Int64 Cloo.ComputeDevice::profilingTimerResolution
	int64_t ___profilingTimerResolution_43;
	// Cloo.ComputeCommandQueueFlags Cloo.ComputeDevice::queueProperties
	int64_t ___queueProperties_44;
	// Cloo.ComputeDeviceSingleCapabilities Cloo.ComputeDevice::singleCapabilities
	int64_t ___singleCapabilities_45;
	// Cloo.ComputeDeviceTypes Cloo.ComputeDevice::type
	int64_t ___type_46;
	// System.String Cloo.ComputeDevice::vendor
	String_t* ___vendor_47;
	// System.Int64 Cloo.ComputeDevice::vendorId
	int64_t ___vendorId_48;
	// System.String Cloo.ComputeDevice::version
	String_t* ___version_49;
	// Cloo.Bindings.CLDeviceHandle Cloo.ComputeDevice::<Handle>k__BackingField
	CLDeviceHandle_t1655913246  ___U3CHandleU3Ek__BackingField_50;

public:
	inline static int32_t get_offset_of_addressBits_1() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___addressBits_1)); }
	inline int64_t get_addressBits_1() const { return ___addressBits_1; }
	inline int64_t* get_address_of_addressBits_1() { return &___addressBits_1; }
	inline void set_addressBits_1(int64_t value)
	{
		___addressBits_1 = value;
	}

	inline static int32_t get_offset_of_available_2() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___available_2)); }
	inline bool get_available_2() const { return ___available_2; }
	inline bool* get_address_of_available_2() { return &___available_2; }
	inline void set_available_2(bool value)
	{
		___available_2 = value;
	}

	inline static int32_t get_offset_of_compilerAvailable_3() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___compilerAvailable_3)); }
	inline bool get_compilerAvailable_3() const { return ___compilerAvailable_3; }
	inline bool* get_address_of_compilerAvailable_3() { return &___compilerAvailable_3; }
	inline void set_compilerAvailable_3(bool value)
	{
		___compilerAvailable_3 = value;
	}

	inline static int32_t get_offset_of_driverVersion_4() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___driverVersion_4)); }
	inline String_t* get_driverVersion_4() const { return ___driverVersion_4; }
	inline String_t** get_address_of_driverVersion_4() { return &___driverVersion_4; }
	inline void set_driverVersion_4(String_t* value)
	{
		___driverVersion_4 = value;
		Il2CppCodeGenWriteBarrier((&___driverVersion_4), value);
	}

	inline static int32_t get_offset_of_endianLittle_5() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___endianLittle_5)); }
	inline bool get_endianLittle_5() const { return ___endianLittle_5; }
	inline bool* get_address_of_endianLittle_5() { return &___endianLittle_5; }
	inline void set_endianLittle_5(bool value)
	{
		___endianLittle_5 = value;
	}

	inline static int32_t get_offset_of_errorCorrectionSupport_6() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___errorCorrectionSupport_6)); }
	inline bool get_errorCorrectionSupport_6() const { return ___errorCorrectionSupport_6; }
	inline bool* get_address_of_errorCorrectionSupport_6() { return &___errorCorrectionSupport_6; }
	inline void set_errorCorrectionSupport_6(bool value)
	{
		___errorCorrectionSupport_6 = value;
	}

	inline static int32_t get_offset_of_executionCapabilities_7() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___executionCapabilities_7)); }
	inline int32_t get_executionCapabilities_7() const { return ___executionCapabilities_7; }
	inline int32_t* get_address_of_executionCapabilities_7() { return &___executionCapabilities_7; }
	inline void set_executionCapabilities_7(int32_t value)
	{
		___executionCapabilities_7 = value;
	}

	inline static int32_t get_offset_of_extensions_8() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___extensions_8)); }
	inline ReadOnlyCollection_1_t3060026976 * get_extensions_8() const { return ___extensions_8; }
	inline ReadOnlyCollection_1_t3060026976 ** get_address_of_extensions_8() { return &___extensions_8; }
	inline void set_extensions_8(ReadOnlyCollection_1_t3060026976 * value)
	{
		___extensions_8 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_8), value);
	}

	inline static int32_t get_offset_of_globalMemoryCachelineSize_9() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___globalMemoryCachelineSize_9)); }
	inline int64_t get_globalMemoryCachelineSize_9() const { return ___globalMemoryCachelineSize_9; }
	inline int64_t* get_address_of_globalMemoryCachelineSize_9() { return &___globalMemoryCachelineSize_9; }
	inline void set_globalMemoryCachelineSize_9(int64_t value)
	{
		___globalMemoryCachelineSize_9 = value;
	}

	inline static int32_t get_offset_of_globalMemoryCacheSize_10() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___globalMemoryCacheSize_10)); }
	inline int64_t get_globalMemoryCacheSize_10() const { return ___globalMemoryCacheSize_10; }
	inline int64_t* get_address_of_globalMemoryCacheSize_10() { return &___globalMemoryCacheSize_10; }
	inline void set_globalMemoryCacheSize_10(int64_t value)
	{
		___globalMemoryCacheSize_10 = value;
	}

	inline static int32_t get_offset_of_globalMemoryCacheType_11() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___globalMemoryCacheType_11)); }
	inline int32_t get_globalMemoryCacheType_11() const { return ___globalMemoryCacheType_11; }
	inline int32_t* get_address_of_globalMemoryCacheType_11() { return &___globalMemoryCacheType_11; }
	inline void set_globalMemoryCacheType_11(int32_t value)
	{
		___globalMemoryCacheType_11 = value;
	}

	inline static int32_t get_offset_of_globalMemorySize_12() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___globalMemorySize_12)); }
	inline int64_t get_globalMemorySize_12() const { return ___globalMemorySize_12; }
	inline int64_t* get_address_of_globalMemorySize_12() { return &___globalMemorySize_12; }
	inline void set_globalMemorySize_12(int64_t value)
	{
		___globalMemorySize_12 = value;
	}

	inline static int32_t get_offset_of_imageSupport_13() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___imageSupport_13)); }
	inline bool get_imageSupport_13() const { return ___imageSupport_13; }
	inline bool* get_address_of_imageSupport_13() { return &___imageSupport_13; }
	inline void set_imageSupport_13(bool value)
	{
		___imageSupport_13 = value;
	}

	inline static int32_t get_offset_of_image2DMaxHeight_14() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___image2DMaxHeight_14)); }
	inline int64_t get_image2DMaxHeight_14() const { return ___image2DMaxHeight_14; }
	inline int64_t* get_address_of_image2DMaxHeight_14() { return &___image2DMaxHeight_14; }
	inline void set_image2DMaxHeight_14(int64_t value)
	{
		___image2DMaxHeight_14 = value;
	}

	inline static int32_t get_offset_of_image2DMaxWidth_15() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___image2DMaxWidth_15)); }
	inline int64_t get_image2DMaxWidth_15() const { return ___image2DMaxWidth_15; }
	inline int64_t* get_address_of_image2DMaxWidth_15() { return &___image2DMaxWidth_15; }
	inline void set_image2DMaxWidth_15(int64_t value)
	{
		___image2DMaxWidth_15 = value;
	}

	inline static int32_t get_offset_of_image3DMaxDepth_16() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___image3DMaxDepth_16)); }
	inline int64_t get_image3DMaxDepth_16() const { return ___image3DMaxDepth_16; }
	inline int64_t* get_address_of_image3DMaxDepth_16() { return &___image3DMaxDepth_16; }
	inline void set_image3DMaxDepth_16(int64_t value)
	{
		___image3DMaxDepth_16 = value;
	}

	inline static int32_t get_offset_of_image3DMaxHeight_17() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___image3DMaxHeight_17)); }
	inline int64_t get_image3DMaxHeight_17() const { return ___image3DMaxHeight_17; }
	inline int64_t* get_address_of_image3DMaxHeight_17() { return &___image3DMaxHeight_17; }
	inline void set_image3DMaxHeight_17(int64_t value)
	{
		___image3DMaxHeight_17 = value;
	}

	inline static int32_t get_offset_of_image3DMaxWidth_18() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___image3DMaxWidth_18)); }
	inline int64_t get_image3DMaxWidth_18() const { return ___image3DMaxWidth_18; }
	inline int64_t* get_address_of_image3DMaxWidth_18() { return &___image3DMaxWidth_18; }
	inline void set_image3DMaxWidth_18(int64_t value)
	{
		___image3DMaxWidth_18 = value;
	}

	inline static int32_t get_offset_of_localMemorySize_19() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___localMemorySize_19)); }
	inline int64_t get_localMemorySize_19() const { return ___localMemorySize_19; }
	inline int64_t* get_address_of_localMemorySize_19() { return &___localMemorySize_19; }
	inline void set_localMemorySize_19(int64_t value)
	{
		___localMemorySize_19 = value;
	}

	inline static int32_t get_offset_of_localMemoryType_20() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___localMemoryType_20)); }
	inline int32_t get_localMemoryType_20() const { return ___localMemoryType_20; }
	inline int32_t* get_address_of_localMemoryType_20() { return &___localMemoryType_20; }
	inline void set_localMemoryType_20(int32_t value)
	{
		___localMemoryType_20 = value;
	}

	inline static int32_t get_offset_of_maxClockFrequency_21() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___maxClockFrequency_21)); }
	inline int64_t get_maxClockFrequency_21() const { return ___maxClockFrequency_21; }
	inline int64_t* get_address_of_maxClockFrequency_21() { return &___maxClockFrequency_21; }
	inline void set_maxClockFrequency_21(int64_t value)
	{
		___maxClockFrequency_21 = value;
	}

	inline static int32_t get_offset_of_maxComputeUnits_22() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___maxComputeUnits_22)); }
	inline int64_t get_maxComputeUnits_22() const { return ___maxComputeUnits_22; }
	inline int64_t* get_address_of_maxComputeUnits_22() { return &___maxComputeUnits_22; }
	inline void set_maxComputeUnits_22(int64_t value)
	{
		___maxComputeUnits_22 = value;
	}

	inline static int32_t get_offset_of_maxConstantArguments_23() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___maxConstantArguments_23)); }
	inline int64_t get_maxConstantArguments_23() const { return ___maxConstantArguments_23; }
	inline int64_t* get_address_of_maxConstantArguments_23() { return &___maxConstantArguments_23; }
	inline void set_maxConstantArguments_23(int64_t value)
	{
		___maxConstantArguments_23 = value;
	}

	inline static int32_t get_offset_of_maxConstantBufferSize_24() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___maxConstantBufferSize_24)); }
	inline int64_t get_maxConstantBufferSize_24() const { return ___maxConstantBufferSize_24; }
	inline int64_t* get_address_of_maxConstantBufferSize_24() { return &___maxConstantBufferSize_24; }
	inline void set_maxConstantBufferSize_24(int64_t value)
	{
		___maxConstantBufferSize_24 = value;
	}

	inline static int32_t get_offset_of_maxMemAllocSize_25() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___maxMemAllocSize_25)); }
	inline int64_t get_maxMemAllocSize_25() const { return ___maxMemAllocSize_25; }
	inline int64_t* get_address_of_maxMemAllocSize_25() { return &___maxMemAllocSize_25; }
	inline void set_maxMemAllocSize_25(int64_t value)
	{
		___maxMemAllocSize_25 = value;
	}

	inline static int32_t get_offset_of_maxParameterSize_26() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___maxParameterSize_26)); }
	inline int64_t get_maxParameterSize_26() const { return ___maxParameterSize_26; }
	inline int64_t* get_address_of_maxParameterSize_26() { return &___maxParameterSize_26; }
	inline void set_maxParameterSize_26(int64_t value)
	{
		___maxParameterSize_26 = value;
	}

	inline static int32_t get_offset_of_maxReadImageArgs_27() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___maxReadImageArgs_27)); }
	inline int64_t get_maxReadImageArgs_27() const { return ___maxReadImageArgs_27; }
	inline int64_t* get_address_of_maxReadImageArgs_27() { return &___maxReadImageArgs_27; }
	inline void set_maxReadImageArgs_27(int64_t value)
	{
		___maxReadImageArgs_27 = value;
	}

	inline static int32_t get_offset_of_maxSamplers_28() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___maxSamplers_28)); }
	inline int64_t get_maxSamplers_28() const { return ___maxSamplers_28; }
	inline int64_t* get_address_of_maxSamplers_28() { return &___maxSamplers_28; }
	inline void set_maxSamplers_28(int64_t value)
	{
		___maxSamplers_28 = value;
	}

	inline static int32_t get_offset_of_maxWorkGroupSize_29() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___maxWorkGroupSize_29)); }
	inline int64_t get_maxWorkGroupSize_29() const { return ___maxWorkGroupSize_29; }
	inline int64_t* get_address_of_maxWorkGroupSize_29() { return &___maxWorkGroupSize_29; }
	inline void set_maxWorkGroupSize_29(int64_t value)
	{
		___maxWorkGroupSize_29 = value;
	}

	inline static int32_t get_offset_of_maxWorkItemDimensions_30() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___maxWorkItemDimensions_30)); }
	inline int64_t get_maxWorkItemDimensions_30() const { return ___maxWorkItemDimensions_30; }
	inline int64_t* get_address_of_maxWorkItemDimensions_30() { return &___maxWorkItemDimensions_30; }
	inline void set_maxWorkItemDimensions_30(int64_t value)
	{
		___maxWorkItemDimensions_30 = value;
	}

	inline static int32_t get_offset_of_maxWorkItemSizes_31() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___maxWorkItemSizes_31)); }
	inline ReadOnlyCollection_1_t654176295 * get_maxWorkItemSizes_31() const { return ___maxWorkItemSizes_31; }
	inline ReadOnlyCollection_1_t654176295 ** get_address_of_maxWorkItemSizes_31() { return &___maxWorkItemSizes_31; }
	inline void set_maxWorkItemSizes_31(ReadOnlyCollection_1_t654176295 * value)
	{
		___maxWorkItemSizes_31 = value;
		Il2CppCodeGenWriteBarrier((&___maxWorkItemSizes_31), value);
	}

	inline static int32_t get_offset_of_maxWriteImageArgs_32() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___maxWriteImageArgs_32)); }
	inline int64_t get_maxWriteImageArgs_32() const { return ___maxWriteImageArgs_32; }
	inline int64_t* get_address_of_maxWriteImageArgs_32() { return &___maxWriteImageArgs_32; }
	inline void set_maxWriteImageArgs_32(int64_t value)
	{
		___maxWriteImageArgs_32 = value;
	}

	inline static int32_t get_offset_of_memBaseAddrAlign_33() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___memBaseAddrAlign_33)); }
	inline int64_t get_memBaseAddrAlign_33() const { return ___memBaseAddrAlign_33; }
	inline int64_t* get_address_of_memBaseAddrAlign_33() { return &___memBaseAddrAlign_33; }
	inline void set_memBaseAddrAlign_33(int64_t value)
	{
		___memBaseAddrAlign_33 = value;
	}

	inline static int32_t get_offset_of_minDataTypeAlignSize_34() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___minDataTypeAlignSize_34)); }
	inline int64_t get_minDataTypeAlignSize_34() const { return ___minDataTypeAlignSize_34; }
	inline int64_t* get_address_of_minDataTypeAlignSize_34() { return &___minDataTypeAlignSize_34; }
	inline void set_minDataTypeAlignSize_34(int64_t value)
	{
		___minDataTypeAlignSize_34 = value;
	}

	inline static int32_t get_offset_of_name_35() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___name_35)); }
	inline String_t* get_name_35() const { return ___name_35; }
	inline String_t** get_address_of_name_35() { return &___name_35; }
	inline void set_name_35(String_t* value)
	{
		___name_35 = value;
		Il2CppCodeGenWriteBarrier((&___name_35), value);
	}

	inline static int32_t get_offset_of_platform_36() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___platform_36)); }
	inline ComputePlatform_t3600789258 * get_platform_36() const { return ___platform_36; }
	inline ComputePlatform_t3600789258 ** get_address_of_platform_36() { return &___platform_36; }
	inline void set_platform_36(ComputePlatform_t3600789258 * value)
	{
		___platform_36 = value;
		Il2CppCodeGenWriteBarrier((&___platform_36), value);
	}

	inline static int32_t get_offset_of_preferredVectorWidthChar_37() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___preferredVectorWidthChar_37)); }
	inline int64_t get_preferredVectorWidthChar_37() const { return ___preferredVectorWidthChar_37; }
	inline int64_t* get_address_of_preferredVectorWidthChar_37() { return &___preferredVectorWidthChar_37; }
	inline void set_preferredVectorWidthChar_37(int64_t value)
	{
		___preferredVectorWidthChar_37 = value;
	}

	inline static int32_t get_offset_of_preferredVectorWidthFloat_38() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___preferredVectorWidthFloat_38)); }
	inline int64_t get_preferredVectorWidthFloat_38() const { return ___preferredVectorWidthFloat_38; }
	inline int64_t* get_address_of_preferredVectorWidthFloat_38() { return &___preferredVectorWidthFloat_38; }
	inline void set_preferredVectorWidthFloat_38(int64_t value)
	{
		___preferredVectorWidthFloat_38 = value;
	}

	inline static int32_t get_offset_of_preferredVectorWidthInt_39() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___preferredVectorWidthInt_39)); }
	inline int64_t get_preferredVectorWidthInt_39() const { return ___preferredVectorWidthInt_39; }
	inline int64_t* get_address_of_preferredVectorWidthInt_39() { return &___preferredVectorWidthInt_39; }
	inline void set_preferredVectorWidthInt_39(int64_t value)
	{
		___preferredVectorWidthInt_39 = value;
	}

	inline static int32_t get_offset_of_preferredVectorWidthLong_40() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___preferredVectorWidthLong_40)); }
	inline int64_t get_preferredVectorWidthLong_40() const { return ___preferredVectorWidthLong_40; }
	inline int64_t* get_address_of_preferredVectorWidthLong_40() { return &___preferredVectorWidthLong_40; }
	inline void set_preferredVectorWidthLong_40(int64_t value)
	{
		___preferredVectorWidthLong_40 = value;
	}

	inline static int32_t get_offset_of_preferredVectorWidthShort_41() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___preferredVectorWidthShort_41)); }
	inline int64_t get_preferredVectorWidthShort_41() const { return ___preferredVectorWidthShort_41; }
	inline int64_t* get_address_of_preferredVectorWidthShort_41() { return &___preferredVectorWidthShort_41; }
	inline void set_preferredVectorWidthShort_41(int64_t value)
	{
		___preferredVectorWidthShort_41 = value;
	}

	inline static int32_t get_offset_of_profile_42() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___profile_42)); }
	inline String_t* get_profile_42() const { return ___profile_42; }
	inline String_t** get_address_of_profile_42() { return &___profile_42; }
	inline void set_profile_42(String_t* value)
	{
		___profile_42 = value;
		Il2CppCodeGenWriteBarrier((&___profile_42), value);
	}

	inline static int32_t get_offset_of_profilingTimerResolution_43() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___profilingTimerResolution_43)); }
	inline int64_t get_profilingTimerResolution_43() const { return ___profilingTimerResolution_43; }
	inline int64_t* get_address_of_profilingTimerResolution_43() { return &___profilingTimerResolution_43; }
	inline void set_profilingTimerResolution_43(int64_t value)
	{
		___profilingTimerResolution_43 = value;
	}

	inline static int32_t get_offset_of_queueProperties_44() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___queueProperties_44)); }
	inline int64_t get_queueProperties_44() const { return ___queueProperties_44; }
	inline int64_t* get_address_of_queueProperties_44() { return &___queueProperties_44; }
	inline void set_queueProperties_44(int64_t value)
	{
		___queueProperties_44 = value;
	}

	inline static int32_t get_offset_of_singleCapabilities_45() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___singleCapabilities_45)); }
	inline int64_t get_singleCapabilities_45() const { return ___singleCapabilities_45; }
	inline int64_t* get_address_of_singleCapabilities_45() { return &___singleCapabilities_45; }
	inline void set_singleCapabilities_45(int64_t value)
	{
		___singleCapabilities_45 = value;
	}

	inline static int32_t get_offset_of_type_46() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___type_46)); }
	inline int64_t get_type_46() const { return ___type_46; }
	inline int64_t* get_address_of_type_46() { return &___type_46; }
	inline void set_type_46(int64_t value)
	{
		___type_46 = value;
	}

	inline static int32_t get_offset_of_vendor_47() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___vendor_47)); }
	inline String_t* get_vendor_47() const { return ___vendor_47; }
	inline String_t** get_address_of_vendor_47() { return &___vendor_47; }
	inline void set_vendor_47(String_t* value)
	{
		___vendor_47 = value;
		Il2CppCodeGenWriteBarrier((&___vendor_47), value);
	}

	inline static int32_t get_offset_of_vendorId_48() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___vendorId_48)); }
	inline int64_t get_vendorId_48() const { return ___vendorId_48; }
	inline int64_t* get_address_of_vendorId_48() { return &___vendorId_48; }
	inline void set_vendorId_48(int64_t value)
	{
		___vendorId_48 = value;
	}

	inline static int32_t get_offset_of_version_49() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___version_49)); }
	inline String_t* get_version_49() const { return ___version_49; }
	inline String_t** get_address_of_version_49() { return &___version_49; }
	inline void set_version_49(String_t* value)
	{
		___version_49 = value;
		Il2CppCodeGenWriteBarrier((&___version_49), value);
	}

	inline static int32_t get_offset_of_U3CHandleU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(ComputeDevice_t4083180286, ___U3CHandleU3Ek__BackingField_50)); }
	inline CLDeviceHandle_t1655913246  get_U3CHandleU3Ek__BackingField_50() const { return ___U3CHandleU3Ek__BackingField_50; }
	inline CLDeviceHandle_t1655913246 * get_address_of_U3CHandleU3Ek__BackingField_50() { return &___U3CHandleU3Ek__BackingField_50; }
	inline void set_U3CHandleU3Ek__BackingField_50(CLDeviceHandle_t1655913246  value)
	{
		___U3CHandleU3Ek__BackingField_50 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTEDEVICE_T4083180286_H
#ifndef COMPUTERESOURCE_T542138890_H
#define COMPUTERESOURCE_T542138890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeResource
struct  ComputeResource_t542138890  : public ComputeObject_t1791575355
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTERESOURCE_T542138890_H
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
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef COMPUTECOMMANDSTATUSARGS_T2147780983_H
#define COMPUTECOMMANDSTATUSARGS_T2147780983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeCommandStatusArgs
struct  ComputeCommandStatusArgs_t2147780983  : public EventArgs_t3591816995
{
public:
	// Cloo.ComputeEventBase Cloo.ComputeCommandStatusArgs::<Event>k__BackingField
	ComputeEventBase_t2120293193 * ___U3CEventU3Ek__BackingField_1;
	// Cloo.ComputeCommandExecutionStatus Cloo.ComputeCommandStatusArgs::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CEventU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ComputeCommandStatusArgs_t2147780983, ___U3CEventU3Ek__BackingField_1)); }
	inline ComputeEventBase_t2120293193 * get_U3CEventU3Ek__BackingField_1() const { return ___U3CEventU3Ek__BackingField_1; }
	inline ComputeEventBase_t2120293193 ** get_address_of_U3CEventU3Ek__BackingField_1() { return &___U3CEventU3Ek__BackingField_1; }
	inline void set_U3CEventU3Ek__BackingField_1(ComputeEventBase_t2120293193 * value)
	{
		___U3CEventU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEventU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ComputeCommandStatusArgs_t2147780983, ___U3CStatusU3Ek__BackingField_2)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_2() const { return ___U3CStatusU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_2() { return &___U3CStatusU3Ek__BackingField_2; }
	inline void set_U3CStatusU3Ek__BackingField_2(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTECOMMANDSTATUSARGS_T2147780983_H
#ifndef COMPUTECONTEXTPROPERTY_T1024854822_H
#define COMPUTECONTEXTPROPERTY_T1024854822_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeContextProperty
struct  ComputeContextProperty_t1024854822  : public RuntimeObject
{
public:
	// Cloo.ComputeContextPropertyName Cloo.ComputeContextProperty::name
	int32_t ___name_0;
	// System.IntPtr Cloo.ComputeContextProperty::value
	intptr_t ___value_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ComputeContextProperty_t1024854822, ___name_0)); }
	inline int32_t get_name_0() const { return ___name_0; }
	inline int32_t* get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(int32_t value)
	{
		___name_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ComputeContextProperty_t1024854822, ___value_1)); }
	inline intptr_t get_value_1() const { return ___value_1; }
	inline intptr_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(intptr_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTECONTEXTPROPERTY_T1024854822_H
#ifndef INVALIDEVENTWAITLISTCOMPUTEEXCEPTION_T1652478454_H
#define INVALIDEVENTWAITLISTCOMPUTEEXCEPTION_T1652478454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidEventWaitListComputeException
struct  InvalidEventWaitListComputeException_t1652478454  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDEVENTWAITLISTCOMPUTEEXCEPTION_T1652478454_H
#ifndef INVALIDGLOBALOFFSETCOMPUTEEXCEPTION_T637889218_H
#define INVALIDGLOBALOFFSETCOMPUTEEXCEPTION_T637889218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidGlobalOffsetComputeException
struct  InvalidGlobalOffsetComputeException_t637889218  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDGLOBALOFFSETCOMPUTEEXCEPTION_T637889218_H
#ifndef INVALIDEVENTCOMPUTEEXCEPTION_T3815158586_H
#define INVALIDEVENTCOMPUTEEXCEPTION_T3815158586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidEventComputeException
struct  InvalidEventComputeException_t3815158586  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDEVENTCOMPUTEEXCEPTION_T3815158586_H
#ifndef INVALIDOPERATIONCOMPUTEEXCEPTION_T1009558057_H
#define INVALIDOPERATIONCOMPUTEEXCEPTION_T1009558057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidOperationComputeException
struct  InvalidOperationComputeException_t1009558057  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONCOMPUTEEXCEPTION_T1009558057_H
#ifndef GETINFODELEGATEEX_3_T3669348736_H
#define GETINFODELEGATEEX_3_T3669348736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeObject/GetInfoDelegateEx`3<Cloo.Bindings.CLProgramHandle,Cloo.Bindings.CLDeviceHandle,Cloo.ComputeProgramBuildInfo>
struct  GetInfoDelegateEx_3_t3669348736  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETINFODELEGATEEX_3_T3669348736_H
#ifndef INVALIDGLOBJECTCOMPUTEEXCEPTION_T3268435956_H
#define INVALIDGLOBJECTCOMPUTEEXCEPTION_T3268435956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidGLObjectComputeException
struct  InvalidGLObjectComputeException_t3268435956  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDGLOBJECTCOMPUTEEXCEPTION_T3268435956_H
#ifndef INVALIDWORKITEMSIZECOMPUTEEXCEPTION_T3193750300_H
#define INVALIDWORKITEMSIZECOMPUTEEXCEPTION_T3193750300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidWorkItemSizeComputeException
struct  InvalidWorkItemSizeComputeException_t3193750300  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDWORKITEMSIZECOMPUTEEXCEPTION_T3193750300_H
#ifndef INVALIDWORKGROUPSIZECOMPUTEEXCEPTION_T2659536362_H
#define INVALIDWORKGROUPSIZECOMPUTEEXCEPTION_T2659536362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidWorkGroupSizeComputeException
struct  InvalidWorkGroupSizeComputeException_t2659536362  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDWORKGROUPSIZECOMPUTEEXCEPTION_T2659536362_H
#ifndef INVALIDWORKDIMENSIONSCOMPUTEEXCEPTION_T3766439885_H
#define INVALIDWORKDIMENSIONSCOMPUTEEXCEPTION_T3766439885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidWorkDimensionsComputeException
struct  InvalidWorkDimensionsComputeException_t3766439885  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDWORKDIMENSIONSCOMPUTEEXCEPTION_T3766439885_H
#ifndef INVALIDKERNELARGUMENTSCOMPUTEEXCEPTION_T1122558706_H
#define INVALIDKERNELARGUMENTSCOMPUTEEXCEPTION_T1122558706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidKernelArgumentsComputeException
struct  InvalidKernelArgumentsComputeException_t1122558706  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDKERNELARGUMENTSCOMPUTEEXCEPTION_T1122558706_H
#ifndef INVALIDARGUMENTSIZECOMPUTEEXCEPTION_T126175770_H
#define INVALIDARGUMENTSIZECOMPUTEEXCEPTION_T126175770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidArgumentSizeComputeException
struct  InvalidArgumentSizeComputeException_t126175770  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDARGUMENTSIZECOMPUTEEXCEPTION_T126175770_H
#ifndef INVALIDARGUMENTVALUECOMPUTEEXCEPTION_T4274550977_H
#define INVALIDARGUMENTVALUECOMPUTEEXCEPTION_T4274550977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidArgumentValueComputeException
struct  InvalidArgumentValueComputeException_t4274550977  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDARGUMENTVALUECOMPUTEEXCEPTION_T4274550977_H
#ifndef INVALIDBUFFERSIZECOMPUTEEXCEPTION_T3765795266_H
#define INVALIDBUFFERSIZECOMPUTEEXCEPTION_T3765795266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidBufferSizeComputeException
struct  InvalidBufferSizeComputeException_t3765795266  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDBUFFERSIZECOMPUTEEXCEPTION_T3765795266_H
#ifndef GETINFODELEGATE_2_T3652029919_H
#define GETINFODELEGATE_2_T3652029919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLPlatformHandle,Cloo.ComputePlatformInfo>
struct  GetInfoDelegate_2_t3652029919  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETINFODELEGATE_2_T3652029919_H
#ifndef COMPUTESAMPLER_T3833417323_H
#define COMPUTESAMPLER_T3833417323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeSampler
struct  ComputeSampler_t3833417323  : public ComputeResource_t542138890
{
public:
	// Cloo.ComputeContext Cloo.ComputeSampler::context
	ComputeContext_t1365812911 * ___context_1;
	// Cloo.ComputeImageAddressing Cloo.ComputeSampler::addressing
	int32_t ___addressing_2;
	// Cloo.ComputeImageFiltering Cloo.ComputeSampler::filtering
	int32_t ___filtering_3;
	// System.Boolean Cloo.ComputeSampler::normalizedCoords
	bool ___normalizedCoords_4;
	// Cloo.Bindings.CLSamplerHandle Cloo.ComputeSampler::<Handle>k__BackingField
	CLSamplerHandle_t915650828  ___U3CHandleU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(ComputeSampler_t3833417323, ___context_1)); }
	inline ComputeContext_t1365812911 * get_context_1() const { return ___context_1; }
	inline ComputeContext_t1365812911 ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(ComputeContext_t1365812911 * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier((&___context_1), value);
	}

	inline static int32_t get_offset_of_addressing_2() { return static_cast<int32_t>(offsetof(ComputeSampler_t3833417323, ___addressing_2)); }
	inline int32_t get_addressing_2() const { return ___addressing_2; }
	inline int32_t* get_address_of_addressing_2() { return &___addressing_2; }
	inline void set_addressing_2(int32_t value)
	{
		___addressing_2 = value;
	}

	inline static int32_t get_offset_of_filtering_3() { return static_cast<int32_t>(offsetof(ComputeSampler_t3833417323, ___filtering_3)); }
	inline int32_t get_filtering_3() const { return ___filtering_3; }
	inline int32_t* get_address_of_filtering_3() { return &___filtering_3; }
	inline void set_filtering_3(int32_t value)
	{
		___filtering_3 = value;
	}

	inline static int32_t get_offset_of_normalizedCoords_4() { return static_cast<int32_t>(offsetof(ComputeSampler_t3833417323, ___normalizedCoords_4)); }
	inline bool get_normalizedCoords_4() const { return ___normalizedCoords_4; }
	inline bool* get_address_of_normalizedCoords_4() { return &___normalizedCoords_4; }
	inline void set_normalizedCoords_4(bool value)
	{
		___normalizedCoords_4 = value;
	}

	inline static int32_t get_offset_of_U3CHandleU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ComputeSampler_t3833417323, ___U3CHandleU3Ek__BackingField_5)); }
	inline CLSamplerHandle_t915650828  get_U3CHandleU3Ek__BackingField_5() const { return ___U3CHandleU3Ek__BackingField_5; }
	inline CLSamplerHandle_t915650828 * get_address_of_U3CHandleU3Ek__BackingField_5() { return &___U3CHandleU3Ek__BackingField_5; }
	inline void set_U3CHandleU3Ek__BackingField_5(CLSamplerHandle_t915650828  value)
	{
		___U3CHandleU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTESAMPLER_T3833417323_H
#ifndef COMPUTEPROGRAM_T346198837_H
#define COMPUTEPROGRAM_T346198837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeProgram
struct  ComputeProgram_t346198837  : public ComputeResource_t542138890
{
public:
	// Cloo.ComputeContext Cloo.ComputeProgram::context
	ComputeContext_t1365812911 * ___context_1;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Cloo.ComputeDevice> Cloo.ComputeProgram::devices
	ReadOnlyCollection_1_t1000789277 * ___devices_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Cloo.ComputeProgram::source
	ReadOnlyCollection_1_t3060026976 * ___source_3;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]> Cloo.ComputeProgram::binaries
	ReadOnlyCollection_1_t1034256648 * ___binaries_4;
	// System.String Cloo.ComputeProgram::buildOptions
	String_t* ___buildOptions_5;
	// Cloo.Bindings.ComputeProgramBuildNotifier Cloo.ComputeProgram::buildNotify
	ComputeProgramBuildNotifier_t317311244 * ___buildNotify_6;
	// Cloo.Bindings.CLProgramHandle Cloo.ComputeProgram::<Handle>k__BackingField
	CLProgramHandle_t2486937744  ___U3CHandleU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(ComputeProgram_t346198837, ___context_1)); }
	inline ComputeContext_t1365812911 * get_context_1() const { return ___context_1; }
	inline ComputeContext_t1365812911 ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(ComputeContext_t1365812911 * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier((&___context_1), value);
	}

	inline static int32_t get_offset_of_devices_2() { return static_cast<int32_t>(offsetof(ComputeProgram_t346198837, ___devices_2)); }
	inline ReadOnlyCollection_1_t1000789277 * get_devices_2() const { return ___devices_2; }
	inline ReadOnlyCollection_1_t1000789277 ** get_address_of_devices_2() { return &___devices_2; }
	inline void set_devices_2(ReadOnlyCollection_1_t1000789277 * value)
	{
		___devices_2 = value;
		Il2CppCodeGenWriteBarrier((&___devices_2), value);
	}

	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(ComputeProgram_t346198837, ___source_3)); }
	inline ReadOnlyCollection_1_t3060026976 * get_source_3() const { return ___source_3; }
	inline ReadOnlyCollection_1_t3060026976 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ReadOnlyCollection_1_t3060026976 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((&___source_3), value);
	}

	inline static int32_t get_offset_of_binaries_4() { return static_cast<int32_t>(offsetof(ComputeProgram_t346198837, ___binaries_4)); }
	inline ReadOnlyCollection_1_t1034256648 * get_binaries_4() const { return ___binaries_4; }
	inline ReadOnlyCollection_1_t1034256648 ** get_address_of_binaries_4() { return &___binaries_4; }
	inline void set_binaries_4(ReadOnlyCollection_1_t1034256648 * value)
	{
		___binaries_4 = value;
		Il2CppCodeGenWriteBarrier((&___binaries_4), value);
	}

	inline static int32_t get_offset_of_buildOptions_5() { return static_cast<int32_t>(offsetof(ComputeProgram_t346198837, ___buildOptions_5)); }
	inline String_t* get_buildOptions_5() const { return ___buildOptions_5; }
	inline String_t** get_address_of_buildOptions_5() { return &___buildOptions_5; }
	inline void set_buildOptions_5(String_t* value)
	{
		___buildOptions_5 = value;
		Il2CppCodeGenWriteBarrier((&___buildOptions_5), value);
	}

	inline static int32_t get_offset_of_buildNotify_6() { return static_cast<int32_t>(offsetof(ComputeProgram_t346198837, ___buildNotify_6)); }
	inline ComputeProgramBuildNotifier_t317311244 * get_buildNotify_6() const { return ___buildNotify_6; }
	inline ComputeProgramBuildNotifier_t317311244 ** get_address_of_buildNotify_6() { return &___buildNotify_6; }
	inline void set_buildNotify_6(ComputeProgramBuildNotifier_t317311244 * value)
	{
		___buildNotify_6 = value;
		Il2CppCodeGenWriteBarrier((&___buildNotify_6), value);
	}

	inline static int32_t get_offset_of_U3CHandleU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ComputeProgram_t346198837, ___U3CHandleU3Ek__BackingField_7)); }
	inline CLProgramHandle_t2486937744  get_U3CHandleU3Ek__BackingField_7() const { return ___U3CHandleU3Ek__BackingField_7; }
	inline CLProgramHandle_t2486937744 * get_address_of_U3CHandleU3Ek__BackingField_7() { return &___U3CHandleU3Ek__BackingField_7; }
	inline void set_U3CHandleU3Ek__BackingField_7(CLProgramHandle_t2486937744  value)
	{
		___U3CHandleU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTEPROGRAM_T346198837_H
#ifndef COMPUTECONTEXTNOTIFIER_T2458212493_H
#define COMPUTECONTEXTNOTIFIER_T2458212493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.Bindings.ComputeContextNotifier
struct  ComputeContextNotifier_t2458212493  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTECONTEXTNOTIFIER_T2458212493_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef GETINFODELEGATE_2_T3751609436_H
#define GETINFODELEGATE_2_T3751609436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLMemoryHandle,Cloo.ComputeMemoryInfo>
struct  GetInfoDelegate_2_t3751609436  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETINFODELEGATE_2_T3751609436_H
#ifndef INVALIDMIPLEVELCOMPUTEEXCEPTION_T2097497037_H
#define INVALIDMIPLEVELCOMPUTEEXCEPTION_T2097497037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidMipLevelComputeException
struct  InvalidMipLevelComputeException_t2097497037  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDMIPLEVELCOMPUTEEXCEPTION_T2097497037_H
#ifndef BUILDPROGRAMFAILURECOMPUTEEXCEPTION_T2506631677_H
#define BUILDPROGRAMFAILURECOMPUTEEXCEPTION_T2506631677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.BuildProgramFailureComputeException
struct  BuildProgramFailureComputeException_t2506631677  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILDPROGRAMFAILURECOMPUTEEXCEPTION_T2506631677_H
#ifndef COMPUTEMEMORY_T2270500267_H
#define COMPUTEMEMORY_T2270500267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeMemory
struct  ComputeMemory_t2270500267  : public ComputeResource_t542138890
{
public:
	// Cloo.ComputeContext Cloo.ComputeMemory::context
	ComputeContext_t1365812911 * ___context_1;
	// Cloo.ComputeMemoryFlags Cloo.ComputeMemory::flags
	int64_t ___flags_2;
	// Cloo.Bindings.CLMemoryHandle Cloo.ComputeMemory::<Handle>k__BackingField
	CLMemoryHandle_t2389804491  ___U3CHandleU3Ek__BackingField_3;
	// System.Int64 Cloo.ComputeMemory::<Size>k__BackingField
	int64_t ___U3CSizeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(ComputeMemory_t2270500267, ___context_1)); }
	inline ComputeContext_t1365812911 * get_context_1() const { return ___context_1; }
	inline ComputeContext_t1365812911 ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(ComputeContext_t1365812911 * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier((&___context_1), value);
	}

	inline static int32_t get_offset_of_flags_2() { return static_cast<int32_t>(offsetof(ComputeMemory_t2270500267, ___flags_2)); }
	inline int64_t get_flags_2() const { return ___flags_2; }
	inline int64_t* get_address_of_flags_2() { return &___flags_2; }
	inline void set_flags_2(int64_t value)
	{
		___flags_2 = value;
	}

	inline static int32_t get_offset_of_U3CHandleU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ComputeMemory_t2270500267, ___U3CHandleU3Ek__BackingField_3)); }
	inline CLMemoryHandle_t2389804491  get_U3CHandleU3Ek__BackingField_3() const { return ___U3CHandleU3Ek__BackingField_3; }
	inline CLMemoryHandle_t2389804491 * get_address_of_U3CHandleU3Ek__BackingField_3() { return &___U3CHandleU3Ek__BackingField_3; }
	inline void set_U3CHandleU3Ek__BackingField_3(CLMemoryHandle_t2389804491  value)
	{
		___U3CHandleU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CSizeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ComputeMemory_t2270500267, ___U3CSizeU3Ek__BackingField_4)); }
	inline int64_t get_U3CSizeU3Ek__BackingField_4() const { return ___U3CSizeU3Ek__BackingField_4; }
	inline int64_t* get_address_of_U3CSizeU3Ek__BackingField_4() { return &___U3CSizeU3Ek__BackingField_4; }
	inline void set_U3CSizeU3Ek__BackingField_4(int64_t value)
	{
		___U3CSizeU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTEMEMORY_T2270500267_H
#ifndef COMPUTEPROGRAMBUILDNOTIFIER_T317311244_H
#define COMPUTEPROGRAMBUILDNOTIFIER_T317311244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.Bindings.ComputeProgramBuildNotifier
struct  ComputeProgramBuildNotifier_t317311244  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTEPROGRAMBUILDNOTIFIER_T317311244_H
#ifndef COMPUTEEVENTCALLBACK_T888729672_H
#define COMPUTEEVENTCALLBACK_T888729672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.Bindings.ComputeEventCallback
struct  ComputeEventCallback_t888729672  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTEEVENTCALLBACK_T888729672_H
#ifndef GETINFODELEGATE_2_T3255322841_H
#define GETINFODELEGATE_2_T3255322841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLMemoryHandle,Cloo.ComputeImageInfo>
struct  GetInfoDelegate_2_t3255322841  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETINFODELEGATE_2_T3255322841_H
#ifndef INVALIDARGUMENTINDEXCOMPUTEEXCEPTION_T2375232228_H
#define INVALIDARGUMENTINDEXCOMPUTEEXCEPTION_T2375232228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidArgumentIndexComputeException
struct  InvalidArgumentIndexComputeException_t2375232228  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDARGUMENTINDEXCOMPUTEEXCEPTION_T2375232228_H
#ifndef MEMORYOBJECTALLOCATIONFAILURECOMPUTEEXCEPTION_T1033166821_H
#define MEMORYOBJECTALLOCATIONFAILURECOMPUTEEXCEPTION_T1033166821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.MemoryObjectAllocationFailureComputeException
struct  MemoryObjectAllocationFailureComputeException_t1033166821  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYOBJECTALLOCATIONFAILURECOMPUTEEXCEPTION_T1033166821_H
#ifndef OUTOFRESOURCESCOMPUTEEXCEPTION_T3780973734_H
#define OUTOFRESOURCESCOMPUTEEXCEPTION_T3780973734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.OutOfResourcesComputeException
struct  OutOfResourcesComputeException_t3780973734  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTOFRESOURCESCOMPUTEEXCEPTION_T3780973734_H
#ifndef OUTOFHOSTMEMORYCOMPUTEEXCEPTION_T2750237157_H
#define OUTOFHOSTMEMORYCOMPUTEEXCEPTION_T2750237157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.OutOfHostMemoryComputeException
struct  OutOfHostMemoryComputeException_t2750237157  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTOFHOSTMEMORYCOMPUTEEXCEPTION_T2750237157_H
#ifndef PROFILINGINFONOTAVAILABLECOMPUTEEXCEPTION_T3456066642_H
#define PROFILINGINFONOTAVAILABLECOMPUTEEXCEPTION_T3456066642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ProfilingInfoNotAvailableComputeException
struct  ProfilingInfoNotAvailableComputeException_t3456066642  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROFILINGINFONOTAVAILABLECOMPUTEEXCEPTION_T3456066642_H
#ifndef MEMORYCOPYOVERLAPCOMPUTEEXCEPTION_T861502170_H
#define MEMORYCOPYOVERLAPCOMPUTEEXCEPTION_T861502170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.MemoryCopyOverlapComputeException
struct  MemoryCopyOverlapComputeException_t861502170  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYCOPYOVERLAPCOMPUTEEXCEPTION_T861502170_H
#ifndef IMAGEFORMATMISMATCHCOMPUTEEXCEPTION_T110044459_H
#define IMAGEFORMATMISMATCHCOMPUTEEXCEPTION_T110044459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ImageFormatMismatchComputeException
struct  ImageFormatMismatchComputeException_t110044459  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGEFORMATMISMATCHCOMPUTEEXCEPTION_T110044459_H
#ifndef IMAGEFORMATNOTSUPPORTEDCOMPUTEEXCEPTION_T824198691_H
#define IMAGEFORMATNOTSUPPORTEDCOMPUTEEXCEPTION_T824198691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ImageFormatNotSupportedComputeException
struct  ImageFormatNotSupportedComputeException_t824198691  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGEFORMATNOTSUPPORTEDCOMPUTEEXCEPTION_T824198691_H
#ifndef MAPFAILURECOMPUTEEXCEPTION_T609039928_H
#define MAPFAILURECOMPUTEEXCEPTION_T609039928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.MapFailureComputeException
struct  MapFailureComputeException_t609039928  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPFAILURECOMPUTEEXCEPTION_T609039928_H
#ifndef DEVICENOTAVAILABLECOMPUTEEXCEPTION_T1010603520_H
#define DEVICENOTAVAILABLECOMPUTEEXCEPTION_T1010603520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.DeviceNotAvailableComputeException
struct  DeviceNotAvailableComputeException_t1010603520  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICENOTAVAILABLECOMPUTEEXCEPTION_T1010603520_H
#ifndef COMPUTECOMMANDSTATUSCHANGED_T248714690_H
#define COMPUTECOMMANDSTATUSCHANGED_T248714690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeCommandStatusChanged
struct  ComputeCommandStatusChanged_t248714690  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTECOMMANDSTATUSCHANGED_T248714690_H
#ifndef COMPUTEEVENTBASE_T2120293193_H
#define COMPUTEEVENTBASE_T2120293193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeEventBase
struct  ComputeEventBase_t2120293193  : public ComputeResource_t542138890
{
public:
	// Cloo.ComputeCommandStatusChanged Cloo.ComputeEventBase::aborted
	ComputeCommandStatusChanged_t248714690 * ___aborted_1;
	// Cloo.ComputeCommandStatusChanged Cloo.ComputeEventBase::completed
	ComputeCommandStatusChanged_t248714690 * ___completed_2;
	// Cloo.ComputeCommandStatusArgs Cloo.ComputeEventBase::status
	ComputeCommandStatusArgs_t2147780983 * ___status_3;
	// Cloo.Bindings.ComputeEventCallback Cloo.ComputeEventBase::statusNotify
	ComputeEventCallback_t888729672 * ___statusNotify_4;
	// Cloo.Bindings.CLEventHandle Cloo.ComputeEventBase::<Handle>k__BackingField
	CLEventHandle_t1689096655  ___U3CHandleU3Ek__BackingField_5;
	// Cloo.ComputeContext Cloo.ComputeEventBase::<Context>k__BackingField
	ComputeContext_t1365812911 * ___U3CContextU3Ek__BackingField_6;
	// Cloo.ComputeCommandType Cloo.ComputeEventBase::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_aborted_1() { return static_cast<int32_t>(offsetof(ComputeEventBase_t2120293193, ___aborted_1)); }
	inline ComputeCommandStatusChanged_t248714690 * get_aborted_1() const { return ___aborted_1; }
	inline ComputeCommandStatusChanged_t248714690 ** get_address_of_aborted_1() { return &___aborted_1; }
	inline void set_aborted_1(ComputeCommandStatusChanged_t248714690 * value)
	{
		___aborted_1 = value;
		Il2CppCodeGenWriteBarrier((&___aborted_1), value);
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(ComputeEventBase_t2120293193, ___completed_2)); }
	inline ComputeCommandStatusChanged_t248714690 * get_completed_2() const { return ___completed_2; }
	inline ComputeCommandStatusChanged_t248714690 ** get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(ComputeCommandStatusChanged_t248714690 * value)
	{
		___completed_2 = value;
		Il2CppCodeGenWriteBarrier((&___completed_2), value);
	}

	inline static int32_t get_offset_of_status_3() { return static_cast<int32_t>(offsetof(ComputeEventBase_t2120293193, ___status_3)); }
	inline ComputeCommandStatusArgs_t2147780983 * get_status_3() const { return ___status_3; }
	inline ComputeCommandStatusArgs_t2147780983 ** get_address_of_status_3() { return &___status_3; }
	inline void set_status_3(ComputeCommandStatusArgs_t2147780983 * value)
	{
		___status_3 = value;
		Il2CppCodeGenWriteBarrier((&___status_3), value);
	}

	inline static int32_t get_offset_of_statusNotify_4() { return static_cast<int32_t>(offsetof(ComputeEventBase_t2120293193, ___statusNotify_4)); }
	inline ComputeEventCallback_t888729672 * get_statusNotify_4() const { return ___statusNotify_4; }
	inline ComputeEventCallback_t888729672 ** get_address_of_statusNotify_4() { return &___statusNotify_4; }
	inline void set_statusNotify_4(ComputeEventCallback_t888729672 * value)
	{
		___statusNotify_4 = value;
		Il2CppCodeGenWriteBarrier((&___statusNotify_4), value);
	}

	inline static int32_t get_offset_of_U3CHandleU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ComputeEventBase_t2120293193, ___U3CHandleU3Ek__BackingField_5)); }
	inline CLEventHandle_t1689096655  get_U3CHandleU3Ek__BackingField_5() const { return ___U3CHandleU3Ek__BackingField_5; }
	inline CLEventHandle_t1689096655 * get_address_of_U3CHandleU3Ek__BackingField_5() { return &___U3CHandleU3Ek__BackingField_5; }
	inline void set_U3CHandleU3Ek__BackingField_5(CLEventHandle_t1689096655  value)
	{
		___U3CHandleU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CContextU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ComputeEventBase_t2120293193, ___U3CContextU3Ek__BackingField_6)); }
	inline ComputeContext_t1365812911 * get_U3CContextU3Ek__BackingField_6() const { return ___U3CContextU3Ek__BackingField_6; }
	inline ComputeContext_t1365812911 ** get_address_of_U3CContextU3Ek__BackingField_6() { return &___U3CContextU3Ek__BackingField_6; }
	inline void set_U3CContextU3Ek__BackingField_6(ComputeContext_t1365812911 * value)
	{
		___U3CContextU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CContextU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ComputeEventBase_t2120293193, ___U3CTypeU3Ek__BackingField_7)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_7() const { return ___U3CTypeU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_7() { return &___U3CTypeU3Ek__BackingField_7; }
	inline void set_U3CTypeU3Ek__BackingField_7(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTEEVENTBASE_T2120293193_H
#ifndef COMPUTEKERNEL_T2923705153_H
#define COMPUTEKERNEL_T2923705153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeKernel
struct  ComputeKernel_t2923705153  : public ComputeResource_t542138890
{
public:
	// Cloo.ComputeContext Cloo.ComputeKernel::context
	ComputeContext_t1365812911 * ___context_1;
	// System.String Cloo.ComputeKernel::functionName
	String_t* ___functionName_2;
	// Cloo.ComputeProgram Cloo.ComputeKernel::program
	ComputeProgram_t346198837 * ___program_3;
	// Cloo.Bindings.CLKernelHandle Cloo.ComputeKernel::<Handle>k__BackingField
	CLKernelHandle_t2809987897  ___U3CHandleU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(ComputeKernel_t2923705153, ___context_1)); }
	inline ComputeContext_t1365812911 * get_context_1() const { return ___context_1; }
	inline ComputeContext_t1365812911 ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(ComputeContext_t1365812911 * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier((&___context_1), value);
	}

	inline static int32_t get_offset_of_functionName_2() { return static_cast<int32_t>(offsetof(ComputeKernel_t2923705153, ___functionName_2)); }
	inline String_t* get_functionName_2() const { return ___functionName_2; }
	inline String_t** get_address_of_functionName_2() { return &___functionName_2; }
	inline void set_functionName_2(String_t* value)
	{
		___functionName_2 = value;
		Il2CppCodeGenWriteBarrier((&___functionName_2), value);
	}

	inline static int32_t get_offset_of_program_3() { return static_cast<int32_t>(offsetof(ComputeKernel_t2923705153, ___program_3)); }
	inline ComputeProgram_t346198837 * get_program_3() const { return ___program_3; }
	inline ComputeProgram_t346198837 ** get_address_of_program_3() { return &___program_3; }
	inline void set_program_3(ComputeProgram_t346198837 * value)
	{
		___program_3 = value;
		Il2CppCodeGenWriteBarrier((&___program_3), value);
	}

	inline static int32_t get_offset_of_U3CHandleU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ComputeKernel_t2923705153, ___U3CHandleU3Ek__BackingField_4)); }
	inline CLKernelHandle_t2809987897  get_U3CHandleU3Ek__BackingField_4() const { return ___U3CHandleU3Ek__BackingField_4; }
	inline CLKernelHandle_t2809987897 * get_address_of_U3CHandleU3Ek__BackingField_4() { return &___U3CHandleU3Ek__BackingField_4; }
	inline void set_U3CHandleU3Ek__BackingField_4(CLKernelHandle_t2809987897  value)
	{
		___U3CHandleU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTEKERNEL_T2923705153_H
#ifndef GETINFODELEGATE_2_T3735710902_H
#define GETINFODELEGATE_2_T3735710902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLDeviceHandle,Cloo.ComputeDeviceInfo>
struct  GetInfoDelegate_2_t3735710902  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETINFODELEGATE_2_T3735710902_H
#ifndef COMPUTECONTEXT_T1365812911_H
#define COMPUTECONTEXT_T1365812911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeContext
struct  ComputeContext_t1365812911  : public ComputeResource_t542138890
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Cloo.ComputeDevice> Cloo.ComputeContext::devices
	ReadOnlyCollection_1_t1000789277 * ___devices_1;
	// Cloo.ComputePlatform Cloo.ComputeContext::platform
	ComputePlatform_t3600789258 * ___platform_2;
	// Cloo.ComputeContextPropertyList Cloo.ComputeContext::properties
	ComputeContextPropertyList_t3830085294 * ___properties_3;
	// Cloo.Bindings.ComputeContextNotifier Cloo.ComputeContext::callback
	ComputeContextNotifier_t2458212493 * ___callback_4;
	// Cloo.Bindings.CLContextHandle Cloo.ComputeContext::<Handle>k__BackingField
	CLContextHandle_t447015429  ___U3CHandleU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_devices_1() { return static_cast<int32_t>(offsetof(ComputeContext_t1365812911, ___devices_1)); }
	inline ReadOnlyCollection_1_t1000789277 * get_devices_1() const { return ___devices_1; }
	inline ReadOnlyCollection_1_t1000789277 ** get_address_of_devices_1() { return &___devices_1; }
	inline void set_devices_1(ReadOnlyCollection_1_t1000789277 * value)
	{
		___devices_1 = value;
		Il2CppCodeGenWriteBarrier((&___devices_1), value);
	}

	inline static int32_t get_offset_of_platform_2() { return static_cast<int32_t>(offsetof(ComputeContext_t1365812911, ___platform_2)); }
	inline ComputePlatform_t3600789258 * get_platform_2() const { return ___platform_2; }
	inline ComputePlatform_t3600789258 ** get_address_of_platform_2() { return &___platform_2; }
	inline void set_platform_2(ComputePlatform_t3600789258 * value)
	{
		___platform_2 = value;
		Il2CppCodeGenWriteBarrier((&___platform_2), value);
	}

	inline static int32_t get_offset_of_properties_3() { return static_cast<int32_t>(offsetof(ComputeContext_t1365812911, ___properties_3)); }
	inline ComputeContextPropertyList_t3830085294 * get_properties_3() const { return ___properties_3; }
	inline ComputeContextPropertyList_t3830085294 ** get_address_of_properties_3() { return &___properties_3; }
	inline void set_properties_3(ComputeContextPropertyList_t3830085294 * value)
	{
		___properties_3 = value;
		Il2CppCodeGenWriteBarrier((&___properties_3), value);
	}

	inline static int32_t get_offset_of_callback_4() { return static_cast<int32_t>(offsetof(ComputeContext_t1365812911, ___callback_4)); }
	inline ComputeContextNotifier_t2458212493 * get_callback_4() const { return ___callback_4; }
	inline ComputeContextNotifier_t2458212493 ** get_address_of_callback_4() { return &___callback_4; }
	inline void set_callback_4(ComputeContextNotifier_t2458212493 * value)
	{
		___callback_4 = value;
		Il2CppCodeGenWriteBarrier((&___callback_4), value);
	}

	inline static int32_t get_offset_of_U3CHandleU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ComputeContext_t1365812911, ___U3CHandleU3Ek__BackingField_5)); }
	inline CLContextHandle_t447015429  get_U3CHandleU3Ek__BackingField_5() const { return ___U3CHandleU3Ek__BackingField_5; }
	inline CLContextHandle_t447015429 * get_address_of_U3CHandleU3Ek__BackingField_5() { return &___U3CHandleU3Ek__BackingField_5; }
	inline void set_U3CHandleU3Ek__BackingField_5(CLContextHandle_t447015429  value)
	{
		___U3CHandleU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTECONTEXT_T1365812911_H
#ifndef COMPUTECOMMANDQUEUE_T3979026963_H
#define COMPUTECOMMANDQUEUE_T3979026963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeCommandQueue
struct  ComputeCommandQueue_t3979026963  : public ComputeResource_t542138890
{
public:
	// Cloo.ComputeContext Cloo.ComputeCommandQueue::context
	ComputeContext_t1365812911 * ___context_1;
	// Cloo.ComputeDevice Cloo.ComputeCommandQueue::device
	ComputeDevice_t4083180286 * ___device_2;
	// System.Boolean Cloo.ComputeCommandQueue::outOfOrderExec
	bool ___outOfOrderExec_3;
	// System.Boolean Cloo.ComputeCommandQueue::profiling
	bool ___profiling_4;
	// System.Collections.Generic.IList`1<Cloo.ComputeEventBase> Cloo.ComputeCommandQueue::Events
	RuntimeObject* ___Events_5;
	// Cloo.Bindings.CLCommandQueueHandle Cloo.ComputeCommandQueue::<Handle>k__BackingField
	CLCommandQueueHandle_t218408696  ___U3CHandleU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(ComputeCommandQueue_t3979026963, ___context_1)); }
	inline ComputeContext_t1365812911 * get_context_1() const { return ___context_1; }
	inline ComputeContext_t1365812911 ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(ComputeContext_t1365812911 * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier((&___context_1), value);
	}

	inline static int32_t get_offset_of_device_2() { return static_cast<int32_t>(offsetof(ComputeCommandQueue_t3979026963, ___device_2)); }
	inline ComputeDevice_t4083180286 * get_device_2() const { return ___device_2; }
	inline ComputeDevice_t4083180286 ** get_address_of_device_2() { return &___device_2; }
	inline void set_device_2(ComputeDevice_t4083180286 * value)
	{
		___device_2 = value;
		Il2CppCodeGenWriteBarrier((&___device_2), value);
	}

	inline static int32_t get_offset_of_outOfOrderExec_3() { return static_cast<int32_t>(offsetof(ComputeCommandQueue_t3979026963, ___outOfOrderExec_3)); }
	inline bool get_outOfOrderExec_3() const { return ___outOfOrderExec_3; }
	inline bool* get_address_of_outOfOrderExec_3() { return &___outOfOrderExec_3; }
	inline void set_outOfOrderExec_3(bool value)
	{
		___outOfOrderExec_3 = value;
	}

	inline static int32_t get_offset_of_profiling_4() { return static_cast<int32_t>(offsetof(ComputeCommandQueue_t3979026963, ___profiling_4)); }
	inline bool get_profiling_4() const { return ___profiling_4; }
	inline bool* get_address_of_profiling_4() { return &___profiling_4; }
	inline void set_profiling_4(bool value)
	{
		___profiling_4 = value;
	}

	inline static int32_t get_offset_of_Events_5() { return static_cast<int32_t>(offsetof(ComputeCommandQueue_t3979026963, ___Events_5)); }
	inline RuntimeObject* get_Events_5() const { return ___Events_5; }
	inline RuntimeObject** get_address_of_Events_5() { return &___Events_5; }
	inline void set_Events_5(RuntimeObject* value)
	{
		___Events_5 = value;
		Il2CppCodeGenWriteBarrier((&___Events_5), value);
	}

	inline static int32_t get_offset_of_U3CHandleU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ComputeCommandQueue_t3979026963, ___U3CHandleU3Ek__BackingField_6)); }
	inline CLCommandQueueHandle_t218408696  get_U3CHandleU3Ek__BackingField_6() const { return ___U3CHandleU3Ek__BackingField_6; }
	inline CLCommandQueueHandle_t218408696 * get_address_of_U3CHandleU3Ek__BackingField_6() { return &___U3CHandleU3Ek__BackingField_6; }
	inline void set_U3CHandleU3Ek__BackingField_6(CLCommandQueueHandle_t218408696  value)
	{
		___U3CHandleU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTECOMMANDQUEUE_T3979026963_H
#ifndef GETINFODELEGATE_2_T3807037534_H
#define GETINFODELEGATE_2_T3807037534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLEventHandle,Cloo.ComputeEventInfo>
struct  GetInfoDelegate_2_t3807037534  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETINFODELEGATE_2_T3807037534_H
#ifndef COMPILERNOTAVAILABLECOMPUTEEXCEPTION_T3264770924_H
#define COMPILERNOTAVAILABLECOMPUTEEXCEPTION_T3264770924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.CompilerNotAvailableComputeException
struct  CompilerNotAvailableComputeException_t3264770924  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILERNOTAVAILABLECOMPUTEEXCEPTION_T3264770924_H
#ifndef DEVICENOTFOUNDCOMPUTEEXCEPTION_T2803661270_H
#define DEVICENOTFOUNDCOMPUTEEXCEPTION_T2803661270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.DeviceNotFoundComputeException
struct  DeviceNotFoundComputeException_t2803661270  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICENOTFOUNDCOMPUTEEXCEPTION_T2803661270_H
#ifndef INVALIDVALUECOMPUTEEXCEPTION_T1884546994_H
#define INVALIDVALUECOMPUTEEXCEPTION_T1884546994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidValueComputeException
struct  InvalidValueComputeException_t1884546994  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDVALUECOMPUTEEXCEPTION_T1884546994_H
#ifndef INVALIDIMAGEFORMATDESCRIPTORCOMPUTEEXCEPTION_T1307689117_H
#define INVALIDIMAGEFORMATDESCRIPTORCOMPUTEEXCEPTION_T1307689117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidImageFormatDescriptorComputeException
struct  InvalidImageFormatDescriptorComputeException_t1307689117  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDIMAGEFORMATDESCRIPTORCOMPUTEEXCEPTION_T1307689117_H
#ifndef INVALIDIMAGESIZECOMPUTEEXCEPTION_T811168388_H
#define INVALIDIMAGESIZECOMPUTEEXCEPTION_T811168388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidImageSizeComputeException
struct  InvalidImageSizeComputeException_t811168388  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDIMAGESIZECOMPUTEEXCEPTION_T811168388_H
#ifndef INVALIDSAMPLERCOMPUTEEXCEPTION_T500922945_H
#define INVALIDSAMPLERCOMPUTEEXCEPTION_T500922945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidSamplerComputeException
struct  InvalidSamplerComputeException_t500922945  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDSAMPLERCOMPUTEEXCEPTION_T500922945_H
#ifndef INVALIDBINARYCOMPUTEEXCEPTION_T3216170158_H
#define INVALIDBINARYCOMPUTEEXCEPTION_T3216170158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidBinaryComputeException
struct  InvalidBinaryComputeException_t3216170158  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDBINARYCOMPUTEEXCEPTION_T3216170158_H
#ifndef GETINFODELEGATE_2_T1033342548_H
#define GETINFODELEGATE_2_T1033342548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLContextHandle,Cloo.ComputeContextInfo>
struct  GetInfoDelegate_2_t1033342548  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETINFODELEGATE_2_T1033342548_H
#ifndef INVALIDPROGRAMCOMPUTEEXCEPTION_T1992991535_H
#define INVALIDPROGRAMCOMPUTEEXCEPTION_T1992991535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidProgramComputeException
struct  InvalidProgramComputeException_t1992991535  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDPROGRAMCOMPUTEEXCEPTION_T1992991535_H
#ifndef INVALIDPROGRAMEXECUTABLECOMPUTEEXCEPTION_T315365513_H
#define INVALIDPROGRAMEXECUTABLECOMPUTEEXCEPTION_T315365513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidProgramExecutableComputeException
struct  InvalidProgramExecutableComputeException_t315365513  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDPROGRAMEXECUTABLECOMPUTEEXCEPTION_T315365513_H
#ifndef INVALIDKERNELNAMECOMPUTEEXCEPTION_T1206973794_H
#define INVALIDKERNELNAMECOMPUTEEXCEPTION_T1206973794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidKernelNameComputeException
struct  InvalidKernelNameComputeException_t1206973794  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDKERNELNAMECOMPUTEEXCEPTION_T1206973794_H
#ifndef INVALIDKERNELDEFINITIONCOMPUTEEXCEPTION_T1910702029_H
#define INVALIDKERNELDEFINITIONCOMPUTEEXCEPTION_T1910702029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidKernelDefinitionComputeException
struct  InvalidKernelDefinitionComputeException_t1910702029  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDKERNELDEFINITIONCOMPUTEEXCEPTION_T1910702029_H
#ifndef INVALIDKERNELCOMPUTEEXCEPTION_T926678227_H
#define INVALIDKERNELCOMPUTEEXCEPTION_T926678227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidKernelComputeException
struct  InvalidKernelComputeException_t926678227  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDKERNELCOMPUTEEXCEPTION_T926678227_H
#ifndef INVALIDMEMORYOBJECTCOMPUTEEXCEPTION_T1584946539_H
#define INVALIDMEMORYOBJECTCOMPUTEEXCEPTION_T1584946539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidMemoryObjectComputeException
struct  InvalidMemoryObjectComputeException_t1584946539  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDMEMORYOBJECTCOMPUTEEXCEPTION_T1584946539_H
#ifndef INVALIDDEVICETYPECOMPUTEEXCEPTION_T3015842128_H
#define INVALIDDEVICETYPECOMPUTEEXCEPTION_T3015842128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidDeviceTypeComputeException
struct  InvalidDeviceTypeComputeException_t3015842128  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDDEVICETYPECOMPUTEEXCEPTION_T3015842128_H
#ifndef INVALIDPLATFORMCOMPUTEEXCEPTION_T1484941494_H
#define INVALIDPLATFORMCOMPUTEEXCEPTION_T1484941494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidPlatformComputeException
struct  InvalidPlatformComputeException_t1484941494  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDPLATFORMCOMPUTEEXCEPTION_T1484941494_H
#ifndef INVALIDDEVICECOMPUTEEXCEPTION_T696285512_H
#define INVALIDDEVICECOMPUTEEXCEPTION_T696285512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidDeviceComputeException
struct  InvalidDeviceComputeException_t696285512  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDDEVICECOMPUTEEXCEPTION_T696285512_H
#ifndef INVALIDCONTEXTCOMPUTEEXCEPTION_T2857043932_H
#define INVALIDCONTEXTCOMPUTEEXCEPTION_T2857043932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidContextComputeException
struct  InvalidContextComputeException_t2857043932  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCONTEXTCOMPUTEEXCEPTION_T2857043932_H
#ifndef INVALIDHOSTPOINTERCOMPUTEEXCEPTION_T3920245830_H
#define INVALIDHOSTPOINTERCOMPUTEEXCEPTION_T3920245830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidHostPointerComputeException
struct  InvalidHostPointerComputeException_t3920245830  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDHOSTPOINTERCOMPUTEEXCEPTION_T3920245830_H
#ifndef INVALIDCOMMANDQUEUECOMPUTEEXCEPTION_T3760823054_H
#define INVALIDCOMMANDQUEUECOMPUTEEXCEPTION_T3760823054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidCommandQueueComputeException
struct  InvalidCommandQueueComputeException_t3760823054  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCOMMANDQUEUECOMPUTEEXCEPTION_T3760823054_H
#ifndef INVALIDBUILDOPTIONSCOMPUTEEXCEPTION_T696878590_H
#define INVALIDBUILDOPTIONSCOMPUTEEXCEPTION_T696878590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidBuildOptionsComputeException
struct  InvalidBuildOptionsComputeException_t696878590  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDBUILDOPTIONSCOMPUTEEXCEPTION_T696878590_H
#ifndef INVALIDCOMMANDQUEUEFLAGSCOMPUTEEXCEPTION_T1130645332_H
#define INVALIDCOMMANDQUEUEFLAGSCOMPUTEEXCEPTION_T1130645332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.InvalidCommandQueueFlagsComputeException
struct  InvalidCommandQueueFlagsComputeException_t1130645332  : public ComputeException_t3978051080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCOMMANDQUEUEFLAGSCOMPUTEEXCEPTION_T1130645332_H
#ifndef COMPUTEEVENT_T249674601_H
#define COMPUTEEVENT_T249674601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeEvent
struct  ComputeEvent_t249674601  : public ComputeEventBase_t2120293193
{
public:
	// System.Runtime.InteropServices.GCHandle Cloo.ComputeEvent::gcHandle
	GCHandle_t3351438187  ___gcHandle_8;
	// Cloo.ComputeCommandQueue Cloo.ComputeEvent::<CommandQueue>k__BackingField
	ComputeCommandQueue_t3979026963 * ___U3CCommandQueueU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_gcHandle_8() { return static_cast<int32_t>(offsetof(ComputeEvent_t249674601, ___gcHandle_8)); }
	inline GCHandle_t3351438187  get_gcHandle_8() const { return ___gcHandle_8; }
	inline GCHandle_t3351438187 * get_address_of_gcHandle_8() { return &___gcHandle_8; }
	inline void set_gcHandle_8(GCHandle_t3351438187  value)
	{
		___gcHandle_8 = value;
	}

	inline static int32_t get_offset_of_U3CCommandQueueU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ComputeEvent_t249674601, ___U3CCommandQueueU3Ek__BackingField_9)); }
	inline ComputeCommandQueue_t3979026963 * get_U3CCommandQueueU3Ek__BackingField_9() const { return ___U3CCommandQueueU3Ek__BackingField_9; }
	inline ComputeCommandQueue_t3979026963 ** get_address_of_U3CCommandQueueU3Ek__BackingField_9() { return &___U3CCommandQueueU3Ek__BackingField_9; }
	inline void set_U3CCommandQueueU3Ek__BackingField_9(ComputeCommandQueue_t3979026963 * value)
	{
		___U3CCommandQueueU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCommandQueueU3Ek__BackingField_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTEEVENT_T249674601_H
#ifndef COMPUTEIMAGE_T2206698626_H
#define COMPUTEIMAGE_T2206698626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeImage
struct  ComputeImage_t2206698626  : public ComputeMemory_t2270500267
{
public:
	// System.Int32 Cloo.ComputeImage::<Depth>k__BackingField
	int32_t ___U3CDepthU3Ek__BackingField_5;
	// System.Int32 Cloo.ComputeImage::<ElementSize>k__BackingField
	int32_t ___U3CElementSizeU3Ek__BackingField_6;
	// System.Int32 Cloo.ComputeImage::<Height>k__BackingField
	int32_t ___U3CHeightU3Ek__BackingField_7;
	// System.Int64 Cloo.ComputeImage::<RowPitch>k__BackingField
	int64_t ___U3CRowPitchU3Ek__BackingField_8;
	// System.Int64 Cloo.ComputeImage::<SlicePitch>k__BackingField
	int64_t ___U3CSlicePitchU3Ek__BackingField_9;
	// System.Int32 Cloo.ComputeImage::<Width>k__BackingField
	int32_t ___U3CWidthU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CDepthU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ComputeImage_t2206698626, ___U3CDepthU3Ek__BackingField_5)); }
	inline int32_t get_U3CDepthU3Ek__BackingField_5() const { return ___U3CDepthU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CDepthU3Ek__BackingField_5() { return &___U3CDepthU3Ek__BackingField_5; }
	inline void set_U3CDepthU3Ek__BackingField_5(int32_t value)
	{
		___U3CDepthU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CElementSizeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ComputeImage_t2206698626, ___U3CElementSizeU3Ek__BackingField_6)); }
	inline int32_t get_U3CElementSizeU3Ek__BackingField_6() const { return ___U3CElementSizeU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CElementSizeU3Ek__BackingField_6() { return &___U3CElementSizeU3Ek__BackingField_6; }
	inline void set_U3CElementSizeU3Ek__BackingField_6(int32_t value)
	{
		___U3CElementSizeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CHeightU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ComputeImage_t2206698626, ___U3CHeightU3Ek__BackingField_7)); }
	inline int32_t get_U3CHeightU3Ek__BackingField_7() const { return ___U3CHeightU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CHeightU3Ek__BackingField_7() { return &___U3CHeightU3Ek__BackingField_7; }
	inline void set_U3CHeightU3Ek__BackingField_7(int32_t value)
	{
		___U3CHeightU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CRowPitchU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ComputeImage_t2206698626, ___U3CRowPitchU3Ek__BackingField_8)); }
	inline int64_t get_U3CRowPitchU3Ek__BackingField_8() const { return ___U3CRowPitchU3Ek__BackingField_8; }
	inline int64_t* get_address_of_U3CRowPitchU3Ek__BackingField_8() { return &___U3CRowPitchU3Ek__BackingField_8; }
	inline void set_U3CRowPitchU3Ek__BackingField_8(int64_t value)
	{
		___U3CRowPitchU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CSlicePitchU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ComputeImage_t2206698626, ___U3CSlicePitchU3Ek__BackingField_9)); }
	inline int64_t get_U3CSlicePitchU3Ek__BackingField_9() const { return ___U3CSlicePitchU3Ek__BackingField_9; }
	inline int64_t* get_address_of_U3CSlicePitchU3Ek__BackingField_9() { return &___U3CSlicePitchU3Ek__BackingField_9; }
	inline void set_U3CSlicePitchU3Ek__BackingField_9(int64_t value)
	{
		___U3CSlicePitchU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ComputeImage_t2206698626, ___U3CWidthU3Ek__BackingField_10)); }
	inline int32_t get_U3CWidthU3Ek__BackingField_10() const { return ___U3CWidthU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CWidthU3Ek__BackingField_10() { return &___U3CWidthU3Ek__BackingField_10; }
	inline void set_U3CWidthU3Ek__BackingField_10(int32_t value)
	{
		___U3CWidthU3Ek__BackingField_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTEIMAGE_T2206698626_H
#ifndef COMPUTEIMAGE3D_T234819692_H
#define COMPUTEIMAGE3D_T234819692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeImage3D
struct  ComputeImage3D_t234819692  : public ComputeImage_t2206698626
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTEIMAGE3D_T234819692_H
#ifndef COMPUTEIMAGE2D_T234885228_H
#define COMPUTEIMAGE2D_T234885228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloo.ComputeImage2D
struct  ComputeImage2D_t234885228  : public ComputeImage_t2206698626
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTEIMAGE2D_T234885228_H
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) intptr_t m_Items[1];

public:
	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
// Cloo.Bindings.CLEventHandle[]
struct CLEventHandleU5BU5D_t4276533782  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CLEventHandle_t1689096655  m_Items[1];

public:
	inline CLEventHandle_t1689096655  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CLEventHandle_t1689096655 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CLEventHandle_t1689096655  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CLEventHandle_t1689096655  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CLEventHandle_t1689096655 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CLEventHandle_t1689096655  value)
	{
		m_Items[index] = value;
	}
};
// Cloo.Bindings.CLDeviceHandle[]
struct CLDeviceHandleU5BU5D_t3725102763  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CLDeviceHandle_t1655913246  m_Items[1];

public:
	inline CLDeviceHandle_t1655913246  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CLDeviceHandle_t1655913246 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CLDeviceHandle_t1655913246  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CLDeviceHandle_t1655913246  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CLDeviceHandle_t1655913246 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CLDeviceHandle_t1655913246  value)
	{
		m_Items[index] = value;
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
// Cloo.ComputeContextProperty[]
struct ComputeContextPropertyU5BU5D_t1074107779  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ComputeContextProperty_t1024854822 * m_Items[1];

public:
	inline ComputeContextProperty_t1024854822 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ComputeContextProperty_t1024854822 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ComputeContextProperty_t1024854822 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ComputeContextProperty_t1024854822 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ComputeContextProperty_t1024854822 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ComputeContextProperty_t1024854822 * value)
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
// System.Int64[]
struct Int64U5BU5D_t2559172825  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// Cloo.ComputePlatform[]
struct ComputePlatformU5BU5D_t2938311055  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ComputePlatform_t3600789258 * m_Items[1];

public:
	inline ComputePlatform_t3600789258 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ComputePlatform_t3600789258 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ComputePlatform_t3600789258 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ComputePlatform_t3600789258 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ComputePlatform_t3600789258 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ComputePlatform_t3600789258 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Cloo.Bindings.CLPlatformHandle[]
struct CLPlatformHandleU5BU5D_t3365766632  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CLPlatformHandle_t3404269797  m_Items[1];

public:
	inline CLPlatformHandle_t3404269797  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CLPlatformHandle_t3404269797 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CLPlatformHandle_t3404269797  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CLPlatformHandle_t3404269797  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CLPlatformHandle_t3404269797 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CLPlatformHandle_t3404269797  value)
	{
		m_Items[index] = value;
	}
};
// Cloo.ComputeDevice[]
struct ComputeDeviceU5BU5D_t2787470155  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ComputeDevice_t4083180286 * m_Items[1];

public:
	inline ComputeDevice_t4083180286 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ComputeDevice_t4083180286 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ComputeDevice_t4083180286 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ComputeDevice_t4083180286 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ComputeDevice_t4083180286 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ComputeDevice_t4083180286 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLContextHandle,Cloo.ComputeContextInfo>::.ctor(System.Object,System.IntPtr)
extern "C"  void GetInfoDelegate_2__ctor_m3127054146_gshared (GetInfoDelegate_2_t1033342548 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// QueriedType[] Cloo.ComputeObject::GetArrayInfo<Cloo.Bindings.CLContextHandle,Cloo.ComputeContextInfo,Cloo.Bindings.CLDeviceHandle>(HandleType,InfoType,Cloo.ComputeObject/GetInfoDelegate`2<HandleType,InfoType>)
extern "C"  CLDeviceHandleU5BU5D_t3725102763* ComputeObject_GetArrayInfo_TisCLContextHandle_t447015429_TisComputeContextInfo_t761728730_TisCLDeviceHandle_t1655913246_m615519784_gshared (ComputeObject_t1791575355 * __this, CLContextHandle_t447015429  ___handle0, int32_t ___paramName1, GetInfoDelegate_2_t1033342548 * ___getInfoDelegate2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Cloo.Bindings.CLDeviceHandle>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1__ctor_m1633211235_gshared (List_1_t3127987988 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
extern "C"  RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m1703441965_gshared (ReadOnlyCollection_1_t4292682451 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<Cloo.Bindings.CLDeviceHandle>::Contains(!0)
extern "C"  bool List_1_Contains_m1910289345_gshared (List_1_t3127987988 * __this, CLDeviceHandle_t1655913246  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<!0>)
extern "C"  void ReadOnlyCollection_1__ctor_m3900376080_gshared (ReadOnlyCollection_1_t4292682451 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// NativeType Cloo.ComputeDevice::GetInfo<System.UInt32>(Cloo.ComputeDeviceInfo)
extern "C"  uint32_t ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316_gshared (ComputeDevice_t4083180286 * __this, int32_t ___paramName0, const RuntimeMethod* method);
// NativeType Cloo.ComputeDevice::GetInfo<System.Int64>(Cloo.ComputeDeviceInfo)
extern "C"  int64_t ComputeDevice_GetInfo_TisInt64_t3736567304_m1988361387_gshared (ComputeDevice_t4083180286 * __this, int32_t ___paramName0, const RuntimeMethod* method);
// NativeType Cloo.ComputeDevice::GetInfo<System.UInt64>(Cloo.ComputeDeviceInfo)
extern "C"  uint64_t ComputeDevice_GetInfo_TisUInt64_t4134040092_m162120734_gshared (ComputeDevice_t4083180286 * __this, int32_t ___paramName0, const RuntimeMethod* method);
// NativeType Cloo.ComputeDevice::GetInfo<System.IntPtr>(Cloo.ComputeDeviceInfo)
extern "C"  intptr_t ComputeDevice_GetInfo_TisIntPtr_t_m2083192018_gshared (ComputeDevice_t4083180286 * __this, int32_t ___paramName0, const RuntimeMethod* method);
// System.Void Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLDeviceHandle,Cloo.ComputeDeviceInfo>::.ctor(System.Object,System.IntPtr)
extern "C"  void GetInfoDelegate_2__ctor_m1840618001_gshared (GetInfoDelegate_2_t3735710902 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// QueriedType[] Cloo.ComputeObject::GetArrayInfo<Cloo.Bindings.CLDeviceHandle,Cloo.ComputeDeviceInfo,System.IntPtr>(HandleType,InfoType,Cloo.ComputeObject/GetInfoDelegate`2<HandleType,InfoType>)
extern "C"  IntPtrU5BU5D_t4013366056* ComputeObject_GetArrayInfo_TisCLDeviceHandle_t1655913246_TisComputeDeviceInfo_t746502873_TisIntPtr_t_m2586711721_gshared (ComputeObject_t1791575355 * __this, CLDeviceHandle_t1655913246  ___handle0, int32_t ___paramName1, GetInfoDelegate_2_t3735710902 * ___getInfoDelegate2, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int64>::.ctor(System.Collections.Generic.IList`1<!0>)
extern "C"  void ReadOnlyCollection_1__ctor_m1693222885_gshared (ReadOnlyCollection_1_t654176295 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean Cloo.ComputeObject::GetBoolInfo<Cloo.Bindings.CLDeviceHandle,Cloo.ComputeDeviceInfo>(HandleType,InfoType,Cloo.ComputeObject/GetInfoDelegate`2<HandleType,InfoType>)
extern "C"  bool ComputeObject_GetBoolInfo_TisCLDeviceHandle_t1655913246_TisComputeDeviceInfo_t746502873_m3668400665_gshared (ComputeObject_t1791575355 * __this, CLDeviceHandle_t1655913246  ___handle0, int32_t ___paramName1, GetInfoDelegate_2_t3735710902 * ___getInfoDelegate2, const RuntimeMethod* method);
// System.String Cloo.ComputeObject::GetStringInfo<Cloo.Bindings.CLDeviceHandle,Cloo.ComputeDeviceInfo>(HandleType,InfoType,Cloo.ComputeObject/GetInfoDelegate`2<HandleType,InfoType>)
extern "C"  String_t* ComputeObject_GetStringInfo_TisCLDeviceHandle_t1655913246_TisComputeDeviceInfo_t746502873_m848664460_gshared (ComputeObject_t1791575355 * __this, CLDeviceHandle_t1655913246  ___handle0, int32_t ___paramName1, GetInfoDelegate_2_t3735710902 * ___getInfoDelegate2, const RuntimeMethod* method);
// System.Void Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLEventHandle,Cloo.ComputeEventInfo>::.ctor(System.Object,System.IntPtr)
extern "C"  void GetInfoDelegate_2__ctor_m4073742661_gshared (GetInfoDelegate_2_t3807037534 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// QueriedType Cloo.ComputeObject::GetInfo<Cloo.Bindings.CLEventHandle,Cloo.ComputeEventInfo,System.Int32>(HandleType,InfoType,Cloo.ComputeObject/GetInfoDelegate`2<HandleType,InfoType>)
extern "C"  int32_t ComputeObject_GetInfo_TisCLEventHandle_t1689096655_TisComputeEventInfo_t266398486_TisInt32_t2950945753_m2804187208_gshared (ComputeObject_t1791575355 * __this, CLEventHandle_t1689096655  ___handle0, int32_t ___paramName1, GetInfoDelegate_2_t3807037534 * ___getInfoDelegate2, const RuntimeMethod* method);
// System.Void Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLMemoryHandle,Cloo.ComputeImageInfo>::.ctor(System.Object,System.IntPtr)
extern "C"  void GetInfoDelegate_2__ctor_m2956066229_gshared (GetInfoDelegate_2_t3255322841 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// QueriedType Cloo.ComputeObject::GetInfo<Cloo.Bindings.CLMemoryHandle,Cloo.ComputeImageInfo,System.IntPtr>(HandleType,InfoType,Cloo.ComputeObject/GetInfoDelegate`2<HandleType,InfoType>)
extern "C"  intptr_t ComputeObject_GetInfo_TisCLMemoryHandle_t2389804491_TisComputeImageInfo_t1608465149_TisIntPtr_t_m3606957894_gshared (ComputeObject_t1791575355 * __this, CLMemoryHandle_t2389804491  ___handle0, int32_t ___paramName1, GetInfoDelegate_2_t3255322841 * ___getInfoDelegate2, const RuntimeMethod* method);
// System.Void Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLMemoryHandle,Cloo.ComputeMemoryInfo>::.ctor(System.Object,System.IntPtr)
extern "C"  void GetInfoDelegate_2__ctor_m334136073_gshared (GetInfoDelegate_2_t3751609436 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// QueriedType Cloo.ComputeObject::GetInfo<Cloo.Bindings.CLMemoryHandle,Cloo.ComputeMemoryInfo,System.IntPtr>(HandleType,InfoType,Cloo.ComputeObject/GetInfoDelegate`2<HandleType,InfoType>)
extern "C"  intptr_t ComputeObject_GetInfo_TisCLMemoryHandle_t2389804491_TisComputeMemoryInfo_t2104751744_TisIntPtr_t_m546006113_gshared (ComputeObject_t1791575355 * __this, CLMemoryHandle_t2389804491  ___handle0, int32_t ___paramName1, GetInfoDelegate_2_t3751609436 * ___getInfoDelegate2, const RuntimeMethod* method);
// System.Void Cloo.ComputeKernel::SetValueArgument<Cloo.Bindings.CLMemoryHandle>(System.Int32,T)
extern "C"  void ComputeKernel_SetValueArgument_TisCLMemoryHandle_t2389804491_m3042893746_gshared (ComputeKernel_t2923705153 * __this, int32_t ___index0, CLMemoryHandle_t2389804491  ___data1, const RuntimeMethod* method);
// System.Void Cloo.ComputeKernel::SetValueArgument<Cloo.Bindings.CLSamplerHandle>(System.Int32,T)
extern "C"  void ComputeKernel_SetValueArgument_TisCLSamplerHandle_t915650828_m2985095415_gshared (ComputeKernel_t2923705153 * __this, int32_t ___index0, CLSamplerHandle_t915650828  ___data1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[])
extern "C"  void List_1_CopyTo_m133310179_gshared (List_1_t257213610 * __this, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m3947764094_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLPlatformHandle,Cloo.ComputePlatformInfo>::.ctor(System.Object,System.IntPtr)
extern "C"  void GetInfoDelegate_2__ctor_m148456036_gshared (GetInfoDelegate_2_t3652029919 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.String Cloo.ComputeObject::GetStringInfo<Cloo.Bindings.CLPlatformHandle,Cloo.ComputePlatformInfo>(HandleType,InfoType,Cloo.ComputeObject/GetInfoDelegate`2<HandleType,InfoType>)
extern "C"  String_t* ComputeObject_GetStringInfo_TisCLPlatformHandle_t3404269797_TisComputePlatformInfo_t1022158021_m1537078130_gshared (ComputeObject_t1791575355 * __this, CLPlatformHandle_t3404269797  ___handle0, int32_t ___paramName1, GetInfoDelegate_2_t3652029919 * ___getInfoDelegate2, const RuntimeMethod* method);
// System.Void Cloo.ComputeObject/GetInfoDelegateEx`3<Cloo.Bindings.CLProgramHandle,Cloo.Bindings.CLDeviceHandle,Cloo.ComputeProgramBuildInfo>::.ctor(System.Object,System.IntPtr)
extern "C"  void GetInfoDelegateEx_3__ctor_m877644504_gshared (GetInfoDelegateEx_3_t3669348736 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.String Cloo.ComputeObject::GetStringInfo<Cloo.Bindings.CLProgramHandle,Cloo.Bindings.CLDeviceHandle,Cloo.ComputeProgramBuildInfo>(MainHandleType,SecondHandleType,InfoType,Cloo.ComputeObject/GetInfoDelegateEx`3<MainHandleType,SecondHandleType,InfoType>)
extern "C"  String_t* ComputeObject_GetStringInfo_TisCLProgramHandle_t2486937744_TisCLDeviceHandle_t1655913246_TisComputeProgramBuildInfo_t3516951054_m75492913_gshared (ComputeObject_t1791575355 * __this, CLProgramHandle_t2486937744  ___mainHandle0, CLDeviceHandle_t1655913246  ___secondHandle1, int32_t ___paramName2, GetInfoDelegateEx_3_t3669348736 * ___getInfoDelegate3, const RuntimeMethod* method);
// QueriedType Cloo.ComputeObject::GetInfo<Cloo.Bindings.CLProgramHandle,Cloo.Bindings.CLDeviceHandle,Cloo.ComputeProgramBuildInfo,System.UInt32>(MainHandleType,SecondHandleType,InfoType,Cloo.ComputeObject/GetInfoDelegateEx`3<MainHandleType,SecondHandleType,InfoType>)
extern "C"  uint32_t ComputeObject_GetInfo_TisCLProgramHandle_t2486937744_TisCLDeviceHandle_t1655913246_TisComputeProgramBuildInfo_t3516951054_TisUInt32_t2560061978_m3082471654_gshared (ComputeObject_t1791575355 * __this, CLProgramHandle_t2486937744  ___mainHandle0, CLDeviceHandle_t1655913246  ___secondHandle1, int32_t ___paramName2, GetInfoDelegateEx_3_t3669348736 * ___getInfoDelegate3, const RuntimeMethod* method);

// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C"  bool IntPtr_op_Inequality_m3063970704 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cloo.Bindings.CLCommandQueueHandle::get_IsValid()
extern "C"  bool CLCommandQueueHandle_get_IsValid_m2224107261 (CLCommandQueueHandle_t218408696 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Cloo.Bindings.CLCommandQueueHandle::get_Value()
extern "C"  intptr_t CLCommandQueueHandle_get_Value_m2760082377 (CLCommandQueueHandle_t218408696 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.Bindings.CLCommandQueueHandle::Invalidate()
extern "C"  void CLCommandQueueHandle_Invalidate_m917873785 (CLCommandQueueHandle_t218408696 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cloo.Bindings.CLContextHandle::get_IsValid()
extern "C"  bool CLContextHandle_get_IsValid_m3325934603 (CLContextHandle_t447015429 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Cloo.Bindings.CLContextHandle::get_Value()
extern "C"  intptr_t CLContextHandle_get_Value_m735911638 (CLContextHandle_t447015429 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.Bindings.CLContextHandle::Invalidate()
extern "C"  void CLContextHandle_Invalidate_m2084838429 (CLContextHandle_t447015429 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Cloo.Bindings.CLDeviceHandle::get_Value()
extern "C"  intptr_t CLDeviceHandle_get_Value_m2678713995 (CLDeviceHandle_t1655913246 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cloo.Bindings.CLEventHandle::get_IsValid()
extern "C"  bool CLEventHandle_get_IsValid_m2311008441 (CLEventHandle_t1689096655 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Cloo.Bindings.CLEventHandle::get_Value()
extern "C"  intptr_t CLEventHandle_get_Value_m3369786685 (CLEventHandle_t1689096655 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.Bindings.CLEventHandle::Invalidate()
extern "C"  void CLEventHandle_Invalidate_m1997689511 (CLEventHandle_t1689096655 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotImplementedException::.ctor()
extern "C"  void NotImplementedException__ctor_m3058704252 (NotImplementedException_t3489357830 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cloo.Bindings.CLKernelHandle::get_IsValid()
extern "C"  bool CLKernelHandle_get_IsValid_m3501045517 (CLKernelHandle_t2809987897 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Cloo.Bindings.CLKernelHandle::get_Value()
extern "C"  intptr_t CLKernelHandle_get_Value_m2940243222 (CLKernelHandle_t2809987897 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.Bindings.CLKernelHandle::Invalidate()
extern "C"  void CLKernelHandle_Invalidate_m478856493 (CLKernelHandle_t2809987897 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cloo.Bindings.CLMemoryHandle::get_IsValid()
extern "C"  bool CLMemoryHandle_get_IsValid_m2235700658 (CLMemoryHandle_t2389804491 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Cloo.Bindings.CLMemoryHandle::get_Value()
extern "C"  intptr_t CLMemoryHandle_get_Value_m1881717988 (CLMemoryHandle_t2389804491 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.Bindings.CLMemoryHandle::Invalidate()
extern "C"  void CLMemoryHandle_Invalidate_m1796141593 (CLMemoryHandle_t2389804491 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Cloo.Bindings.CLPlatformHandle::get_Value()
extern "C"  intptr_t CLPlatformHandle_get_Value_m2002329956 (CLPlatformHandle_t3404269797 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cloo.Bindings.CLProgramHandle::get_IsValid()
extern "C"  bool CLProgramHandle_get_IsValid_m98553484 (CLProgramHandle_t2486937744 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Cloo.Bindings.CLProgramHandle::get_Value()
extern "C"  intptr_t CLProgramHandle_get_Value_m664975121 (CLProgramHandle_t2486937744 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.Bindings.CLProgramHandle::Invalidate()
extern "C"  void CLProgramHandle_Invalidate_m1993159295 (CLProgramHandle_t2486937744 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cloo.Bindings.CLSamplerHandle::get_IsValid()
extern "C"  bool CLSamplerHandle_get_IsValid_m3163180585 (CLSamplerHandle_t915650828 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Cloo.Bindings.CLSamplerHandle::get_Value()
extern "C"  intptr_t CLSamplerHandle_get_Value_m3534879856 (CLSamplerHandle_t915650828 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.Bindings.CLSamplerHandle::Invalidate()
extern "C"  void CLSamplerHandle_Invalidate_m3540269400 (CLSamplerHandle_t915650828 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.Bindings.ComputeContextNotifier::Invoke(System.String,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void ComputeContextNotifier_Invoke_m3697659658 (ComputeContextNotifier_t2458212493 * __this, String_t* ___errorInfo0, intptr_t ___clDataPtr1, intptr_t ___clDataSize2, intptr_t ___userDataPtr3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.Bindings.ComputeEventCallback::Invoke(Cloo.Bindings.CLEventHandle,System.Int32,System.IntPtr)
extern "C"  void ComputeEventCallback_Invoke_m557872014 (ComputeEventCallback_t888729672 * __this, CLEventHandle_t1689096655  ___eventHandle0, int32_t ___cmdExecStatusOrErr1, intptr_t ___userData2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.Bindings.ComputeProgramBuildNotifier::Invoke(Cloo.Bindings.CLProgramHandle,System.IntPtr)
extern "C"  void ComputeProgramBuildNotifier_Invoke_m2954370104 (ComputeProgramBuildNotifier_t317311244 * __this, CLProgramHandle_t2486937744  ___programHandle0, intptr_t ___notifyDataPtr1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeException::.ctor(Cloo.ComputeErrorCode)
extern "C"  void ComputeException__ctor_m941830565 (ComputeException_t3978051080 * __this, int32_t ___code0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeResource::.ctor()
extern "C"  void ComputeResource__ctor_m415879097 (ComputeResource_t542138890 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Cloo.Bindings.ICL12 Cloo.Bindings.CLInterface::get_CL12()
extern "C"  RuntimeObject* CLInterface_get_CL12_m886088080 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Cloo.Bindings.CLContextHandle Cloo.ComputeContext::get_Handle()
extern "C"  CLContextHandle_t447015429  ComputeContext_get_Handle_m1664813480 (ComputeContext_t1365812911 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Cloo.Bindings.CLDeviceHandle Cloo.ComputeDevice::get_Handle()
extern "C"  CLDeviceHandle_t1655913246  ComputeDevice_get_Handle_m1377678137 (ComputeDevice_t4083180286 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeCommandQueue::set_Handle(Cloo.Bindings.CLCommandQueueHandle)
extern "C"  void ComputeCommandQueue_set_Handle_m615939970 (ComputeCommandQueue_t3979026963 * __this, CLCommandQueueHandle_t218408696  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeException::ThrowOnError(Cloo.ComputeErrorCode)
extern "C"  void ComputeException_ThrowOnError_m4115276668 (RuntimeObject * __this /* static, unused */, int32_t ___errorCode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Cloo.Bindings.CLCommandQueueHandle Cloo.ComputeCommandQueue::get_Handle()
extern "C"  CLCommandQueueHandle_t218408696  ComputeCommandQueue_get_Handle_m768798509 (ComputeCommandQueue_t3979026963 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeObject::SetID(System.IntPtr)
extern "C"  void ComputeObject_SetID_m1020599628 (ComputeObject_t1791575355 * __this, intptr_t ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Cloo.ComputeEventBase>::.ctor()
#define List_1__ctor_m3130116931(__this, method) ((  void (*) (List_1_t3592367935 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// Cloo.Bindings.CLEventHandle[] Cloo.ComputeTools::ExtractHandles(System.Collections.Generic.ICollection`1<Cloo.ComputeEventBase>,System.Int32&)
extern "C"  CLEventHandleU5BU5D_t4276533782* ComputeTools_ExtractHandles_m2843993479 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___computeObjects0, int32_t* ___handleCount1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Cloo.Bindings.CLKernelHandle Cloo.ComputeKernel::get_Handle()
extern "C"  CLKernelHandle_t2809987897  ComputeKernel_get_Handle_m251366303 (ComputeKernel_t2923705153 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeEvent::.ctor(Cloo.Bindings.CLEventHandle,Cloo.ComputeCommandQueue)
extern "C"  void ComputeEvent__ctor_m3536432089 (ComputeEvent_t249674601 * __this, CLEventHandle_t1689096655  ___handle0, ComputeCommandQueue_t3979026963 * ___queue1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeResource::Dispose()
extern "C"  void ComputeResource_Dispose_m1047257706 (ComputeResource_t542138890 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeEventBase::DisposeInternal()
extern "C"  void ComputeEventBase_DisposeInternal_m3027978081 (ComputeEventBase_t2120293193 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventArgs::.ctor()
extern "C"  void EventArgs__ctor_m32674013 (EventArgs_t3591816995 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeCommandStatusArgs::set_Event(Cloo.ComputeEventBase)
extern "C"  void ComputeCommandStatusArgs_set_Event_m3715351054 (ComputeCommandStatusArgs_t2147780983 * __this, ComputeEventBase_t2120293193 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeCommandStatusArgs::set_Status(Cloo.ComputeCommandExecutionStatus)
extern "C"  void ComputeCommandStatusArgs_set_Status_m1583230631 (ComputeCommandStatusArgs_t2147780983 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeCommandStatusChanged::Invoke(System.Object,Cloo.ComputeCommandStatusArgs)
extern "C"  void ComputeCommandStatusChanged_Invoke_m2973516581 (ComputeCommandStatusChanged_t248714690 * __this, RuntimeObject * ___sender0, ComputeCommandStatusArgs_t2147780983 * ___args1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Cloo.Bindings.CLDeviceHandle[] Cloo.ComputeTools::ExtractHandles(System.Collections.Generic.ICollection`1<Cloo.ComputeDevice>,System.Int32&)
extern "C"  CLDeviceHandleU5BU5D_t3725102763* ComputeTools_ExtractHandles_m603623554 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___computeObjects0, int32_t* ___handleCount1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr[] Cloo.ComputeContextPropertyList::ToIntPtrArray()
extern "C"  IntPtrU5BU5D_t4013366056* ComputeContextPropertyList_ToIntPtrArray_m4263506384 (ComputeContextPropertyList_t3830085294 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeContext::set_Handle(Cloo.Bindings.CLContextHandle)
extern "C"  void ComputeContext_set_Handle_m496646365 (ComputeContext_t1365812911 * __this, CLContextHandle_t447015429  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Cloo.ComputeContextProperty Cloo.ComputeContextPropertyList::GetByName(Cloo.ComputeContextPropertyName)
extern "C"  ComputeContextProperty_t1024854822 * ComputeContextPropertyList_GetByName_m1411803165 (ComputeContextPropertyList_t3830085294 * __this, int32_t ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Cloo.ComputeContextProperty::get_Value()
extern "C"  intptr_t ComputeContextProperty_get_Value_m1109486581 (ComputeContextProperty_t1024854822 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Cloo.ComputePlatform Cloo.ComputePlatform::GetByHandle(System.IntPtr)
extern "C"  ComputePlatform_t3600789258 * ComputePlatform_GetByHandle_m3317553206 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Cloo.ComputeDevice> Cloo.ComputeContext::GetDevices()
extern "C"  ReadOnlyCollection_1_t1000789277 * ComputeContext_GetDevices_m1689598945 (ComputeContext_t1365812911 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLContextHandle,Cloo.ComputeContextInfo>::.ctor(System.Object,System.IntPtr)
#define GetInfoDelegate_2__ctor_m3127054146(__this, p0, p1, method) ((  void (*) (GetInfoDelegate_2_t1033342548 *, RuntimeObject *, intptr_t, const RuntimeMethod*))GetInfoDelegate_2__ctor_m3127054146_gshared)(__this, p0, p1, method)
// QueriedType[] Cloo.ComputeObject::GetArrayInfo<Cloo.Bindings.CLContextHandle,Cloo.ComputeContextInfo,Cloo.Bindings.CLDeviceHandle>(HandleType,InfoType,Cloo.ComputeObject/GetInfoDelegate`2<HandleType,InfoType>)
#define ComputeObject_GetArrayInfo_TisCLContextHandle_t447015429_TisComputeContextInfo_t761728730_TisCLDeviceHandle_t1655913246_m615519784(__this, ___handle0, ___paramName1, ___getInfoDelegate2, method) ((  CLDeviceHandleU5BU5D_t3725102763* (*) (ComputeObject_t1791575355 *, CLContextHandle_t447015429 , int32_t, GetInfoDelegate_2_t1033342548 *, const RuntimeMethod*))ComputeObject_GetArrayInfo_TisCLContextHandle_t447015429_TisComputeContextInfo_t761728730_TisCLDeviceHandle_t1655913246_m615519784_gshared)(__this, ___handle0, ___paramName1, ___getInfoDelegate2, method)
// System.Void System.Collections.Generic.List`1<Cloo.Bindings.CLDeviceHandle>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1__ctor_m1633211235(__this, p0, method) ((  void (*) (List_1_t3127987988 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1633211235_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<Cloo.ComputeDevice>::.ctor()
#define List_1__ctor_m2551690417(__this, method) ((  void (*) (List_1_t1260287732 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Collections.Generic.IList`1<Cloo.ComputePlatform> Cloo.ComputePlatform::get_Platforms()
extern "C"  RuntimeObject* ComputePlatform_get_Platforms_m1134595370 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Cloo.ComputeDevice> Cloo.ComputePlatform::get_Devices()
extern "C"  ReadOnlyCollection_1_t1000789277 * ComputePlatform_get_Devices_m3762564962 (ComputePlatform_t3600789258 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<Cloo.ComputeDevice>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m477749655(__this, method) ((  RuntimeObject* (*) (ReadOnlyCollection_1_t1000789277 *, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m1703441965_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Cloo.Bindings.CLDeviceHandle>::Contains(!0)
#define List_1_Contains_m1910289345(__this, p0, method) ((  bool (*) (List_1_t3127987988 *, CLDeviceHandle_t1655913246 , const RuntimeMethod*))List_1_Contains_m1910289345_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<Cloo.ComputeDevice>::Add(!0)
#define List_1_Add_m1881868367(__this, p0, method) ((  void (*) (List_1_t1260287732 *, ComputeDevice_t4083180286 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Cloo.ComputeDevice>::.ctor(System.Collections.Generic.IList`1<!0>)
#define ReadOnlyCollection_1__ctor_m2800920346(__this, p0, method) ((  void (*) (ReadOnlyCollection_1_t1000789277 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m3900376080_gshared)(__this, p0, method)
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.IntPtr::ToString()
extern "C"  String_t* IntPtr_ToString_m1831665121 (intptr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Cloo.ComputeContextProperty>::.ctor()
#define List_1__ctor_m3683943297(__this, method) ((  void (*) (List_1_t2496929564 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// Cloo.Bindings.CLPlatformHandle Cloo.ComputePlatform::get_Handle()
extern "C"  CLPlatformHandle_t3404269797  ComputePlatform_get_Handle_m2382324133 (ComputePlatform_t3600789258 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeContextProperty::.ctor(Cloo.ComputeContextPropertyName,System.IntPtr)
extern "C"  void ComputeContextProperty__ctor_m498890058 (ComputeContextProperty_t1024854822 * __this, int32_t ___name0, intptr_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Cloo.ComputeContextPropertyName Cloo.ComputeContextProperty::get_Name()
extern "C"  int32_t ComputeContextProperty_get_Name_m2277673648 (ComputeContextProperty_t1024854822 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::.ctor(System.Int32)
extern "C"  void IntPtr__ctor_m987082960 (intptr_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeObject::.ctor()
extern "C"  void ComputeObject__ctor_m2175313869 (ComputeObject_t1791575355 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeDevice::set_Handle(Cloo.Bindings.CLDeviceHandle)
extern "C"  void ComputeDevice_set_Handle_m2376074841 (ComputeDevice_t4083180286 * __this, CLDeviceHandle_t1655913246  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// NativeType Cloo.ComputeDevice::GetInfo<System.UInt32>(Cloo.ComputeDeviceInfo)
#define ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316(__this, ___paramName0, method) ((  uint32_t (*) (ComputeDevice_t4083180286 *, int32_t, const RuntimeMethod*))ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316_gshared)(__this, ___paramName0, method)
// System.Boolean Cloo.ComputeDevice::GetBoolInfo(Cloo.ComputeDeviceInfo)
extern "C"  bool ComputeDevice_GetBoolInfo_m3389773502 (ComputeDevice_t4083180286 * __this, int32_t ___paramName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Cloo.ComputeDevice::GetStringInfo(Cloo.ComputeDeviceInfo)
extern "C"  String_t* ComputeDevice_GetStringInfo_m3390052655 (ComputeDevice_t4083180286 * __this, int32_t ___paramName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// NativeType Cloo.ComputeDevice::GetInfo<System.Int64>(Cloo.ComputeDeviceInfo)
#define ComputeDevice_GetInfo_TisInt64_t3736567304_m1988361387(__this, ___paramName0, method) ((  int64_t (*) (ComputeDevice_t4083180286 *, int32_t, const RuntimeMethod*))ComputeDevice_GetInfo_TisInt64_t3736567304_m1988361387_gshared)(__this, ___paramName0, method)
// System.String[] System.String::Split(System.Char[],System.StringSplitOptions)
extern "C"  StringU5BU5D_t1281789340* String_Split_m1466646415 (String_t* __this, CharU5BU5D_t3528271667* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::.ctor(System.Collections.Generic.IList`1<!0>)
#define ReadOnlyCollection_1__ctor_m627134177(__this, p0, method) ((  void (*) (ReadOnlyCollection_1_t3060026976 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m3900376080_gshared)(__this, p0, method)
// NativeType Cloo.ComputeDevice::GetInfo<System.UInt64>(Cloo.ComputeDeviceInfo)
#define ComputeDevice_GetInfo_TisUInt64_t4134040092_m162120734(__this, ___paramName0, method) ((  uint64_t (*) (ComputeDevice_t4083180286 *, int32_t, const RuntimeMethod*))ComputeDevice_GetInfo_TisUInt64_t4134040092_m162120734_gshared)(__this, ___paramName0, method)
// NativeType Cloo.ComputeDevice::GetInfo<System.IntPtr>(Cloo.ComputeDeviceInfo)
#define ComputeDevice_GetInfo_TisIntPtr_t_m2083192018(__this, ___paramName0, method) ((  intptr_t (*) (ComputeDevice_t4083180286 *, int32_t, const RuntimeMethod*))ComputeDevice_GetInfo_TisIntPtr_t_m2083192018_gshared)(__this, ___paramName0, method)
// System.Int64 System.IntPtr::op_Explicit(System.IntPtr)
extern "C"  int64_t IntPtr_op_Explicit_m3885458658 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLDeviceHandle,Cloo.ComputeDeviceInfo>::.ctor(System.Object,System.IntPtr)
#define GetInfoDelegate_2__ctor_m1840618001(__this, p0, p1, method) ((  void (*) (GetInfoDelegate_2_t3735710902 *, RuntimeObject *, intptr_t, const RuntimeMethod*))GetInfoDelegate_2__ctor_m1840618001_gshared)(__this, p0, p1, method)
// QueriedType[] Cloo.ComputeObject::GetArrayInfo<Cloo.Bindings.CLDeviceHandle,Cloo.ComputeDeviceInfo,System.IntPtr>(HandleType,InfoType,Cloo.ComputeObject/GetInfoDelegate`2<HandleType,InfoType>)
#define ComputeObject_GetArrayInfo_TisCLDeviceHandle_t1655913246_TisComputeDeviceInfo_t746502873_TisIntPtr_t_m2586711721(__this, ___handle0, ___paramName1, ___getInfoDelegate2, method) ((  IntPtrU5BU5D_t4013366056* (*) (ComputeObject_t1791575355 *, CLDeviceHandle_t1655913246 , int32_t, GetInfoDelegate_2_t3735710902 *, const RuntimeMethod*))ComputeObject_GetArrayInfo_TisCLDeviceHandle_t1655913246_TisComputeDeviceInfo_t746502873_TisIntPtr_t_m2586711721_gshared)(__this, ___handle0, ___paramName1, ___getInfoDelegate2, method)
// System.Int64[] Cloo.ComputeTools::ConvertArray(System.IntPtr[])
extern "C"  Int64U5BU5D_t2559172825* ComputeTools_ConvertArray_m269020480 (RuntimeObject * __this /* static, unused */, IntPtrU5BU5D_t4013366056* ___array0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int64>::.ctor(System.Collections.Generic.IList`1<!0>)
#define ReadOnlyCollection_1__ctor_m1693222885(__this, p0, method) ((  void (*) (ReadOnlyCollection_1_t654176295 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m1693222885_gshared)(__this, p0, method)
// System.Boolean Cloo.ComputeObject::GetBoolInfo<Cloo.Bindings.CLDeviceHandle,Cloo.ComputeDeviceInfo>(HandleType,InfoType,Cloo.ComputeObject/GetInfoDelegate`2<HandleType,InfoType>)
#define ComputeObject_GetBoolInfo_TisCLDeviceHandle_t1655913246_TisComputeDeviceInfo_t746502873_m3668400665(__this, ___handle0, ___paramName1, ___getInfoDelegate2, method) ((  bool (*) (ComputeObject_t1791575355 *, CLDeviceHandle_t1655913246 , int32_t, GetInfoDelegate_2_t3735710902 *, const RuntimeMethod*))ComputeObject_GetBoolInfo_TisCLDeviceHandle_t1655913246_TisComputeDeviceInfo_t746502873_m3668400665_gshared)(__this, ___handle0, ___paramName1, ___getInfoDelegate2, method)
// System.String Cloo.ComputeObject::GetStringInfo<Cloo.Bindings.CLDeviceHandle,Cloo.ComputeDeviceInfo>(HandleType,InfoType,Cloo.ComputeObject/GetInfoDelegate`2<HandleType,InfoType>)
#define ComputeObject_GetStringInfo_TisCLDeviceHandle_t1655913246_TisComputeDeviceInfo_t746502873_m848664460(__this, ___handle0, ___paramName1, ___getInfoDelegate2, method) ((  String_t* (*) (ComputeObject_t1791575355 *, CLDeviceHandle_t1655913246 , int32_t, GetInfoDelegate_2_t3735710902 *, const RuntimeMethod*))ComputeObject_GetStringInfo_TisCLDeviceHandle_t1655913246_TisComputeDeviceInfo_t746502873_m848664460_gshared)(__this, ___handle0, ___paramName1, ___getInfoDelegate2, method)
// System.Void Cloo.ComputeEventBase::.ctor()
extern "C"  void ComputeEventBase__ctor_m1797496167 (ComputeEventBase_t2120293193 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeEventBase::set_Handle(Cloo.Bindings.CLEventHandle)
extern "C"  void ComputeEventBase_set_Handle_m2874357395 (ComputeEventBase_t2120293193 * __this, CLEventHandle_t1689096655  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Cloo.Bindings.CLEventHandle Cloo.ComputeEventBase::get_Handle()
extern "C"  CLEventHandle_t1689096655  ComputeEventBase_get_Handle_m678311890 (ComputeEventBase_t2120293193 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeEvent::set_CommandQueue(Cloo.ComputeCommandQueue)
extern "C"  void ComputeEvent_set_CommandQueue_m1082294195 (ComputeEvent_t249674601 * __this, ComputeCommandQueue_t3979026963 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLEventHandle,Cloo.ComputeEventInfo>::.ctor(System.Object,System.IntPtr)
#define GetInfoDelegate_2__ctor_m4073742661(__this, p0, p1, method) ((  void (*) (GetInfoDelegate_2_t3807037534 *, RuntimeObject *, intptr_t, const RuntimeMethod*))GetInfoDelegate_2__ctor_m4073742661_gshared)(__this, p0, p1, method)
// QueriedType Cloo.ComputeObject::GetInfo<Cloo.Bindings.CLEventHandle,Cloo.ComputeEventInfo,System.Int32>(HandleType,InfoType,Cloo.ComputeObject/GetInfoDelegate`2<HandleType,InfoType>)
#define ComputeObject_GetInfo_TisCLEventHandle_t1689096655_TisComputeEventInfo_t266398486_TisInt32_t2950945753_m2804187208(__this, ___handle0, ___paramName1, ___getInfoDelegate2, method) ((  int32_t (*) (ComputeObject_t1791575355 *, CLEventHandle_t1689096655 , int32_t, GetInfoDelegate_2_t3807037534 *, const RuntimeMethod*))ComputeObject_GetInfo_TisCLEventHandle_t1689096655_TisComputeEventInfo_t266398486_TisInt32_t2950945753_m2804187208_gshared)(__this, ___handle0, ___paramName1, ___getInfoDelegate2, method)
// System.Void Cloo.ComputeEventBase::set_Type(Cloo.ComputeCommandType)
extern "C"  void ComputeEventBase_set_Type_m1613646403 (ComputeEventBase_t2120293193 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Cloo.ComputeContext Cloo.ComputeCommandQueue::get_Context()
extern "C"  ComputeContext_t1365812911 * ComputeCommandQueue_get_Context_m3899312057 (ComputeCommandQueue_t3979026963 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeEventBase::set_Context(Cloo.ComputeContext)
extern "C"  void ComputeEventBase_set_Context_m1670368914 (ComputeEventBase_t2120293193 * __this, ComputeContext_t1365812911 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Cloo.ComputeCommandQueue Cloo.ComputeEvent::get_CommandQueue()
extern "C"  ComputeCommandQueue_t3979026963 * ComputeEvent_get_CommandQueue_m1176243992 (ComputeEvent_t249674601 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Cloo.ComputeDevice Cloo.ComputeCommandQueue::get_Device()
extern "C"  ComputeDevice_t4083180286 * ComputeCommandQueue_get_Device_m38748270 (ComputeCommandQueue_t3979026963 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Cloo.ComputePlatform Cloo.ComputeDevice::get_Platform()
extern "C"  ComputePlatform_t3600789258 * ComputeDevice_get_Platform_m2529460085 (ComputeDevice_t4083180286 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Cloo.ComputePlatform::get_Version()
extern "C"  String_t* ComputePlatform_get_Version_m568832603 (ComputePlatform_t3600789258 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Version Cloo.ComputeTools::ParseVersionString(System.String,System.Int32)
extern "C"  Version_t3456873960 * ComputeTools_ParseVersionString_m689330921 (RuntimeObject * __this /* static, unused */, String_t* ___versionString0, int32_t ___substringIndex1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern "C"  void Version__ctor_m3537335798 (Version_t3456873960 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_GreaterThan(System.Version,System.Version)
extern "C"  bool Version_op_GreaterThan_m2354880383 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * p0, Version_t3456873960 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeEventBase::HookNotifier()
extern "C"  void ComputeEventBase_HookNotifier_m2639630227 (ComputeEventBase_t2120293193 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeCommandStatusChanged::.ctor(System.Object,System.IntPtr)
extern "C"  void ComputeCommandStatusChanged__ctor_m2569250243 (ComputeCommandStatusChanged_t248714690 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeEventBase::add_Completed(Cloo.ComputeCommandStatusChanged)
extern "C"  void ComputeEventBase_add_Completed_m1662437227 (ComputeEventBase_t2120293193 * __this, ComputeCommandStatusChanged_t248714690 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeEventBase::add_Aborted(Cloo.ComputeCommandStatusChanged)
extern "C"  void ComputeEventBase_add_Aborted_m103398491 (ComputeEventBase_t2120293193 * __this, ComputeCommandStatusChanged_t248714690 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeEvent::FreeGCHandle()
extern "C"  void ComputeEvent_FreeGCHandle_m3267421830 (ComputeEvent_t249674601 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeEventBase::Dispose(System.Boolean)
extern "C"  void ComputeEventBase_Dispose_m1883981520 (ComputeEventBase_t2120293193 * __this, bool ___manual0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C"  void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C"  void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
extern "C"  bool GCHandle_get_IsAllocated_m1058226959 (GCHandle_t3351438187 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
extern "C"  RuntimeObject * GCHandle_get_Target_m1824973883 (GCHandle_t3351438187 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C"  void GCHandle_Free_m1457699368 (GCHandle_t3351438187 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeEventBase::add_aborted(Cloo.ComputeCommandStatusChanged)
extern "C"  void ComputeEventBase_add_aborted_m1213948935 (ComputeEventBase_t2120293193 * __this, ComputeCommandStatusChanged_t248714690 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Cloo.ComputeCommandExecutionStatus Cloo.ComputeCommandStatusArgs::get_Status()
extern "C"  int32_t ComputeCommandStatusArgs_get_Status_m4037818711 (ComputeCommandStatusArgs_t2147780983 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeEventBase::remove_aborted(Cloo.ComputeCommandStatusChanged)
extern "C"  void ComputeEventBase_remove_aborted_m3701654316 (ComputeEventBase_t2120293193 * __this, ComputeCommandStatusChanged_t248714690 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeEventBase::add_completed(Cloo.ComputeCommandStatusChanged)
extern "C"  void ComputeEventBase_add_completed_m626990973 (ComputeEventBase_t2120293193 * __this, ComputeCommandStatusChanged_t248714690 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeEventBase::remove_completed(Cloo.ComputeCommandStatusChanged)
extern "C"  void ComputeEventBase_remove_completed_m2496688581 (ComputeEventBase_t2120293193 * __this, ComputeCommandStatusChanged_t248714690 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.Bindings.ComputeEventCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void ComputeEventCallback__ctor_m113015864 (ComputeEventCallback_t888729672 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Cloo.Bindings.ICL11 Cloo.Bindings.CLInterface::get_CL11()
extern "C"  RuntimeObject* CLInterface_get_CL11_m1440148108 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeCommandStatusArgs::.ctor(Cloo.ComputeEventBase,Cloo.ComputeCommandExecutionStatus)
extern "C"  void ComputeCommandStatusArgs__ctor_m1631833591 (ComputeCommandStatusArgs_t2147780983 * __this, ComputeEventBase_t2120293193 * ___ev0, int32_t ___status1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C"  void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.DeviceNotFoundComputeException::.ctor()
extern "C"  void DeviceNotFoundComputeException__ctor_m2778902249 (DeviceNotFoundComputeException_t2803661270 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.DeviceNotAvailableComputeException::.ctor()
extern "C"  void DeviceNotAvailableComputeException__ctor_m2576565587 (DeviceNotAvailableComputeException_t1010603520 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.CompilerNotAvailableComputeException::.ctor()
extern "C"  void CompilerNotAvailableComputeException__ctor_m1207691428 (CompilerNotAvailableComputeException_t3264770924 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.MemoryObjectAllocationFailureComputeException::.ctor()
extern "C"  void MemoryObjectAllocationFailureComputeException__ctor_m3349746710 (MemoryObjectAllocationFailureComputeException_t1033166821 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.OutOfResourcesComputeException::.ctor()
extern "C"  void OutOfResourcesComputeException__ctor_m2203742086 (OutOfResourcesComputeException_t3780973734 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.OutOfHostMemoryComputeException::.ctor()
extern "C"  void OutOfHostMemoryComputeException__ctor_m2326176698 (OutOfHostMemoryComputeException_t2750237157 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ProfilingInfoNotAvailableComputeException::.ctor()
extern "C"  void ProfilingInfoNotAvailableComputeException__ctor_m951743102 (ProfilingInfoNotAvailableComputeException_t3456066642 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.MemoryCopyOverlapComputeException::.ctor()
extern "C"  void MemoryCopyOverlapComputeException__ctor_m764004675 (MemoryCopyOverlapComputeException_t861502170 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ImageFormatMismatchComputeException::.ctor()
extern "C"  void ImageFormatMismatchComputeException__ctor_m2167928152 (ImageFormatMismatchComputeException_t110044459 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ImageFormatNotSupportedComputeException::.ctor()
extern "C"  void ImageFormatNotSupportedComputeException__ctor_m322969780 (ImageFormatNotSupportedComputeException_t824198691 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.BuildProgramFailureComputeException::.ctor()
extern "C"  void BuildProgramFailureComputeException__ctor_m1003530587 (BuildProgramFailureComputeException_t2506631677 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.MapFailureComputeException::.ctor()
extern "C"  void MapFailureComputeException__ctor_m1563865810 (MapFailureComputeException_t609039928 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidValueComputeException::.ctor()
extern "C"  void InvalidValueComputeException__ctor_m4076390645 (InvalidValueComputeException_t1884546994 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidDeviceTypeComputeException::.ctor()
extern "C"  void InvalidDeviceTypeComputeException__ctor_m1487330586 (InvalidDeviceTypeComputeException_t3015842128 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidPlatformComputeException::.ctor()
extern "C"  void InvalidPlatformComputeException__ctor_m793721652 (InvalidPlatformComputeException_t1484941494 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidDeviceComputeException::.ctor()
extern "C"  void InvalidDeviceComputeException__ctor_m2683439950 (InvalidDeviceComputeException_t696285512 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidContextComputeException::.ctor()
extern "C"  void InvalidContextComputeException__ctor_m2865329868 (InvalidContextComputeException_t2857043932 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidCommandQueueFlagsComputeException::.ctor()
extern "C"  void InvalidCommandQueueFlagsComputeException__ctor_m3143306054 (InvalidCommandQueueFlagsComputeException_t1130645332 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidCommandQueueComputeException::.ctor()
extern "C"  void InvalidCommandQueueComputeException__ctor_m83821076 (InvalidCommandQueueComputeException_t3760823054 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidHostPointerComputeException::.ctor()
extern "C"  void InvalidHostPointerComputeException__ctor_m3652038500 (InvalidHostPointerComputeException_t3920245830 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidMemoryObjectComputeException::.ctor()
extern "C"  void InvalidMemoryObjectComputeException__ctor_m2795730210 (InvalidMemoryObjectComputeException_t1584946539 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidImageFormatDescriptorComputeException::.ctor()
extern "C"  void InvalidImageFormatDescriptorComputeException__ctor_m3349053293 (InvalidImageFormatDescriptorComputeException_t1307689117 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidImageSizeComputeException::.ctor()
extern "C"  void InvalidImageSizeComputeException__ctor_m354468173 (InvalidImageSizeComputeException_t811168388 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidSamplerComputeException::.ctor()
extern "C"  void InvalidSamplerComputeException__ctor_m2894750045 (InvalidSamplerComputeException_t500922945 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidBinaryComputeException::.ctor()
extern "C"  void InvalidBinaryComputeException__ctor_m1176098170 (InvalidBinaryComputeException_t3216170158 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidBuildOptionsComputeException::.ctor()
extern "C"  void InvalidBuildOptionsComputeException__ctor_m2594830414 (InvalidBuildOptionsComputeException_t696878590 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidProgramComputeException::.ctor()
extern "C"  void InvalidProgramComputeException__ctor_m582511112 (InvalidProgramComputeException_t1992991535 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidProgramExecutableComputeException::.ctor()
extern "C"  void InvalidProgramExecutableComputeException__ctor_m3139956341 (InvalidProgramExecutableComputeException_t315365513 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidKernelNameComputeException::.ctor()
extern "C"  void InvalidKernelNameComputeException__ctor_m3425883653 (InvalidKernelNameComputeException_t1206973794 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidKernelDefinitionComputeException::.ctor()
extern "C"  void InvalidKernelDefinitionComputeException__ctor_m1061364600 (InvalidKernelDefinitionComputeException_t1910702029 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidKernelComputeException::.ctor()
extern "C"  void InvalidKernelComputeException__ctor_m3724177594 (InvalidKernelComputeException_t926678227 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidArgumentIndexComputeException::.ctor()
extern "C"  void InvalidArgumentIndexComputeException__ctor_m3327796891 (InvalidArgumentIndexComputeException_t2375232228 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidArgumentValueComputeException::.ctor()
extern "C"  void InvalidArgumentValueComputeException__ctor_m267991062 (InvalidArgumentValueComputeException_t4274550977 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidArgumentSizeComputeException::.ctor()
extern "C"  void InvalidArgumentSizeComputeException__ctor_m1121520031 (InvalidArgumentSizeComputeException_t126175770 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidKernelArgumentsComputeException::.ctor()
extern "C"  void InvalidKernelArgumentsComputeException__ctor_m2686482170 (InvalidKernelArgumentsComputeException_t1122558706 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidWorkDimensionsComputeException::.ctor()
extern "C"  void InvalidWorkDimensionsComputeException__ctor_m1048105053 (InvalidWorkDimensionsComputeException_t3766439885 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidWorkGroupSizeComputeException::.ctor()
extern "C"  void InvalidWorkGroupSizeComputeException__ctor_m2849629393 (InvalidWorkGroupSizeComputeException_t2659536362 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidWorkItemSizeComputeException::.ctor()
extern "C"  void InvalidWorkItemSizeComputeException__ctor_m239448449 (InvalidWorkItemSizeComputeException_t3193750300 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidGlobalOffsetComputeException::.ctor()
extern "C"  void InvalidGlobalOffsetComputeException__ctor_m4038333471 (InvalidGlobalOffsetComputeException_t637889218 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidEventWaitListComputeException::.ctor()
extern "C"  void InvalidEventWaitListComputeException__ctor_m574768267 (InvalidEventWaitListComputeException_t1652478454 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidEventComputeException::.ctor()
extern "C"  void InvalidEventComputeException__ctor_m3948495255 (InvalidEventComputeException_t3815158586 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidOperationComputeException::.ctor()
extern "C"  void InvalidOperationComputeException__ctor_m3035711447 (InvalidOperationComputeException_t1009558057 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidGLObjectComputeException::.ctor()
extern "C"  void InvalidGLObjectComputeException__ctor_m4286668796 (InvalidGLObjectComputeException_t3268435956 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidBufferSizeComputeException::.ctor()
extern "C"  void InvalidBufferSizeComputeException__ctor_m3598024023 (InvalidBufferSizeComputeException_t3765795266 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.InvalidMipLevelComputeException::.ctor()
extern "C"  void InvalidMipLevelComputeException__ctor_m2734449470 (InvalidMipLevelComputeException_t2097497037 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeMemory::.ctor(Cloo.ComputeContext,Cloo.ComputeMemoryFlags)
extern "C"  void ComputeMemory__ctor_m2255277297 (ComputeMemory_t2270500267 * __this, ComputeContext_t1365812911 * ___context0, int64_t ___flags1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Cloo.Bindings.CLMemoryHandle Cloo.ComputeMemory::get_Handle()
extern "C"  CLMemoryHandle_t2389804491  ComputeMemory_get_Handle_m908326668 (ComputeMemory_t2270500267 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLMemoryHandle,Cloo.ComputeImageInfo>::.ctor(System.Object,System.IntPtr)
#define GetInfoDelegate_2__ctor_m2956066229(__this, p0, p1, method) ((  void (*) (GetInfoDelegate_2_t3255322841 *, RuntimeObject *, intptr_t, const RuntimeMethod*))GetInfoDelegate_2__ctor_m2956066229_gshared)(__this, p0, p1, method)
// QueriedType Cloo.ComputeObject::GetInfo<Cloo.Bindings.CLMemoryHandle,Cloo.ComputeImageInfo,System.IntPtr>(HandleType,InfoType,Cloo.ComputeObject/GetInfoDelegate`2<HandleType,InfoType>)
#define ComputeObject_GetInfo_TisCLMemoryHandle_t2389804491_TisComputeImageInfo_t1608465149_TisIntPtr_t_m3606957894(__this, ___handle0, ___paramName1, ___getInfoDelegate2, method) ((  intptr_t (*) (ComputeObject_t1791575355 *, CLMemoryHandle_t2389804491 , int32_t, GetInfoDelegate_2_t3255322841 *, const RuntimeMethod*))ComputeObject_GetInfo_TisCLMemoryHandle_t2389804491_TisComputeImageInfo_t1608465149_TisIntPtr_t_m3606957894_gshared)(__this, ___handle0, ___paramName1, ___getInfoDelegate2, method)
// System.Int32 System.IntPtr::op_Explicit(System.IntPtr)
extern "C"  int32_t IntPtr_op_Explicit_m4220076518 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeImage::set_Depth(System.Int32)
extern "C"  void ComputeImage_set_Depth_m4123935464 (ComputeImage_t2206698626 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeImage::set_ElementSize(System.Int32)
extern "C"  void ComputeImage_set_ElementSize_m189494217 (ComputeImage_t2206698626 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeImage::set_Height(System.Int32)
extern "C"  void ComputeImage_set_Height_m2676721557 (ComputeImage_t2206698626 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeImage::set_RowPitch(System.Int64)
extern "C"  void ComputeImage_set_RowPitch_m2789524076 (ComputeImage_t2206698626 * __this, int64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLMemoryHandle,Cloo.ComputeMemoryInfo>::.ctor(System.Object,System.IntPtr)
#define GetInfoDelegate_2__ctor_m334136073(__this, p0, p1, method) ((  void (*) (GetInfoDelegate_2_t3751609436 *, RuntimeObject *, intptr_t, const RuntimeMethod*))GetInfoDelegate_2__ctor_m334136073_gshared)(__this, p0, p1, method)
// QueriedType Cloo.ComputeObject::GetInfo<Cloo.Bindings.CLMemoryHandle,Cloo.ComputeMemoryInfo,System.IntPtr>(HandleType,InfoType,Cloo.ComputeObject/GetInfoDelegate`2<HandleType,InfoType>)
#define ComputeObject_GetInfo_TisCLMemoryHandle_t2389804491_TisComputeMemoryInfo_t2104751744_TisIntPtr_t_m546006113(__this, ___handle0, ___paramName1, ___getInfoDelegate2, method) ((  intptr_t (*) (ComputeObject_t1791575355 *, CLMemoryHandle_t2389804491 , int32_t, GetInfoDelegate_2_t3751609436 *, const RuntimeMethod*))ComputeObject_GetInfo_TisCLMemoryHandle_t2389804491_TisComputeMemoryInfo_t2104751744_TisIntPtr_t_m546006113_gshared)(__this, ___handle0, ___paramName1, ___getInfoDelegate2, method)
// System.Void Cloo.ComputeMemory::set_Size(System.Int64)
extern "C"  void ComputeMemory_set_Size_m2247902897 (ComputeMemory_t2270500267 * __this, int64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeImage::set_SlicePitch(System.Int64)
extern "C"  void ComputeImage_set_SlicePitch_m1174254482 (ComputeImage_t2206698626 * __this, int64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeImage::set_Width(System.Int32)
extern "C"  void ComputeImage_set_Width_m423181061 (ComputeImage_t2206698626 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeImage::.ctor(Cloo.ComputeContext,Cloo.ComputeMemoryFlags)
extern "C"  void ComputeImage__ctor_m3543426040 (ComputeImage_t2206698626 * __this, ComputeContext_t1365812911 * ___context0, int64_t ___flags1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeMemory::set_Handle(Cloo.Bindings.CLMemoryHandle)
extern "C"  void ComputeMemory_set_Handle_m144162909 (ComputeMemory_t2270500267 * __this, CLMemoryHandle_t2389804491  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeImage::Init()
extern "C"  void ComputeImage_Init_m2341954491 (ComputeImage_t2206698626 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeImage2D::.ctor(Cloo.Bindings.CLMemoryHandle,Cloo.ComputeContext,Cloo.ComputeMemoryFlags)
extern "C"  void ComputeImage2D__ctor_m1777054591 (ComputeImage2D_t234885228 * __this, CLMemoryHandle_t2389804491  ___handle0, ComputeContext_t1365812911 * ___context1, int64_t ___flags2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeImage3D::.ctor(Cloo.Bindings.CLMemoryHandle,Cloo.ComputeContext,Cloo.ComputeMemoryFlags)
extern "C"  void ComputeImage3D__ctor_m48427665 (ComputeImage3D_t234819692 * __this, CLMemoryHandle_t2389804491  ___handle0, ComputeContext_t1365812911 * ___context1, int64_t ___flags2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Cloo.Bindings.CLProgramHandle Cloo.ComputeProgram::get_Handle()
extern "C"  CLProgramHandle_t2486937744  ComputeProgram_get_Handle_m317173536 (ComputeProgram_t346198837 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeKernel::set_Handle(Cloo.Bindings.CLKernelHandle)
extern "C"  void ComputeKernel_set_Handle_m927696987 (ComputeKernel_t2923705153 * __this, CLKernelHandle_t2809987897  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Cloo.ComputeContext Cloo.ComputeProgram::get_Context()
extern "C"  ComputeContext_t1365812911 * ComputeProgram_get_Context_m2220785381 (ComputeProgram_t346198837 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeKernel::SetValueArgument<Cloo.Bindings.CLMemoryHandle>(System.Int32,T)
#define ComputeKernel_SetValueArgument_TisCLMemoryHandle_t2389804491_m3042893746(__this, ___index0, ___data1, method) ((  void (*) (ComputeKernel_t2923705153 *, int32_t, CLMemoryHandle_t2389804491 , const RuntimeMethod*))ComputeKernel_SetValueArgument_TisCLMemoryHandle_t2389804491_m3042893746_gshared)(__this, ___index0, ___data1, method)
// Cloo.Bindings.CLSamplerHandle Cloo.ComputeSampler::get_Handle()
extern "C"  CLSamplerHandle_t915650828  ComputeSampler_get_Handle_m40855011 (ComputeSampler_t3833417323 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeKernel::SetValueArgument<Cloo.Bindings.CLSamplerHandle>(System.Int32,T)
#define ComputeKernel_SetValueArgument_TisCLSamplerHandle_t915650828_m2985095415(__this, ___index0, ___data1, method) ((  void (*) (ComputeKernel_t2923705153 *, int32_t, CLSamplerHandle_t915650828 , const RuntimeMethod*))ComputeKernel_SetValueArgument_TisCLSamplerHandle_t915650828_m2985095415_gshared)(__this, ___index0, ___data1, method)
// System.Boolean Cloo.ComputeObject::Equals(Cloo.ComputeObject)
extern "C"  bool ComputeObject_Equals_m3003917961 (ComputeObject_t1791575355 * __this, ComputeObject_t1791575355 * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::Equals(System.Object)
extern "C"  bool IntPtr_Equals_m3408989655 (intptr_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IntPtr::GetHashCode()
extern "C"  int32_t IntPtr_GetHashCode_m3588219647 (intptr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Cloo.ComputePlatform>::CopyTo(!0[])
#define List_1_CopyTo_m2597516554(__this, p0, method) ((  void (*) (List_1_t777896704 *, ComputePlatformU5BU5D_t2938311055*, const RuntimeMethod*))List_1_CopyTo_m133310179_gshared)(__this, p0, method)
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Cloo.ComputePlatform>::.ctor(System.Int32)
#define List_1__ctor_m3476885814(__this, p0, method) ((  void (*) (List_1_t777896704 *, int32_t, const RuntimeMethod*))List_1__ctor_m3947764094_gshared)(__this, p0, method)
// System.Void Cloo.ComputePlatform::.ctor(Cloo.Bindings.CLPlatformHandle)
extern "C"  void ComputePlatform__ctor_m1484747161 (ComputePlatform_t3600789258 * __this, CLPlatformHandle_t3404269797  ___handle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Cloo.ComputePlatform>::Add(!0)
#define List_1_Add_m665838036(__this, p0, method) ((  void (*) (List_1_t777896704 *, ComputePlatform_t3600789258 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<Cloo.ComputePlatform>::get_Count()
#define List_1_get_Count_m239222480(__this, method) ((  int32_t (*) (List_1_t777896704 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Cloo.ComputePlatform>::.ctor()
#define List_1__ctor_m1246932516(__this, method) ((  void (*) (List_1_t777896704 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void Cloo.ComputePlatform::set_Handle(Cloo.Bindings.CLPlatformHandle)
extern "C"  void ComputePlatform_set_Handle_m3562533451 (ComputePlatform_t3600789258 * __this, CLPlatformHandle_t3404269797  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeObject/GetInfoDelegate`2<Cloo.Bindings.CLPlatformHandle,Cloo.ComputePlatformInfo>::.ctor(System.Object,System.IntPtr)
#define GetInfoDelegate_2__ctor_m148456036(__this, p0, p1, method) ((  void (*) (GetInfoDelegate_2_t3652029919 *, RuntimeObject *, intptr_t, const RuntimeMethod*))GetInfoDelegate_2__ctor_m148456036_gshared)(__this, p0, p1, method)
// System.String Cloo.ComputeObject::GetStringInfo<Cloo.Bindings.CLPlatformHandle,Cloo.ComputePlatformInfo>(HandleType,InfoType,Cloo.ComputeObject/GetInfoDelegate`2<HandleType,InfoType>)
#define ComputeObject_GetStringInfo_TisCLPlatformHandle_t3404269797_TisComputePlatformInfo_t1022158021_m1537078130(__this, ___handle0, ___paramName1, ___getInfoDelegate2, method) ((  String_t* (*) (ComputeObject_t1791575355 *, CLPlatformHandle_t3404269797 , int32_t, GetInfoDelegate_2_t3652029919 *, const RuntimeMethod*))ComputeObject_GetStringInfo_TisCLPlatformHandle_t3404269797_TisComputePlatformInfo_t1022158021_m1537078130_gshared)(__this, ___handle0, ___paramName1, ___getInfoDelegate2, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<Cloo.ComputeDevice> Cloo.ComputePlatform::QueryDevices()
extern "C"  ReadOnlyCollection_1_t1000789277 * ComputePlatform_QueryDevices_m2202516624 (ComputePlatform_t3600789258 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C"  bool IntPtr_op_Equality_m408849716 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeDevice::.ctor(Cloo.ComputePlatform,Cloo.Bindings.CLDeviceHandle)
extern "C"  void ComputeDevice__ctor_m4162545325 (ComputeDevice_t4083180286 * __this, ComputePlatform_t3600789258 * ___platform0, CLDeviceHandle_t1655913246  ___handle1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeProgram::set_Handle(Cloo.Bindings.CLProgramHandle)
extern "C"  void ComputeProgram_set_Handle_m1177439844 (ComputeProgram_t346198837 * __this, CLProgramHandle_t2486937744  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Cloo.ComputeDevice> Cloo.ComputeContext::get_Devices()
extern "C"  ReadOnlyCollection_1_t1000789277 * ComputeContext_get_Devices_m2832436810 (ComputeContext_t1365812911 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeKernel::.ctor(System.String,Cloo.ComputeProgram)
extern "C"  void ComputeKernel__ctor_m1969448358 (ComputeKernel_t2923705153 * __this, String_t* ___functionName0, ComputeProgram_t346198837 * ___program1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeObject/GetInfoDelegateEx`3<Cloo.Bindings.CLProgramHandle,Cloo.Bindings.CLDeviceHandle,Cloo.ComputeProgramBuildInfo>::.ctor(System.Object,System.IntPtr)
#define GetInfoDelegateEx_3__ctor_m877644504(__this, p0, p1, method) ((  void (*) (GetInfoDelegateEx_3_t3669348736 *, RuntimeObject *, intptr_t, const RuntimeMethod*))GetInfoDelegateEx_3__ctor_m877644504_gshared)(__this, p0, p1, method)
// System.String Cloo.ComputeObject::GetStringInfo<Cloo.Bindings.CLProgramHandle,Cloo.Bindings.CLDeviceHandle,Cloo.ComputeProgramBuildInfo>(MainHandleType,SecondHandleType,InfoType,Cloo.ComputeObject/GetInfoDelegateEx`3<MainHandleType,SecondHandleType,InfoType>)
#define ComputeObject_GetStringInfo_TisCLProgramHandle_t2486937744_TisCLDeviceHandle_t1655913246_TisComputeProgramBuildInfo_t3516951054_m75492913(__this, ___mainHandle0, ___secondHandle1, ___paramName2, ___getInfoDelegate3, method) ((  String_t* (*) (ComputeObject_t1791575355 *, CLProgramHandle_t2486937744 , CLDeviceHandle_t1655913246 , int32_t, GetInfoDelegateEx_3_t3669348736 *, const RuntimeMethod*))ComputeObject_GetStringInfo_TisCLProgramHandle_t2486937744_TisCLDeviceHandle_t1655913246_TisComputeProgramBuildInfo_t3516951054_m75492913_gshared)(__this, ___mainHandle0, ___secondHandle1, ___paramName2, ___getInfoDelegate3, method)
// QueriedType Cloo.ComputeObject::GetInfo<Cloo.Bindings.CLProgramHandle,Cloo.Bindings.CLDeviceHandle,Cloo.ComputeProgramBuildInfo,System.UInt32>(MainHandleType,SecondHandleType,InfoType,Cloo.ComputeObject/GetInfoDelegateEx`3<MainHandleType,SecondHandleType,InfoType>)
#define ComputeObject_GetInfo_TisCLProgramHandle_t2486937744_TisCLDeviceHandle_t1655913246_TisComputeProgramBuildInfo_t3516951054_TisUInt32_t2560061978_m3082471654(__this, ___mainHandle0, ___secondHandle1, ___paramName2, ___getInfoDelegate3, method) ((  uint32_t (*) (ComputeObject_t1791575355 *, CLProgramHandle_t2486937744 , CLDeviceHandle_t1655913246 , int32_t, GetInfoDelegateEx_3_t3669348736 *, const RuntimeMethod*))ComputeObject_GetInfo_TisCLProgramHandle_t2486937744_TisCLDeviceHandle_t1655913246_TisComputeProgramBuildInfo_t3516951054_TisUInt32_t2560061978_m3082471654_gshared)(__this, ___mainHandle0, ___secondHandle1, ___paramName2, ___getInfoDelegate3, method)
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C"  void GC_SuppressFinalize_m1177400158 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.GC::KeepAlive(System.Object)
extern "C"  void GC_KeepAlive_m1400443516 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::Finalize()
extern "C"  void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Cloo.ComputeSampler::set_Handle(Cloo.Bindings.CLSamplerHandle)
extern "C"  void ComputeSampler_set_Handle_m2222504969 (ComputeSampler_t3833417323 * __this, CLSamplerHandle_t915650828  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.String)
extern "C"  void Version__ctor_m1394137037 (Version_t3456873960 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IntPtr::ToInt64()
extern "C"  int64_t IntPtr_ToInt64_m192765549 (intptr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Boolean Cloo.Bindings.CLCommandQueueHandle::get_IsValid()
extern "C"  bool CLCommandQueueHandle_get_IsValid_m2224107261 (CLCommandQueueHandle_t218408696 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CLCommandQueueHandle_get_IsValid_m2224107261_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_value_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
extern "C"  bool CLCommandQueueHandle_get_IsValid_m2224107261_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CLCommandQueueHandle_t218408696 * _thisAdjusted = reinterpret_cast<CLCommandQueueHandle_t218408696 *>(__this + 1);
	return CLCommandQueueHandle_get_IsValid_m2224107261(_thisAdjusted, method);
}
// System.IntPtr Cloo.Bindings.CLCommandQueueHandle::get_Value()
extern "C"  intptr_t CLCommandQueueHandle_get_Value_m2760082377 (CLCommandQueueHandle_t218408696 * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_value_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  intptr_t CLCommandQueueHandle_get_Value_m2760082377_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CLCommandQueueHandle_t218408696 * _thisAdjusted = reinterpret_cast<CLCommandQueueHandle_t218408696 *>(__this + 1);
	return CLCommandQueueHandle_get_Value_m2760082377(_thisAdjusted, method);
}
// System.Void Cloo.Bindings.CLCommandQueueHandle::Invalidate()
extern "C"  void CLCommandQueueHandle_Invalidate_m917873785 (CLCommandQueueHandle_t218408696 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CLCommandQueueHandle_Invalidate_m917873785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_value_0((intptr_t)(0));
		return;
	}
}
extern "C"  void CLCommandQueueHandle_Invalidate_m917873785_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CLCommandQueueHandle_t218408696 * _thisAdjusted = reinterpret_cast<CLCommandQueueHandle_t218408696 *>(__this + 1);
	CLCommandQueueHandle_Invalidate_m917873785(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Cloo.Bindings.CLContextHandle::get_IsValid()
extern "C"  bool CLContextHandle_get_IsValid_m3325934603 (CLContextHandle_t447015429 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CLContextHandle_get_IsValid_m3325934603_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_value_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
extern "C"  bool CLContextHandle_get_IsValid_m3325934603_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CLContextHandle_t447015429 * _thisAdjusted = reinterpret_cast<CLContextHandle_t447015429 *>(__this + 1);
	return CLContextHandle_get_IsValid_m3325934603(_thisAdjusted, method);
}
// System.IntPtr Cloo.Bindings.CLContextHandle::get_Value()
extern "C"  intptr_t CLContextHandle_get_Value_m735911638 (CLContextHandle_t447015429 * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_value_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  intptr_t CLContextHandle_get_Value_m735911638_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CLContextHandle_t447015429 * _thisAdjusted = reinterpret_cast<CLContextHandle_t447015429 *>(__this + 1);
	return CLContextHandle_get_Value_m735911638(_thisAdjusted, method);
}
// System.Void Cloo.Bindings.CLContextHandle::Invalidate()
extern "C"  void CLContextHandle_Invalidate_m2084838429 (CLContextHandle_t447015429 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CLContextHandle_Invalidate_m2084838429_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_value_0((intptr_t)(0));
		return;
	}
}
extern "C"  void CLContextHandle_Invalidate_m2084838429_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CLContextHandle_t447015429 * _thisAdjusted = reinterpret_cast<CLContextHandle_t447015429 *>(__this + 1);
	CLContextHandle_Invalidate_m2084838429(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Cloo.Bindings.CLDeviceHandle::get_Value()
extern "C"  intptr_t CLDeviceHandle_get_Value_m2678713995 (CLDeviceHandle_t1655913246 * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_value_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  intptr_t CLDeviceHandle_get_Value_m2678713995_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CLDeviceHandle_t1655913246 * _thisAdjusted = reinterpret_cast<CLDeviceHandle_t1655913246 *>(__this + 1);
	return CLDeviceHandle_get_Value_m2678713995(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Cloo.Bindings.CLEventHandle::get_IsValid()
extern "C"  bool CLEventHandle_get_IsValid_m2311008441 (CLEventHandle_t1689096655 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CLEventHandle_get_IsValid_m2311008441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_value_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
extern "C"  bool CLEventHandle_get_IsValid_m2311008441_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CLEventHandle_t1689096655 * _thisAdjusted = reinterpret_cast<CLEventHandle_t1689096655 *>(__this + 1);
	return CLEventHandle_get_IsValid_m2311008441(_thisAdjusted, method);
}
// System.IntPtr Cloo.Bindings.CLEventHandle::get_Value()
extern "C"  intptr_t CLEventHandle_get_Value_m3369786685 (CLEventHandle_t1689096655 * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_value_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  intptr_t CLEventHandle_get_Value_m3369786685_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CLEventHandle_t1689096655 * _thisAdjusted = reinterpret_cast<CLEventHandle_t1689096655 *>(__this + 1);
	return CLEventHandle_get_Value_m3369786685(_thisAdjusted, method);
}
// System.Void Cloo.Bindings.CLEventHandle::Invalidate()
extern "C"  void CLEventHandle_Invalidate_m1997689511 (CLEventHandle_t1689096655 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CLEventHandle_Invalidate_m1997689511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_value_0((intptr_t)(0));
		return;
	}
}
extern "C"  void CLEventHandle_Invalidate_m1997689511_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CLEventHandle_t1689096655 * _thisAdjusted = reinterpret_cast<CLEventHandle_t1689096655 *>(__this + 1);
	CLEventHandle_Invalidate_m1997689511(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Cloo.Bindings.ICL11 Cloo.Bindings.CLInterface::get_CL11()
extern "C"  RuntimeObject* CLInterface_get_CL11_m1440148108 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CLInterface_get_CL11_m1440148108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ((CLInterface_t4186500370_StaticFields*)il2cpp_codegen_static_fields_for(CLInterface_t4186500370_il2cpp_TypeInfo_var))->get__CL11_0();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		NotImplementedException_t3489357830 * L_2 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,CLInterface_get_CL11_m1440148108_RuntimeMethod_var);
	}

IL_0013:
	{
		RuntimeObject* L_3 = ((CLInterface_t4186500370_StaticFields*)il2cpp_codegen_static_fields_for(CLInterface_t4186500370_il2cpp_TypeInfo_var))->get__CL11_0();
		V_1 = L_3;
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// Cloo.Bindings.ICL12 Cloo.Bindings.CLInterface::get_CL12()
extern "C"  RuntimeObject* CLInterface_get_CL12_m886088080 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CLInterface_get_CL12_m886088080_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ((CLInterface_t4186500370_StaticFields*)il2cpp_codegen_static_fields_for(CLInterface_t4186500370_il2cpp_TypeInfo_var))->get__CL12_1();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		NotImplementedException_t3489357830 * L_2 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,CLInterface_get_CL12_m886088080_RuntimeMethod_var);
	}

IL_0013:
	{
		RuntimeObject* L_3 = ((CLInterface_t4186500370_StaticFields*)il2cpp_codegen_static_fields_for(CLInterface_t4186500370_il2cpp_TypeInfo_var))->get__CL12_1();
		V_1 = L_3;
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Boolean Cloo.Bindings.CLInterface::IsAvailable()
extern "C"  bool CLInterface_IsAvailable_m590777017 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CLInterface_IsAvailable_m590777017_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ((CLInterface_t4186500370_StaticFields*)il2cpp_codegen_static_fields_for(CLInterface_t4186500370_il2cpp_TypeInfo_var))->get__CL12_1();
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
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
// System.Boolean Cloo.Bindings.CLKernelHandle::get_IsValid()
extern "C"  bool CLKernelHandle_get_IsValid_m3501045517 (CLKernelHandle_t2809987897 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CLKernelHandle_get_IsValid_m3501045517_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_value_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
extern "C"  bool CLKernelHandle_get_IsValid_m3501045517_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CLKernelHandle_t2809987897 * _thisAdjusted = reinterpret_cast<CLKernelHandle_t2809987897 *>(__this + 1);
	return CLKernelHandle_get_IsValid_m3501045517(_thisAdjusted, method);
}
// System.IntPtr Cloo.Bindings.CLKernelHandle::get_Value()
extern "C"  intptr_t CLKernelHandle_get_Value_m2940243222 (CLKernelHandle_t2809987897 * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_value_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  intptr_t CLKernelHandle_get_Value_m2940243222_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CLKernelHandle_t2809987897 * _thisAdjusted = reinterpret_cast<CLKernelHandle_t2809987897 *>(__this + 1);
	return CLKernelHandle_get_Value_m2940243222(_thisAdjusted, method);
}
// System.Void Cloo.Bindings.CLKernelHandle::Invalidate()
extern "C"  void CLKernelHandle_Invalidate_m478856493 (CLKernelHandle_t2809987897 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CLKernelHandle_Invalidate_m478856493_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_value_0((intptr_t)(0));
		return;
	}
}
extern "C"  void CLKernelHandle_Invalidate_m478856493_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CLKernelHandle_t2809987897 * _thisAdjusted = reinterpret_cast<CLKernelHandle_t2809987897 *>(__this + 1);
	CLKernelHandle_Invalidate_m478856493(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Cloo.Bindings.CLMemoryHandle::get_IsValid()
extern "C"  bool CLMemoryHandle_get_IsValid_m2235700658 (CLMemoryHandle_t2389804491 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CLMemoryHandle_get_IsValid_m2235700658_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_value_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
extern "C"  bool CLMemoryHandle_get_IsValid_m2235700658_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CLMemoryHandle_t2389804491 * _thisAdjusted = reinterpret_cast<CLMemoryHandle_t2389804491 *>(__this + 1);
	return CLMemoryHandle_get_IsValid_m2235700658(_thisAdjusted, method);
}
// System.IntPtr Cloo.Bindings.CLMemoryHandle::get_Value()
extern "C"  intptr_t CLMemoryHandle_get_Value_m1881717988 (CLMemoryHandle_t2389804491 * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_value_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  intptr_t CLMemoryHandle_get_Value_m1881717988_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CLMemoryHandle_t2389804491 * _thisAdjusted = reinterpret_cast<CLMemoryHandle_t2389804491 *>(__this + 1);
	return CLMemoryHandle_get_Value_m1881717988(_thisAdjusted, method);
}
// System.Void Cloo.Bindings.CLMemoryHandle::Invalidate()
extern "C"  void CLMemoryHandle_Invalidate_m1796141593 (CLMemoryHandle_t2389804491 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CLMemoryHandle_Invalidate_m1796141593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_value_0((intptr_t)(0));
		return;
	}
}
extern "C"  void CLMemoryHandle_Invalidate_m1796141593_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CLMemoryHandle_t2389804491 * _thisAdjusted = reinterpret_cast<CLMemoryHandle_t2389804491 *>(__this + 1);
	CLMemoryHandle_Invalidate_m1796141593(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Cloo.Bindings.CLPlatformHandle::get_Value()
extern "C"  intptr_t CLPlatformHandle_get_Value_m2002329956 (CLPlatformHandle_t3404269797 * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_value_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  intptr_t CLPlatformHandle_get_Value_m2002329956_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CLPlatformHandle_t3404269797 * _thisAdjusted = reinterpret_cast<CLPlatformHandle_t3404269797 *>(__this + 1);
	return CLPlatformHandle_get_Value_m2002329956(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Cloo.Bindings.CLProgramHandle::get_IsValid()
extern "C"  bool CLProgramHandle_get_IsValid_m98553484 (CLProgramHandle_t2486937744 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CLProgramHandle_get_IsValid_m98553484_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_value_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
extern "C"  bool CLProgramHandle_get_IsValid_m98553484_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CLProgramHandle_t2486937744 * _thisAdjusted = reinterpret_cast<CLProgramHandle_t2486937744 *>(__this + 1);
	return CLProgramHandle_get_IsValid_m98553484(_thisAdjusted, method);
}
// System.IntPtr Cloo.Bindings.CLProgramHandle::get_Value()
extern "C"  intptr_t CLProgramHandle_get_Value_m664975121 (CLProgramHandle_t2486937744 * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_value_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  intptr_t CLProgramHandle_get_Value_m664975121_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CLProgramHandle_t2486937744 * _thisAdjusted = reinterpret_cast<CLProgramHandle_t2486937744 *>(__this + 1);
	return CLProgramHandle_get_Value_m664975121(_thisAdjusted, method);
}
// System.Void Cloo.Bindings.CLProgramHandle::Invalidate()
extern "C"  void CLProgramHandle_Invalidate_m1993159295 (CLProgramHandle_t2486937744 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CLProgramHandle_Invalidate_m1993159295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_value_0((intptr_t)(0));
		return;
	}
}
extern "C"  void CLProgramHandle_Invalidate_m1993159295_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CLProgramHandle_t2486937744 * _thisAdjusted = reinterpret_cast<CLProgramHandle_t2486937744 *>(__this + 1);
	CLProgramHandle_Invalidate_m1993159295(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Cloo.Bindings.CLSamplerHandle::get_IsValid()
extern "C"  bool CLSamplerHandle_get_IsValid_m3163180585 (CLSamplerHandle_t915650828 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CLSamplerHandle_get_IsValid_m3163180585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_value_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
extern "C"  bool CLSamplerHandle_get_IsValid_m3163180585_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CLSamplerHandle_t915650828 * _thisAdjusted = reinterpret_cast<CLSamplerHandle_t915650828 *>(__this + 1);
	return CLSamplerHandle_get_IsValid_m3163180585(_thisAdjusted, method);
}
// System.IntPtr Cloo.Bindings.CLSamplerHandle::get_Value()
extern "C"  intptr_t CLSamplerHandle_get_Value_m3534879856 (CLSamplerHandle_t915650828 * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_value_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  intptr_t CLSamplerHandle_get_Value_m3534879856_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CLSamplerHandle_t915650828 * _thisAdjusted = reinterpret_cast<CLSamplerHandle_t915650828 *>(__this + 1);
	return CLSamplerHandle_get_Value_m3534879856(_thisAdjusted, method);
}
// System.Void Cloo.Bindings.CLSamplerHandle::Invalidate()
extern "C"  void CLSamplerHandle_Invalidate_m3540269400 (CLSamplerHandle_t915650828 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CLSamplerHandle_Invalidate_m3540269400_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_value_0((intptr_t)(0));
		return;
	}
}
extern "C"  void CLSamplerHandle_Invalidate_m3540269400_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CLSamplerHandle_t915650828 * _thisAdjusted = reinterpret_cast<CLSamplerHandle_t915650828 *>(__this + 1);
	CLSamplerHandle_Invalidate_m3540269400(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_ComputeContextNotifier_t2458212493 (ComputeContextNotifier_t2458212493 * __this, String_t* ___errorInfo0, intptr_t ___clDataPtr1, intptr_t ___clDataSize2, intptr_t ___userDataPtr3, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(char*, intptr_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___errorInfo0' to native representation
	char* ____errorInfo0_marshaled = NULL;
	____errorInfo0_marshaled = il2cpp_codegen_marshal_string(___errorInfo0);

	// Native function invocation
	il2cppPInvokeFunc(____errorInfo0_marshaled, ___clDataPtr1, ___clDataSize2, ___userDataPtr3);

	// Marshaling cleanup of parameter '___errorInfo0' native representation
	il2cpp_codegen_marshal_free(____errorInfo0_marshaled);
	____errorInfo0_marshaled = NULL;

}
// System.Void Cloo.Bindings.ComputeContextNotifier::.ctor(System.Object,System.IntPtr)
extern "C"  void ComputeContextNotifier__ctor_m140174265 (ComputeContextNotifier_t2458212493 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Cloo.Bindings.ComputeContextNotifier::Invoke(System.String,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void ComputeContextNotifier_Invoke_m3697659658 (ComputeContextNotifier_t2458212493 * __this, String_t* ___errorInfo0, intptr_t ___clDataPtr1, intptr_t ___clDataSize2, intptr_t ___userDataPtr3, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ComputeContextNotifier_Invoke_m3697659658((ComputeContextNotifier_t2458212493 *)__this->get_prev_9(), ___errorInfo0, ___clDataPtr1, ___clDataSize2, ___userDataPtr3, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___errorInfo0, ___clDataPtr1, ___clDataSize2, ___userDataPtr3, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___errorInfo0, ___clDataPtr1, ___clDataSize2, ___userDataPtr3, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< String_t*, intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___errorInfo0, ___clDataPtr1, ___clDataSize2, ___userDataPtr3);
					else
						GenericVirtActionInvoker4< String_t*, intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___errorInfo0, ___clDataPtr1, ___clDataSize2, ___userDataPtr3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< String_t*, intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___errorInfo0, ___clDataPtr1, ___clDataSize2, ___userDataPtr3);
					else
						VirtActionInvoker4< String_t*, intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___errorInfo0, ___clDataPtr1, ___clDataSize2, ___userDataPtr3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___errorInfo0, ___clDataPtr1, ___clDataSize2, ___userDataPtr3, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, ___errorInfo0, ___clDataPtr1, ___clDataSize2, ___userDataPtr3);
					else
						GenericVirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, ___errorInfo0, ___clDataPtr1, ___clDataSize2, ___userDataPtr3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___errorInfo0, ___clDataPtr1, ___clDataSize2, ___userDataPtr3);
					else
						VirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___errorInfo0, ___clDataPtr1, ___clDataSize2, ___userDataPtr3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___errorInfo0, ___clDataPtr1, ___clDataSize2, ___userDataPtr3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Cloo.Bindings.ComputeContextNotifier::BeginInvoke(System.String,System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* ComputeContextNotifier_BeginInvoke_m793741032 (ComputeContextNotifier_t2458212493 * __this, String_t* ___errorInfo0, intptr_t ___clDataPtr1, intptr_t ___clDataSize2, intptr_t ___userDataPtr3, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeContextNotifier_BeginInvoke_m793741032_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___errorInfo0;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___clDataPtr1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___clDataSize2);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___userDataPtr3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void Cloo.Bindings.ComputeContextNotifier::EndInvoke(System.IAsyncResult)
extern "C"  void ComputeContextNotifier_EndInvoke_m757379588 (ComputeContextNotifier_t2458212493 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_ComputeEventCallback_t888729672 (ComputeEventCallback_t888729672 * __this, CLEventHandle_t1689096655  ___eventHandle0, int32_t ___cmdExecStatusOrErr1, intptr_t ___userData2, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(CLEventHandle_t1689096655 , int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___eventHandle0, ___cmdExecStatusOrErr1, ___userData2);

}
// System.Void Cloo.Bindings.ComputeEventCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void ComputeEventCallback__ctor_m113015864 (ComputeEventCallback_t888729672 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Cloo.Bindings.ComputeEventCallback::Invoke(Cloo.Bindings.CLEventHandle,System.Int32,System.IntPtr)
extern "C"  void ComputeEventCallback_Invoke_m557872014 (ComputeEventCallback_t888729672 * __this, CLEventHandle_t1689096655  ___eventHandle0, int32_t ___cmdExecStatusOrErr1, intptr_t ___userData2, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ComputeEventCallback_Invoke_m557872014((ComputeEventCallback_t888729672 *)__this->get_prev_9(), ___eventHandle0, ___cmdExecStatusOrErr1, ___userData2, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, CLEventHandle_t1689096655 , int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___eventHandle0, ___cmdExecStatusOrErr1, ___userData2, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, CLEventHandle_t1689096655 , int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___eventHandle0, ___cmdExecStatusOrErr1, ___userData2, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< CLEventHandle_t1689096655 , int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___eventHandle0, ___cmdExecStatusOrErr1, ___userData2);
					else
						GenericVirtActionInvoker3< CLEventHandle_t1689096655 , int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___eventHandle0, ___cmdExecStatusOrErr1, ___userData2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< CLEventHandle_t1689096655 , int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___eventHandle0, ___cmdExecStatusOrErr1, ___userData2);
					else
						VirtActionInvoker3< CLEventHandle_t1689096655 , int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___eventHandle0, ___cmdExecStatusOrErr1, ___userData2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, CLEventHandle_t1689096655 , int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___eventHandle0, ___cmdExecStatusOrErr1, ___userData2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Cloo.Bindings.ComputeEventCallback::BeginInvoke(Cloo.Bindings.CLEventHandle,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* ComputeEventCallback_BeginInvoke_m2327356030 (ComputeEventCallback_t888729672 * __this, CLEventHandle_t1689096655  ___eventHandle0, int32_t ___cmdExecStatusOrErr1, intptr_t ___userData2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeEventCallback_BeginInvoke_m2327356030_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(CLEventHandle_t1689096655_il2cpp_TypeInfo_var, &___eventHandle0);
	__d_args[1] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___cmdExecStatusOrErr1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___userData2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Cloo.Bindings.ComputeEventCallback::EndInvoke(System.IAsyncResult)
extern "C"  void ComputeEventCallback_EndInvoke_m4039002486 (ComputeEventCallback_t888729672 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_ComputeProgramBuildNotifier_t317311244 (ComputeProgramBuildNotifier_t317311244 * __this, CLProgramHandle_t2486937744  ___programHandle0, intptr_t ___notifyDataPtr1, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(CLProgramHandle_t2486937744 , intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___programHandle0, ___notifyDataPtr1);

}
// System.Void Cloo.Bindings.ComputeProgramBuildNotifier::.ctor(System.Object,System.IntPtr)
extern "C"  void ComputeProgramBuildNotifier__ctor_m800888529 (ComputeProgramBuildNotifier_t317311244 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Cloo.Bindings.ComputeProgramBuildNotifier::Invoke(Cloo.Bindings.CLProgramHandle,System.IntPtr)
extern "C"  void ComputeProgramBuildNotifier_Invoke_m2954370104 (ComputeProgramBuildNotifier_t317311244 * __this, CLProgramHandle_t2486937744  ___programHandle0, intptr_t ___notifyDataPtr1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ComputeProgramBuildNotifier_Invoke_m2954370104((ComputeProgramBuildNotifier_t317311244 *)__this->get_prev_9(), ___programHandle0, ___notifyDataPtr1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, CLProgramHandle_t2486937744 , intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___programHandle0, ___notifyDataPtr1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, CLProgramHandle_t2486937744 , intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___programHandle0, ___notifyDataPtr1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< CLProgramHandle_t2486937744 , intptr_t >::Invoke(targetMethod, targetThis, ___programHandle0, ___notifyDataPtr1);
					else
						GenericVirtActionInvoker2< CLProgramHandle_t2486937744 , intptr_t >::Invoke(targetMethod, targetThis, ___programHandle0, ___notifyDataPtr1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< CLProgramHandle_t2486937744 , intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___programHandle0, ___notifyDataPtr1);
					else
						VirtActionInvoker2< CLProgramHandle_t2486937744 , intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___programHandle0, ___notifyDataPtr1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, CLProgramHandle_t2486937744 , intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___programHandle0, ___notifyDataPtr1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Cloo.Bindings.ComputeProgramBuildNotifier::BeginInvoke(Cloo.Bindings.CLProgramHandle,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* ComputeProgramBuildNotifier_BeginInvoke_m1599707172 (ComputeProgramBuildNotifier_t317311244 * __this, CLProgramHandle_t2486937744  ___programHandle0, intptr_t ___notifyDataPtr1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeProgramBuildNotifier_BeginInvoke_m1599707172_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(CLProgramHandle_t2486937744_il2cpp_TypeInfo_var, &___programHandle0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___notifyDataPtr1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Cloo.Bindings.ComputeProgramBuildNotifier::EndInvoke(System.IAsyncResult)
extern "C"  void ComputeProgramBuildNotifier_EndInvoke_m976345249 (ComputeProgramBuildNotifier_t317311244 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cloo.BuildProgramFailureComputeException::.ctor()
extern "C"  void BuildProgramFailureComputeException__ctor_m1003530587 (BuildProgramFailureComputeException_t2506631677 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-11), /*hidden argument*/NULL);
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
// System.Void Cloo.CompilerNotAvailableComputeException::.ctor()
extern "C"  void CompilerNotAvailableComputeException__ctor_m1207691428 (CompilerNotAvailableComputeException_t3264770924 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-3), /*hidden argument*/NULL);
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
// Cloo.Bindings.CLCommandQueueHandle Cloo.ComputeCommandQueue::get_Handle()
extern "C"  CLCommandQueueHandle_t218408696  ComputeCommandQueue_get_Handle_m768798509 (ComputeCommandQueue_t3979026963 * __this, const RuntimeMethod* method)
{
	{
		CLCommandQueueHandle_t218408696  L_0 = __this->get_U3CHandleU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Cloo.ComputeCommandQueue::set_Handle(Cloo.Bindings.CLCommandQueueHandle)
extern "C"  void ComputeCommandQueue_set_Handle_m615939970 (ComputeCommandQueue_t3979026963 * __this, CLCommandQueueHandle_t218408696  ___value0, const RuntimeMethod* method)
{
	{
		CLCommandQueueHandle_t218408696  L_0 = ___value0;
		__this->set_U3CHandleU3Ek__BackingField_6(L_0);
		return;
	}
}
// Cloo.ComputeContext Cloo.ComputeCommandQueue::get_Context()
extern "C"  ComputeContext_t1365812911 * ComputeCommandQueue_get_Context_m3899312057 (ComputeCommandQueue_t3979026963 * __this, const RuntimeMethod* method)
{
	ComputeContext_t1365812911 * V_0 = NULL;
	{
		ComputeContext_t1365812911 * L_0 = __this->get_context_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ComputeContext_t1365812911 * L_1 = V_0;
		return L_1;
	}
}
// Cloo.ComputeDevice Cloo.ComputeCommandQueue::get_Device()
extern "C"  ComputeDevice_t4083180286 * ComputeCommandQueue_get_Device_m38748270 (ComputeCommandQueue_t3979026963 * __this, const RuntimeMethod* method)
{
	ComputeDevice_t4083180286 * V_0 = NULL;
	{
		ComputeDevice_t4083180286 * L_0 = __this->get_device_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ComputeDevice_t4083180286 * L_1 = V_0;
		return L_1;
	}
}
// System.Void Cloo.ComputeCommandQueue::.ctor(Cloo.ComputeContext,Cloo.ComputeDevice,Cloo.ComputeCommandQueueFlags)
extern "C"  void ComputeCommandQueue__ctor_m4255704759 (ComputeCommandQueue_t3979026963 * __this, ComputeContext_t1365812911 * ___context0, ComputeDevice_t4083180286 * ___device1, int64_t ___properties2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeCommandQueue__ctor_m4255704759_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CLCommandQueueHandle_t218408696  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		ComputeResource__ctor_m415879097(__this, /*hidden argument*/NULL);
		V_0 = 0;
		RuntimeObject* L_0 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		ComputeContext_t1365812911 * L_1 = ___context0;
		NullCheck(L_1);
		CLContextHandle_t447015429  L_2 = ComputeContext_get_Handle_m1664813480(L_1, /*hidden argument*/NULL);
		ComputeDevice_t4083180286 * L_3 = ___device1;
		NullCheck(L_3);
		CLDeviceHandle_t1655913246  L_4 = ComputeDevice_get_Handle_m1377678137(L_3, /*hidden argument*/NULL);
		int64_t L_5 = ___properties2;
		NullCheck(L_0);
		CLCommandQueueHandle_t218408696  L_6 = InterfaceFuncInvoker4< CLCommandQueueHandle_t218408696 , CLContextHandle_t447015429 , CLDeviceHandle_t1655913246 , int64_t, int32_t* >::Invoke(7 /* Cloo.Bindings.CLCommandQueueHandle Cloo.Bindings.ICL10::CreateCommandQueue(Cloo.Bindings.CLContextHandle,Cloo.Bindings.CLDeviceHandle,Cloo.ComputeCommandQueueFlags,Cloo.ComputeErrorCode&) */, ICL10_t3568785851_il2cpp_TypeInfo_var, L_0, L_2, L_4, L_5, (&V_0));
		ComputeCommandQueue_set_Handle_m615939970(__this, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		ComputeException_ThrowOnError_m4115276668(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		CLCommandQueueHandle_t218408696  L_8 = ComputeCommandQueue_get_Handle_m768798509(__this, /*hidden argument*/NULL);
		V_1 = L_8;
		intptr_t L_9 = CLCommandQueueHandle_get_Value_m2760082377((&V_1), /*hidden argument*/NULL);
		ComputeObject_SetID_m1020599628(__this, L_9, /*hidden argument*/NULL);
		ComputeDevice_t4083180286 * L_10 = ___device1;
		__this->set_device_2(L_10);
		ComputeContext_t1365812911 * L_11 = ___context0;
		__this->set_context_1(L_11);
		int64_t L_12 = ___properties2;
		__this->set_outOfOrderExec_3((bool)((((int64_t)((int64_t)((int64_t)L_12&(int64_t)(((int64_t)((int64_t)1)))))) == ((int64_t)(((int64_t)((int64_t)1)))))? 1 : 0));
		int64_t L_13 = ___properties2;
		__this->set_profiling_4((bool)((((int64_t)((int64_t)((int64_t)L_13&(int64_t)(((int64_t)((int64_t)2)))))) == ((int64_t)(((int64_t)((int64_t)2)))))? 1 : 0));
		List_1_t3592367935 * L_14 = (List_1_t3592367935 *)il2cpp_codegen_object_new(List_1_t3592367935_il2cpp_TypeInfo_var);
		List_1__ctor_m3130116931(L_14, /*hidden argument*/List_1__ctor_m3130116931_RuntimeMethod_var);
		__this->set_Events_5(L_14);
		return;
	}
}
// System.Void Cloo.ComputeCommandQueue::Execute(Cloo.ComputeKernel,System.IntPtr[],System.IntPtr[],System.IntPtr[],System.Collections.Generic.ICollection`1<Cloo.ComputeEventBase>)
extern "C"  void ComputeCommandQueue_Execute_m3365502879 (ComputeCommandQueue_t3979026963 * __this, ComputeKernel_t2923705153 * ___kernel0, IntPtrU5BU5D_t4013366056* ___globalWorkOffset1, IntPtrU5BU5D_t4013366056* ___globalWorkSize2, IntPtrU5BU5D_t4013366056* ___localWorkSize3, RuntimeObject* ___events4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeCommandQueue_Execute_m3365502879_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CLEventHandleU5BU5D_t4276533782* V_1 = NULL;
	bool V_2 = false;
	CLEventHandleU5BU5D_t4276533782* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	CLEventHandleU5BU5D_t4276533782* G_B6_0 = NULL;
	{
		RuntimeObject* L_0 = ___events4;
		CLEventHandleU5BU5D_t4276533782* L_1 = ComputeTools_ExtractHandles_m2843993479(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		RuntimeObject* L_2 = ___events4;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_3 = ___events4;
		NullCheck(L_3);
		bool L_4 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<Cloo.ComputeEventBase>::get_IsReadOnly() */, ICollection_1_t653478131_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_2 = (bool)G_B3_0;
		bool L_5 = V_2;
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		G_B6_0 = ((CLEventHandleU5BU5D_t4276533782*)(NULL));
		goto IL_0029;
	}

IL_0023:
	{
		G_B6_0 = ((CLEventHandleU5BU5D_t4276533782*)SZArrayNew(CLEventHandleU5BU5D_t4276533782_il2cpp_TypeInfo_var, (uint32_t)1));
	}

IL_0029:
	{
		V_3 = G_B6_0;
		RuntimeObject* L_6 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		CLCommandQueueHandle_t218408696  L_7 = ComputeCommandQueue_get_Handle_m768798509(__this, /*hidden argument*/NULL);
		ComputeKernel_t2923705153 * L_8 = ___kernel0;
		NullCheck(L_8);
		CLKernelHandle_t2809987897  L_9 = ComputeKernel_get_Handle_m251366303(L_8, /*hidden argument*/NULL);
		IntPtrU5BU5D_t4013366056* L_10 = ___globalWorkSize2;
		NullCheck(L_10);
		IntPtrU5BU5D_t4013366056* L_11 = ___globalWorkOffset1;
		IntPtrU5BU5D_t4013366056* L_12 = ___globalWorkSize2;
		IntPtrU5BU5D_t4013366056* L_13 = ___localWorkSize3;
		int32_t L_14 = V_0;
		CLEventHandleU5BU5D_t4276533782* L_15 = V_1;
		CLEventHandleU5BU5D_t4276533782* L_16 = V_3;
		NullCheck(L_6);
		int32_t L_17 = InterfaceFuncInvoker9< int32_t, CLCommandQueueHandle_t218408696 , CLKernelHandle_t2809987897 , int32_t, IntPtrU5BU5D_t4013366056*, IntPtrU5BU5D_t4013366056*, IntPtrU5BU5D_t4013366056*, int32_t, CLEventHandleU5BU5D_t4276533782*, CLEventHandleU5BU5D_t4276533782* >::Invoke(28 /* Cloo.ComputeErrorCode Cloo.Bindings.ICL10::EnqueueNDRangeKernel(Cloo.Bindings.CLCommandQueueHandle,Cloo.Bindings.CLKernelHandle,System.Int32,System.IntPtr[],System.IntPtr[],System.IntPtr[],System.Int32,Cloo.Bindings.CLEventHandle[],Cloo.Bindings.CLEventHandle[]) */, ICL10_t3568785851_il2cpp_TypeInfo_var, L_6, L_7, L_9, (((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))), L_11, L_12, L_13, L_14, L_15, L_16);
		V_4 = L_17;
		int32_t L_18 = V_4;
		ComputeException_ThrowOnError_m4115276668(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		bool L_19 = V_2;
		V_5 = L_19;
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_0070;
		}
	}
	{
		RuntimeObject* L_21 = ___events4;
		CLEventHandleU5BU5D_t4276533782* L_22 = V_3;
		NullCheck(L_22);
		int32_t L_23 = 0;
		CLEventHandle_t1689096655  L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		ComputeEvent_t249674601 * L_25 = (ComputeEvent_t249674601 *)il2cpp_codegen_object_new(ComputeEvent_t249674601_il2cpp_TypeInfo_var);
		ComputeEvent__ctor_m3536432089(L_25, L_24, __this, /*hidden argument*/NULL);
		NullCheck(L_21);
		InterfaceActionInvoker1< ComputeEventBase_t2120293193 * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Cloo.ComputeEventBase>::Add(!0) */, ICollection_1_t653478131_il2cpp_TypeInfo_var, L_21, L_25);
	}

IL_0070:
	{
		return;
	}
}
// System.Void Cloo.ComputeCommandQueue::Finish()
extern "C"  void ComputeCommandQueue_Finish_m1809255829 (ComputeCommandQueue_t3979026963 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeCommandQueue_Finish_m1809255829_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		CLCommandQueueHandle_t218408696  L_1 = ComputeCommandQueue_get_Handle_m768798509(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, CLCommandQueueHandle_t218408696  >::Invoke(25 /* Cloo.ComputeErrorCode Cloo.Bindings.ICL10::Finish(Cloo.Bindings.CLCommandQueueHandle) */, ICL10_t3568785851_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		ComputeException_ThrowOnError_m4115276668(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cloo.ComputeCommandQueue::Flush()
extern "C"  void ComputeCommandQueue_Flush_m3352194512 (ComputeCommandQueue_t3979026963 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeCommandQueue_Flush_m3352194512_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		CLCommandQueueHandle_t218408696  L_1 = ComputeCommandQueue_get_Handle_m768798509(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, CLCommandQueueHandle_t218408696  >::Invoke(24 /* Cloo.ComputeErrorCode Cloo.Bindings.ICL10::Flush(Cloo.Bindings.CLCommandQueueHandle) */, ICL10_t3568785851_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		ComputeException_ThrowOnError_m4115276668(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cloo.ComputeCommandQueue::Dispose(System.Boolean)
extern "C"  void ComputeCommandQueue_Dispose_m3057069637 (ComputeCommandQueue_t3979026963 * __this, bool ___manual0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeCommandQueue_Dispose_m3057069637_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	ComputeEventBase_t2120293193 * V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	ComputeEventBase_t2120293193 * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	CLCommandQueueHandle_t218408696  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = ___manual0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_Events_5();
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Cloo.ComputeEventBase>::GetEnumerator() */, IEnumerable_1_t1100146082_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_0016:
		{
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			ComputeEventBase_t2120293193 * L_5 = InterfaceFuncInvoker0< ComputeEventBase_t2120293193 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Cloo.ComputeEventBase>::get_Current() */, IEnumerator_1_t2552863661_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			ComputeEventBase_t2120293193 * L_6 = V_2;
			V_3 = (bool)((!(((RuntimeObject*)(ComputeEventBase_t2120293193 *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_7 = V_3;
			if (!L_7)
			{
				goto IL_002d;
			}
		}

IL_0026:
		{
			ComputeEventBase_t2120293193 * L_8 = V_2;
			NullCheck(L_8);
			ComputeResource_Dispose_m1047257706(L_8, /*hidden argument*/NULL);
		}

IL_002d:
		{
		}

IL_002e:
		{
			RuntimeObject* L_9 = V_1;
			NullCheck(L_9);
			bool L_10 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_0016;
			}
		}

IL_0036:
		{
			IL2CPP_LEAVE(0x43, FINALLY_0038);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_11 = V_1;
			if (!L_11)
			{
				goto IL_0042;
			}
		}

IL_003b:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_12);
		}

IL_0042:
		{
			IL2CPP_END_FINALLY(56)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0043:
	{
		RuntimeObject* L_13 = __this->get_Events_5();
		NullCheck(L_13);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<Cloo.ComputeEventBase>::Clear() */, ICollection_1_t653478131_il2cpp_TypeInfo_var, L_13);
	}

IL_0050:
	{
		RuntimeObject* L_14 = __this->get_Events_5();
		NullCheck(L_14);
		RuntimeObject* L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Cloo.ComputeEventBase>::GetEnumerator() */, IEnumerable_1_t1100146082_il2cpp_TypeInfo_var, L_14);
		V_4 = L_15;
	}

IL_005e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007e;
		}

IL_0060:
		{
			RuntimeObject* L_16 = V_4;
			NullCheck(L_16);
			ComputeEventBase_t2120293193 * L_17 = InterfaceFuncInvoker0< ComputeEventBase_t2120293193 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Cloo.ComputeEventBase>::get_Current() */, IEnumerator_1_t2552863661_il2cpp_TypeInfo_var, L_16);
			V_5 = L_17;
			ComputeEventBase_t2120293193 * L_18 = V_5;
			V_6 = (bool)((!(((RuntimeObject*)(ComputeEventBase_t2120293193 *)L_18) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_19 = V_6;
			if (!L_19)
			{
				goto IL_007d;
			}
		}

IL_0075:
		{
			ComputeEventBase_t2120293193 * L_20 = V_5;
			NullCheck(L_20);
			ComputeEventBase_DisposeInternal_m3027978081(L_20, /*hidden argument*/NULL);
		}

IL_007d:
		{
		}

IL_007e:
		{
			RuntimeObject* L_21 = V_4;
			NullCheck(L_21);
			bool L_22 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_0060;
			}
		}

IL_0087:
		{
			IL2CPP_LEAVE(0x96, FINALLY_0089);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0089;
	}

FINALLY_0089:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_23 = V_4;
			if (!L_23)
			{
				goto IL_0095;
			}
		}

IL_008d:
		{
			RuntimeObject* L_24 = V_4;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_24);
		}

IL_0095:
		{
			IL2CPP_END_FINALLY(137)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(137)
	{
		IL2CPP_JUMP_TBL(0x96, IL_0096)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0096:
	{
		CLCommandQueueHandle_t218408696  L_25 = ComputeCommandQueue_get_Handle_m768798509(__this, /*hidden argument*/NULL);
		V_8 = L_25;
		bool L_26 = CLCommandQueueHandle_get_IsValid_m2224107261((&V_8), /*hidden argument*/NULL);
		V_7 = L_26;
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_00ce;
		}
	}
	{
		RuntimeObject* L_28 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		CLCommandQueueHandle_t218408696  L_29 = ComputeCommandQueue_get_Handle_m768798509(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		InterfaceFuncInvoker1< int32_t, CLCommandQueueHandle_t218408696  >::Invoke(8 /* Cloo.ComputeErrorCode Cloo.Bindings.ICL10::ReleaseCommandQueue(Cloo.Bindings.CLCommandQueueHandle) */, ICL10_t3568785851_il2cpp_TypeInfo_var, L_28, L_29);
		CLCommandQueueHandle_t218408696  L_30 = ComputeCommandQueue_get_Handle_m768798509(__this, /*hidden argument*/NULL);
		V_8 = L_30;
		CLCommandQueueHandle_Invalidate_m917873785((&V_8), /*hidden argument*/NULL);
	}

IL_00ce:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cloo.ComputeCommandStatusArgs::set_Event(Cloo.ComputeEventBase)
extern "C"  void ComputeCommandStatusArgs_set_Event_m3715351054 (ComputeCommandStatusArgs_t2147780983 * __this, ComputeEventBase_t2120293193 * ___value0, const RuntimeMethod* method)
{
	{
		ComputeEventBase_t2120293193 * L_0 = ___value0;
		__this->set_U3CEventU3Ek__BackingField_1(L_0);
		return;
	}
}
// Cloo.ComputeCommandExecutionStatus Cloo.ComputeCommandStatusArgs::get_Status()
extern "C"  int32_t ComputeCommandStatusArgs_get_Status_m4037818711 (ComputeCommandStatusArgs_t2147780983 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStatusU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Cloo.ComputeCommandStatusArgs::set_Status(Cloo.ComputeCommandExecutionStatus)
extern "C"  void ComputeCommandStatusArgs_set_Status_m1583230631 (ComputeCommandStatusArgs_t2147780983 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CStatusU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Cloo.ComputeCommandStatusArgs::.ctor(Cloo.ComputeEventBase,Cloo.ComputeCommandExecutionStatus)
extern "C"  void ComputeCommandStatusArgs__ctor_m1631833591 (ComputeCommandStatusArgs_t2147780983 * __this, ComputeEventBase_t2120293193 * ___ev0, int32_t ___status1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeCommandStatusArgs__ctor_m1631833591_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		ComputeEventBase_t2120293193 * L_0 = ___ev0;
		ComputeCommandStatusArgs_set_Event_m3715351054(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___status1;
		ComputeCommandStatusArgs_set_Status_m1583230631(__this, L_1, /*hidden argument*/NULL);
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
// System.Void Cloo.ComputeCommandStatusChanged::.ctor(System.Object,System.IntPtr)
extern "C"  void ComputeCommandStatusChanged__ctor_m2569250243 (ComputeCommandStatusChanged_t248714690 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Cloo.ComputeCommandStatusChanged::Invoke(System.Object,Cloo.ComputeCommandStatusArgs)
extern "C"  void ComputeCommandStatusChanged_Invoke_m2973516581 (ComputeCommandStatusChanged_t248714690 * __this, RuntimeObject * ___sender0, ComputeCommandStatusArgs_t2147780983 * ___args1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ComputeCommandStatusChanged_Invoke_m2973516581((ComputeCommandStatusChanged_t248714690 *)__this->get_prev_9(), ___sender0, ___args1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, ComputeCommandStatusArgs_t2147780983 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, ComputeCommandStatusArgs_t2147780983 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___args1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, ComputeCommandStatusArgs_t2147780983 * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, ComputeCommandStatusArgs_t2147780983 * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, ComputeCommandStatusArgs_t2147780983 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___args1);
					else
						VirtActionInvoker2< RuntimeObject *, ComputeCommandStatusArgs_t2147780983 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___args1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, ComputeCommandStatusArgs_t2147780983 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ComputeCommandStatusArgs_t2147780983 * >::Invoke(targetMethod, ___sender0, ___args1);
					else
						GenericVirtActionInvoker1< ComputeCommandStatusArgs_t2147780983 * >::Invoke(targetMethod, ___sender0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ComputeCommandStatusArgs_t2147780983 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___args1);
					else
						VirtActionInvoker1< ComputeCommandStatusArgs_t2147780983 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___args1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, ComputeCommandStatusArgs_t2147780983 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Cloo.ComputeCommandStatusChanged::BeginInvoke(System.Object,Cloo.ComputeCommandStatusArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* ComputeCommandStatusChanged_BeginInvoke_m3673510885 (ComputeCommandStatusChanged_t248714690 * __this, RuntimeObject * ___sender0, ComputeCommandStatusArgs_t2147780983 * ___args1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___args1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Cloo.ComputeCommandStatusChanged::EndInvoke(System.IAsyncResult)
extern "C"  void ComputeCommandStatusChanged_EndInvoke_m1748977868 (ComputeCommandStatusChanged_t248714690 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
// Cloo.Bindings.CLContextHandle Cloo.ComputeContext::get_Handle()
extern "C"  CLContextHandle_t447015429  ComputeContext_get_Handle_m1664813480 (ComputeContext_t1365812911 * __this, const RuntimeMethod* method)
{
	{
		CLContextHandle_t447015429  L_0 = __this->get_U3CHandleU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Cloo.ComputeContext::set_Handle(Cloo.Bindings.CLContextHandle)
extern "C"  void ComputeContext_set_Handle_m496646365 (ComputeContext_t1365812911 * __this, CLContextHandle_t447015429  ___value0, const RuntimeMethod* method)
{
	{
		CLContextHandle_t447015429  L_0 = ___value0;
		__this->set_U3CHandleU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<Cloo.ComputeDevice> Cloo.ComputeContext::get_Devices()
extern "C"  ReadOnlyCollection_1_t1000789277 * ComputeContext_get_Devices_m2832436810 (ComputeContext_t1365812911 * __this, const RuntimeMethod* method)
{
	ReadOnlyCollection_1_t1000789277 * V_0 = NULL;
	{
		ReadOnlyCollection_1_t1000789277 * L_0 = __this->get_devices_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ReadOnlyCollection_1_t1000789277 * L_1 = V_0;
		return L_1;
	}
}
// Cloo.ComputePlatform Cloo.ComputeContext::get_Platform()
extern "C"  ComputePlatform_t3600789258 * ComputeContext_get_Platform_m649284352 (ComputeContext_t1365812911 * __this, const RuntimeMethod* method)
{
	ComputePlatform_t3600789258 * V_0 = NULL;
	{
		ComputePlatform_t3600789258 * L_0 = __this->get_platform_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ComputePlatform_t3600789258 * L_1 = V_0;
		return L_1;
	}
}
// System.Void Cloo.ComputeContext::.ctor(System.Collections.Generic.ICollection`1<Cloo.ComputeDevice>,Cloo.ComputeContextPropertyList,Cloo.Bindings.ComputeContextNotifier,System.IntPtr)
extern "C"  void ComputeContext__ctor_m4211662731 (ComputeContext_t1365812911 * __this, RuntimeObject* ___devices0, ComputeContextPropertyList_t3830085294 * ___properties1, ComputeContextNotifier_t2458212493 * ___notify2, intptr_t ___notifyDataPtr3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeContext__ctor_m4211662731_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CLDeviceHandleU5BU5D_t3725102763* V_1 = NULL;
	IntPtrU5BU5D_t4013366056* V_2 = NULL;
	int32_t V_3 = 0;
	ComputeContextProperty_t1024854822 * V_4 = NULL;
	CLContextHandle_t447015429  V_5;
	memset(&V_5, 0, sizeof(V_5));
	IntPtrU5BU5D_t4013366056* G_B3_0 = NULL;
	{
		ComputeResource__ctor_m415879097(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___devices0;
		CLDeviceHandleU5BU5D_t3725102763* L_1 = ComputeTools_ExtractHandles_m603623554(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		ComputeContextPropertyList_t3830085294 * L_2 = ___properties1;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		G_B3_0 = ((IntPtrU5BU5D_t4013366056*)(NULL));
		goto IL_001d;
	}

IL_0017:
	{
		ComputeContextPropertyList_t3830085294 * L_3 = ___properties1;
		NullCheck(L_3);
		IntPtrU5BU5D_t4013366056* L_4 = ComputeContextPropertyList_ToIntPtrArray_m4263506384(L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_001d:
	{
		V_2 = G_B3_0;
		ComputeContextNotifier_t2458212493 * L_5 = ___notify2;
		__this->set_callback_4(L_5);
		V_3 = 0;
		RuntimeObject* L_6 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtrU5BU5D_t4013366056* L_7 = V_2;
		int32_t L_8 = V_0;
		CLDeviceHandleU5BU5D_t3725102763* L_9 = V_1;
		ComputeContextNotifier_t2458212493 * L_10 = ___notify2;
		intptr_t L_11 = ___notifyDataPtr3;
		NullCheck(L_6);
		CLContextHandle_t447015429  L_12 = InterfaceFuncInvoker6< CLContextHandle_t447015429 , IntPtrU5BU5D_t4013366056*, int32_t, CLDeviceHandleU5BU5D_t3725102763*, ComputeContextNotifier_t2458212493 *, intptr_t, int32_t* >::Invoke(4 /* Cloo.Bindings.CLContextHandle Cloo.Bindings.ICL10::CreateContext(System.IntPtr[],System.Int32,Cloo.Bindings.CLDeviceHandle[],Cloo.Bindings.ComputeContextNotifier,System.IntPtr,Cloo.ComputeErrorCode&) */, ICL10_t3568785851_il2cpp_TypeInfo_var, L_6, L_7, L_8, L_9, L_10, L_11, (&V_3));
		ComputeContext_set_Handle_m496646365(__this, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_3;
		ComputeException_ThrowOnError_m4115276668(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		CLContextHandle_t447015429  L_14 = ComputeContext_get_Handle_m1664813480(__this, /*hidden argument*/NULL);
		V_5 = L_14;
		intptr_t L_15 = CLContextHandle_get_Value_m735911638((&V_5), /*hidden argument*/NULL);
		ComputeObject_SetID_m1020599628(__this, L_15, /*hidden argument*/NULL);
		ComputeContextPropertyList_t3830085294 * L_16 = ___properties1;
		__this->set_properties_3(L_16);
		ComputeContextPropertyList_t3830085294 * L_17 = ___properties1;
		NullCheck(L_17);
		ComputeContextProperty_t1024854822 * L_18 = ComputeContextPropertyList_GetByName_m1411803165(L_17, ((int32_t)4228), /*hidden argument*/NULL);
		V_4 = L_18;
		ComputeContextProperty_t1024854822 * L_19 = V_4;
		NullCheck(L_19);
		intptr_t L_20 = ComputeContextProperty_get_Value_m1109486581(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ComputePlatform_t3600789258_il2cpp_TypeInfo_var);
		ComputePlatform_t3600789258 * L_21 = ComputePlatform_GetByHandle_m3317553206(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		__this->set_platform_2(L_21);
		ReadOnlyCollection_1_t1000789277 * L_22 = ComputeContext_GetDevices_m1689598945(__this, /*hidden argument*/NULL);
		__this->set_devices_1(L_22);
		return;
	}
}
// System.Void Cloo.ComputeContext::Dispose(System.Boolean)
extern "C"  void ComputeContext_Dispose_m681108975 (ComputeContext_t1365812911 * __this, bool ___manual0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeContext_Dispose_m681108975_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	CLContextHandle_t447015429  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		bool L_0 = ___manual0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0008;
		}
	}
	{
	}

IL_0008:
	{
		CLContextHandle_t447015429  L_2 = ComputeContext_get_Handle_m1664813480(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		bool L_3 = CLContextHandle_get_IsValid_m3325934603((&V_2), /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_5 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		CLContextHandle_t447015429  L_6 = ComputeContext_get_Handle_m1664813480(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceFuncInvoker1< int32_t, CLContextHandle_t447015429  >::Invoke(5 /* Cloo.ComputeErrorCode Cloo.Bindings.ICL10::ReleaseContext(Cloo.Bindings.CLContextHandle) */, ICL10_t3568785851_il2cpp_TypeInfo_var, L_5, L_6);
		CLContextHandle_t447015429  L_7 = ComputeContext_get_Handle_m1664813480(__this, /*hidden argument*/NULL);
		V_2 = L_7;
		CLContextHandle_Invalidate_m2084838429((&V_2), /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<Cloo.ComputeDevice> Cloo.ComputeContext::GetDevices()
extern "C"  ReadOnlyCollection_1_t1000789277 * ComputeContext_GetDevices_m1689598945 (ComputeContext_t1365812911 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeContext_GetDevices_m1689598945_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3127987988 * V_0 = NULL;
	List_1_t1260287732 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	ComputePlatform_t3600789258 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	ComputeDevice_t4083180286 * V_5 = NULL;
	bool V_6 = false;
	ReadOnlyCollection_1_t1000789277 * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		CLContextHandle_t447015429  L_0 = ComputeContext_get_Handle_m1664813480(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		intptr_t L_3 = (intptr_t)GetInterfaceMethodInfo(L_2, 6, ICL10_t3568785851_il2cpp_TypeInfo_var);
		GetInfoDelegate_2_t1033342548 * L_4 = (GetInfoDelegate_2_t1033342548 *)il2cpp_codegen_object_new(GetInfoDelegate_2_t1033342548_il2cpp_TypeInfo_var);
		GetInfoDelegate_2__ctor_m3127054146(L_4, L_2, L_3, /*hidden argument*/GetInfoDelegate_2__ctor_m3127054146_RuntimeMethod_var);
		CLDeviceHandleU5BU5D_t3725102763* L_5 = ComputeObject_GetArrayInfo_TisCLContextHandle_t447015429_TisComputeContextInfo_t761728730_TisCLDeviceHandle_t1655913246_m615519784(__this, L_0, ((int32_t)4225), L_4, /*hidden argument*/ComputeObject_GetArrayInfo_TisCLContextHandle_t447015429_TisComputeContextInfo_t761728730_TisCLDeviceHandle_t1655913246_m615519784_RuntimeMethod_var);
		List_1_t3127987988 * L_6 = (List_1_t3127987988 *)il2cpp_codegen_object_new(List_1_t3127987988_il2cpp_TypeInfo_var);
		List_1__ctor_m1633211235(L_6, (RuntimeObject*)(RuntimeObject*)L_5, /*hidden argument*/List_1__ctor_m1633211235_RuntimeMethod_var);
		V_0 = L_6;
		List_1_t1260287732 * L_7 = (List_1_t1260287732 *)il2cpp_codegen_object_new(List_1_t1260287732_il2cpp_TypeInfo_var);
		List_1__ctor_m2551690417(L_7, /*hidden argument*/List_1__ctor_m2551690417_RuntimeMethod_var);
		V_1 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(ComputePlatform_t3600789258_il2cpp_TypeInfo_var);
		RuntimeObject* L_8 = ComputePlatform_get_Platforms_m1134595370(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Cloo.ComputePlatform>::GetEnumerator() */, IEnumerable_1_t2580642147_il2cpp_TypeInfo_var, L_8);
		V_2 = L_9;
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_003d:
		{
			RuntimeObject* L_10 = V_2;
			NullCheck(L_10);
			ComputePlatform_t3600789258 * L_11 = InterfaceFuncInvoker0< ComputePlatform_t3600789258 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Cloo.ComputePlatform>::get_Current() */, IEnumerator_1_t4033359726_il2cpp_TypeInfo_var, L_10);
			V_3 = L_11;
			ComputePlatform_t3600789258 * L_12 = V_3;
			NullCheck(L_12);
			ReadOnlyCollection_1_t1000789277 * L_13 = ComputePlatform_get_Devices_m3762564962(L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			RuntimeObject* L_14 = ReadOnlyCollection_1_GetEnumerator_m477749655(L_13, /*hidden argument*/ReadOnlyCollection_1_GetEnumerator_m477749655_RuntimeMethod_var);
			V_4 = L_14;
		}

IL_0053:
		try
		{ // begin try (depth: 2)
			{
				goto IL_007a;
			}

IL_0055:
			{
				RuntimeObject* L_15 = V_4;
				NullCheck(L_15);
				ComputeDevice_t4083180286 * L_16 = InterfaceFuncInvoker0< ComputeDevice_t4083180286 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Cloo.ComputeDevice>::get_Current() */, IEnumerator_1_t220783458_il2cpp_TypeInfo_var, L_15);
				V_5 = L_16;
				List_1_t3127987988 * L_17 = V_0;
				ComputeDevice_t4083180286 * L_18 = V_5;
				NullCheck(L_18);
				CLDeviceHandle_t1655913246  L_19 = ComputeDevice_get_Handle_m1377678137(L_18, /*hidden argument*/NULL);
				NullCheck(L_17);
				bool L_20 = List_1_Contains_m1910289345(L_17, L_19, /*hidden argument*/List_1_Contains_m1910289345_RuntimeMethod_var);
				V_6 = L_20;
				bool L_21 = V_6;
				if (!L_21)
				{
					goto IL_007a;
				}
			}

IL_0071:
			{
				List_1_t1260287732 * L_22 = V_1;
				ComputeDevice_t4083180286 * L_23 = V_5;
				NullCheck(L_22);
				List_1_Add_m1881868367(L_22, L_23, /*hidden argument*/List_1_Add_m1881868367_RuntimeMethod_var);
			}

IL_007a:
			{
				RuntimeObject* L_24 = V_4;
				NullCheck(L_24);
				bool L_25 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0055;
				}
			}

IL_0083:
			{
				IL2CPP_LEAVE(0x92, FINALLY_0085);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0085;
		}

FINALLY_0085:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_26 = V_4;
				if (!L_26)
				{
					goto IL_0091;
				}
			}

IL_0089:
			{
				RuntimeObject* L_27 = V_4;
				NullCheck(L_27);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_27);
			}

IL_0091:
			{
				IL2CPP_END_FINALLY(133)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(133)
		{
			IL2CPP_JUMP_TBL(0x92, IL_0092)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0092:
		{
		}

IL_0093:
		{
			RuntimeObject* L_28 = V_2;
			NullCheck(L_28);
			bool L_29 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_28);
			if (L_29)
			{
				goto IL_003d;
			}
		}

IL_009b:
		{
			IL2CPP_LEAVE(0xA8, FINALLY_009d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009d;
	}

FINALLY_009d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_30 = V_2;
			if (!L_30)
			{
				goto IL_00a7;
			}
		}

IL_00a0:
		{
			RuntimeObject* L_31 = V_2;
			NullCheck(L_31);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_31);
		}

IL_00a7:
		{
			IL2CPP_END_FINALLY(157)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(157)
	{
		IL2CPP_JUMP_TBL(0xA8, IL_00a8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a8:
	{
		List_1_t1260287732 * L_32 = V_1;
		ReadOnlyCollection_1_t1000789277 * L_33 = (ReadOnlyCollection_1_t1000789277 *)il2cpp_codegen_object_new(ReadOnlyCollection_1_t1000789277_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1__ctor_m2800920346(L_33, L_32, /*hidden argument*/ReadOnlyCollection_1__ctor_m2800920346_RuntimeMethod_var);
		V_7 = L_33;
		goto IL_00b2;
	}

IL_00b2:
	{
		ReadOnlyCollection_1_t1000789277 * L_34 = V_7;
		return L_34;
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
// Cloo.ComputeContextPropertyName Cloo.ComputeContextProperty::get_Name()
extern "C"  int32_t ComputeContextProperty_get_Name_m2277673648 (ComputeContextProperty_t1024854822 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_name_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.IntPtr Cloo.ComputeContextProperty::get_Value()
extern "C"  intptr_t ComputeContextProperty_get_Value_m1109486581 (ComputeContextProperty_t1024854822 * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_value_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Cloo.ComputeContextProperty::.ctor(Cloo.ComputeContextPropertyName,System.IntPtr)
extern "C"  void ComputeContextProperty__ctor_m498890058 (ComputeContextProperty_t1024854822 * __this, int32_t ___name0, intptr_t ___value1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___name0;
		__this->set_name_0(L_0);
		intptr_t L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
// System.String Cloo.ComputeContextProperty::ToString()
extern "C"  String_t* ComputeContextProperty_ToString_m3823103117 (ComputeContextProperty_t1024854822 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeContextProperty_ToString_m3823103117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)6));
		Type_t * L_1 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_2);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral3452614536);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3452614536);
		ObjectU5BU5D_t2843939325* L_4 = L_3;
		int32_t L_5 = __this->get_name_0();
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(ComputeContextPropertyName_t2082884555_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral3450517380);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral3450517380);
		ObjectU5BU5D_t2843939325* L_9 = L_8;
		intptr_t L_10 = __this->get_value_1();
		V_0 = L_10;
		String_t* L_11 = IntPtr_ToString_m1831665121((&V_0), /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_9;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral3452614535);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m2971454694(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		goto IL_005a;
	}

IL_005a:
	{
		String_t* L_14 = V_1;
		return L_14;
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
// System.Void Cloo.ComputeContextPropertyList::.ctor(Cloo.ComputePlatform)
extern "C"  void ComputeContextPropertyList__ctor_m3937292277 (ComputeContextPropertyList_t3830085294 * __this, ComputePlatform_t3600789258 * ___platform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeContextPropertyList__ctor_m3937292277_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CLPlatformHandle_t3404269797  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		List_1_t2496929564 * L_0 = (List_1_t2496929564 *)il2cpp_codegen_object_new(List_1_t2496929564_il2cpp_TypeInfo_var);
		List_1__ctor_m3683943297(L_0, /*hidden argument*/List_1__ctor_m3683943297_RuntimeMethod_var);
		__this->set_properties_0(L_0);
		RuntimeObject* L_1 = __this->get_properties_0();
		ComputePlatform_t3600789258 * L_2 = ___platform0;
		NullCheck(L_2);
		CLPlatformHandle_t3404269797  L_3 = ComputePlatform_get_Handle_m2382324133(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		intptr_t L_4 = CLPlatformHandle_get_Value_m2002329956((&V_0), /*hidden argument*/NULL);
		ComputeContextProperty_t1024854822 * L_5 = (ComputeContextProperty_t1024854822 *)il2cpp_codegen_object_new(ComputeContextProperty_t1024854822_il2cpp_TypeInfo_var);
		ComputeContextProperty__ctor_m498890058(L_5, ((int32_t)4228), L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< ComputeContextProperty_t1024854822 * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Cloo.ComputeContextProperty>::Add(!0) */, ICollection_1_t3853007056_il2cpp_TypeInfo_var, L_1, L_5);
		return;
	}
}
// Cloo.ComputeContextProperty Cloo.ComputeContextPropertyList::GetByName(Cloo.ComputeContextPropertyName)
extern "C"  ComputeContextProperty_t1024854822 * ComputeContextPropertyList_GetByName_m1411803165 (ComputeContextPropertyList_t3830085294 * __this, int32_t ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeContextPropertyList_GetByName_m1411803165_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ComputeContextProperty_t1024854822 * V_1 = NULL;
	bool V_2 = false;
	ComputeContextProperty_t1024854822 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = __this->get_properties_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Cloo.ComputeContextProperty>::GetEnumerator() */, IEnumerable_1_t4707711_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0028;
		}

IL_0010:
		{
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			ComputeContextProperty_t1024854822 * L_3 = InterfaceFuncInvoker0< ComputeContextProperty_t1024854822 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Cloo.ComputeContextProperty>::get_Current() */, IEnumerator_1_t1457425290_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			ComputeContextProperty_t1024854822 * L_4 = V_1;
			NullCheck(L_4);
			int32_t L_5 = ComputeContextProperty_get_Name_m2277673648(L_4, /*hidden argument*/NULL);
			int32_t L_6 = ___name0;
			V_2 = (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0028;
			}
		}

IL_0024:
		{
			ComputeContextProperty_t1024854822 * L_8 = V_1;
			V_3 = L_8;
			IL2CPP_LEAVE(0x41, FINALLY_0032);
		}

IL_0028:
		{
			RuntimeObject* L_9 = V_0;
			NullCheck(L_9);
			bool L_10 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_0010;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x3D, FINALLY_0032);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0032;
	}

FINALLY_0032:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_11 = V_0;
			if (!L_11)
			{
				goto IL_003c;
			}
		}

IL_0035:
		{
			RuntimeObject* L_12 = V_0;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_12);
		}

IL_003c:
		{
			IL2CPP_END_FINALLY(50)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003d:
	{
		V_3 = (ComputeContextProperty_t1024854822 *)NULL;
		goto IL_0041;
	}

IL_0041:
	{
		ComputeContextProperty_t1024854822 * L_13 = V_3;
		return L_13;
	}
}
// System.IntPtr[] Cloo.ComputeContextPropertyList::ToIntPtrArray()
extern "C"  IntPtrU5BU5D_t4013366056* ComputeContextPropertyList_ToIntPtrArray_m4263506384 (ComputeContextPropertyList_t3830085294 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeContextPropertyList_ToIntPtrArray_m4263506384_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntPtrU5BU5D_t4013366056* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	IntPtrU5BU5D_t4013366056* V_4 = NULL;
	{
		RuntimeObject* L_0 = __this->get_properties_0();
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Cloo.ComputeContextProperty>::get_Count() */, ICollection_1_t3853007056_il2cpp_TypeInfo_var, L_0);
		V_0 = ((IntPtrU5BU5D_t4013366056*)SZArrayNew(IntPtrU5BU5D_t4013366056_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_1)), (int32_t)1))));
		V_1 = 0;
		goto IL_0055;
	}

IL_001a:
	{
		IntPtrU5BU5D_t4013366056* L_2 = V_0;
		int32_t L_3 = V_1;
		RuntimeObject* L_4 = __this->get_properties_0();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		ComputeContextProperty_t1024854822 * L_6 = InterfaceFuncInvoker1< ComputeContextProperty_t1024854822 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<Cloo.ComputeContextProperty>::get_Item(System.Int32) */, IList_1_t2840174605_il2cpp_TypeInfo_var, L_4, L_5);
		NullCheck(L_6);
		int32_t L_7 = ComputeContextProperty_get_Name_m2277673648(L_6, /*hidden argument*/NULL);
		intptr_t L_8;
		memset(&L_8, 0, sizeof(L_8));
		IntPtr__ctor_m987082960((&L_8), L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_3))), (intptr_t)L_8);
		IntPtrU5BU5D_t4013366056* L_9 = V_0;
		int32_t L_10 = V_1;
		RuntimeObject* L_11 = __this->get_properties_0();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		ComputeContextProperty_t1024854822 * L_13 = InterfaceFuncInvoker1< ComputeContextProperty_t1024854822 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<Cloo.ComputeContextProperty>::get_Item(System.Int32) */, IList_1_t2840174605_il2cpp_TypeInfo_var, L_11, L_12);
		NullCheck(L_13);
		intptr_t L_14 = ComputeContextProperty_get_Value_m1109486581(L_13, /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_10)), (int32_t)1))), (intptr_t)L_14);
		int32_t L_15 = V_1;
		V_2 = L_15;
		int32_t L_16 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0055:
	{
		int32_t L_17 = V_1;
		RuntimeObject* L_18 = __this->get_properties_0();
		NullCheck(L_18);
		int32_t L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Cloo.ComputeContextProperty>::get_Count() */, ICollection_1_t3853007056_il2cpp_TypeInfo_var, L_18);
		V_3 = (bool)((((int32_t)L_17) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_3;
		if (L_20)
		{
			goto IL_001a;
		}
	}
	{
		IntPtrU5BU5D_t4013366056* L_21 = V_0;
		IntPtrU5BU5D_t4013366056* L_22 = V_0;
		NullCheck(L_22);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))), (int32_t)1))), (intptr_t)(0));
		IntPtrU5BU5D_t4013366056* L_23 = V_0;
		V_4 = L_23;
		goto IL_0078;
	}

IL_0078:
	{
		IntPtrU5BU5D_t4013366056* L_24 = V_4;
		return L_24;
	}
}
// System.Void Cloo.ComputeContextPropertyList::Add(Cloo.ComputeContextProperty)
extern "C"  void ComputeContextPropertyList_Add_m2531543869 (ComputeContextPropertyList_t3830085294 * __this, ComputeContextProperty_t1024854822 * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeContextPropertyList_Add_m2531543869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_properties_0();
		ComputeContextProperty_t1024854822 * L_1 = ___item0;
		NullCheck(L_0);
		InterfaceActionInvoker1< ComputeContextProperty_t1024854822 * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Cloo.ComputeContextProperty>::Add(!0) */, ICollection_1_t3853007056_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void Cloo.ComputeContextPropertyList::Clear()
extern "C"  void ComputeContextPropertyList_Clear_m2148520491 (ComputeContextPropertyList_t3830085294 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeContextPropertyList_Clear_m2148520491_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_properties_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<Cloo.ComputeContextProperty>::Clear() */, ICollection_1_t3853007056_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Boolean Cloo.ComputeContextPropertyList::Contains(Cloo.ComputeContextProperty)
extern "C"  bool ComputeContextPropertyList_Contains_m1550688600 (ComputeContextPropertyList_t3830085294 * __this, ComputeContextProperty_t1024854822 * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeContextPropertyList_Contains_m1550688600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->get_properties_0();
		ComputeContextProperty_t1024854822 * L_1 = ___item0;
		NullCheck(L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, ComputeContextProperty_t1024854822 * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<Cloo.ComputeContextProperty>::Contains(!0) */, ICollection_1_t3853007056_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void Cloo.ComputeContextPropertyList::CopyTo(Cloo.ComputeContextProperty[],System.Int32)
extern "C"  void ComputeContextPropertyList_CopyTo_m118583163 (ComputeContextPropertyList_t3830085294 * __this, ComputeContextPropertyU5BU5D_t1074107779* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeContextPropertyList_CopyTo_m118583163_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_properties_0();
		ComputeContextPropertyU5BU5D_t1074107779* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck(L_0);
		InterfaceActionInvoker2< ComputeContextPropertyU5BU5D_t1074107779*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<Cloo.ComputeContextProperty>::CopyTo(!0[],System.Int32) */, ICollection_1_t3853007056_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Int32 Cloo.ComputeContextPropertyList::get_Count()
extern "C"  int32_t ComputeContextPropertyList_get_Count_m951898811 (ComputeContextPropertyList_t3830085294 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeContextPropertyList_get_Count_m951898811_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->get_properties_0();
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Cloo.ComputeContextProperty>::get_Count() */, ICollection_1_t3853007056_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Cloo.ComputeContextPropertyList::get_IsReadOnly()
extern "C"  bool ComputeContextPropertyList_get_IsReadOnly_m2501208565 (ComputeContextPropertyList_t3830085294 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean Cloo.ComputeContextPropertyList::Remove(Cloo.ComputeContextProperty)
extern "C"  bool ComputeContextPropertyList_Remove_m2982303660 (ComputeContextPropertyList_t3830085294 * __this, ComputeContextProperty_t1024854822 * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeContextPropertyList_Remove_m2982303660_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->get_properties_0();
		ComputeContextProperty_t1024854822 * L_1 = ___item0;
		NullCheck(L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, ComputeContextProperty_t1024854822 * >::Invoke(6 /* System.Boolean System.Collections.Generic.ICollection`1<Cloo.ComputeContextProperty>::Remove(!0) */, ICollection_1_t3853007056_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Collections.Generic.IEnumerator`1<Cloo.ComputeContextProperty> Cloo.ComputeContextPropertyList::GetEnumerator()
extern "C"  RuntimeObject* ComputeContextPropertyList_GetEnumerator_m3893238765 (ComputeContextPropertyList_t3830085294 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeContextPropertyList_GetEnumerator_m3893238765_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get_properties_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Cloo.ComputeContextProperty>::GetEnumerator() */, IEnumerable_1_t4707711_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator Cloo.ComputeContextPropertyList::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* ComputeContextPropertyList_System_Collections_IEnumerable_GetEnumerator_m732532468 (ComputeContextPropertyList_t3830085294 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeContextPropertyList_System_Collections_IEnumerable_GetEnumerator_m732532468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get_properties_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_2 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Cloo.Bindings.CLDeviceHandle Cloo.ComputeDevice::get_Handle()
extern "C"  CLDeviceHandle_t1655913246  ComputeDevice_get_Handle_m1377678137 (ComputeDevice_t4083180286 * __this, const RuntimeMethod* method)
{
	{
		CLDeviceHandle_t1655913246  L_0 = __this->get_U3CHandleU3Ek__BackingField_50();
		return L_0;
	}
}
// System.Void Cloo.ComputeDevice::set_Handle(Cloo.Bindings.CLDeviceHandle)
extern "C"  void ComputeDevice_set_Handle_m2376074841 (ComputeDevice_t4083180286 * __this, CLDeviceHandle_t1655913246  ___value0, const RuntimeMethod* method)
{
	{
		CLDeviceHandle_t1655913246  L_0 = ___value0;
		__this->set_U3CHandleU3Ek__BackingField_50(L_0);
		return;
	}
}
// System.Boolean Cloo.ComputeDevice::get_Available()
extern "C"  bool ComputeDevice_get_Available_m2032364414 (ComputeDevice_t4083180286 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_available_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Cloo.ComputeDevice::get_CompilerAvailable()
extern "C"  bool ComputeDevice_get_CompilerAvailable_m526287153 (ComputeDevice_t4083180286 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_compilerAvailable_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Int64 Cloo.ComputeDevice::get_GlobalMemorySize()
extern "C"  int64_t ComputeDevice_get_GlobalMemorySize_m1912042714 (ComputeDevice_t4083180286 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->get_globalMemorySize_12();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Int64 Cloo.ComputeDevice::get_MaxClockFrequency()
extern "C"  int64_t ComputeDevice_get_MaxClockFrequency_m2746748368 (ComputeDevice_t4083180286 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->get_maxClockFrequency_21();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Int64 Cloo.ComputeDevice::get_MaxComputeUnits()
extern "C"  int64_t ComputeDevice_get_MaxComputeUnits_m1834675078 (ComputeDevice_t4083180286 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->get_maxComputeUnits_22();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Int64 Cloo.ComputeDevice::get_MaxSamplers()
extern "C"  int64_t ComputeDevice_get_MaxSamplers_m122512739 (ComputeDevice_t4083180286 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->get_maxSamplers_28();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Int64 Cloo.ComputeDevice::get_MaxWorkGroupSize()
extern "C"  int64_t ComputeDevice_get_MaxWorkGroupSize_m3031652023 (ComputeDevice_t4083180286 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->get_maxWorkGroupSize_29();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.String Cloo.ComputeDevice::get_Name()
extern "C"  String_t* ComputeDevice_get_Name_m2128281437 (ComputeDevice_t4083180286 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_name_35();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// Cloo.ComputePlatform Cloo.ComputeDevice::get_Platform()
extern "C"  ComputePlatform_t3600789258 * ComputeDevice_get_Platform_m2529460085 (ComputeDevice_t4083180286 * __this, const RuntimeMethod* method)
{
	ComputePlatform_t3600789258 * V_0 = NULL;
	{
		ComputePlatform_t3600789258 * L_0 = __this->get_platform_36();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ComputePlatform_t3600789258 * L_1 = V_0;
		return L_1;
	}
}
// Cloo.ComputeDeviceTypes Cloo.ComputeDevice::get_Type()
extern "C"  int64_t ComputeDevice_get_Type_m2645483387 (ComputeDevice_t4083180286 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->get_type_46();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Cloo.ComputeDevice::.ctor(Cloo.ComputePlatform,Cloo.Bindings.CLDeviceHandle)
extern "C"  void ComputeDevice__ctor_m4162545325 (ComputeDevice_t4083180286 * __this, ComputePlatform_t3600789258 * ___platform0, CLDeviceHandle_t1655913246  ___handle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeDevice__ctor_m4162545325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	CLDeviceHandle_t1655913246  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		ComputeObject__ctor_m2175313869(__this, /*hidden argument*/NULL);
		CLDeviceHandle_t1655913246  L_0 = ___handle1;
		ComputeDevice_set_Handle_m2376074841(__this, L_0, /*hidden argument*/NULL);
		CLDeviceHandle_t1655913246  L_1 = ComputeDevice_get_Handle_m1377678137(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		intptr_t L_2 = CLDeviceHandle_get_Value_m2678713995((&V_1), /*hidden argument*/NULL);
		ComputeObject_SetID_m1020599628(__this, L_2, /*hidden argument*/NULL);
		uint32_t L_3 = ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316(__this, ((int32_t)4109), /*hidden argument*/ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316_RuntimeMethod_var);
		__this->set_addressBits_1((((int64_t)((uint64_t)L_3))));
		bool L_4 = ComputeDevice_GetBoolInfo_m3389773502(__this, ((int32_t)4135), /*hidden argument*/NULL);
		__this->set_available_2(L_4);
		bool L_5 = ComputeDevice_GetBoolInfo_m3389773502(__this, ((int32_t)4136), /*hidden argument*/NULL);
		__this->set_compilerAvailable_3(L_5);
		String_t* L_6 = ComputeDevice_GetStringInfo_m3390052655(__this, ((int32_t)4141), /*hidden argument*/NULL);
		__this->set_driverVersion_4(L_6);
		bool L_7 = ComputeDevice_GetBoolInfo_m3389773502(__this, ((int32_t)4134), /*hidden argument*/NULL);
		__this->set_endianLittle_5(L_7);
		bool L_8 = ComputeDevice_GetBoolInfo_m3389773502(__this, ((int32_t)4132), /*hidden argument*/NULL);
		__this->set_errorCorrectionSupport_6(L_8);
		int64_t L_9 = ComputeDevice_GetInfo_TisInt64_t3736567304_m1988361387(__this, ((int32_t)4137), /*hidden argument*/ComputeDevice_GetInfo_TisInt64_t3736567304_m1988361387_RuntimeMethod_var);
		__this->set_executionCapabilities_7((((int32_t)((int32_t)L_9))));
		String_t* L_10 = ComputeDevice_GetStringInfo_m3390052655(__this, ((int32_t)4144), /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11 = V_0;
		CharU5BU5D_t3528271667* L_12 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		NullCheck(L_11);
		StringU5BU5D_t1281789340* L_13 = String_Split_m1466646415(L_11, L_12, 1, /*hidden argument*/NULL);
		ReadOnlyCollection_1_t3060026976 * L_14 = (ReadOnlyCollection_1_t3060026976 *)il2cpp_codegen_object_new(ReadOnlyCollection_1_t3060026976_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1__ctor_m627134177(L_14, (RuntimeObject*)(RuntimeObject*)L_13, /*hidden argument*/ReadOnlyCollection_1__ctor_m627134177_RuntimeMethod_var);
		__this->set_extensions_8(L_14);
		uint32_t L_15 = ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316(__this, ((int32_t)4125), /*hidden argument*/ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316_RuntimeMethod_var);
		__this->set_globalMemoryCachelineSize_9((((int64_t)((uint64_t)L_15))));
		uint64_t L_16 = ComputeDevice_GetInfo_TisUInt64_t4134040092_m162120734(__this, ((int32_t)4126), /*hidden argument*/ComputeDevice_GetInfo_TisUInt64_t4134040092_m162120734_RuntimeMethod_var);
		__this->set_globalMemoryCacheSize_10(L_16);
		int64_t L_17 = ComputeDevice_GetInfo_TisInt64_t3736567304_m1988361387(__this, ((int32_t)4124), /*hidden argument*/ComputeDevice_GetInfo_TisInt64_t3736567304_m1988361387_RuntimeMethod_var);
		__this->set_globalMemoryCacheType_11((((int32_t)((int32_t)L_17))));
		uint64_t L_18 = ComputeDevice_GetInfo_TisUInt64_t4134040092_m162120734(__this, ((int32_t)4127), /*hidden argument*/ComputeDevice_GetInfo_TisUInt64_t4134040092_m162120734_RuntimeMethod_var);
		__this->set_globalMemorySize_12(L_18);
		intptr_t L_19 = ComputeDevice_GetInfo_TisIntPtr_t_m2083192018(__this, ((int32_t)4114), /*hidden argument*/ComputeDevice_GetInfo_TisIntPtr_t_m2083192018_RuntimeMethod_var);
		int64_t L_20 = IntPtr_op_Explicit_m3885458658(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		__this->set_image2DMaxHeight_14(L_20);
		intptr_t L_21 = ComputeDevice_GetInfo_TisIntPtr_t_m2083192018(__this, ((int32_t)4113), /*hidden argument*/ComputeDevice_GetInfo_TisIntPtr_t_m2083192018_RuntimeMethod_var);
		int64_t L_22 = IntPtr_op_Explicit_m3885458658(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		__this->set_image2DMaxWidth_15(L_22);
		intptr_t L_23 = ComputeDevice_GetInfo_TisIntPtr_t_m2083192018(__this, ((int32_t)4117), /*hidden argument*/ComputeDevice_GetInfo_TisIntPtr_t_m2083192018_RuntimeMethod_var);
		int64_t L_24 = IntPtr_op_Explicit_m3885458658(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		__this->set_image3DMaxDepth_16(L_24);
		intptr_t L_25 = ComputeDevice_GetInfo_TisIntPtr_t_m2083192018(__this, ((int32_t)4116), /*hidden argument*/ComputeDevice_GetInfo_TisIntPtr_t_m2083192018_RuntimeMethod_var);
		int64_t L_26 = IntPtr_op_Explicit_m3885458658(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		__this->set_image3DMaxHeight_17(L_26);
		intptr_t L_27 = ComputeDevice_GetInfo_TisIntPtr_t_m2083192018(__this, ((int32_t)4115), /*hidden argument*/ComputeDevice_GetInfo_TisIntPtr_t_m2083192018_RuntimeMethod_var);
		int64_t L_28 = IntPtr_op_Explicit_m3885458658(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		__this->set_image3DMaxWidth_18(L_28);
		bool L_29 = ComputeDevice_GetBoolInfo_m3389773502(__this, ((int32_t)4118), /*hidden argument*/NULL);
		__this->set_imageSupport_13(L_29);
		uint64_t L_30 = ComputeDevice_GetInfo_TisUInt64_t4134040092_m162120734(__this, ((int32_t)4131), /*hidden argument*/ComputeDevice_GetInfo_TisUInt64_t4134040092_m162120734_RuntimeMethod_var);
		__this->set_localMemorySize_19(L_30);
		int64_t L_31 = ComputeDevice_GetInfo_TisInt64_t3736567304_m1988361387(__this, ((int32_t)4130), /*hidden argument*/ComputeDevice_GetInfo_TisInt64_t3736567304_m1988361387_RuntimeMethod_var);
		__this->set_localMemoryType_20((((int32_t)((int32_t)L_31))));
		uint32_t L_32 = ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316(__this, ((int32_t)4108), /*hidden argument*/ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316_RuntimeMethod_var);
		__this->set_maxClockFrequency_21((((int64_t)((uint64_t)L_32))));
		uint32_t L_33 = ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316(__this, ((int32_t)4098), /*hidden argument*/ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316_RuntimeMethod_var);
		__this->set_maxComputeUnits_22((((int64_t)((uint64_t)L_33))));
		uint32_t L_34 = ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316(__this, ((int32_t)4129), /*hidden argument*/ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316_RuntimeMethod_var);
		__this->set_maxConstantArguments_23((((int64_t)((uint64_t)L_34))));
		uint64_t L_35 = ComputeDevice_GetInfo_TisUInt64_t4134040092_m162120734(__this, ((int32_t)4128), /*hidden argument*/ComputeDevice_GetInfo_TisUInt64_t4134040092_m162120734_RuntimeMethod_var);
		__this->set_maxConstantBufferSize_24(L_35);
		uint64_t L_36 = ComputeDevice_GetInfo_TisUInt64_t4134040092_m162120734(__this, ((int32_t)4112), /*hidden argument*/ComputeDevice_GetInfo_TisUInt64_t4134040092_m162120734_RuntimeMethod_var);
		__this->set_maxMemAllocSize_25(L_36);
		intptr_t L_37 = ComputeDevice_GetInfo_TisIntPtr_t_m2083192018(__this, ((int32_t)4119), /*hidden argument*/ComputeDevice_GetInfo_TisIntPtr_t_m2083192018_RuntimeMethod_var);
		int64_t L_38 = IntPtr_op_Explicit_m3885458658(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		__this->set_maxParameterSize_26(L_38);
		uint32_t L_39 = ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316(__this, ((int32_t)4110), /*hidden argument*/ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316_RuntimeMethod_var);
		__this->set_maxReadImageArgs_27((((int64_t)((uint64_t)L_39))));
		uint32_t L_40 = ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316(__this, ((int32_t)4120), /*hidden argument*/ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316_RuntimeMethod_var);
		__this->set_maxSamplers_28((((int64_t)((uint64_t)L_40))));
		intptr_t L_41 = ComputeDevice_GetInfo_TisIntPtr_t_m2083192018(__this, ((int32_t)4100), /*hidden argument*/ComputeDevice_GetInfo_TisIntPtr_t_m2083192018_RuntimeMethod_var);
		int64_t L_42 = IntPtr_op_Explicit_m3885458658(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		__this->set_maxWorkGroupSize_29(L_42);
		uint32_t L_43 = ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316(__this, ((int32_t)4099), /*hidden argument*/ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316_RuntimeMethod_var);
		__this->set_maxWorkItemDimensions_30((((int64_t)((uint64_t)L_43))));
		CLDeviceHandle_t1655913246  L_44 = ComputeDevice_get_Handle_m1377678137(__this, /*hidden argument*/NULL);
		RuntimeObject* L_45 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_46 = L_45;
		intptr_t L_47 = (intptr_t)GetInterfaceMethodInfo(L_46, 3, ICL10_t3568785851_il2cpp_TypeInfo_var);
		GetInfoDelegate_2_t3735710902 * L_48 = (GetInfoDelegate_2_t3735710902 *)il2cpp_codegen_object_new(GetInfoDelegate_2_t3735710902_il2cpp_TypeInfo_var);
		GetInfoDelegate_2__ctor_m1840618001(L_48, L_46, L_47, /*hidden argument*/GetInfoDelegate_2__ctor_m1840618001_RuntimeMethod_var);
		IntPtrU5BU5D_t4013366056* L_49 = ComputeObject_GetArrayInfo_TisCLDeviceHandle_t1655913246_TisComputeDeviceInfo_t746502873_TisIntPtr_t_m2586711721(__this, L_44, ((int32_t)4101), L_48, /*hidden argument*/ComputeObject_GetArrayInfo_TisCLDeviceHandle_t1655913246_TisComputeDeviceInfo_t746502873_TisIntPtr_t_m2586711721_RuntimeMethod_var);
		Int64U5BU5D_t2559172825* L_50 = ComputeTools_ConvertArray_m269020480(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
		ReadOnlyCollection_1_t654176295 * L_51 = (ReadOnlyCollection_1_t654176295 *)il2cpp_codegen_object_new(ReadOnlyCollection_1_t654176295_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1__ctor_m1693222885(L_51, (RuntimeObject*)(RuntimeObject*)L_50, /*hidden argument*/ReadOnlyCollection_1__ctor_m1693222885_RuntimeMethod_var);
		__this->set_maxWorkItemSizes_31(L_51);
		uint32_t L_52 = ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316(__this, ((int32_t)4111), /*hidden argument*/ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316_RuntimeMethod_var);
		__this->set_maxWriteImageArgs_32((((int64_t)((uint64_t)L_52))));
		uint32_t L_53 = ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316(__this, ((int32_t)4121), /*hidden argument*/ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316_RuntimeMethod_var);
		__this->set_memBaseAddrAlign_33((((int64_t)((uint64_t)L_53))));
		uint32_t L_54 = ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316(__this, ((int32_t)4122), /*hidden argument*/ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316_RuntimeMethod_var);
		__this->set_minDataTypeAlignSize_34((((int64_t)((uint64_t)L_54))));
		String_t* L_55 = ComputeDevice_GetStringInfo_m3390052655(__this, ((int32_t)4139), /*hidden argument*/NULL);
		__this->set_name_35(L_55);
		ComputePlatform_t3600789258 * L_56 = ___platform0;
		__this->set_platform_36(L_56);
		uint32_t L_57 = ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316(__this, ((int32_t)4102), /*hidden argument*/ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316_RuntimeMethod_var);
		__this->set_preferredVectorWidthChar_37((((int64_t)((uint64_t)L_57))));
		uint32_t L_58 = ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316(__this, ((int32_t)4106), /*hidden argument*/ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316_RuntimeMethod_var);
		__this->set_preferredVectorWidthFloat_38((((int64_t)((uint64_t)L_58))));
		uint32_t L_59 = ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316(__this, ((int32_t)4104), /*hidden argument*/ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316_RuntimeMethod_var);
		__this->set_preferredVectorWidthInt_39((((int64_t)((uint64_t)L_59))));
		uint32_t L_60 = ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316(__this, ((int32_t)4105), /*hidden argument*/ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316_RuntimeMethod_var);
		__this->set_preferredVectorWidthLong_40((((int64_t)((uint64_t)L_60))));
		uint32_t L_61 = ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316(__this, ((int32_t)4103), /*hidden argument*/ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316_RuntimeMethod_var);
		__this->set_preferredVectorWidthShort_41((((int64_t)((uint64_t)L_61))));
		String_t* L_62 = ComputeDevice_GetStringInfo_m3390052655(__this, ((int32_t)4142), /*hidden argument*/NULL);
		__this->set_profile_42(L_62);
		intptr_t L_63 = ComputeDevice_GetInfo_TisIntPtr_t_m2083192018(__this, ((int32_t)4133), /*hidden argument*/ComputeDevice_GetInfo_TisIntPtr_t_m2083192018_RuntimeMethod_var);
		int64_t L_64 = IntPtr_op_Explicit_m3885458658(NULL /*static, unused*/, L_63, /*hidden argument*/NULL);
		__this->set_profilingTimerResolution_43(L_64);
		int64_t L_65 = ComputeDevice_GetInfo_TisInt64_t3736567304_m1988361387(__this, ((int32_t)4138), /*hidden argument*/ComputeDevice_GetInfo_TisInt64_t3736567304_m1988361387_RuntimeMethod_var);
		__this->set_queueProperties_44(L_65);
		int64_t L_66 = ComputeDevice_GetInfo_TisInt64_t3736567304_m1988361387(__this, ((int32_t)4123), /*hidden argument*/ComputeDevice_GetInfo_TisInt64_t3736567304_m1988361387_RuntimeMethod_var);
		__this->set_singleCapabilities_45(L_66);
		int64_t L_67 = ComputeDevice_GetInfo_TisInt64_t3736567304_m1988361387(__this, ((int32_t)4096), /*hidden argument*/ComputeDevice_GetInfo_TisInt64_t3736567304_m1988361387_RuntimeMethod_var);
		__this->set_type_46(L_67);
		String_t* L_68 = ComputeDevice_GetStringInfo_m3390052655(__this, ((int32_t)4140), /*hidden argument*/NULL);
		__this->set_vendor_47(L_68);
		uint32_t L_69 = ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316(__this, ((int32_t)4097), /*hidden argument*/ComputeDevice_GetInfo_TisUInt32_t2560061978_m2292357316_RuntimeMethod_var);
		__this->set_vendorId_48((((int64_t)((uint64_t)L_69))));
		String_t* L_70 = ComputeDevice_GetStringInfo_m3390052655(__this, ((int32_t)4143), /*hidden argument*/NULL);
		__this->set_version_49(L_70);
		return;
	}
}
// System.Boolean Cloo.ComputeDevice::GetBoolInfo(Cloo.ComputeDeviceInfo)
extern "C"  bool ComputeDevice_GetBoolInfo_m3389773502 (ComputeDevice_t4083180286 * __this, int32_t ___paramName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeDevice_GetBoolInfo_m3389773502_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		CLDeviceHandle_t1655913246  L_0 = ComputeDevice_get_Handle_m1377678137(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___paramName0;
		RuntimeObject* L_2 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		intptr_t L_4 = (intptr_t)GetInterfaceMethodInfo(L_3, 3, ICL10_t3568785851_il2cpp_TypeInfo_var);
		GetInfoDelegate_2_t3735710902 * L_5 = (GetInfoDelegate_2_t3735710902 *)il2cpp_codegen_object_new(GetInfoDelegate_2_t3735710902_il2cpp_TypeInfo_var);
		GetInfoDelegate_2__ctor_m1840618001(L_5, L_3, L_4, /*hidden argument*/GetInfoDelegate_2__ctor_m1840618001_RuntimeMethod_var);
		bool L_6 = ComputeObject_GetBoolInfo_TisCLDeviceHandle_t1655913246_TisComputeDeviceInfo_t746502873_m3668400665(__this, L_0, L_1, L_5, /*hidden argument*/ComputeObject_GetBoolInfo_TisCLDeviceHandle_t1655913246_TisComputeDeviceInfo_t746502873_m3668400665_RuntimeMethod_var);
		V_0 = L_6;
		goto IL_0022;
	}

IL_0022:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.String Cloo.ComputeDevice::GetStringInfo(Cloo.ComputeDeviceInfo)
extern "C"  String_t* ComputeDevice_GetStringInfo_m3390052655 (ComputeDevice_t4083180286 * __this, int32_t ___paramName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeDevice_GetStringInfo_m3390052655_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		CLDeviceHandle_t1655913246  L_0 = ComputeDevice_get_Handle_m1377678137(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___paramName0;
		RuntimeObject* L_2 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		intptr_t L_4 = (intptr_t)GetInterfaceMethodInfo(L_3, 3, ICL10_t3568785851_il2cpp_TypeInfo_var);
		GetInfoDelegate_2_t3735710902 * L_5 = (GetInfoDelegate_2_t3735710902 *)il2cpp_codegen_object_new(GetInfoDelegate_2_t3735710902_il2cpp_TypeInfo_var);
		GetInfoDelegate_2__ctor_m1840618001(L_5, L_3, L_4, /*hidden argument*/GetInfoDelegate_2__ctor_m1840618001_RuntimeMethod_var);
		String_t* L_6 = ComputeObject_GetStringInfo_TisCLDeviceHandle_t1655913246_TisComputeDeviceInfo_t746502873_m848664460(__this, L_0, L_1, L_5, /*hidden argument*/ComputeObject_GetStringInfo_TisCLDeviceHandle_t1655913246_TisComputeDeviceInfo_t746502873_m848664460_RuntimeMethod_var);
		V_0 = L_6;
		goto IL_0022;
	}

IL_0022:
	{
		String_t* L_7 = V_0;
		return L_7;
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
// Cloo.ComputeCommandQueue Cloo.ComputeEvent::get_CommandQueue()
extern "C"  ComputeCommandQueue_t3979026963 * ComputeEvent_get_CommandQueue_m1176243992 (ComputeEvent_t249674601 * __this, const RuntimeMethod* method)
{
	{
		ComputeCommandQueue_t3979026963 * L_0 = __this->get_U3CCommandQueueU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Cloo.ComputeEvent::set_CommandQueue(Cloo.ComputeCommandQueue)
extern "C"  void ComputeEvent_set_CommandQueue_m1082294195 (ComputeEvent_t249674601 * __this, ComputeCommandQueue_t3979026963 * ___value0, const RuntimeMethod* method)
{
	{
		ComputeCommandQueue_t3979026963 * L_0 = ___value0;
		__this->set_U3CCommandQueueU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void Cloo.ComputeEvent::.ctor(Cloo.Bindings.CLEventHandle,Cloo.ComputeCommandQueue)
extern "C"  void ComputeEvent__ctor_m3536432089 (ComputeEvent_t249674601 * __this, CLEventHandle_t1689096655  ___handle0, ComputeCommandQueue_t3979026963 * ___queue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeEvent__ctor_m3536432089_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CLEventHandle_t1689096655  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	{
		ComputeEventBase__ctor_m1797496167(__this, /*hidden argument*/NULL);
		CLEventHandle_t1689096655  L_0 = ___handle0;
		ComputeEventBase_set_Handle_m2874357395(__this, L_0, /*hidden argument*/NULL);
		CLEventHandle_t1689096655  L_1 = ComputeEventBase_get_Handle_m678311890(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		intptr_t L_2 = CLEventHandle_get_Value_m3369786685((&V_0), /*hidden argument*/NULL);
		ComputeObject_SetID_m1020599628(__this, L_2, /*hidden argument*/NULL);
		ComputeCommandQueue_t3979026963 * L_3 = ___queue1;
		ComputeEvent_set_CommandQueue_m1082294195(__this, L_3, /*hidden argument*/NULL);
		CLEventHandle_t1689096655  L_4 = ComputeEventBase_get_Handle_m678311890(__this, /*hidden argument*/NULL);
		RuntimeObject* L_5 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_6 = L_5;
		intptr_t L_7 = (intptr_t)GetInterfaceMethodInfo(L_6, 22, ICL10_t3568785851_il2cpp_TypeInfo_var);
		GetInfoDelegate_2_t3807037534 * L_8 = (GetInfoDelegate_2_t3807037534 *)il2cpp_codegen_object_new(GetInfoDelegate_2_t3807037534_il2cpp_TypeInfo_var);
		GetInfoDelegate_2__ctor_m4073742661(L_8, L_6, L_7, /*hidden argument*/GetInfoDelegate_2__ctor_m4073742661_RuntimeMethod_var);
		int32_t L_9 = ComputeObject_GetInfo_TisCLEventHandle_t1689096655_TisComputeEventInfo_t266398486_TisInt32_t2950945753_m2804187208(__this, L_4, ((int32_t)4561), L_8, /*hidden argument*/ComputeObject_GetInfo_TisCLEventHandle_t1689096655_TisComputeEventInfo_t266398486_TisInt32_t2950945753_m2804187208_RuntimeMethod_var);
		ComputeEventBase_set_Type_m1613646403(__this, L_9, /*hidden argument*/NULL);
		ComputeCommandQueue_t3979026963 * L_10 = ___queue1;
		NullCheck(L_10);
		ComputeContext_t1365812911 * L_11 = ComputeCommandQueue_get_Context_m3899312057(L_10, /*hidden argument*/NULL);
		ComputeEventBase_set_Context_m1670368914(__this, L_11, /*hidden argument*/NULL);
		ComputeCommandQueue_t3979026963 * L_12 = ComputeEvent_get_CommandQueue_m1176243992(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		ComputeDevice_t4083180286 * L_13 = ComputeCommandQueue_get_Device_m38748270(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		ComputePlatform_t3600789258 * L_14 = ComputeDevice_get_Platform_m2529460085(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15 = ComputePlatform_get_Version_m568832603(L_14, /*hidden argument*/NULL);
		Version_t3456873960 * L_16 = ComputeTools_ParseVersionString_m689330921(NULL /*static, unused*/, L_15, 1, /*hidden argument*/NULL);
		Version_t3456873960 * L_17 = (Version_t3456873960 *)il2cpp_codegen_object_new(Version_t3456873960_il2cpp_TypeInfo_var);
		Version__ctor_m3537335798(L_17, 1, 0, /*hidden argument*/NULL);
		bool L_18 = Version_op_GreaterThan_m2354880383(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_0095;
		}
	}
	{
		ComputeEventBase_HookNotifier_m2639630227(__this, /*hidden argument*/NULL);
	}

IL_0095:
	{
		return;
	}
}
// System.Void Cloo.ComputeEvent::TrackGCHandle(System.Runtime.InteropServices.GCHandle)
extern "C"  void ComputeEvent_TrackGCHandle_m1613658150 (ComputeEvent_t249674601 * __this, GCHandle_t3351438187  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeEvent_TrackGCHandle_m1613658150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GCHandle_t3351438187  L_0 = ___handle0;
		__this->set_gcHandle_8(L_0);
		intptr_t L_1 = (intptr_t)ComputeEvent_Cleanup_m1437905592_RuntimeMethod_var;
		ComputeCommandStatusChanged_t248714690 * L_2 = (ComputeCommandStatusChanged_t248714690 *)il2cpp_codegen_object_new(ComputeCommandStatusChanged_t248714690_il2cpp_TypeInfo_var);
		ComputeCommandStatusChanged__ctor_m2569250243(L_2, __this, L_1, /*hidden argument*/NULL);
		ComputeEventBase_add_Completed_m1662437227(__this, L_2, /*hidden argument*/NULL);
		intptr_t L_3 = (intptr_t)ComputeEvent_Cleanup_m1437905592_RuntimeMethod_var;
		ComputeCommandStatusChanged_t248714690 * L_4 = (ComputeCommandStatusChanged_t248714690 *)il2cpp_codegen_object_new(ComputeCommandStatusChanged_t248714690_il2cpp_TypeInfo_var);
		ComputeCommandStatusChanged__ctor_m2569250243(L_4, __this, L_3, /*hidden argument*/NULL);
		ComputeEventBase_add_Aborted_m103398491(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cloo.ComputeEvent::Dispose(System.Boolean)
extern "C"  void ComputeEvent_Dispose_m3366551900 (ComputeEvent_t249674601 * __this, bool ___manual0, const RuntimeMethod* method)
{
	{
		ComputeEvent_FreeGCHandle_m3267421830(__this, /*hidden argument*/NULL);
		bool L_0 = ___manual0;
		ComputeEventBase_Dispose_m1883981520(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cloo.ComputeEvent::Cleanup(System.Object,Cloo.ComputeCommandStatusArgs)
extern "C"  void ComputeEvent_Cleanup_m1437905592 (ComputeEvent_t249674601 * __this, RuntimeObject * ___sender0, ComputeCommandStatusArgs_t2147780983 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeEvent_Cleanup_m1437905592_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ComputeCommandQueue_t3979026963 * L_0 = ComputeEvent_get_CommandQueue_m1176243992(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_Events_5();
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			ComputeCommandQueue_t3979026963 * L_3 = ComputeEvent_get_CommandQueue_m1176243992(__this, /*hidden argument*/NULL);
			NullCheck(L_3);
			RuntimeObject* L_4 = L_3->get_Events_5();
			NullCheck(L_4);
			bool L_5 = InterfaceFuncInvoker1< bool, ComputeEventBase_t2120293193 * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<Cloo.ComputeEventBase>::Contains(!0) */, ICollection_1_t653478131_il2cpp_TypeInfo_var, L_4, __this);
			V_1 = L_5;
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_0047;
			}
		}

IL_002a:
		{
			ComputeCommandQueue_t3979026963 * L_7 = ComputeEvent_get_CommandQueue_m1176243992(__this, /*hidden argument*/NULL);
			NullCheck(L_7);
			RuntimeObject* L_8 = L_7->get_Events_5();
			NullCheck(L_8);
			InterfaceFuncInvoker1< bool, ComputeEventBase_t2120293193 * >::Invoke(6 /* System.Boolean System.Collections.Generic.ICollection`1<Cloo.ComputeEventBase>::Remove(!0) */, ICollection_1_t653478131_il2cpp_TypeInfo_var, L_8, __this);
			ComputeResource_Dispose_m1047257706(__this, /*hidden argument*/NULL);
			goto IL_004e;
		}

IL_0047:
		{
			ComputeEvent_FreeGCHandle_m3267421830(__this, /*hidden argument*/NULL);
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x59, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		RuntimeObject* L_9 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(81)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0059:
	{
		return;
	}
}
// System.Void Cloo.ComputeEvent::FreeGCHandle()
extern "C"  void ComputeEvent_FreeGCHandle_m3267421830 (ComputeEvent_t249674601 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		GCHandle_t3351438187 * L_0 = __this->get_address_of_gcHandle_8();
		bool L_1 = GCHandle_get_IsAllocated_m1058226959(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		GCHandle_t3351438187 * L_2 = __this->get_address_of_gcHandle_8();
		RuntimeObject * L_3 = GCHandle_get_Target_m1824973883(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((!(((RuntimeObject*)(RuntimeObject *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		GCHandle_t3351438187 * L_5 = __this->get_address_of_gcHandle_8();
		GCHandle_Free_m1457699368(L_5, /*hidden argument*/NULL);
	}

IL_002f:
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
// System.Void Cloo.ComputeEventBase::add_aborted(Cloo.ComputeCommandStatusChanged)
extern "C"  void ComputeEventBase_add_aborted_m1213948935 (ComputeEventBase_t2120293193 * __this, ComputeCommandStatusChanged_t248714690 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeEventBase_add_aborted_m1213948935_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ComputeCommandStatusChanged_t248714690 * V_0 = NULL;
	ComputeCommandStatusChanged_t248714690 * V_1 = NULL;
	ComputeCommandStatusChanged_t248714690 * V_2 = NULL;
	{
		ComputeCommandStatusChanged_t248714690 * L_0 = __this->get_aborted_1();
		V_0 = L_0;
	}

IL_0007:
	{
		ComputeCommandStatusChanged_t248714690 * L_1 = V_0;
		V_1 = L_1;
		ComputeCommandStatusChanged_t248714690 * L_2 = V_1;
		ComputeCommandStatusChanged_t248714690 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ComputeCommandStatusChanged_t248714690 *)CastclassSealed((RuntimeObject*)L_4, ComputeCommandStatusChanged_t248714690_il2cpp_TypeInfo_var));
		ComputeCommandStatusChanged_t248714690 ** L_5 = __this->get_address_of_aborted_1();
		ComputeCommandStatusChanged_t248714690 * L_6 = V_2;
		ComputeCommandStatusChanged_t248714690 * L_7 = V_1;
		ComputeCommandStatusChanged_t248714690 * L_8 = InterlockedCompareExchangeImpl<ComputeCommandStatusChanged_t248714690 *>(L_5, L_6, L_7);
		V_0 = L_8;
		ComputeCommandStatusChanged_t248714690 * L_9 = V_0;
		ComputeCommandStatusChanged_t248714690 * L_10 = V_1;
		if ((!(((RuntimeObject*)(ComputeCommandStatusChanged_t248714690 *)L_9) == ((RuntimeObject*)(ComputeCommandStatusChanged_t248714690 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Cloo.ComputeEventBase::remove_aborted(Cloo.ComputeCommandStatusChanged)
extern "C"  void ComputeEventBase_remove_aborted_m3701654316 (ComputeEventBase_t2120293193 * __this, ComputeCommandStatusChanged_t248714690 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeEventBase_remove_aborted_m3701654316_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ComputeCommandStatusChanged_t248714690 * V_0 = NULL;
	ComputeCommandStatusChanged_t248714690 * V_1 = NULL;
	ComputeCommandStatusChanged_t248714690 * V_2 = NULL;
	{
		ComputeCommandStatusChanged_t248714690 * L_0 = __this->get_aborted_1();
		V_0 = L_0;
	}

IL_0007:
	{
		ComputeCommandStatusChanged_t248714690 * L_1 = V_0;
		V_1 = L_1;
		ComputeCommandStatusChanged_t248714690 * L_2 = V_1;
		ComputeCommandStatusChanged_t248714690 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ComputeCommandStatusChanged_t248714690 *)CastclassSealed((RuntimeObject*)L_4, ComputeCommandStatusChanged_t248714690_il2cpp_TypeInfo_var));
		ComputeCommandStatusChanged_t248714690 ** L_5 = __this->get_address_of_aborted_1();
		ComputeCommandStatusChanged_t248714690 * L_6 = V_2;
		ComputeCommandStatusChanged_t248714690 * L_7 = V_1;
		ComputeCommandStatusChanged_t248714690 * L_8 = InterlockedCompareExchangeImpl<ComputeCommandStatusChanged_t248714690 *>(L_5, L_6, L_7);
		V_0 = L_8;
		ComputeCommandStatusChanged_t248714690 * L_9 = V_0;
		ComputeCommandStatusChanged_t248714690 * L_10 = V_1;
		if ((!(((RuntimeObject*)(ComputeCommandStatusChanged_t248714690 *)L_9) == ((RuntimeObject*)(ComputeCommandStatusChanged_t248714690 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Cloo.ComputeEventBase::add_completed(Cloo.ComputeCommandStatusChanged)
extern "C"  void ComputeEventBase_add_completed_m626990973 (ComputeEventBase_t2120293193 * __this, ComputeCommandStatusChanged_t248714690 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeEventBase_add_completed_m626990973_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ComputeCommandStatusChanged_t248714690 * V_0 = NULL;
	ComputeCommandStatusChanged_t248714690 * V_1 = NULL;
	ComputeCommandStatusChanged_t248714690 * V_2 = NULL;
	{
		ComputeCommandStatusChanged_t248714690 * L_0 = __this->get_completed_2();
		V_0 = L_0;
	}

IL_0007:
	{
		ComputeCommandStatusChanged_t248714690 * L_1 = V_0;
		V_1 = L_1;
		ComputeCommandStatusChanged_t248714690 * L_2 = V_1;
		ComputeCommandStatusChanged_t248714690 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ComputeCommandStatusChanged_t248714690 *)CastclassSealed((RuntimeObject*)L_4, ComputeCommandStatusChanged_t248714690_il2cpp_TypeInfo_var));
		ComputeCommandStatusChanged_t248714690 ** L_5 = __this->get_address_of_completed_2();
		ComputeCommandStatusChanged_t248714690 * L_6 = V_2;
		ComputeCommandStatusChanged_t248714690 * L_7 = V_1;
		ComputeCommandStatusChanged_t248714690 * L_8 = InterlockedCompareExchangeImpl<ComputeCommandStatusChanged_t248714690 *>(L_5, L_6, L_7);
		V_0 = L_8;
		ComputeCommandStatusChanged_t248714690 * L_9 = V_0;
		ComputeCommandStatusChanged_t248714690 * L_10 = V_1;
		if ((!(((RuntimeObject*)(ComputeCommandStatusChanged_t248714690 *)L_9) == ((RuntimeObject*)(ComputeCommandStatusChanged_t248714690 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Cloo.ComputeEventBase::remove_completed(Cloo.ComputeCommandStatusChanged)
extern "C"  void ComputeEventBase_remove_completed_m2496688581 (ComputeEventBase_t2120293193 * __this, ComputeCommandStatusChanged_t248714690 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeEventBase_remove_completed_m2496688581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ComputeCommandStatusChanged_t248714690 * V_0 = NULL;
	ComputeCommandStatusChanged_t248714690 * V_1 = NULL;
	ComputeCommandStatusChanged_t248714690 * V_2 = NULL;
	{
		ComputeCommandStatusChanged_t248714690 * L_0 = __this->get_completed_2();
		V_0 = L_0;
	}

IL_0007:
	{
		ComputeCommandStatusChanged_t248714690 * L_1 = V_0;
		V_1 = L_1;
		ComputeCommandStatusChanged_t248714690 * L_2 = V_1;
		ComputeCommandStatusChanged_t248714690 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ComputeCommandStatusChanged_t248714690 *)CastclassSealed((RuntimeObject*)L_4, ComputeCommandStatusChanged_t248714690_il2cpp_TypeInfo_var));
		ComputeCommandStatusChanged_t248714690 ** L_5 = __this->get_address_of_completed_2();
		ComputeCommandStatusChanged_t248714690 * L_6 = V_2;
		ComputeCommandStatusChanged_t248714690 * L_7 = V_1;
		ComputeCommandStatusChanged_t248714690 * L_8 = InterlockedCompareExchangeImpl<ComputeCommandStatusChanged_t248714690 *>(L_5, L_6, L_7);
		V_0 = L_8;
		ComputeCommandStatusChanged_t248714690 * L_9 = V_0;
		ComputeCommandStatusChanged_t248714690 * L_10 = V_1;
		if ((!(((RuntimeObject*)(ComputeCommandStatusChanged_t248714690 *)L_9) == ((RuntimeObject*)(ComputeCommandStatusChanged_t248714690 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Cloo.ComputeEventBase::add_Aborted(Cloo.ComputeCommandStatusChanged)
extern "C"  void ComputeEventBase_add_Aborted_m103398491 (ComputeEventBase_t2120293193 * __this, ComputeCommandStatusChanged_t248714690 * ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		ComputeCommandStatusChanged_t248714690 * L_0 = ___value0;
		ComputeEventBase_add_aborted_m1213948935(__this, L_0, /*hidden argument*/NULL);
		ComputeCommandStatusArgs_t2147780983 * L_1 = __this->get_status_3();
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		ComputeCommandStatusArgs_t2147780983 * L_2 = __this->get_status_3();
		NullCheck(L_2);
		int32_t L_3 = ComputeCommandStatusArgs_get_Status_m4037818711(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		ComputeCommandStatusChanged_t248714690 * L_5 = ___value0;
		ComputeCommandStatusArgs_t2147780983 * L_6 = __this->get_status_3();
		NullCheck(L_5);
		ComputeCommandStatusChanged_Invoke_m2973516581(L_5, __this, L_6, /*hidden argument*/NULL);
	}

IL_0034:
	{
		return;
	}
}
// System.Void Cloo.ComputeEventBase::remove_Aborted(Cloo.ComputeCommandStatusChanged)
extern "C"  void ComputeEventBase_remove_Aborted_m2107138838 (ComputeEventBase_t2120293193 * __this, ComputeCommandStatusChanged_t248714690 * ___value0, const RuntimeMethod* method)
{
	{
		ComputeCommandStatusChanged_t248714690 * L_0 = ___value0;
		ComputeEventBase_remove_aborted_m3701654316(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cloo.ComputeEventBase::add_Completed(Cloo.ComputeCommandStatusChanged)
extern "C"  void ComputeEventBase_add_Completed_m1662437227 (ComputeEventBase_t2120293193 * __this, ComputeCommandStatusChanged_t248714690 * ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		ComputeCommandStatusChanged_t248714690 * L_0 = ___value0;
		ComputeEventBase_add_completed_m626990973(__this, L_0, /*hidden argument*/NULL);
		ComputeCommandStatusArgs_t2147780983 * L_1 = __this->get_status_3();
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		ComputeCommandStatusArgs_t2147780983 * L_2 = __this->get_status_3();
		NullCheck(L_2);
		int32_t L_3 = ComputeCommandStatusArgs_get_Status_m4037818711(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		ComputeCommandStatusChanged_t248714690 * L_5 = ___value0;
		ComputeCommandStatusArgs_t2147780983 * L_6 = __this->get_status_3();
		NullCheck(L_5);
		ComputeCommandStatusChanged_Invoke_m2973516581(L_5, __this, L_6, /*hidden argument*/NULL);
	}

IL_0034:
	{
		return;
	}
}
// System.Void Cloo.ComputeEventBase::remove_Completed(Cloo.ComputeCommandStatusChanged)
extern "C"  void ComputeEventBase_remove_Completed_m2562224810 (ComputeEventBase_t2120293193 * __this, ComputeCommandStatusChanged_t248714690 * ___value0, const RuntimeMethod* method)
{
	{
		ComputeCommandStatusChanged_t248714690 * L_0 = ___value0;
		ComputeEventBase_remove_completed_m2496688581(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// Cloo.Bindings.CLEventHandle Cloo.ComputeEventBase::get_Handle()
extern "C"  CLEventHandle_t1689096655  ComputeEventBase_get_Handle_m678311890 (ComputeEventBase_t2120293193 * __this, const RuntimeMethod* method)
{
	{
		CLEventHandle_t1689096655  L_0 = __this->get_U3CHandleU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Cloo.ComputeEventBase::set_Handle(Cloo.Bindings.CLEventHandle)
extern "C"  void ComputeEventBase_set_Handle_m2874357395 (ComputeEventBase_t2120293193 * __this, CLEventHandle_t1689096655  ___value0, const RuntimeMethod* method)
{
	{
		CLEventHandle_t1689096655  L_0 = ___value0;
		__this->set_U3CHandleU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void Cloo.ComputeEventBase::set_Context(Cloo.ComputeContext)
extern "C"  void ComputeEventBase_set_Context_m1670368914 (ComputeEventBase_t2120293193 * __this, ComputeContext_t1365812911 * ___value0, const RuntimeMethod* method)
{
	{
		ComputeContext_t1365812911 * L_0 = ___value0;
		__this->set_U3CContextU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void Cloo.ComputeEventBase::set_Type(Cloo.ComputeCommandType)
extern "C"  void ComputeEventBase_set_Type_m1613646403 (ComputeEventBase_t2120293193 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void Cloo.ComputeEventBase::Dispose(System.Boolean)
extern "C"  void ComputeEventBase_Dispose_m1883981520 (ComputeEventBase_t2120293193 * __this, bool ___manual0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeEventBase_Dispose_m1883981520_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	CLEventHandle_t1689096655  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		CLEventHandle_t1689096655  L_0 = ComputeEventBase_get_Handle_m678311890(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = CLEventHandle_get_IsValid_m2311008441((&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		RuntimeObject* L_3 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		CLEventHandle_t1689096655  L_4 = ComputeEventBase_get_Handle_m678311890(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		InterfaceFuncInvoker1< int32_t, CLEventHandle_t1689096655  >::Invoke(23 /* Cloo.ComputeErrorCode Cloo.Bindings.ICL10::ReleaseEvent(Cloo.Bindings.CLEventHandle) */, ICL10_t3568785851_il2cpp_TypeInfo_var, L_3, L_4);
		CLEventHandle_t1689096655  L_5 = ComputeEventBase_get_Handle_m678311890(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		CLEventHandle_Invalidate_m1997689511((&V_1), /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void Cloo.ComputeEventBase::DisposeInternal()
extern "C"  void ComputeEventBase_DisposeInternal_m3027978081 (ComputeEventBase_t2120293193 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void Cloo.ComputeResource::Dispose(System.Boolean) */, __this, (bool)0);
		return;
	}
}
// System.Void Cloo.ComputeEventBase::HookNotifier()
extern "C"  void ComputeEventBase_HookNotifier_m2639630227 (ComputeEventBase_t2120293193 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeEventBase_HookNotifier_m2639630227_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		intptr_t L_0 = (intptr_t)ComputeEventBase_StatusNotify_m984476418_RuntimeMethod_var;
		ComputeEventCallback_t888729672 * L_1 = (ComputeEventCallback_t888729672 *)il2cpp_codegen_object_new(ComputeEventCallback_t888729672_il2cpp_TypeInfo_var);
		ComputeEventCallback__ctor_m113015864(L_1, __this, L_0, /*hidden argument*/NULL);
		__this->set_statusNotify_4(L_1);
		RuntimeObject* L_2 = CLInterface_get_CL11_m1440148108(NULL /*static, unused*/, /*hidden argument*/NULL);
		CLEventHandle_t1689096655  L_3 = ComputeEventBase_get_Handle_m678311890(__this, /*hidden argument*/NULL);
		ComputeEventCallback_t888729672 * L_4 = __this->get_statusNotify_4();
		NullCheck(L_2);
		int32_t L_5 = InterfaceFuncInvoker4< int32_t, CLEventHandle_t1689096655 , int32_t, ComputeEventCallback_t888729672 *, intptr_t >::Invoke(0 /* Cloo.ComputeErrorCode Cloo.Bindings.ICL11::SetEventCallback(Cloo.Bindings.CLEventHandle,System.Int32,Cloo.Bindings.ComputeEventCallback,System.IntPtr) */, ICL11_t839902496_il2cpp_TypeInfo_var, L_2, L_3, 0, L_4, (intptr_t)(0));
		V_0 = L_5;
		int32_t L_6 = V_0;
		ComputeException_ThrowOnError_m4115276668(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cloo.ComputeEventBase::OnCompleted(System.Object,Cloo.ComputeCommandStatusArgs)
extern "C"  void ComputeEventBase_OnCompleted_m3031251506 (ComputeEventBase_t2120293193 * __this, RuntimeObject * ___sender0, ComputeCommandStatusArgs_t2147780983 * ___evArgs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		ComputeCommandStatusChanged_t248714690 * L_0 = __this->get_completed_2();
		V_0 = (bool)((!(((RuntimeObject*)(ComputeCommandStatusChanged_t248714690 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		ComputeCommandStatusChanged_t248714690 * L_2 = __this->get_completed_2();
		RuntimeObject * L_3 = ___sender0;
		ComputeCommandStatusArgs_t2147780983 * L_4 = ___evArgs1;
		NullCheck(L_2);
		ComputeCommandStatusChanged_Invoke_m2973516581(L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void Cloo.ComputeEventBase::OnAborted(System.Object,Cloo.ComputeCommandStatusArgs)
extern "C"  void ComputeEventBase_OnAborted_m2199672897 (ComputeEventBase_t2120293193 * __this, RuntimeObject * ___sender0, ComputeCommandStatusArgs_t2147780983 * ___evArgs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		ComputeCommandStatusChanged_t248714690 * L_0 = __this->get_aborted_1();
		V_0 = (bool)((!(((RuntimeObject*)(ComputeCommandStatusChanged_t248714690 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		ComputeCommandStatusChanged_t248714690 * L_2 = __this->get_aborted_1();
		RuntimeObject * L_3 = ___sender0;
		ComputeCommandStatusArgs_t2147780983 * L_4 = ___evArgs1;
		NullCheck(L_2);
		ComputeCommandStatusChanged_Invoke_m2973516581(L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void Cloo.ComputeEventBase::StatusNotify(Cloo.Bindings.CLEventHandle,System.Int32,System.IntPtr)
extern "C"  void ComputeEventBase_StatusNotify_m984476418 (ComputeEventBase_t2120293193 * __this, CLEventHandle_t1689096655  ___eventHandle0, int32_t ___cmdExecStatusOrErr1, intptr_t ___userData2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeEventBase_StatusNotify_m984476418_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___cmdExecStatusOrErr1;
		ComputeCommandStatusArgs_t2147780983 * L_1 = (ComputeCommandStatusArgs_t2147780983 *)il2cpp_codegen_object_new(ComputeCommandStatusArgs_t2147780983_il2cpp_TypeInfo_var);
		ComputeCommandStatusArgs__ctor_m1631833591(L_1, __this, L_0, /*hidden argument*/NULL);
		__this->set_status_3(L_1);
		int32_t L_2 = ___cmdExecStatusOrErr1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0025;
	}

IL_0015:
	{
		ComputeCommandStatusArgs_t2147780983 * L_4 = __this->get_status_3();
		VirtActionInvoker2< RuntimeObject *, ComputeCommandStatusArgs_t2147780983 * >::Invoke(7 /* System.Void Cloo.ComputeEventBase::OnCompleted(System.Object,Cloo.ComputeCommandStatusArgs) */, __this, __this, L_4);
		goto IL_0035;
	}

IL_0025:
	{
		ComputeCommandStatusArgs_t2147780983 * L_5 = __this->get_status_3();
		VirtActionInvoker2< RuntimeObject *, ComputeCommandStatusArgs_t2147780983 * >::Invoke(8 /* System.Void Cloo.ComputeEventBase::OnAborted(System.Object,Cloo.ComputeCommandStatusArgs) */, __this, __this, L_5);
		goto IL_0035;
	}

IL_0035:
	{
		return;
	}
}
// System.Void Cloo.ComputeEventBase::.ctor()
extern "C"  void ComputeEventBase__ctor_m1797496167 (ComputeEventBase_t2120293193 * __this, const RuntimeMethod* method)
{
	{
		ComputeResource__ctor_m415879097(__this, /*hidden argument*/NULL);
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
// System.Void Cloo.ComputeException::.ctor(Cloo.ComputeErrorCode)
extern "C"  void ComputeException__ctor_m941830565 (ComputeException_t3978051080 * __this, int32_t ___code0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeException__ctor_m941830565_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = Box(ComputeErrorCode_t2380417756_il2cpp_TypeInfo_var, (&___code0));
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___code0 = *(int32_t*)UnBox(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral1790301335, L_1, _stringLiteral3452614530, /*hidden argument*/NULL);
		Exception__ctor_m1152696503(__this, L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___code0;
		__this->set_code_11(L_3);
		return;
	}
}
// System.Void Cloo.ComputeException::ThrowOnError(Cloo.ComputeErrorCode)
extern "C"  void ComputeException_ThrowOnError_m4115276668 (RuntimeObject * __this /* static, unused */, int32_t ___errorCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeException_ThrowOnError_m4115276668_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___errorCode0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-62))))
		{
			case 0:
			{
				goto IL_021a;
			}
			case 1:
			{
				goto IL_0214;
			}
			case 2:
			{
				goto IL_020e;
			}
			case 3:
			{
				goto IL_0208;
			}
			case 4:
			{
				goto IL_0202;
			}
			case 5:
			{
				goto IL_01fc;
			}
			case 6:
			{
				goto IL_01f6;
			}
			case 7:
			{
				goto IL_01f0;
			}
			case 8:
			{
				goto IL_01ea;
			}
			case 9:
			{
				goto IL_01e4;
			}
			case 10:
			{
				goto IL_01de;
			}
			case 11:
			{
				goto IL_01d8;
			}
			case 12:
			{
				goto IL_01d2;
			}
			case 13:
			{
				goto IL_01cc;
			}
			case 14:
			{
				goto IL_01c6;
			}
			case 15:
			{
				goto IL_01c0;
			}
			case 16:
			{
				goto IL_01ba;
			}
			case 17:
			{
				goto IL_01b4;
			}
			case 18:
			{
				goto IL_01ae;
			}
			case 19:
			{
				goto IL_01a8;
			}
			case 20:
			{
				goto IL_01a2;
			}
			case 21:
			{
				goto IL_019c;
			}
			case 22:
			{
				goto IL_0196;
			}
			case 23:
			{
				goto IL_0190;
			}
			case 24:
			{
				goto IL_018a;
			}
			case 25:
			{
				goto IL_0184;
			}
			case 26:
			{
				goto IL_017e;
			}
			case 27:
			{
				goto IL_0178;
			}
			case 28:
			{
				goto IL_0172;
			}
			case 29:
			{
				goto IL_016c;
			}
			case 30:
			{
				goto IL_0166;
			}
			case 31:
			{
				goto IL_0160;
			}
			case 32:
			{
				goto IL_015a;
			}
			case 33:
			{
				goto IL_0220;
			}
			case 34:
			{
				goto IL_0220;
			}
			case 35:
			{
				goto IL_0220;
			}
			case 36:
			{
				goto IL_0220;
			}
			case 37:
			{
				goto IL_0220;
			}
			case 38:
			{
				goto IL_0220;
			}
			case 39:
			{
				goto IL_0220;
			}
			case 40:
			{
				goto IL_0220;
			}
			case 41:
			{
				goto IL_0220;
			}
			case 42:
			{
				goto IL_0220;
			}
			case 43:
			{
				goto IL_0220;
			}
			case 44:
			{
				goto IL_0220;
			}
			case 45:
			{
				goto IL_0220;
			}
			case 46:
			{
				goto IL_0220;
			}
			case 47:
			{
				goto IL_0220;
			}
			case 48:
			{
				goto IL_0220;
			}
			case 49:
			{
				goto IL_0220;
			}
			case 50:
			{
				goto IL_0154;
			}
			case 51:
			{
				goto IL_014e;
			}
			case 52:
			{
				goto IL_0148;
			}
			case 53:
			{
				goto IL_0142;
			}
			case 54:
			{
				goto IL_013c;
			}
			case 55:
			{
				goto IL_0136;
			}
			case 56:
			{
				goto IL_0130;
			}
			case 57:
			{
				goto IL_012a;
			}
			case 58:
			{
				goto IL_0124;
			}
			case 59:
			{
				goto IL_011e;
			}
			case 60:
			{
				goto IL_0118;
			}
			case 61:
			{
				goto IL_0112;
			}
			case 62:
			{
				goto IL_010d;
			}
		}
	}
	{
		goto IL_0220;
	}

IL_010d:
	{
		goto IL_0227;
	}

IL_0112:
	{
		DeviceNotFoundComputeException_t2803661270 * L_2 = (DeviceNotFoundComputeException_t2803661270 *)il2cpp_codegen_object_new(DeviceNotFoundComputeException_t2803661270_il2cpp_TypeInfo_var);
		DeviceNotFoundComputeException__ctor_m2778902249(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_0118:
	{
		DeviceNotAvailableComputeException_t1010603520 * L_3 = (DeviceNotAvailableComputeException_t1010603520 *)il2cpp_codegen_object_new(DeviceNotAvailableComputeException_t1010603520_il2cpp_TypeInfo_var);
		DeviceNotAvailableComputeException__ctor_m2576565587(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_011e:
	{
		CompilerNotAvailableComputeException_t3264770924 * L_4 = (CompilerNotAvailableComputeException_t3264770924 *)il2cpp_codegen_object_new(CompilerNotAvailableComputeException_t3264770924_il2cpp_TypeInfo_var);
		CompilerNotAvailableComputeException__ctor_m1207691428(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_0124:
	{
		MemoryObjectAllocationFailureComputeException_t1033166821 * L_5 = (MemoryObjectAllocationFailureComputeException_t1033166821 *)il2cpp_codegen_object_new(MemoryObjectAllocationFailureComputeException_t1033166821_il2cpp_TypeInfo_var);
		MemoryObjectAllocationFailureComputeException__ctor_m3349746710(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_012a:
	{
		OutOfResourcesComputeException_t3780973734 * L_6 = (OutOfResourcesComputeException_t3780973734 *)il2cpp_codegen_object_new(OutOfResourcesComputeException_t3780973734_il2cpp_TypeInfo_var);
		OutOfResourcesComputeException__ctor_m2203742086(L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_0130:
	{
		OutOfHostMemoryComputeException_t2750237157 * L_7 = (OutOfHostMemoryComputeException_t2750237157 *)il2cpp_codegen_object_new(OutOfHostMemoryComputeException_t2750237157_il2cpp_TypeInfo_var);
		OutOfHostMemoryComputeException__ctor_m2326176698(L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_0136:
	{
		ProfilingInfoNotAvailableComputeException_t3456066642 * L_8 = (ProfilingInfoNotAvailableComputeException_t3456066642 *)il2cpp_codegen_object_new(ProfilingInfoNotAvailableComputeException_t3456066642_il2cpp_TypeInfo_var);
		ProfilingInfoNotAvailableComputeException__ctor_m951743102(L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_013c:
	{
		MemoryCopyOverlapComputeException_t861502170 * L_9 = (MemoryCopyOverlapComputeException_t861502170 *)il2cpp_codegen_object_new(MemoryCopyOverlapComputeException_t861502170_il2cpp_TypeInfo_var);
		MemoryCopyOverlapComputeException__ctor_m764004675(L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_0142:
	{
		ImageFormatMismatchComputeException_t110044459 * L_10 = (ImageFormatMismatchComputeException_t110044459 *)il2cpp_codegen_object_new(ImageFormatMismatchComputeException_t110044459_il2cpp_TypeInfo_var);
		ImageFormatMismatchComputeException__ctor_m2167928152(L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_0148:
	{
		ImageFormatNotSupportedComputeException_t824198691 * L_11 = (ImageFormatNotSupportedComputeException_t824198691 *)il2cpp_codegen_object_new(ImageFormatNotSupportedComputeException_t824198691_il2cpp_TypeInfo_var);
		ImageFormatNotSupportedComputeException__ctor_m322969780(L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_014e:
	{
		BuildProgramFailureComputeException_t2506631677 * L_12 = (BuildProgramFailureComputeException_t2506631677 *)il2cpp_codegen_object_new(BuildProgramFailureComputeException_t2506631677_il2cpp_TypeInfo_var);
		BuildProgramFailureComputeException__ctor_m1003530587(L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_0154:
	{
		MapFailureComputeException_t609039928 * L_13 = (MapFailureComputeException_t609039928 *)il2cpp_codegen_object_new(MapFailureComputeException_t609039928_il2cpp_TypeInfo_var);
		MapFailureComputeException__ctor_m1563865810(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_015a:
	{
		InvalidValueComputeException_t1884546994 * L_14 = (InvalidValueComputeException_t1884546994 *)il2cpp_codegen_object_new(InvalidValueComputeException_t1884546994_il2cpp_TypeInfo_var);
		InvalidValueComputeException__ctor_m4076390645(L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_0160:
	{
		InvalidDeviceTypeComputeException_t3015842128 * L_15 = (InvalidDeviceTypeComputeException_t3015842128 *)il2cpp_codegen_object_new(InvalidDeviceTypeComputeException_t3015842128_il2cpp_TypeInfo_var);
		InvalidDeviceTypeComputeException__ctor_m1487330586(L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_0166:
	{
		InvalidPlatformComputeException_t1484941494 * L_16 = (InvalidPlatformComputeException_t1484941494 *)il2cpp_codegen_object_new(InvalidPlatformComputeException_t1484941494_il2cpp_TypeInfo_var);
		InvalidPlatformComputeException__ctor_m793721652(L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_016c:
	{
		InvalidDeviceComputeException_t696285512 * L_17 = (InvalidDeviceComputeException_t696285512 *)il2cpp_codegen_object_new(InvalidDeviceComputeException_t696285512_il2cpp_TypeInfo_var);
		InvalidDeviceComputeException__ctor_m2683439950(L_17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_0172:
	{
		InvalidContextComputeException_t2857043932 * L_18 = (InvalidContextComputeException_t2857043932 *)il2cpp_codegen_object_new(InvalidContextComputeException_t2857043932_il2cpp_TypeInfo_var);
		InvalidContextComputeException__ctor_m2865329868(L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_0178:
	{
		InvalidCommandQueueFlagsComputeException_t1130645332 * L_19 = (InvalidCommandQueueFlagsComputeException_t1130645332 *)il2cpp_codegen_object_new(InvalidCommandQueueFlagsComputeException_t1130645332_il2cpp_TypeInfo_var);
		InvalidCommandQueueFlagsComputeException__ctor_m3143306054(L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_017e:
	{
		InvalidCommandQueueComputeException_t3760823054 * L_20 = (InvalidCommandQueueComputeException_t3760823054 *)il2cpp_codegen_object_new(InvalidCommandQueueComputeException_t3760823054_il2cpp_TypeInfo_var);
		InvalidCommandQueueComputeException__ctor_m83821076(L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_0184:
	{
		InvalidHostPointerComputeException_t3920245830 * L_21 = (InvalidHostPointerComputeException_t3920245830 *)il2cpp_codegen_object_new(InvalidHostPointerComputeException_t3920245830_il2cpp_TypeInfo_var);
		InvalidHostPointerComputeException__ctor_m3652038500(L_21, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_018a:
	{
		InvalidMemoryObjectComputeException_t1584946539 * L_22 = (InvalidMemoryObjectComputeException_t1584946539 *)il2cpp_codegen_object_new(InvalidMemoryObjectComputeException_t1584946539_il2cpp_TypeInfo_var);
		InvalidMemoryObjectComputeException__ctor_m2795730210(L_22, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_0190:
	{
		InvalidImageFormatDescriptorComputeException_t1307689117 * L_23 = (InvalidImageFormatDescriptorComputeException_t1307689117 *)il2cpp_codegen_object_new(InvalidImageFormatDescriptorComputeException_t1307689117_il2cpp_TypeInfo_var);
		InvalidImageFormatDescriptorComputeException__ctor_m3349053293(L_23, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_0196:
	{
		InvalidImageSizeComputeException_t811168388 * L_24 = (InvalidImageSizeComputeException_t811168388 *)il2cpp_codegen_object_new(InvalidImageSizeComputeException_t811168388_il2cpp_TypeInfo_var);
		InvalidImageSizeComputeException__ctor_m354468173(L_24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_019c:
	{
		InvalidSamplerComputeException_t500922945 * L_25 = (InvalidSamplerComputeException_t500922945 *)il2cpp_codegen_object_new(InvalidSamplerComputeException_t500922945_il2cpp_TypeInfo_var);
		InvalidSamplerComputeException__ctor_m2894750045(L_25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_01a2:
	{
		InvalidBinaryComputeException_t3216170158 * L_26 = (InvalidBinaryComputeException_t3216170158 *)il2cpp_codegen_object_new(InvalidBinaryComputeException_t3216170158_il2cpp_TypeInfo_var);
		InvalidBinaryComputeException__ctor_m1176098170(L_26, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_01a8:
	{
		InvalidBuildOptionsComputeException_t696878590 * L_27 = (InvalidBuildOptionsComputeException_t696878590 *)il2cpp_codegen_object_new(InvalidBuildOptionsComputeException_t696878590_il2cpp_TypeInfo_var);
		InvalidBuildOptionsComputeException__ctor_m2594830414(L_27, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_01ae:
	{
		InvalidProgramComputeException_t1992991535 * L_28 = (InvalidProgramComputeException_t1992991535 *)il2cpp_codegen_object_new(InvalidProgramComputeException_t1992991535_il2cpp_TypeInfo_var);
		InvalidProgramComputeException__ctor_m582511112(L_28, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_01b4:
	{
		InvalidProgramExecutableComputeException_t315365513 * L_29 = (InvalidProgramExecutableComputeException_t315365513 *)il2cpp_codegen_object_new(InvalidProgramExecutableComputeException_t315365513_il2cpp_TypeInfo_var);
		InvalidProgramExecutableComputeException__ctor_m3139956341(L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_01ba:
	{
		InvalidKernelNameComputeException_t1206973794 * L_30 = (InvalidKernelNameComputeException_t1206973794 *)il2cpp_codegen_object_new(InvalidKernelNameComputeException_t1206973794_il2cpp_TypeInfo_var);
		InvalidKernelNameComputeException__ctor_m3425883653(L_30, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_01c0:
	{
		InvalidKernelDefinitionComputeException_t1910702029 * L_31 = (InvalidKernelDefinitionComputeException_t1910702029 *)il2cpp_codegen_object_new(InvalidKernelDefinitionComputeException_t1910702029_il2cpp_TypeInfo_var);
		InvalidKernelDefinitionComputeException__ctor_m1061364600(L_31, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_01c6:
	{
		InvalidKernelComputeException_t926678227 * L_32 = (InvalidKernelComputeException_t926678227 *)il2cpp_codegen_object_new(InvalidKernelComputeException_t926678227_il2cpp_TypeInfo_var);
		InvalidKernelComputeException__ctor_m3724177594(L_32, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_01cc:
	{
		InvalidArgumentIndexComputeException_t2375232228 * L_33 = (InvalidArgumentIndexComputeException_t2375232228 *)il2cpp_codegen_object_new(InvalidArgumentIndexComputeException_t2375232228_il2cpp_TypeInfo_var);
		InvalidArgumentIndexComputeException__ctor_m3327796891(L_33, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_01d2:
	{
		InvalidArgumentValueComputeException_t4274550977 * L_34 = (InvalidArgumentValueComputeException_t4274550977 *)il2cpp_codegen_object_new(InvalidArgumentValueComputeException_t4274550977_il2cpp_TypeInfo_var);
		InvalidArgumentValueComputeException__ctor_m267991062(L_34, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_01d8:
	{
		InvalidArgumentSizeComputeException_t126175770 * L_35 = (InvalidArgumentSizeComputeException_t126175770 *)il2cpp_codegen_object_new(InvalidArgumentSizeComputeException_t126175770_il2cpp_TypeInfo_var);
		InvalidArgumentSizeComputeException__ctor_m1121520031(L_35, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_01de:
	{
		InvalidKernelArgumentsComputeException_t1122558706 * L_36 = (InvalidKernelArgumentsComputeException_t1122558706 *)il2cpp_codegen_object_new(InvalidKernelArgumentsComputeException_t1122558706_il2cpp_TypeInfo_var);
		InvalidKernelArgumentsComputeException__ctor_m2686482170(L_36, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_01e4:
	{
		InvalidWorkDimensionsComputeException_t3766439885 * L_37 = (InvalidWorkDimensionsComputeException_t3766439885 *)il2cpp_codegen_object_new(InvalidWorkDimensionsComputeException_t3766439885_il2cpp_TypeInfo_var);
		InvalidWorkDimensionsComputeException__ctor_m1048105053(L_37, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_01ea:
	{
		InvalidWorkGroupSizeComputeException_t2659536362 * L_38 = (InvalidWorkGroupSizeComputeException_t2659536362 *)il2cpp_codegen_object_new(InvalidWorkGroupSizeComputeException_t2659536362_il2cpp_TypeInfo_var);
		InvalidWorkGroupSizeComputeException__ctor_m2849629393(L_38, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_01f0:
	{
		InvalidWorkItemSizeComputeException_t3193750300 * L_39 = (InvalidWorkItemSizeComputeException_t3193750300 *)il2cpp_codegen_object_new(InvalidWorkItemSizeComputeException_t3193750300_il2cpp_TypeInfo_var);
		InvalidWorkItemSizeComputeException__ctor_m239448449(L_39, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_01f6:
	{
		InvalidGlobalOffsetComputeException_t637889218 * L_40 = (InvalidGlobalOffsetComputeException_t637889218 *)il2cpp_codegen_object_new(InvalidGlobalOffsetComputeException_t637889218_il2cpp_TypeInfo_var);
		InvalidGlobalOffsetComputeException__ctor_m4038333471(L_40, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_01fc:
	{
		InvalidEventWaitListComputeException_t1652478454 * L_41 = (InvalidEventWaitListComputeException_t1652478454 *)il2cpp_codegen_object_new(InvalidEventWaitListComputeException_t1652478454_il2cpp_TypeInfo_var);
		InvalidEventWaitListComputeException__ctor_m574768267(L_41, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_0202:
	{
		InvalidEventComputeException_t3815158586 * L_42 = (InvalidEventComputeException_t3815158586 *)il2cpp_codegen_object_new(InvalidEventComputeException_t3815158586_il2cpp_TypeInfo_var);
		InvalidEventComputeException__ctor_m3948495255(L_42, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_0208:
	{
		InvalidOperationComputeException_t1009558057 * L_43 = (InvalidOperationComputeException_t1009558057 *)il2cpp_codegen_object_new(InvalidOperationComputeException_t1009558057_il2cpp_TypeInfo_var);
		InvalidOperationComputeException__ctor_m3035711447(L_43, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_020e:
	{
		InvalidGLObjectComputeException_t3268435956 * L_44 = (InvalidGLObjectComputeException_t3268435956 *)il2cpp_codegen_object_new(InvalidGLObjectComputeException_t3268435956_il2cpp_TypeInfo_var);
		InvalidGLObjectComputeException__ctor_m4286668796(L_44, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_0214:
	{
		InvalidBufferSizeComputeException_t3765795266 * L_45 = (InvalidBufferSizeComputeException_t3765795266 *)il2cpp_codegen_object_new(InvalidBufferSizeComputeException_t3765795266_il2cpp_TypeInfo_var);
		InvalidBufferSizeComputeException__ctor_m3598024023(L_45, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_021a:
	{
		InvalidMipLevelComputeException_t2097497037 * L_46 = (InvalidMipLevelComputeException_t2097497037 *)il2cpp_codegen_object_new(InvalidMipLevelComputeException_t2097497037_il2cpp_TypeInfo_var);
		InvalidMipLevelComputeException__ctor_m2734449470(L_46, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_0220:
	{
		int32_t L_47 = ___errorCode0;
		ComputeException_t3978051080 * L_48 = (ComputeException_t3978051080 *)il2cpp_codegen_object_new(ComputeException_t3978051080_il2cpp_TypeInfo_var);
		ComputeException__ctor_m941830565(L_48, L_47, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_48,ComputeException_ThrowOnError_m4115276668_RuntimeMethod_var);
	}

IL_0227:
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
// System.Void Cloo.ComputeImage::set_Depth(System.Int32)
extern "C"  void ComputeImage_set_Depth_m4123935464 (ComputeImage_t2206698626 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CDepthU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void Cloo.ComputeImage::set_ElementSize(System.Int32)
extern "C"  void ComputeImage_set_ElementSize_m189494217 (ComputeImage_t2206698626 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CElementSizeU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void Cloo.ComputeImage::set_Height(System.Int32)
extern "C"  void ComputeImage_set_Height_m2676721557 (ComputeImage_t2206698626 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CHeightU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void Cloo.ComputeImage::set_RowPitch(System.Int64)
extern "C"  void ComputeImage_set_RowPitch_m2789524076 (ComputeImage_t2206698626 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CRowPitchU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void Cloo.ComputeImage::set_SlicePitch(System.Int64)
extern "C"  void ComputeImage_set_SlicePitch_m1174254482 (ComputeImage_t2206698626 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CSlicePitchU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void Cloo.ComputeImage::set_Width(System.Int32)
extern "C"  void ComputeImage_set_Width_m423181061 (ComputeImage_t2206698626 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CWidthU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Void Cloo.ComputeImage::.ctor(Cloo.ComputeContext,Cloo.ComputeMemoryFlags)
extern "C"  void ComputeImage__ctor_m3543426040 (ComputeImage_t2206698626 * __this, ComputeContext_t1365812911 * ___context0, int64_t ___flags1, const RuntimeMethod* method)
{
	{
		ComputeContext_t1365812911 * L_0 = ___context0;
		int64_t L_1 = ___flags1;
		ComputeMemory__ctor_m2255277297(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cloo.ComputeImage::Init()
extern "C"  void ComputeImage_Init_m2341954491 (ComputeImage_t2206698626 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeImage_Init_m2341954491_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CLMemoryHandle_t2389804491  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		CLMemoryHandle_t2389804491  L_0 = ComputeMemory_get_Handle_m908326668(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		intptr_t L_1 = CLMemoryHandle_get_Value_m1881717988((&V_0), /*hidden argument*/NULL);
		ComputeObject_SetID_m1020599628(__this, L_1, /*hidden argument*/NULL);
		CLMemoryHandle_t2389804491  L_2 = ComputeMemory_get_Handle_m908326668(__this, /*hidden argument*/NULL);
		RuntimeObject* L_3 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_4 = L_3;
		intptr_t L_5 = (intptr_t)GetInterfaceMethodInfo(L_4, 12, ICL10_t3568785851_il2cpp_TypeInfo_var);
		GetInfoDelegate_2_t3255322841 * L_6 = (GetInfoDelegate_2_t3255322841 *)il2cpp_codegen_object_new(GetInfoDelegate_2_t3255322841_il2cpp_TypeInfo_var);
		GetInfoDelegate_2__ctor_m2956066229(L_6, L_4, L_5, /*hidden argument*/GetInfoDelegate_2__ctor_m2956066229_RuntimeMethod_var);
		intptr_t L_7 = ComputeObject_GetInfo_TisCLMemoryHandle_t2389804491_TisComputeImageInfo_t1608465149_TisIntPtr_t_m3606957894(__this, L_2, ((int32_t)4374), L_6, /*hidden argument*/ComputeObject_GetInfo_TisCLMemoryHandle_t2389804491_TisComputeImageInfo_t1608465149_TisIntPtr_t_m3606957894_RuntimeMethod_var);
		int32_t L_8 = IntPtr_op_Explicit_m4220076518(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		ComputeImage_set_Depth_m4123935464(__this, L_8, /*hidden argument*/NULL);
		CLMemoryHandle_t2389804491  L_9 = ComputeMemory_get_Handle_m908326668(__this, /*hidden argument*/NULL);
		RuntimeObject* L_10 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_11 = L_10;
		intptr_t L_12 = (intptr_t)GetInterfaceMethodInfo(L_11, 12, ICL10_t3568785851_il2cpp_TypeInfo_var);
		GetInfoDelegate_2_t3255322841 * L_13 = (GetInfoDelegate_2_t3255322841 *)il2cpp_codegen_object_new(GetInfoDelegate_2_t3255322841_il2cpp_TypeInfo_var);
		GetInfoDelegate_2__ctor_m2956066229(L_13, L_11, L_12, /*hidden argument*/GetInfoDelegate_2__ctor_m2956066229_RuntimeMethod_var);
		intptr_t L_14 = ComputeObject_GetInfo_TisCLMemoryHandle_t2389804491_TisComputeImageInfo_t1608465149_TisIntPtr_t_m3606957894(__this, L_9, ((int32_t)4369), L_13, /*hidden argument*/ComputeObject_GetInfo_TisCLMemoryHandle_t2389804491_TisComputeImageInfo_t1608465149_TisIntPtr_t_m3606957894_RuntimeMethod_var);
		int32_t L_15 = IntPtr_op_Explicit_m4220076518(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		ComputeImage_set_ElementSize_m189494217(__this, L_15, /*hidden argument*/NULL);
		CLMemoryHandle_t2389804491  L_16 = ComputeMemory_get_Handle_m908326668(__this, /*hidden argument*/NULL);
		RuntimeObject* L_17 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_18 = L_17;
		intptr_t L_19 = (intptr_t)GetInterfaceMethodInfo(L_18, 12, ICL10_t3568785851_il2cpp_TypeInfo_var);
		GetInfoDelegate_2_t3255322841 * L_20 = (GetInfoDelegate_2_t3255322841 *)il2cpp_codegen_object_new(GetInfoDelegate_2_t3255322841_il2cpp_TypeInfo_var);
		GetInfoDelegate_2__ctor_m2956066229(L_20, L_18, L_19, /*hidden argument*/GetInfoDelegate_2__ctor_m2956066229_RuntimeMethod_var);
		intptr_t L_21 = ComputeObject_GetInfo_TisCLMemoryHandle_t2389804491_TisComputeImageInfo_t1608465149_TisIntPtr_t_m3606957894(__this, L_16, ((int32_t)4373), L_20, /*hidden argument*/ComputeObject_GetInfo_TisCLMemoryHandle_t2389804491_TisComputeImageInfo_t1608465149_TisIntPtr_t_m3606957894_RuntimeMethod_var);
		int32_t L_22 = IntPtr_op_Explicit_m4220076518(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		ComputeImage_set_Height_m2676721557(__this, L_22, /*hidden argument*/NULL);
		CLMemoryHandle_t2389804491  L_23 = ComputeMemory_get_Handle_m908326668(__this, /*hidden argument*/NULL);
		RuntimeObject* L_24 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_25 = L_24;
		intptr_t L_26 = (intptr_t)GetInterfaceMethodInfo(L_25, 12, ICL10_t3568785851_il2cpp_TypeInfo_var);
		GetInfoDelegate_2_t3255322841 * L_27 = (GetInfoDelegate_2_t3255322841 *)il2cpp_codegen_object_new(GetInfoDelegate_2_t3255322841_il2cpp_TypeInfo_var);
		GetInfoDelegate_2__ctor_m2956066229(L_27, L_25, L_26, /*hidden argument*/GetInfoDelegate_2__ctor_m2956066229_RuntimeMethod_var);
		intptr_t L_28 = ComputeObject_GetInfo_TisCLMemoryHandle_t2389804491_TisComputeImageInfo_t1608465149_TisIntPtr_t_m3606957894(__this, L_23, ((int32_t)4370), L_27, /*hidden argument*/ComputeObject_GetInfo_TisCLMemoryHandle_t2389804491_TisComputeImageInfo_t1608465149_TisIntPtr_t_m3606957894_RuntimeMethod_var);
		int64_t L_29 = IntPtr_op_Explicit_m3885458658(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		ComputeImage_set_RowPitch_m2789524076(__this, L_29, /*hidden argument*/NULL);
		CLMemoryHandle_t2389804491  L_30 = ComputeMemory_get_Handle_m908326668(__this, /*hidden argument*/NULL);
		RuntimeObject* L_31 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_32 = L_31;
		intptr_t L_33 = (intptr_t)GetInterfaceMethodInfo(L_32, 11, ICL10_t3568785851_il2cpp_TypeInfo_var);
		GetInfoDelegate_2_t3751609436 * L_34 = (GetInfoDelegate_2_t3751609436 *)il2cpp_codegen_object_new(GetInfoDelegate_2_t3751609436_il2cpp_TypeInfo_var);
		GetInfoDelegate_2__ctor_m334136073(L_34, L_32, L_33, /*hidden argument*/GetInfoDelegate_2__ctor_m334136073_RuntimeMethod_var);
		intptr_t L_35 = ComputeObject_GetInfo_TisCLMemoryHandle_t2389804491_TisComputeMemoryInfo_t2104751744_TisIntPtr_t_m546006113(__this, L_30, ((int32_t)4354), L_34, /*hidden argument*/ComputeObject_GetInfo_TisCLMemoryHandle_t2389804491_TisComputeMemoryInfo_t2104751744_TisIntPtr_t_m546006113_RuntimeMethod_var);
		int64_t L_36 = IntPtr_op_Explicit_m3885458658(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		ComputeMemory_set_Size_m2247902897(__this, L_36, /*hidden argument*/NULL);
		CLMemoryHandle_t2389804491  L_37 = ComputeMemory_get_Handle_m908326668(__this, /*hidden argument*/NULL);
		RuntimeObject* L_38 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_39 = L_38;
		intptr_t L_40 = (intptr_t)GetInterfaceMethodInfo(L_39, 12, ICL10_t3568785851_il2cpp_TypeInfo_var);
		GetInfoDelegate_2_t3255322841 * L_41 = (GetInfoDelegate_2_t3255322841 *)il2cpp_codegen_object_new(GetInfoDelegate_2_t3255322841_il2cpp_TypeInfo_var);
		GetInfoDelegate_2__ctor_m2956066229(L_41, L_39, L_40, /*hidden argument*/GetInfoDelegate_2__ctor_m2956066229_RuntimeMethod_var);
		intptr_t L_42 = ComputeObject_GetInfo_TisCLMemoryHandle_t2389804491_TisComputeImageInfo_t1608465149_TisIntPtr_t_m3606957894(__this, L_37, ((int32_t)4371), L_41, /*hidden argument*/ComputeObject_GetInfo_TisCLMemoryHandle_t2389804491_TisComputeImageInfo_t1608465149_TisIntPtr_t_m3606957894_RuntimeMethod_var);
		int64_t L_43 = IntPtr_op_Explicit_m3885458658(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		ComputeImage_set_SlicePitch_m1174254482(__this, L_43, /*hidden argument*/NULL);
		CLMemoryHandle_t2389804491  L_44 = ComputeMemory_get_Handle_m908326668(__this, /*hidden argument*/NULL);
		RuntimeObject* L_45 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_46 = L_45;
		intptr_t L_47 = (intptr_t)GetInterfaceMethodInfo(L_46, 12, ICL10_t3568785851_il2cpp_TypeInfo_var);
		GetInfoDelegate_2_t3255322841 * L_48 = (GetInfoDelegate_2_t3255322841 *)il2cpp_codegen_object_new(GetInfoDelegate_2_t3255322841_il2cpp_TypeInfo_var);
		GetInfoDelegate_2__ctor_m2956066229(L_48, L_46, L_47, /*hidden argument*/GetInfoDelegate_2__ctor_m2956066229_RuntimeMethod_var);
		intptr_t L_49 = ComputeObject_GetInfo_TisCLMemoryHandle_t2389804491_TisComputeImageInfo_t1608465149_TisIntPtr_t_m3606957894(__this, L_44, ((int32_t)4372), L_48, /*hidden argument*/ComputeObject_GetInfo_TisCLMemoryHandle_t2389804491_TisComputeImageInfo_t1608465149_TisIntPtr_t_m3606957894_RuntimeMethod_var);
		int32_t L_50 = IntPtr_op_Explicit_m4220076518(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
		ComputeImage_set_Width_m423181061(__this, L_50, /*hidden argument*/NULL);
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
// System.Void Cloo.ComputeImage2D::.ctor(Cloo.Bindings.CLMemoryHandle,Cloo.ComputeContext,Cloo.ComputeMemoryFlags)
extern "C"  void ComputeImage2D__ctor_m1777054591 (ComputeImage2D_t234885228 * __this, CLMemoryHandle_t2389804491  ___handle0, ComputeContext_t1365812911 * ___context1, int64_t ___flags2, const RuntimeMethod* method)
{
	{
		ComputeContext_t1365812911 * L_0 = ___context1;
		int64_t L_1 = ___flags2;
		ComputeImage__ctor_m3543426040(__this, L_0, L_1, /*hidden argument*/NULL);
		CLMemoryHandle_t2389804491  L_2 = ___handle0;
		ComputeMemory_set_Handle_m144162909(__this, L_2, /*hidden argument*/NULL);
		ComputeImage_Init_m2341954491(__this, /*hidden argument*/NULL);
		return;
	}
}
// Cloo.ComputeImage2D Cloo.ComputeImage2D::CreateFromGLTexture2D(Cloo.ComputeContext,Cloo.ComputeMemoryFlags,System.Int32,System.Int32,System.Int32)
extern "C"  ComputeImage2D_t234885228 * ComputeImage2D_CreateFromGLTexture2D_m1004196562 (RuntimeObject * __this /* static, unused */, ComputeContext_t1365812911 * ___context0, int64_t ___flags1, int32_t ___textureTarget2, int32_t ___mipLevel3, int32_t ___textureId4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeImage2D_CreateFromGLTexture2D_m1004196562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CLMemoryHandle_t2389804491  V_1;
	memset(&V_1, 0, sizeof(V_1));
	ComputeImage2D_t234885228 * V_2 = NULL;
	{
		V_0 = 0;
		RuntimeObject* L_0 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		ComputeContext_t1365812911 * L_1 = ___context0;
		NullCheck(L_1);
		CLContextHandle_t447015429  L_2 = ComputeContext_get_Handle_m1664813480(L_1, /*hidden argument*/NULL);
		int64_t L_3 = ___flags1;
		int32_t L_4 = ___textureTarget2;
		int32_t L_5 = ___mipLevel3;
		int32_t L_6 = ___textureId4;
		NullCheck(L_0);
		CLMemoryHandle_t2389804491  L_7 = InterfaceFuncInvoker6< CLMemoryHandle_t2389804491 , CLContextHandle_t447015429 , int64_t, int32_t, int32_t, int32_t, int32_t* >::Invoke(0 /* Cloo.Bindings.CLMemoryHandle Cloo.Bindings.ICL12::CreateFromGLTexture2D(Cloo.Bindings.CLContextHandle,Cloo.ComputeMemoryFlags,System.Int32,System.Int32,System.Int32,Cloo.ComputeErrorCode&) */, ICL12_t436617969_il2cpp_TypeInfo_var, L_0, L_2, L_3, L_4, L_5, L_6, (&V_0));
		V_1 = L_7;
		int32_t L_8 = V_0;
		ComputeException_ThrowOnError_m4115276668(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		CLMemoryHandle_t2389804491  L_9 = V_1;
		ComputeContext_t1365812911 * L_10 = ___context0;
		int64_t L_11 = ___flags1;
		ComputeImage2D_t234885228 * L_12 = (ComputeImage2D_t234885228 *)il2cpp_codegen_object_new(ComputeImage2D_t234885228_il2cpp_TypeInfo_var);
		ComputeImage2D__ctor_m1777054591(L_12, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		goto IL_002d;
	}

IL_002d:
	{
		ComputeImage2D_t234885228 * L_13 = V_2;
		return L_13;
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
// System.Void Cloo.ComputeImage3D::.ctor(Cloo.Bindings.CLMemoryHandle,Cloo.ComputeContext,Cloo.ComputeMemoryFlags)
extern "C"  void ComputeImage3D__ctor_m48427665 (ComputeImage3D_t234819692 * __this, CLMemoryHandle_t2389804491  ___handle0, ComputeContext_t1365812911 * ___context1, int64_t ___flags2, const RuntimeMethod* method)
{
	{
		ComputeContext_t1365812911 * L_0 = ___context1;
		int64_t L_1 = ___flags2;
		ComputeImage__ctor_m3543426040(__this, L_0, L_1, /*hidden argument*/NULL);
		CLMemoryHandle_t2389804491  L_2 = ___handle0;
		ComputeMemory_set_Handle_m144162909(__this, L_2, /*hidden argument*/NULL);
		ComputeImage_Init_m2341954491(__this, /*hidden argument*/NULL);
		return;
	}
}
// Cloo.ComputeImage3D Cloo.ComputeImage3D::CreateFromGLTexture3D(Cloo.ComputeContext,Cloo.ComputeMemoryFlags,System.Int32,System.Int32,System.Int32)
extern "C"  ComputeImage3D_t234819692 * ComputeImage3D_CreateFromGLTexture3D_m2175080094 (RuntimeObject * __this /* static, unused */, ComputeContext_t1365812911 * ___context0, int64_t ___flags1, int32_t ___textureTarget2, int32_t ___mipLevel3, int32_t ___textureId4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeImage3D_CreateFromGLTexture3D_m2175080094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CLMemoryHandle_t2389804491  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	ComputeImage3D_t234819692 * V_2 = NULL;
	{
		V_1 = 0;
		RuntimeObject* L_0 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		ComputeContext_t1365812911 * L_1 = ___context0;
		NullCheck(L_1);
		CLContextHandle_t447015429  L_2 = ComputeContext_get_Handle_m1664813480(L_1, /*hidden argument*/NULL);
		int64_t L_3 = ___flags1;
		int32_t L_4 = ___textureTarget2;
		int32_t L_5 = ___mipLevel3;
		int32_t L_6 = ___textureId4;
		NullCheck(L_0);
		CLMemoryHandle_t2389804491  L_7 = InterfaceFuncInvoker6< CLMemoryHandle_t2389804491 , CLContextHandle_t447015429 , int64_t, int32_t, int32_t, int32_t, int32_t* >::Invoke(1 /* Cloo.Bindings.CLMemoryHandle Cloo.Bindings.ICL12::CreateFromGLTexture3D(Cloo.Bindings.CLContextHandle,Cloo.ComputeMemoryFlags,System.Int32,System.Int32,System.Int32,Cloo.ComputeErrorCode&) */, ICL12_t436617969_il2cpp_TypeInfo_var, L_0, L_2, L_3, L_4, L_5, L_6, (&V_1));
		V_0 = L_7;
		int32_t L_8 = V_1;
		ComputeException_ThrowOnError_m4115276668(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		CLMemoryHandle_t2389804491  L_9 = V_0;
		ComputeContext_t1365812911 * L_10 = ___context0;
		int64_t L_11 = ___flags1;
		ComputeImage3D_t234819692 * L_12 = (ComputeImage3D_t234819692 *)il2cpp_codegen_object_new(ComputeImage3D_t234819692_il2cpp_TypeInfo_var);
		ComputeImage3D__ctor_m48427665(L_12, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		goto IL_002d;
	}

IL_002d:
	{
		ComputeImage3D_t234819692 * L_13 = V_2;
		return L_13;
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
// Cloo.Bindings.CLKernelHandle Cloo.ComputeKernel::get_Handle()
extern "C"  CLKernelHandle_t2809987897  ComputeKernel_get_Handle_m251366303 (ComputeKernel_t2923705153 * __this, const RuntimeMethod* method)
{
	{
		CLKernelHandle_t2809987897  L_0 = __this->get_U3CHandleU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Cloo.ComputeKernel::set_Handle(Cloo.Bindings.CLKernelHandle)
extern "C"  void ComputeKernel_set_Handle_m927696987 (ComputeKernel_t2923705153 * __this, CLKernelHandle_t2809987897  ___value0, const RuntimeMethod* method)
{
	{
		CLKernelHandle_t2809987897  L_0 = ___value0;
		__this->set_U3CHandleU3Ek__BackingField_4(L_0);
		return;
	}
}
// Cloo.ComputeContext Cloo.ComputeKernel::get_Context()
extern "C"  ComputeContext_t1365812911 * ComputeKernel_get_Context_m554381568 (ComputeKernel_t2923705153 * __this, const RuntimeMethod* method)
{
	ComputeContext_t1365812911 * V_0 = NULL;
	{
		ComputeContext_t1365812911 * L_0 = __this->get_context_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ComputeContext_t1365812911 * L_1 = V_0;
		return L_1;
	}
}
// System.String Cloo.ComputeKernel::get_FunctionName()
extern "C"  String_t* ComputeKernel_get_FunctionName_m489640785 (ComputeKernel_t2923705153 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_functionName_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Cloo.ComputeKernel::.ctor(System.String,Cloo.ComputeProgram)
extern "C"  void ComputeKernel__ctor_m1969448358 (ComputeKernel_t2923705153 * __this, String_t* ___functionName0, ComputeProgram_t346198837 * ___program1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeKernel__ctor_m1969448358_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CLKernelHandle_t2809987897  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		ComputeResource__ctor_m415879097(__this, /*hidden argument*/NULL);
		V_0 = 0;
		RuntimeObject* L_0 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		ComputeProgram_t346198837 * L_1 = ___program1;
		NullCheck(L_1);
		CLProgramHandle_t2486937744  L_2 = ComputeProgram_get_Handle_m317173536(L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___functionName0;
		NullCheck(L_0);
		CLKernelHandle_t2809987897  L_4 = InterfaceFuncInvoker3< CLKernelHandle_t2809987897 , CLProgramHandle_t2486937744 , String_t*, int32_t* >::Invoke(19 /* Cloo.Bindings.CLKernelHandle Cloo.Bindings.ICL10::CreateKernel(Cloo.Bindings.CLProgramHandle,System.String,Cloo.ComputeErrorCode&) */, ICL10_t3568785851_il2cpp_TypeInfo_var, L_0, L_2, L_3, (&V_0));
		ComputeKernel_set_Handle_m927696987(__this, L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		ComputeException_ThrowOnError_m4115276668(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		CLKernelHandle_t2809987897  L_6 = ComputeKernel_get_Handle_m251366303(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		intptr_t L_7 = CLKernelHandle_get_Value_m2940243222((&V_1), /*hidden argument*/NULL);
		ComputeObject_SetID_m1020599628(__this, L_7, /*hidden argument*/NULL);
		ComputeProgram_t346198837 * L_8 = ___program1;
		NullCheck(L_8);
		ComputeContext_t1365812911 * L_9 = ComputeProgram_get_Context_m2220785381(L_8, /*hidden argument*/NULL);
		__this->set_context_1(L_9);
		String_t* L_10 = ___functionName0;
		__this->set_functionName_2(L_10);
		ComputeProgram_t346198837 * L_11 = ___program1;
		__this->set_program_3(L_11);
		return;
	}
}
// System.Void Cloo.ComputeKernel::SetArgument(System.Int32,System.IntPtr,System.IntPtr)
extern "C"  void ComputeKernel_SetArgument_m574529611 (ComputeKernel_t2923705153 * __this, int32_t ___index0, intptr_t ___dataSize1, intptr_t ___dataAddr2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeKernel_SetArgument_m574529611_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		CLKernelHandle_t2809987897  L_1 = ComputeKernel_get_Handle_m251366303(__this, /*hidden argument*/NULL);
		int32_t L_2 = ___index0;
		intptr_t L_3 = ___dataSize1;
		intptr_t L_4 = ___dataAddr2;
		NullCheck(L_0);
		int32_t L_5 = InterfaceFuncInvoker4< int32_t, CLKernelHandle_t2809987897 , int32_t, intptr_t, intptr_t >::Invoke(21 /* Cloo.ComputeErrorCode Cloo.Bindings.ICL10::SetKernelArg(Cloo.Bindings.CLKernelHandle,System.Int32,System.IntPtr,System.IntPtr) */, ICL10_t3568785851_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		V_0 = L_5;
		int32_t L_6 = V_0;
		ComputeException_ThrowOnError_m4115276668(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cloo.ComputeKernel::SetMemoryArgument(System.Int32,Cloo.ComputeMemory)
extern "C"  void ComputeKernel_SetMemoryArgument_m2446314345 (ComputeKernel_t2923705153 * __this, int32_t ___index0, ComputeMemory_t2270500267 * ___memObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeKernel_SetMemoryArgument_m2446314345_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		ComputeMemory_t2270500267 * L_1 = ___memObj1;
		NullCheck(L_1);
		CLMemoryHandle_t2389804491  L_2 = ComputeMemory_get_Handle_m908326668(L_1, /*hidden argument*/NULL);
		ComputeKernel_SetValueArgument_TisCLMemoryHandle_t2389804491_m3042893746(__this, L_0, L_2, /*hidden argument*/ComputeKernel_SetValueArgument_TisCLMemoryHandle_t2389804491_m3042893746_RuntimeMethod_var);
		return;
	}
}
// System.Void Cloo.ComputeKernel::SetSamplerArgument(System.Int32,Cloo.ComputeSampler)
extern "C"  void ComputeKernel_SetSamplerArgument_m4112179692 (ComputeKernel_t2923705153 * __this, int32_t ___index0, ComputeSampler_t3833417323 * ___sampler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeKernel_SetSamplerArgument_m4112179692_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		ComputeSampler_t3833417323 * L_1 = ___sampler1;
		NullCheck(L_1);
		CLSamplerHandle_t915650828  L_2 = ComputeSampler_get_Handle_m40855011(L_1, /*hidden argument*/NULL);
		ComputeKernel_SetValueArgument_TisCLSamplerHandle_t915650828_m2985095415(__this, L_0, L_2, /*hidden argument*/ComputeKernel_SetValueArgument_TisCLSamplerHandle_t915650828_m2985095415_RuntimeMethod_var);
		return;
	}
}
// System.Void Cloo.ComputeKernel::Dispose(System.Boolean)
extern "C"  void ComputeKernel_Dispose_m2728367641 (ComputeKernel_t2923705153 * __this, bool ___manual0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeKernel_Dispose_m2728367641_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	CLKernelHandle_t2809987897  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		CLKernelHandle_t2809987897  L_0 = ComputeKernel_get_Handle_m251366303(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = CLKernelHandle_get_IsValid_m3501045517((&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		RuntimeObject* L_3 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		CLKernelHandle_t2809987897  L_4 = ComputeKernel_get_Handle_m251366303(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		InterfaceFuncInvoker1< int32_t, CLKernelHandle_t2809987897  >::Invoke(20 /* Cloo.ComputeErrorCode Cloo.Bindings.ICL10::ReleaseKernel(Cloo.Bindings.CLKernelHandle) */, ICL10_t3568785851_il2cpp_TypeInfo_var, L_3, L_4);
		CLKernelHandle_t2809987897  L_5 = ComputeKernel_get_Handle_m251366303(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		CLKernelHandle_Invalidate_m478856493((&V_1), /*hidden argument*/NULL);
	}

IL_0035:
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
// Cloo.Bindings.CLMemoryHandle Cloo.ComputeMemory::get_Handle()
extern "C"  CLMemoryHandle_t2389804491  ComputeMemory_get_Handle_m908326668 (ComputeMemory_t2270500267 * __this, const RuntimeMethod* method)
{
	{
		CLMemoryHandle_t2389804491  L_0 = __this->get_U3CHandleU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Cloo.ComputeMemory::set_Handle(Cloo.Bindings.CLMemoryHandle)
extern "C"  void ComputeMemory_set_Handle_m144162909 (ComputeMemory_t2270500267 * __this, CLMemoryHandle_t2389804491  ___value0, const RuntimeMethod* method)
{
	{
		CLMemoryHandle_t2389804491  L_0 = ___value0;
		__this->set_U3CHandleU3Ek__BackingField_3(L_0);
		return;
	}
}
// Cloo.ComputeContext Cloo.ComputeMemory::get_Context()
extern "C"  ComputeContext_t1365812911 * ComputeMemory_get_Context_m4086032858 (ComputeMemory_t2270500267 * __this, const RuntimeMethod* method)
{
	ComputeContext_t1365812911 * V_0 = NULL;
	{
		ComputeContext_t1365812911 * L_0 = __this->get_context_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ComputeContext_t1365812911 * L_1 = V_0;
		return L_1;
	}
}
// System.Int64 Cloo.ComputeMemory::get_Size()
extern "C"  int64_t ComputeMemory_get_Size_m2012729998 (ComputeMemory_t2270500267 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_U3CSizeU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Cloo.ComputeMemory::set_Size(System.Int64)
extern "C"  void ComputeMemory_set_Size_m2247902897 (ComputeMemory_t2270500267 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CSizeU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Cloo.ComputeMemory::.ctor(Cloo.ComputeContext,Cloo.ComputeMemoryFlags)
extern "C"  void ComputeMemory__ctor_m2255277297 (ComputeMemory_t2270500267 * __this, ComputeContext_t1365812911 * ___context0, int64_t ___flags1, const RuntimeMethod* method)
{
	{
		ComputeResource__ctor_m415879097(__this, /*hidden argument*/NULL);
		ComputeContext_t1365812911 * L_0 = ___context0;
		__this->set_context_1(L_0);
		int64_t L_1 = ___flags1;
		__this->set_flags_2(L_1);
		return;
	}
}
// System.Void Cloo.ComputeMemory::Dispose(System.Boolean)
extern "C"  void ComputeMemory_Dispose_m3784571219 (ComputeMemory_t2270500267 * __this, bool ___manual0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeMemory_Dispose_m3784571219_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	CLMemoryHandle_t2389804491  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		CLMemoryHandle_t2389804491  L_0 = ComputeMemory_get_Handle_m908326668(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = CLMemoryHandle_get_IsValid_m2235700658((&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		RuntimeObject* L_3 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		CLMemoryHandle_t2389804491  L_4 = ComputeMemory_get_Handle_m908326668(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		InterfaceFuncInvoker1< int32_t, CLMemoryHandle_t2389804491  >::Invoke(10 /* Cloo.ComputeErrorCode Cloo.Bindings.ICL10::ReleaseMemObject(Cloo.Bindings.CLMemoryHandle) */, ICL10_t3568785851_il2cpp_TypeInfo_var, L_3, L_4);
		CLMemoryHandle_t2389804491  L_5 = ComputeMemory_get_Handle_m908326668(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		CLMemoryHandle_Invalidate_m1796141593((&V_1), /*hidden argument*/NULL);
	}

IL_0035:
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
// System.Boolean Cloo.ComputeObject::Equals(System.Object)
extern "C"  bool ComputeObject_Equals_m1721182432 (ComputeObject_t1791575355 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeObject_Equals_m1721182432_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0030;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		V_2 = (bool)((((int32_t)((!(((RuntimeObject*)(ComputeObject_t1791575355 *)((ComputeObject_t1791575355 *)IsInstClass((RuntimeObject*)L_2, ComputeObject_t1791575355_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0030;
	}

IL_0021:
	{
		RuntimeObject * L_4 = ___obj0;
		bool L_5 = ComputeObject_Equals_m3003917961(__this, ((ComputeObject_t1791575355 *)IsInstClass((RuntimeObject*)L_4, ComputeObject_t1791575355_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0030;
	}

IL_0030:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Boolean Cloo.ComputeObject::Equals(Cloo.ComputeObject)
extern "C"  bool ComputeObject_Equals_m3003917961 (ComputeObject_t1791575355 * __this, ComputeObject_t1791575355 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeObject_Equals_m3003917961_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		ComputeObject_t1791575355 * L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(ComputeObject_t1791575355 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0038;
	}

IL_000d:
	{
		intptr_t* L_2 = __this->get_address_of_handle_0();
		ComputeObject_t1791575355 * L_3 = ___obj0;
		NullCheck(L_3);
		intptr_t L_4 = L_3->get_handle_0();
		intptr_t L_5 = L_4;
		RuntimeObject * L_6 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_5);
		bool L_7 = IntPtr_Equals_m3408989655(L_2, L_6, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0038;
	}

IL_0034:
	{
		V_1 = (bool)1;
		goto IL_0038;
	}

IL_0038:
	{
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Int32 Cloo.ComputeObject::GetHashCode()
extern "C"  int32_t ComputeObject_GetHashCode_m2771374631 (ComputeObject_t1791575355 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		intptr_t* L_0 = __this->get_address_of_handle_0();
		int32_t L_1 = IntPtr_GetHashCode_m3588219647(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.String Cloo.ComputeObject::ToString()
extern "C"  String_t* ComputeObject_ToString_m1934266934 (ComputeObject_t1791575355 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeObject_ToString_m1934266934_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Type_t * L_0 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		intptr_t* L_2 = __this->get_address_of_handle_0();
		String_t* L_3 = IntPtr_ToString_m1831665121(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m2163913788(NULL /*static, unused*/, L_1, _stringLiteral3452614536, L_3, _stringLiteral3452614535, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_002f;
	}

IL_002f:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.Void Cloo.ComputeObject::SetID(System.IntPtr)
extern "C"  void ComputeObject_SetID_m1020599628 (ComputeObject_t1791575355 * __this, intptr_t ___id0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___id0;
		__this->set_handle_0(L_0);
		return;
	}
}
// System.Void Cloo.ComputeObject::.ctor()
extern "C"  void ComputeObject__ctor_m2175313869 (ComputeObject_t1791575355 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// Cloo.Bindings.CLPlatformHandle Cloo.ComputePlatform::get_Handle()
extern "C"  CLPlatformHandle_t3404269797  ComputePlatform_get_Handle_m2382324133 (ComputePlatform_t3600789258 * __this, const RuntimeMethod* method)
{
	{
		CLPlatformHandle_t3404269797  L_0 = __this->get_U3CHandleU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Cloo.ComputePlatform::set_Handle(Cloo.Bindings.CLPlatformHandle)
extern "C"  void ComputePlatform_set_Handle_m3562533451 (ComputePlatform_t3600789258 * __this, CLPlatformHandle_t3404269797  ___value0, const RuntimeMethod* method)
{
	{
		CLPlatformHandle_t3404269797  L_0 = ___value0;
		__this->set_U3CHandleU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<Cloo.ComputeDevice> Cloo.ComputePlatform::get_Devices()
extern "C"  ReadOnlyCollection_1_t1000789277 * ComputePlatform_get_Devices_m3762564962 (ComputePlatform_t3600789258 * __this, const RuntimeMethod* method)
{
	ReadOnlyCollection_1_t1000789277 * V_0 = NULL;
	{
		ReadOnlyCollection_1_t1000789277 * L_0 = __this->get_devices_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ReadOnlyCollection_1_t1000789277 * L_1 = V_0;
		return L_1;
	}
}
// System.String Cloo.ComputePlatform::get_Name()
extern "C"  String_t* ComputePlatform_get_Name_m366930369 (ComputePlatform_t3600789258 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_name_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.IList`1<Cloo.ComputePlatform> Cloo.ComputePlatform::get_Platforms()
extern "C"  RuntimeObject* ComputePlatform_get_Platforms_m1134595370 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputePlatform_get_Platforms_m1134595370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ComputePlatform_t3600789258_il2cpp_TypeInfo_var);
		List_1_t777896704 * L_0 = ((ComputePlatform_t3600789258_StaticFields*)il2cpp_codegen_static_fields_for(ComputePlatform_t3600789258_il2cpp_TypeInfo_var))->get_platforms_4();
		ComputePlatformU5BU5D_t2938311055* L_1 = ((ComputePlatform_t3600789258_StaticFields*)il2cpp_codegen_static_fields_for(ComputePlatform_t3600789258_il2cpp_TypeInfo_var))->get_platformsArray_5();
		NullCheck(L_0);
		List_1_CopyTo_m2597516554(L_0, L_1, /*hidden argument*/List_1_CopyTo_m2597516554_RuntimeMethod_var);
		ComputePlatformU5BU5D_t2938311055* L_2 = ((ComputePlatform_t3600789258_StaticFields*)il2cpp_codegen_static_fields_for(ComputePlatform_t3600789258_il2cpp_TypeInfo_var))->get_platformsArray_5();
		V_0 = (RuntimeObject*)L_2;
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.String Cloo.ComputePlatform::get_Version()
extern "C"  String_t* ComputePlatform_get_Version_m568832603 (ComputePlatform_t3600789258 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_version_8();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Cloo.ComputePlatform::.cctor()
extern "C"  void ComputePlatform__cctor_m1149194429 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputePlatform__cctor_m1149194429_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	CLPlatformHandleU5BU5D_t3365766632* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	List_1_t777896704 * V_4 = NULL;
	bool V_5 = false;
	CLPlatformHandleU5BU5D_t3365766632* V_6 = NULL;
	int32_t V_7 = 0;
	CLPlatformHandle_t3404269797  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (ComputePlatform_t3600789258_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
		}

IL_0014:
		try
		{ // begin try (depth: 2)
			{
				List_1_t777896704 * L_3 = ((ComputePlatform_t3600789258_StaticFields*)il2cpp_codegen_static_fields_for(ComputePlatform_t3600789258_il2cpp_TypeInfo_var))->get_platforms_4();
				V_5 = (bool)((!(((RuntimeObject*)(List_1_t777896704 *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
				bool L_4 = V_5;
				if (!L_4)
				{
					goto IL_0028;
				}
			}

IL_0023:
			{
				IL2CPP_LEAVE(0x100, FINALLY_00f8);
			}

IL_0028:
			{
				RuntimeObject* L_5 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
				NullCheck(L_5);
				int32_t L_6 = InterfaceFuncInvoker3< int32_t, int32_t, CLPlatformHandleU5BU5D_t3365766632*, int32_t* >::Invoke(0 /* Cloo.ComputeErrorCode Cloo.Bindings.ICL10::GetPlatformIDs(System.Int32,Cloo.Bindings.CLPlatformHandle[],System.Int32&) */, ICL10_t3568785851_il2cpp_TypeInfo_var, L_5, 0, (CLPlatformHandleU5BU5D_t3365766632*)(CLPlatformHandleU5BU5D_t3365766632*)NULL, (&V_2));
				V_3 = L_6;
				int32_t L_7 = V_3;
				ComputeException_ThrowOnError_m4115276668(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
				int32_t L_8 = V_2;
				V_1 = ((CLPlatformHandleU5BU5D_t3365766632*)SZArrayNew(CLPlatformHandleU5BU5D_t3365766632_il2cpp_TypeInfo_var, (uint32_t)L_8));
				RuntimeObject* L_9 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
				int32_t L_10 = V_2;
				CLPlatformHandleU5BU5D_t3365766632* L_11 = V_1;
				NullCheck(L_9);
				int32_t L_12 = InterfaceFuncInvoker3< int32_t, int32_t, CLPlatformHandleU5BU5D_t3365766632*, int32_t* >::Invoke(0 /* Cloo.ComputeErrorCode Cloo.Bindings.ICL10::GetPlatformIDs(System.Int32,Cloo.Bindings.CLPlatformHandle[],System.Int32&) */, ICL10_t3568785851_il2cpp_TypeInfo_var, L_9, L_10, L_11, (&V_2));
				V_3 = L_12;
				int32_t L_13 = V_3;
				ComputeException_ThrowOnError_m4115276668(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
				int32_t L_14 = V_2;
				List_1_t777896704 * L_15 = (List_1_t777896704 *)il2cpp_codegen_object_new(List_1_t777896704_il2cpp_TypeInfo_var);
				List_1__ctor_m3476885814(L_15, L_14, /*hidden argument*/List_1__ctor_m3476885814_RuntimeMethod_var);
				V_4 = L_15;
				CLPlatformHandleU5BU5D_t3365766632* L_16 = V_1;
				V_6 = L_16;
				V_7 = 0;
				goto IL_008c;
			}

IL_006c:
			{
				CLPlatformHandleU5BU5D_t3365766632* L_17 = V_6;
				int32_t L_18 = V_7;
				NullCheck(L_17);
				int32_t L_19 = L_18;
				CLPlatformHandle_t3404269797  L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
				V_8 = L_20;
				List_1_t777896704 * L_21 = V_4;
				CLPlatformHandle_t3404269797  L_22 = V_8;
				ComputePlatform_t3600789258 * L_23 = (ComputePlatform_t3600789258 *)il2cpp_codegen_object_new(ComputePlatform_t3600789258_il2cpp_TypeInfo_var);
				ComputePlatform__ctor_m1484747161(L_23, L_22, /*hidden argument*/NULL);
				NullCheck(L_21);
				List_1_Add_m665838036(L_21, L_23, /*hidden argument*/List_1_Add_m665838036_RuntimeMethod_var);
				int32_t L_24 = V_7;
				V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
			}

IL_008c:
			{
				int32_t L_25 = V_7;
				CLPlatformHandleU5BU5D_t3365766632* L_26 = V_6;
				NullCheck(L_26);
				if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))))))
				{
					goto IL_006c;
				}
			}

IL_0094:
			{
				List_1_t777896704 * L_27 = V_4;
				((ComputePlatform_t3600789258_StaticFields*)il2cpp_codegen_static_fields_for(ComputePlatform_t3600789258_il2cpp_TypeInfo_var))->set_platforms_4(L_27);
				List_1_t777896704 * L_28 = ((ComputePlatform_t3600789258_StaticFields*)il2cpp_codegen_static_fields_for(ComputePlatform_t3600789258_il2cpp_TypeInfo_var))->get_platforms_4();
				NullCheck(L_28);
				int32_t L_29 = List_1_get_Count_m239222480(L_28, /*hidden argument*/List_1_get_Count_m239222480_RuntimeMethod_var);
				((ComputePlatform_t3600789258_StaticFields*)il2cpp_codegen_static_fields_for(ComputePlatform_t3600789258_il2cpp_TypeInfo_var))->set_platformsArray_5(((ComputePlatformU5BU5D_t2938311055*)SZArrayNew(ComputePlatformU5BU5D_t2938311055_il2cpp_TypeInfo_var, (uint32_t)L_29)));
				List_1_t777896704 * L_30 = ((ComputePlatform_t3600789258_StaticFields*)il2cpp_codegen_static_fields_for(ComputePlatform_t3600789258_il2cpp_TypeInfo_var))->get_platforms_4();
				ComputePlatformU5BU5D_t2938311055* L_31 = ((ComputePlatform_t3600789258_StaticFields*)il2cpp_codegen_static_fields_for(ComputePlatform_t3600789258_il2cpp_TypeInfo_var))->get_platformsArray_5();
				NullCheck(L_30);
				List_1_CopyTo_m2597516554(L_30, L_31, /*hidden argument*/List_1_CopyTo_m2597516554_RuntimeMethod_var);
				goto IL_00f5;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (DllNotFoundException_t2721418633_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00c2;
			throw e;
		}

CATCH_00c2:
		{ // begin catch(System.DllNotFoundException)
			List_1_t777896704 * L_32 = (List_1_t777896704 *)il2cpp_codegen_object_new(List_1_t777896704_il2cpp_TypeInfo_var);
			List_1__ctor_m1246932516(L_32, /*hidden argument*/List_1__ctor_m1246932516_RuntimeMethod_var);
			((ComputePlatform_t3600789258_StaticFields*)il2cpp_codegen_static_fields_for(ComputePlatform_t3600789258_il2cpp_TypeInfo_var))->set_platforms_4(L_32);
			List_1_t777896704 * L_33 = ((ComputePlatform_t3600789258_StaticFields*)il2cpp_codegen_static_fields_for(ComputePlatform_t3600789258_il2cpp_TypeInfo_var))->get_platforms_4();
			NullCheck(L_33);
			int32_t L_34 = List_1_get_Count_m239222480(L_33, /*hidden argument*/List_1_get_Count_m239222480_RuntimeMethod_var);
			((ComputePlatform_t3600789258_StaticFields*)il2cpp_codegen_static_fields_for(ComputePlatform_t3600789258_il2cpp_TypeInfo_var))->set_platformsArray_5(((ComputePlatformU5BU5D_t2938311055*)SZArrayNew(ComputePlatformU5BU5D_t2938311055_il2cpp_TypeInfo_var, (uint32_t)L_34)));
			List_1_t777896704 * L_35 = ((ComputePlatform_t3600789258_StaticFields*)il2cpp_codegen_static_fields_for(ComputePlatform_t3600789258_il2cpp_TypeInfo_var))->get_platforms_4();
			ComputePlatformU5BU5D_t2938311055* L_36 = ((ComputePlatform_t3600789258_StaticFields*)il2cpp_codegen_static_fields_for(ComputePlatform_t3600789258_il2cpp_TypeInfo_var))->get_platformsArray_5();
			NullCheck(L_35);
			List_1_CopyTo_m2597516554(L_35, L_36, /*hidden argument*/List_1_CopyTo_m2597516554_RuntimeMethod_var);
			goto IL_00f5;
		} // end catch (depth: 2)

IL_00f5:
		{
			IL2CPP_LEAVE(0x100, FINALLY_00f8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f8;
	}

FINALLY_00f8:
	{ // begin finally (depth: 1)
		Type_t * L_37 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(248)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(248)
	{
		IL2CPP_JUMP_TBL(0x100, IL_0100)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0100:
	{
		return;
	}
}
// System.Void Cloo.ComputePlatform::.ctor(Cloo.Bindings.CLPlatformHandle)
extern "C"  void ComputePlatform__ctor_m1484747161 (ComputePlatform_t3600789258 * __this, CLPlatformHandle_t3404269797  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputePlatform__ctor_m1484747161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	CLPlatformHandle_t3404269797  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		ComputeObject__ctor_m2175313869(__this, /*hidden argument*/NULL);
		CLPlatformHandle_t3404269797  L_0 = ___handle0;
		ComputePlatform_set_Handle_m3562533451(__this, L_0, /*hidden argument*/NULL);
		CLPlatformHandle_t3404269797  L_1 = ComputePlatform_get_Handle_m2382324133(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		intptr_t L_2 = CLPlatformHandle_get_Value_m2002329956((&V_1), /*hidden argument*/NULL);
		ComputeObject_SetID_m1020599628(__this, L_2, /*hidden argument*/NULL);
		CLPlatformHandle_t3404269797  L_3 = ComputePlatform_get_Handle_m2382324133(__this, /*hidden argument*/NULL);
		RuntimeObject* L_4 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_5 = L_4;
		intptr_t L_6 = (intptr_t)GetInterfaceMethodInfo(L_5, 1, ICL10_t3568785851_il2cpp_TypeInfo_var);
		GetInfoDelegate_2_t3652029919 * L_7 = (GetInfoDelegate_2_t3652029919 *)il2cpp_codegen_object_new(GetInfoDelegate_2_t3652029919_il2cpp_TypeInfo_var);
		GetInfoDelegate_2__ctor_m148456036(L_7, L_5, L_6, /*hidden argument*/GetInfoDelegate_2__ctor_m148456036_RuntimeMethod_var);
		String_t* L_8 = ComputeObject_GetStringInfo_TisCLPlatformHandle_t3404269797_TisComputePlatformInfo_t1022158021_m1537078130(__this, L_3, ((int32_t)2308), L_7, /*hidden argument*/ComputeObject_GetStringInfo_TisCLPlatformHandle_t3404269797_TisComputePlatformInfo_t1022158021_m1537078130_RuntimeMethod_var);
		V_0 = L_8;
		String_t* L_9 = V_0;
		CharU5BU5D_t3528271667* L_10 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		NullCheck(L_9);
		StringU5BU5D_t1281789340* L_11 = String_Split_m1466646415(L_9, L_10, 1, /*hidden argument*/NULL);
		ReadOnlyCollection_1_t3060026976 * L_12 = (ReadOnlyCollection_1_t3060026976 *)il2cpp_codegen_object_new(ReadOnlyCollection_1_t3060026976_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1__ctor_m627134177(L_12, (RuntimeObject*)(RuntimeObject*)L_11, /*hidden argument*/ReadOnlyCollection_1__ctor_m627134177_RuntimeMethod_var);
		__this->set_extensions_2(L_12);
		CLPlatformHandle_t3404269797  L_13 = ComputePlatform_get_Handle_m2382324133(__this, /*hidden argument*/NULL);
		RuntimeObject* L_14 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_15 = L_14;
		intptr_t L_16 = (intptr_t)GetInterfaceMethodInfo(L_15, 1, ICL10_t3568785851_il2cpp_TypeInfo_var);
		GetInfoDelegate_2_t3652029919 * L_17 = (GetInfoDelegate_2_t3652029919 *)il2cpp_codegen_object_new(GetInfoDelegate_2_t3652029919_il2cpp_TypeInfo_var);
		GetInfoDelegate_2__ctor_m148456036(L_17, L_15, L_16, /*hidden argument*/GetInfoDelegate_2__ctor_m148456036_RuntimeMethod_var);
		String_t* L_18 = ComputeObject_GetStringInfo_TisCLPlatformHandle_t3404269797_TisComputePlatformInfo_t1022158021_m1537078130(__this, L_13, ((int32_t)2306), L_17, /*hidden argument*/ComputeObject_GetStringInfo_TisCLPlatformHandle_t3404269797_TisComputePlatformInfo_t1022158021_m1537078130_RuntimeMethod_var);
		__this->set_name_3(L_18);
		CLPlatformHandle_t3404269797  L_19 = ComputePlatform_get_Handle_m2382324133(__this, /*hidden argument*/NULL);
		RuntimeObject* L_20 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_21 = L_20;
		intptr_t L_22 = (intptr_t)GetInterfaceMethodInfo(L_21, 1, ICL10_t3568785851_il2cpp_TypeInfo_var);
		GetInfoDelegate_2_t3652029919 * L_23 = (GetInfoDelegate_2_t3652029919 *)il2cpp_codegen_object_new(GetInfoDelegate_2_t3652029919_il2cpp_TypeInfo_var);
		GetInfoDelegate_2__ctor_m148456036(L_23, L_21, L_22, /*hidden argument*/GetInfoDelegate_2__ctor_m148456036_RuntimeMethod_var);
		String_t* L_24 = ComputeObject_GetStringInfo_TisCLPlatformHandle_t3404269797_TisComputePlatformInfo_t1022158021_m1537078130(__this, L_19, ((int32_t)2304), L_23, /*hidden argument*/ComputeObject_GetStringInfo_TisCLPlatformHandle_t3404269797_TisComputePlatformInfo_t1022158021_m1537078130_RuntimeMethod_var);
		__this->set_profile_6(L_24);
		CLPlatformHandle_t3404269797  L_25 = ComputePlatform_get_Handle_m2382324133(__this, /*hidden argument*/NULL);
		RuntimeObject* L_26 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_27 = L_26;
		intptr_t L_28 = (intptr_t)GetInterfaceMethodInfo(L_27, 1, ICL10_t3568785851_il2cpp_TypeInfo_var);
		GetInfoDelegate_2_t3652029919 * L_29 = (GetInfoDelegate_2_t3652029919 *)il2cpp_codegen_object_new(GetInfoDelegate_2_t3652029919_il2cpp_TypeInfo_var);
		GetInfoDelegate_2__ctor_m148456036(L_29, L_27, L_28, /*hidden argument*/GetInfoDelegate_2__ctor_m148456036_RuntimeMethod_var);
		String_t* L_30 = ComputeObject_GetStringInfo_TisCLPlatformHandle_t3404269797_TisComputePlatformInfo_t1022158021_m1537078130(__this, L_25, ((int32_t)2307), L_29, /*hidden argument*/ComputeObject_GetStringInfo_TisCLPlatformHandle_t3404269797_TisComputePlatformInfo_t1022158021_m1537078130_RuntimeMethod_var);
		__this->set_vendor_7(L_30);
		CLPlatformHandle_t3404269797  L_31 = ComputePlatform_get_Handle_m2382324133(__this, /*hidden argument*/NULL);
		RuntimeObject* L_32 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_33 = L_32;
		intptr_t L_34 = (intptr_t)GetInterfaceMethodInfo(L_33, 1, ICL10_t3568785851_il2cpp_TypeInfo_var);
		GetInfoDelegate_2_t3652029919 * L_35 = (GetInfoDelegate_2_t3652029919 *)il2cpp_codegen_object_new(GetInfoDelegate_2_t3652029919_il2cpp_TypeInfo_var);
		GetInfoDelegate_2__ctor_m148456036(L_35, L_33, L_34, /*hidden argument*/GetInfoDelegate_2__ctor_m148456036_RuntimeMethod_var);
		String_t* L_36 = ComputeObject_GetStringInfo_TisCLPlatformHandle_t3404269797_TisComputePlatformInfo_t1022158021_m1537078130(__this, L_31, ((int32_t)2305), L_35, /*hidden argument*/ComputeObject_GetStringInfo_TisCLPlatformHandle_t3404269797_TisComputePlatformInfo_t1022158021_m1537078130_RuntimeMethod_var);
		__this->set_version_8(L_36);
		ComputePlatform_QueryDevices_m2202516624(__this, /*hidden argument*/NULL);
		return;
	}
}
// Cloo.ComputePlatform Cloo.ComputePlatform::GetByHandle(System.IntPtr)
extern "C"  ComputePlatform_t3600789258 * ComputePlatform_GetByHandle_m3317553206 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputePlatform_GetByHandle_m3317553206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ComputePlatform_t3600789258 * V_1 = NULL;
	bool V_2 = false;
	CLPlatformHandle_t3404269797  V_3;
	memset(&V_3, 0, sizeof(V_3));
	ComputePlatform_t3600789258 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(ComputePlatform_t3600789258_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ComputePlatform_get_Platforms_m1134595370(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Cloo.ComputePlatform>::GetEnumerator() */, IEnumerable_1_t2580642147_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0033;
		}

IL_000f:
		{
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			ComputePlatform_t3600789258 * L_3 = InterfaceFuncInvoker0< ComputePlatform_t3600789258 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Cloo.ComputePlatform>::get_Current() */, IEnumerator_1_t4033359726_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			ComputePlatform_t3600789258 * L_4 = V_1;
			NullCheck(L_4);
			CLPlatformHandle_t3404269797  L_5 = ComputePlatform_get_Handle_m2382324133(L_4, /*hidden argument*/NULL);
			V_3 = L_5;
			intptr_t L_6 = CLPlatformHandle_get_Value_m2002329956((&V_3), /*hidden argument*/NULL);
			intptr_t L_7 = ___handle0;
			bool L_8 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
			V_2 = L_8;
			bool L_9 = V_2;
			if (!L_9)
			{
				goto IL_0033;
			}
		}

IL_002e:
		{
			ComputePlatform_t3600789258 * L_10 = V_1;
			V_4 = L_10;
			IL2CPP_LEAVE(0x4D, FINALLY_003d);
		}

IL_0033:
		{
			RuntimeObject* L_11 = V_0;
			NullCheck(L_11);
			bool L_12 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_000f;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x48, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_13 = V_0;
			if (!L_13)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			RuntimeObject* L_14 = V_0;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_14);
		}

IL_0047:
		{
			IL2CPP_END_FINALLY(61)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_JUMP_TBL(0x48, IL_0048)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0048:
	{
		V_4 = (ComputePlatform_t3600789258 *)NULL;
		goto IL_004d;
	}

IL_004d:
	{
		ComputePlatform_t3600789258 * L_15 = V_4;
		return L_15;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<Cloo.ComputeDevice> Cloo.ComputePlatform::QueryDevices()
extern "C"  ReadOnlyCollection_1_t1000789277 * ComputePlatform_QueryDevices_m2202516624 (ComputePlatform_t3600789258 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputePlatform_QueryDevices_m2202516624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CLDeviceHandleU5BU5D_t3725102763* V_2 = NULL;
	ComputeDeviceU5BU5D_t2787470155* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	ReadOnlyCollection_1_t1000789277 * V_7 = NULL;
	{
		V_0 = 0;
		RuntimeObject* L_0 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		CLPlatformHandle_t3404269797  L_1 = ComputePlatform_get_Handle_m2382324133(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_2 = InterfaceFuncInvoker5< int32_t, CLPlatformHandle_t3404269797 , int64_t, int32_t, CLDeviceHandleU5BU5D_t3725102763*, int32_t* >::Invoke(2 /* Cloo.ComputeErrorCode Cloo.Bindings.ICL10::GetDeviceIDs(Cloo.Bindings.CLPlatformHandle,Cloo.ComputeDeviceTypes,System.Int32,Cloo.Bindings.CLDeviceHandle[],System.Int32&) */, ICL10_t3568785851_il2cpp_TypeInfo_var, L_0, L_1, (((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))), 0, (CLDeviceHandleU5BU5D_t3725102763*)(CLDeviceHandleU5BU5D_t3725102763*)NULL, (&V_0));
		V_1 = L_2;
		int32_t L_3 = V_1;
		ComputeException_ThrowOnError_m4115276668(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		V_2 = ((CLDeviceHandleU5BU5D_t3725102763*)SZArrayNew(CLDeviceHandleU5BU5D_t3725102763_il2cpp_TypeInfo_var, (uint32_t)L_4));
		RuntimeObject* L_5 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		CLPlatformHandle_t3404269797  L_6 = ComputePlatform_get_Handle_m2382324133(__this, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		CLDeviceHandleU5BU5D_t3725102763* L_8 = V_2;
		NullCheck(L_5);
		int32_t L_9 = InterfaceFuncInvoker5< int32_t, CLPlatformHandle_t3404269797 , int64_t, int32_t, CLDeviceHandleU5BU5D_t3725102763*, int32_t* >::Invoke(2 /* Cloo.ComputeErrorCode Cloo.Bindings.ICL10::GetDeviceIDs(Cloo.Bindings.CLPlatformHandle,Cloo.ComputeDeviceTypes,System.Int32,Cloo.Bindings.CLDeviceHandle[],System.Int32&) */, ICL10_t3568785851_il2cpp_TypeInfo_var, L_5, L_6, (((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))), L_7, L_8, (&V_0));
		V_1 = L_9;
		int32_t L_10 = V_1;
		ComputeException_ThrowOnError_m4115276668(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		V_3 = ((ComputeDeviceU5BU5D_t2787470155*)SZArrayNew(ComputeDeviceU5BU5D_t2787470155_il2cpp_TypeInfo_var, (uint32_t)L_11));
		V_4 = 0;
		goto IL_006e;
	}

IL_0052:
	{
		ComputeDeviceU5BU5D_t2787470155* L_12 = V_3;
		int32_t L_13 = V_4;
		CLDeviceHandleU5BU5D_t3725102763* L_14 = V_2;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		CLDeviceHandle_t1655913246  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ComputeDevice_t4083180286 * L_18 = (ComputeDevice_t4083180286 *)il2cpp_codegen_object_new(ComputeDevice_t4083180286_il2cpp_TypeInfo_var);
		ComputeDevice__ctor_m4162545325(L_18, __this, L_17, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_18);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (ComputeDevice_t4083180286 *)L_18);
		int32_t L_19 = V_4;
		V_5 = L_19;
		int32_t L_20 = V_5;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_006e:
	{
		int32_t L_21 = V_4;
		int32_t L_22 = V_0;
		V_6 = (bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_0052;
		}
	}
	{
		ComputeDeviceU5BU5D_t2787470155* L_24 = V_3;
		ReadOnlyCollection_1_t1000789277 * L_25 = (ReadOnlyCollection_1_t1000789277 *)il2cpp_codegen_object_new(ReadOnlyCollection_1_t1000789277_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1__ctor_m2800920346(L_25, (RuntimeObject*)(RuntimeObject*)L_24, /*hidden argument*/ReadOnlyCollection_1__ctor_m2800920346_RuntimeMethod_var);
		__this->set_devices_1(L_25);
		ReadOnlyCollection_1_t1000789277 * L_26 = __this->get_devices_1();
		V_7 = L_26;
		goto IL_008f;
	}

IL_008f:
	{
		ReadOnlyCollection_1_t1000789277 * L_27 = V_7;
		return L_27;
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
// Cloo.Bindings.CLProgramHandle Cloo.ComputeProgram::get_Handle()
extern "C"  CLProgramHandle_t2486937744  ComputeProgram_get_Handle_m317173536 (ComputeProgram_t346198837 * __this, const RuntimeMethod* method)
{
	{
		CLProgramHandle_t2486937744  L_0 = __this->get_U3CHandleU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Cloo.ComputeProgram::set_Handle(Cloo.Bindings.CLProgramHandle)
extern "C"  void ComputeProgram_set_Handle_m1177439844 (ComputeProgram_t346198837 * __this, CLProgramHandle_t2486937744  ___value0, const RuntimeMethod* method)
{
	{
		CLProgramHandle_t2486937744  L_0 = ___value0;
		__this->set_U3CHandleU3Ek__BackingField_7(L_0);
		return;
	}
}
// Cloo.ComputeContext Cloo.ComputeProgram::get_Context()
extern "C"  ComputeContext_t1365812911 * ComputeProgram_get_Context_m2220785381 (ComputeProgram_t346198837 * __this, const RuntimeMethod* method)
{
	ComputeContext_t1365812911 * V_0 = NULL;
	{
		ComputeContext_t1365812911 * L_0 = __this->get_context_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ComputeContext_t1365812911 * L_1 = V_0;
		return L_1;
	}
}
// System.Void Cloo.ComputeProgram::.ctor(Cloo.ComputeContext,System.String)
extern "C"  void ComputeProgram__ctor_m876899197 (ComputeProgram_t346198837 * __this, ComputeContext_t1365812911 * ___context0, String_t* ___source1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeProgram__ctor_m876899197_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CLProgramHandle_t2486937744  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		ComputeResource__ctor_m415879097(__this, /*hidden argument*/NULL);
		V_0 = 0;
		RuntimeObject* L_0 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		ComputeContext_t1365812911 * L_1 = ___context0;
		NullCheck(L_1);
		CLContextHandle_t447015429  L_2 = ComputeContext_get_Handle_m1664813480(L_1, /*hidden argument*/NULL);
		StringU5BU5D_t1281789340* L_3 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1));
		String_t* L_4 = ___source1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_4);
		NullCheck(L_0);
		CLProgramHandle_t2486937744  L_5 = InterfaceFuncInvoker5< CLProgramHandle_t2486937744 , CLContextHandle_t447015429 , int32_t, StringU5BU5D_t1281789340*, IntPtrU5BU5D_t4013366056*, int32_t* >::Invoke(15 /* Cloo.Bindings.CLProgramHandle Cloo.Bindings.ICL10::CreateProgramWithSource(Cloo.Bindings.CLContextHandle,System.Int32,System.String[],System.IntPtr[],Cloo.ComputeErrorCode&) */, ICL10_t3568785851_il2cpp_TypeInfo_var, L_0, L_2, 1, L_3, (IntPtrU5BU5D_t4013366056*)(IntPtrU5BU5D_t4013366056*)NULL, (&V_0));
		ComputeProgram_set_Handle_m1177439844(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		ComputeException_ThrowOnError_m4115276668(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		CLProgramHandle_t2486937744  L_7 = ComputeProgram_get_Handle_m317173536(__this, /*hidden argument*/NULL);
		V_1 = L_7;
		intptr_t L_8 = CLProgramHandle_get_Value_m664975121((&V_1), /*hidden argument*/NULL);
		ComputeObject_SetID_m1020599628(__this, L_8, /*hidden argument*/NULL);
		ComputeContext_t1365812911 * L_9 = ___context0;
		__this->set_context_1(L_9);
		ComputeContext_t1365812911 * L_10 = ___context0;
		NullCheck(L_10);
		ReadOnlyCollection_1_t1000789277 * L_11 = ComputeContext_get_Devices_m2832436810(L_10, /*hidden argument*/NULL);
		__this->set_devices_2(L_11);
		StringU5BU5D_t1281789340* L_12 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1));
		String_t* L_13 = ___source1;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_13);
		ReadOnlyCollection_1_t3060026976 * L_14 = (ReadOnlyCollection_1_t3060026976 *)il2cpp_codegen_object_new(ReadOnlyCollection_1_t3060026976_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1__ctor_m627134177(L_14, (RuntimeObject*)(RuntimeObject*)L_12, /*hidden argument*/ReadOnlyCollection_1__ctor_m627134177_RuntimeMethod_var);
		__this->set_source_3(L_14);
		return;
	}
}
// System.Void Cloo.ComputeProgram::Build(System.Collections.Generic.ICollection`1<Cloo.ComputeDevice>,System.String,Cloo.Bindings.ComputeProgramBuildNotifier,System.IntPtr)
extern "C"  void ComputeProgram_Build_m316114664 (ComputeProgram_t346198837 * __this, RuntimeObject* ___devices0, String_t* ___options1, ComputeProgramBuildNotifier_t317311244 * ___notify2, intptr_t ___notifyDataPtr3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeProgram_Build_m316114664_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CLDeviceHandleU5BU5D_t3725102763* V_1 = NULL;
	int32_t V_2 = 0;
	ComputeProgram_t346198837 * G_B2_0 = NULL;
	ComputeProgram_t346198837 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	ComputeProgram_t346198837 * G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___devices0;
		CLDeviceHandleU5BU5D_t3725102763* L_1 = ComputeTools_ExtractHandles_m603623554(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		String_t* L_2 = ___options1;
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = _stringLiteral757602046;
		G_B3_1 = G_B1_0;
		goto IL_0016;
	}

IL_0015:
	{
		String_t* L_3 = ___options1;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0016:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_buildOptions_5(G_B3_0);
		ComputeProgramBuildNotifier_t317311244 * L_4 = ___notify2;
		__this->set_buildNotify_6(L_4);
		RuntimeObject* L_5 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		CLProgramHandle_t2486937744  L_6 = ComputeProgram_get_Handle_m317173536(__this, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		CLDeviceHandleU5BU5D_t3725102763* L_8 = V_1;
		String_t* L_9 = ___options1;
		ComputeProgramBuildNotifier_t317311244 * L_10 = __this->get_buildNotify_6();
		intptr_t L_11 = ___notifyDataPtr3;
		NullCheck(L_5);
		int32_t L_12 = InterfaceFuncInvoker6< int32_t, CLProgramHandle_t2486937744 , int32_t, CLDeviceHandleU5BU5D_t3725102763*, String_t*, ComputeProgramBuildNotifier_t317311244 *, intptr_t >::Invoke(17 /* Cloo.ComputeErrorCode Cloo.Bindings.ICL10::BuildProgram(Cloo.Bindings.CLProgramHandle,System.Int32,Cloo.Bindings.CLDeviceHandle[],System.String,Cloo.Bindings.ComputeProgramBuildNotifier,System.IntPtr) */, ICL10_t3568785851_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_8, L_9, L_10, L_11);
		V_2 = L_12;
		int32_t L_13 = V_2;
		ComputeException_ThrowOnError_m4115276668(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		return;
	}
}
// Cloo.ComputeKernel Cloo.ComputeProgram::CreateKernel(System.String)
extern "C"  ComputeKernel_t2923705153 * ComputeProgram_CreateKernel_m1314287053 (ComputeProgram_t346198837 * __this, String_t* ___functionName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeProgram_CreateKernel_m1314287053_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ComputeKernel_t2923705153 * V_0 = NULL;
	{
		String_t* L_0 = ___functionName0;
		ComputeKernel_t2923705153 * L_1 = (ComputeKernel_t2923705153 *)il2cpp_codegen_object_new(ComputeKernel_t2923705153_il2cpp_TypeInfo_var);
		ComputeKernel__ctor_m1969448358(L_1, L_0, __this, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		ComputeKernel_t2923705153 * L_2 = V_0;
		return L_2;
	}
}
// System.String Cloo.ComputeProgram::GetBuildLog(Cloo.ComputeDevice)
extern "C"  String_t* ComputeProgram_GetBuildLog_m3671221401 (ComputeProgram_t346198837 * __this, ComputeDevice_t4083180286 * ___device0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeProgram_GetBuildLog_m3671221401_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		CLProgramHandle_t2486937744  L_0 = ComputeProgram_get_Handle_m317173536(__this, /*hidden argument*/NULL);
		ComputeDevice_t4083180286 * L_1 = ___device0;
		NullCheck(L_1);
		CLDeviceHandle_t1655913246  L_2 = ComputeDevice_get_Handle_m1377678137(L_1, /*hidden argument*/NULL);
		RuntimeObject* L_3 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_4 = L_3;
		intptr_t L_5 = (intptr_t)GetInterfaceMethodInfo(L_4, 18, ICL10_t3568785851_il2cpp_TypeInfo_var);
		GetInfoDelegateEx_3_t3669348736 * L_6 = (GetInfoDelegateEx_3_t3669348736 *)il2cpp_codegen_object_new(GetInfoDelegateEx_3_t3669348736_il2cpp_TypeInfo_var);
		GetInfoDelegateEx_3__ctor_m877644504(L_6, L_4, L_5, /*hidden argument*/GetInfoDelegateEx_3__ctor_m877644504_RuntimeMethod_var);
		String_t* L_7 = ComputeObject_GetStringInfo_TisCLProgramHandle_t2486937744_TisCLDeviceHandle_t1655913246_TisComputeProgramBuildInfo_t3516951054_m75492913(__this, L_0, L_2, ((int32_t)4483), L_6, /*hidden argument*/ComputeObject_GetStringInfo_TisCLProgramHandle_t2486937744_TisCLDeviceHandle_t1655913246_TisComputeProgramBuildInfo_t3516951054_m75492913_RuntimeMethod_var);
		V_0 = L_7;
		goto IL_002c;
	}

IL_002c:
	{
		String_t* L_8 = V_0;
		return L_8;
	}
}
// Cloo.ComputeProgramBuildStatus Cloo.ComputeProgram::GetBuildStatus(Cloo.ComputeDevice)
extern "C"  int32_t ComputeProgram_GetBuildStatus_m1112738881 (ComputeProgram_t346198837 * __this, ComputeDevice_t4083180286 * ___device0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeProgram_GetBuildStatus_m1112738881_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		CLProgramHandle_t2486937744  L_0 = ComputeProgram_get_Handle_m317173536(__this, /*hidden argument*/NULL);
		ComputeDevice_t4083180286 * L_1 = ___device0;
		NullCheck(L_1);
		CLDeviceHandle_t1655913246  L_2 = ComputeDevice_get_Handle_m1377678137(L_1, /*hidden argument*/NULL);
		RuntimeObject* L_3 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_4 = L_3;
		intptr_t L_5 = (intptr_t)GetInterfaceMethodInfo(L_4, 18, ICL10_t3568785851_il2cpp_TypeInfo_var);
		GetInfoDelegateEx_3_t3669348736 * L_6 = (GetInfoDelegateEx_3_t3669348736 *)il2cpp_codegen_object_new(GetInfoDelegateEx_3_t3669348736_il2cpp_TypeInfo_var);
		GetInfoDelegateEx_3__ctor_m877644504(L_6, L_4, L_5, /*hidden argument*/GetInfoDelegateEx_3__ctor_m877644504_RuntimeMethod_var);
		uint32_t L_7 = ComputeObject_GetInfo_TisCLProgramHandle_t2486937744_TisCLDeviceHandle_t1655913246_TisComputeProgramBuildInfo_t3516951054_TisUInt32_t2560061978_m3082471654(__this, L_0, L_2, ((int32_t)4481), L_6, /*hidden argument*/ComputeObject_GetInfo_TisCLProgramHandle_t2486937744_TisCLDeviceHandle_t1655913246_TisComputeProgramBuildInfo_t3516951054_TisUInt32_t2560061978_m3082471654_RuntimeMethod_var);
		V_0 = L_7;
		goto IL_002c;
	}

IL_002c:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void Cloo.ComputeProgram::Dispose(System.Boolean)
extern "C"  void ComputeProgram_Dispose_m707426446 (ComputeProgram_t346198837 * __this, bool ___manual0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeProgram_Dispose_m707426446_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	CLProgramHandle_t2486937744  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		CLProgramHandle_t2486937744  L_0 = ComputeProgram_get_Handle_m317173536(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = CLProgramHandle_get_IsValid_m98553484((&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		RuntimeObject* L_3 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		CLProgramHandle_t2486937744  L_4 = ComputeProgram_get_Handle_m317173536(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		InterfaceFuncInvoker1< int32_t, CLProgramHandle_t2486937744  >::Invoke(16 /* Cloo.ComputeErrorCode Cloo.Bindings.ICL10::ReleaseProgram(Cloo.Bindings.CLProgramHandle) */, ICL10_t3568785851_il2cpp_TypeInfo_var, L_3, L_4);
		CLProgramHandle_t2486937744  L_5 = ComputeProgram_get_Handle_m317173536(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		CLProgramHandle_Invalidate_m1993159295((&V_1), /*hidden argument*/NULL);
	}

IL_0035:
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
// System.Void Cloo.ComputeResource::Dispose()
extern "C"  void ComputeResource_Dispose_m1047257706 (ComputeResource_t542138890 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void Cloo.ComputeResource::Dispose(System.Boolean) */, __this, (bool)1);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		GC_KeepAlive_m1400443516(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cloo.ComputeResource::Finalize()
extern "C"  void ComputeResource_Finalize_m2718593472 (ComputeResource_t542138890 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void Cloo.ComputeResource::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x14, FINALLY_000c);
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
		IL2CPP_JUMP_TBL(0x14, IL_0014)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0014:
	{
		return;
	}
}
// System.Void Cloo.ComputeResource::.ctor()
extern "C"  void ComputeResource__ctor_m415879097 (ComputeResource_t542138890 * __this, const RuntimeMethod* method)
{
	{
		ComputeObject__ctor_m2175313869(__this, /*hidden argument*/NULL);
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
// Cloo.Bindings.CLSamplerHandle Cloo.ComputeSampler::get_Handle()
extern "C"  CLSamplerHandle_t915650828  ComputeSampler_get_Handle_m40855011 (ComputeSampler_t3833417323 * __this, const RuntimeMethod* method)
{
	{
		CLSamplerHandle_t915650828  L_0 = __this->get_U3CHandleU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Cloo.ComputeSampler::set_Handle(Cloo.Bindings.CLSamplerHandle)
extern "C"  void ComputeSampler_set_Handle_m2222504969 (ComputeSampler_t3833417323 * __this, CLSamplerHandle_t915650828  ___value0, const RuntimeMethod* method)
{
	{
		CLSamplerHandle_t915650828  L_0 = ___value0;
		__this->set_U3CHandleU3Ek__BackingField_5(L_0);
		return;
	}
}
// Cloo.ComputeImageAddressing Cloo.ComputeSampler::get_Addressing()
extern "C"  int32_t ComputeSampler_get_Addressing_m849661667 (ComputeSampler_t3833417323 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_addressing_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// Cloo.ComputeImageFiltering Cloo.ComputeSampler::get_Filtering()
extern "C"  int32_t ComputeSampler_get_Filtering_m3500512002 (ComputeSampler_t3833417323 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_filtering_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Cloo.ComputeSampler::.ctor(Cloo.ComputeContext,System.Boolean,Cloo.ComputeImageAddressing,Cloo.ComputeImageFiltering)
extern "C"  void ComputeSampler__ctor_m98172160 (ComputeSampler_t3833417323 * __this, ComputeContext_t1365812911 * ___context0, bool ___normalizedCoords1, int32_t ___addressing2, int32_t ___filtering3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeSampler__ctor_m98172160_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CLSamplerHandle_t915650828  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		ComputeResource__ctor_m415879097(__this, /*hidden argument*/NULL);
		V_0 = 0;
		RuntimeObject* L_0 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		ComputeContext_t1365812911 * L_1 = ___context0;
		NullCheck(L_1);
		CLContextHandle_t447015429  L_2 = ComputeContext_get_Handle_m1664813480(L_1, /*hidden argument*/NULL);
		bool L_3 = ___normalizedCoords1;
		int32_t L_4 = ___addressing2;
		int32_t L_5 = ___filtering3;
		NullCheck(L_0);
		CLSamplerHandle_t915650828  L_6 = InterfaceFuncInvoker5< CLSamplerHandle_t915650828 , CLContextHandle_t447015429 , bool, int32_t, int32_t, int32_t* >::Invoke(13 /* Cloo.Bindings.CLSamplerHandle Cloo.Bindings.ICL10::CreateSampler(Cloo.Bindings.CLContextHandle,System.Boolean,Cloo.ComputeImageAddressing,Cloo.ComputeImageFiltering,Cloo.ComputeErrorCode&) */, ICL10_t3568785851_il2cpp_TypeInfo_var, L_0, L_2, L_3, L_4, L_5, (&V_0));
		ComputeSampler_set_Handle_m2222504969(__this, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		ComputeException_ThrowOnError_m4115276668(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		CLSamplerHandle_t915650828  L_8 = ComputeSampler_get_Handle_m40855011(__this, /*hidden argument*/NULL);
		V_1 = L_8;
		intptr_t L_9 = CLSamplerHandle_get_Value_m3534879856((&V_1), /*hidden argument*/NULL);
		ComputeObject_SetID_m1020599628(__this, L_9, /*hidden argument*/NULL);
		int32_t L_10 = ___addressing2;
		__this->set_addressing_2(L_10);
		ComputeContext_t1365812911 * L_11 = ___context0;
		__this->set_context_1(L_11);
		int32_t L_12 = ___filtering3;
		__this->set_filtering_3(L_12);
		bool L_13 = ___normalizedCoords1;
		__this->set_normalizedCoords_4(L_13);
		return;
	}
}
// System.Void Cloo.ComputeSampler::Dispose(System.Boolean)
extern "C"  void ComputeSampler_Dispose_m323759396 (ComputeSampler_t3833417323 * __this, bool ___manual0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeSampler_Dispose_m323759396_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	CLSamplerHandle_t915650828  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		CLSamplerHandle_t915650828  L_0 = ComputeSampler_get_Handle_m40855011(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = CLSamplerHandle_get_IsValid_m3163180585((&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		RuntimeObject* L_3 = CLInterface_get_CL12_m886088080(NULL /*static, unused*/, /*hidden argument*/NULL);
		CLSamplerHandle_t915650828  L_4 = ComputeSampler_get_Handle_m40855011(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		InterfaceFuncInvoker1< int32_t, CLSamplerHandle_t915650828  >::Invoke(14 /* Cloo.ComputeErrorCode Cloo.Bindings.ICL10::ReleaseSampler(Cloo.Bindings.CLSamplerHandle) */, ICL10_t3568785851_il2cpp_TypeInfo_var, L_3, L_4);
		CLSamplerHandle_t915650828  L_5 = ComputeSampler_get_Handle_m40855011(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		CLSamplerHandle_Invalidate_m3540269400((&V_1), /*hidden argument*/NULL);
	}

IL_0035:
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
// System.Version Cloo.ComputeTools::ParseVersionString(System.String,System.Int32)
extern "C"  Version_t3456873960 * ComputeTools_ParseVersionString_m689330921 (RuntimeObject * __this /* static, unused */, String_t* ___versionString0, int32_t ___substringIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeTools_ParseVersionString_m689330921_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	Version_t3456873960 * V_1 = NULL;
	{
		String_t* L_0 = ___versionString0;
		CharU5BU5D_t3528271667* L_1 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		NullCheck(L_0);
		StringU5BU5D_t1281789340* L_2 = String_Split_m1466646415(L_0, L_1, 1, /*hidden argument*/NULL);
		V_0 = L_2;
		StringU5BU5D_t1281789340* L_3 = V_0;
		int32_t L_4 = ___substringIndex1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Version_t3456873960 * L_7 = (Version_t3456873960 *)il2cpp_codegen_object_new(Version_t3456873960_il2cpp_TypeInfo_var);
		Version__ctor_m1394137037(L_7, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_001f;
	}

IL_001f:
	{
		Version_t3456873960 * L_8 = V_1;
		return L_8;
	}
}
// System.Int64[] Cloo.ComputeTools::ConvertArray(System.IntPtr[])
extern "C"  Int64U5BU5D_t2559172825* ComputeTools_ConvertArray_m269020480 (RuntimeObject * __this /* static, unused */, IntPtrU5BU5D_t4013366056* ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeTools_ConvertArray_m269020480_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int64U5BU5D_t2559172825* V_0 = NULL;
	bool V_1 = false;
	Int64U5BU5D_t2559172825* V_2 = NULL;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	bool V_5 = false;
	{
		IntPtrU5BU5D_t4013366056* L_0 = ___array0;
		V_1 = (bool)((((RuntimeObject*)(IntPtrU5BU5D_t4013366056*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (Int64U5BU5D_t2559172825*)NULL;
		goto IL_0046;
	}

IL_000d:
	{
		IntPtrU5BU5D_t4013366056* L_2 = ___array0;
		NullCheck(L_2);
		V_0 = ((Int64U5BU5D_t2559172825*)SZArrayNew(Int64U5BU5D_t2559172825_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))))));
		V_3 = (((int64_t)((int64_t)0)));
		goto IL_0035;
	}

IL_001b:
	{
		Int64U5BU5D_t2559172825* L_3 = V_0;
		int64_t L_4 = V_3;
		if ((int64_t)(L_4) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(),ComputeTools_ConvertArray_m269020480_RuntimeMethod_var);
		IntPtrU5BU5D_t4013366056* L_5 = ___array0;
		int64_t L_6 = V_3;
		if ((int64_t)(L_6) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(),ComputeTools_ConvertArray_m269020480_RuntimeMethod_var);
		NullCheck(L_5);
		int64_t L_7 = IntPtr_ToInt64_m192765549(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>((((intptr_t)L_6))))), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>((((intptr_t)L_4))), (int64_t)L_7);
		int64_t L_8 = V_3;
		V_4 = L_8;
		int64_t L_9 = V_4;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_9, (int64_t)(((int64_t)((int64_t)1)))));
	}

IL_0035:
	{
		int64_t L_10 = V_3;
		IntPtrU5BU5D_t4013366056* L_11 = ___array0;
		NullCheck(L_11);
		V_5 = (bool)((((int64_t)L_10) < ((int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))))? 1 : 0);
		bool L_12 = V_5;
		if (L_12)
		{
			goto IL_001b;
		}
	}
	{
		Int64U5BU5D_t2559172825* L_13 = V_0;
		V_2 = L_13;
		goto IL_0046;
	}

IL_0046:
	{
		Int64U5BU5D_t2559172825* L_14 = V_2;
		return L_14;
	}
}
// Cloo.Bindings.CLDeviceHandle[] Cloo.ComputeTools::ExtractHandles(System.Collections.Generic.ICollection`1<Cloo.ComputeDevice>,System.Int32&)
extern "C"  CLDeviceHandleU5BU5D_t3725102763* ComputeTools_ExtractHandles_m603623554 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___computeObjects0, int32_t* ___handleCount1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeTools_ExtractHandles_m603623554_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CLDeviceHandleU5BU5D_t3725102763* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	CLDeviceHandleU5BU5D_t3725102763* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	ComputeDevice_t4083180286 * V_5 = NULL;
	int32_t V_6 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___computeObjects0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = ___computeObjects0;
		NullCheck(L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Cloo.ComputeDevice>::get_Count() */, ICollection_1_t2616365224_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_2 = (bool)G_B3_0;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		int32_t* L_4 = ___handleCount1;
		*((int32_t*)(L_4)) = (int32_t)0;
		V_3 = (CLDeviceHandleU5BU5D_t3725102763*)NULL;
		goto IL_007a;
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___computeObjects0;
		NullCheck(L_5);
		int32_t L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Cloo.ComputeDevice>::get_Count() */, ICollection_1_t2616365224_il2cpp_TypeInfo_var, L_5);
		V_0 = ((CLDeviceHandleU5BU5D_t3725102763*)SZArrayNew(CLDeviceHandleU5BU5D_t3725102763_il2cpp_TypeInfo_var, (uint32_t)L_6));
		V_1 = 0;
		RuntimeObject* L_7 = ___computeObjects0;
		NullCheck(L_7);
		RuntimeObject* L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Cloo.ComputeDevice>::GetEnumerator() */, IEnumerable_1_t3063033175_il2cpp_TypeInfo_var, L_7);
		V_4 = L_8;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0056;
		}

IL_0035:
		{
			RuntimeObject* L_9 = V_4;
			NullCheck(L_9);
			ComputeDevice_t4083180286 * L_10 = InterfaceFuncInvoker0< ComputeDevice_t4083180286 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Cloo.ComputeDevice>::get_Current() */, IEnumerator_1_t220783458_il2cpp_TypeInfo_var, L_9);
			V_5 = L_10;
			CLDeviceHandleU5BU5D_t3725102763* L_11 = V_0;
			int32_t L_12 = V_1;
			ComputeDevice_t4083180286 * L_13 = V_5;
			NullCheck(L_13);
			CLDeviceHandle_t1655913246  L_14 = ComputeDevice_get_Handle_m1377678137(L_13, /*hidden argument*/NULL);
			NullCheck(L_11);
			(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (CLDeviceHandle_t1655913246 )L_14);
			int32_t L_15 = V_1;
			V_6 = L_15;
			int32_t L_16 = V_6;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		}

IL_0056:
		{
			RuntimeObject* L_17 = V_4;
			NullCheck(L_17);
			bool L_18 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_17);
			if (L_18)
			{
				goto IL_0035;
			}
		}

IL_005f:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0061);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_19 = V_4;
			if (!L_19)
			{
				goto IL_006d;
			}
		}

IL_0065:
		{
			RuntimeObject* L_20 = V_4;
			NullCheck(L_20);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_20);
		}

IL_006d:
		{
			IL2CPP_END_FINALLY(97)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006e:
	{
		int32_t* L_21 = ___handleCount1;
		RuntimeObject* L_22 = ___computeObjects0;
		NullCheck(L_22);
		int32_t L_23 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Cloo.ComputeDevice>::get_Count() */, ICollection_1_t2616365224_il2cpp_TypeInfo_var, L_22);
		*((int32_t*)(L_21)) = (int32_t)L_23;
		CLDeviceHandleU5BU5D_t3725102763* L_24 = V_0;
		V_3 = L_24;
		goto IL_007a;
	}

IL_007a:
	{
		CLDeviceHandleU5BU5D_t3725102763* L_25 = V_3;
		return L_25;
	}
}
// Cloo.Bindings.CLEventHandle[] Cloo.ComputeTools::ExtractHandles(System.Collections.Generic.ICollection`1<Cloo.ComputeEventBase>,System.Int32&)
extern "C"  CLEventHandleU5BU5D_t4276533782* ComputeTools_ExtractHandles_m2843993479 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___computeObjects0, int32_t* ___handleCount1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputeTools_ExtractHandles_m2843993479_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CLEventHandleU5BU5D_t4276533782* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	CLEventHandleU5BU5D_t4276533782* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	ComputeEventBase_t2120293193 * V_5 = NULL;
	int32_t V_6 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___computeObjects0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = ___computeObjects0;
		NullCheck(L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Cloo.ComputeEventBase>::get_Count() */, ICollection_1_t653478131_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_2 = (bool)G_B3_0;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		int32_t* L_4 = ___handleCount1;
		*((int32_t*)(L_4)) = (int32_t)0;
		V_3 = (CLEventHandleU5BU5D_t4276533782*)NULL;
		goto IL_007a;
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___computeObjects0;
		NullCheck(L_5);
		int32_t L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Cloo.ComputeEventBase>::get_Count() */, ICollection_1_t653478131_il2cpp_TypeInfo_var, L_5);
		V_0 = ((CLEventHandleU5BU5D_t4276533782*)SZArrayNew(CLEventHandleU5BU5D_t4276533782_il2cpp_TypeInfo_var, (uint32_t)L_6));
		V_1 = 0;
		RuntimeObject* L_7 = ___computeObjects0;
		NullCheck(L_7);
		RuntimeObject* L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Cloo.ComputeEventBase>::GetEnumerator() */, IEnumerable_1_t1100146082_il2cpp_TypeInfo_var, L_7);
		V_4 = L_8;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0056;
		}

IL_0035:
		{
			RuntimeObject* L_9 = V_4;
			NullCheck(L_9);
			ComputeEventBase_t2120293193 * L_10 = InterfaceFuncInvoker0< ComputeEventBase_t2120293193 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Cloo.ComputeEventBase>::get_Current() */, IEnumerator_1_t2552863661_il2cpp_TypeInfo_var, L_9);
			V_5 = L_10;
			CLEventHandleU5BU5D_t4276533782* L_11 = V_0;
			int32_t L_12 = V_1;
			ComputeEventBase_t2120293193 * L_13 = V_5;
			NullCheck(L_13);
			CLEventHandle_t1689096655  L_14 = ComputeEventBase_get_Handle_m678311890(L_13, /*hidden argument*/NULL);
			NullCheck(L_11);
			(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (CLEventHandle_t1689096655 )L_14);
			int32_t L_15 = V_1;
			V_6 = L_15;
			int32_t L_16 = V_6;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		}

IL_0056:
		{
			RuntimeObject* L_17 = V_4;
			NullCheck(L_17);
			bool L_18 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_17);
			if (L_18)
			{
				goto IL_0035;
			}
		}

IL_005f:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0061);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_19 = V_4;
			if (!L_19)
			{
				goto IL_006d;
			}
		}

IL_0065:
		{
			RuntimeObject* L_20 = V_4;
			NullCheck(L_20);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_20);
		}

IL_006d:
		{
			IL2CPP_END_FINALLY(97)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006e:
	{
		int32_t* L_21 = ___handleCount1;
		RuntimeObject* L_22 = ___computeObjects0;
		NullCheck(L_22);
		int32_t L_23 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Cloo.ComputeEventBase>::get_Count() */, ICollection_1_t653478131_il2cpp_TypeInfo_var, L_22);
		*((int32_t*)(L_21)) = (int32_t)L_23;
		CLEventHandleU5BU5D_t4276533782* L_24 = V_0;
		V_3 = L_24;
		goto IL_007a;
	}

IL_007a:
	{
		CLEventHandleU5BU5D_t4276533782* L_25 = V_3;
		return L_25;
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
// System.Void Cloo.DeviceNotAvailableComputeException::.ctor()
extern "C"  void DeviceNotAvailableComputeException__ctor_m2576565587 (DeviceNotAvailableComputeException_t1010603520 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-2), /*hidden argument*/NULL);
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
// System.Void Cloo.DeviceNotFoundComputeException::.ctor()
extern "C"  void DeviceNotFoundComputeException__ctor_m2778902249 (DeviceNotFoundComputeException_t2803661270 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, (-1), /*hidden argument*/NULL);
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
// System.Void Cloo.ImageFormatMismatchComputeException::.ctor()
extern "C"  void ImageFormatMismatchComputeException__ctor_m2167928152 (ImageFormatMismatchComputeException_t110044459 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-9), /*hidden argument*/NULL);
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
// System.Void Cloo.ImageFormatNotSupportedComputeException::.ctor()
extern "C"  void ImageFormatNotSupportedComputeException__ctor_m322969780 (ImageFormatNotSupportedComputeException_t824198691 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-10), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidArgumentIndexComputeException::.ctor()
extern "C"  void InvalidArgumentIndexComputeException__ctor_m3327796891 (InvalidArgumentIndexComputeException_t2375232228 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-49), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidArgumentSizeComputeException::.ctor()
extern "C"  void InvalidArgumentSizeComputeException__ctor_m1121520031 (InvalidArgumentSizeComputeException_t126175770 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-51), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidArgumentValueComputeException::.ctor()
extern "C"  void InvalidArgumentValueComputeException__ctor_m267991062 (InvalidArgumentValueComputeException_t4274550977 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-50), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidBinaryComputeException::.ctor()
extern "C"  void InvalidBinaryComputeException__ctor_m1176098170 (InvalidBinaryComputeException_t3216170158 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-42), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidBufferSizeComputeException::.ctor()
extern "C"  void InvalidBufferSizeComputeException__ctor_m3598024023 (InvalidBufferSizeComputeException_t3765795266 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-61), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidBuildOptionsComputeException::.ctor()
extern "C"  void InvalidBuildOptionsComputeException__ctor_m2594830414 (InvalidBuildOptionsComputeException_t696878590 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-43), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidCommandQueueComputeException::.ctor()
extern "C"  void InvalidCommandQueueComputeException__ctor_m83821076 (InvalidCommandQueueComputeException_t3760823054 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-36), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidCommandQueueFlagsComputeException::.ctor()
extern "C"  void InvalidCommandQueueFlagsComputeException__ctor_m3143306054 (InvalidCommandQueueFlagsComputeException_t1130645332 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-35), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidContextComputeException::.ctor()
extern "C"  void InvalidContextComputeException__ctor_m2865329868 (InvalidContextComputeException_t2857043932 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-34), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidDeviceComputeException::.ctor()
extern "C"  void InvalidDeviceComputeException__ctor_m2683439950 (InvalidDeviceComputeException_t696285512 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-33), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidDeviceTypeComputeException::.ctor()
extern "C"  void InvalidDeviceTypeComputeException__ctor_m1487330586 (InvalidDeviceTypeComputeException_t3015842128 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-31), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidEventComputeException::.ctor()
extern "C"  void InvalidEventComputeException__ctor_m3948495255 (InvalidEventComputeException_t3815158586 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-58), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidEventWaitListComputeException::.ctor()
extern "C"  void InvalidEventWaitListComputeException__ctor_m574768267 (InvalidEventWaitListComputeException_t1652478454 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-57), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidGlobalOffsetComputeException::.ctor()
extern "C"  void InvalidGlobalOffsetComputeException__ctor_m4038333471 (InvalidGlobalOffsetComputeException_t637889218 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-56), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidGLObjectComputeException::.ctor()
extern "C"  void InvalidGLObjectComputeException__ctor_m4286668796 (InvalidGLObjectComputeException_t3268435956 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-60), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidHostPointerComputeException::.ctor()
extern "C"  void InvalidHostPointerComputeException__ctor_m3652038500 (InvalidHostPointerComputeException_t3920245830 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-37), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidImageFormatDescriptorComputeException::.ctor()
extern "C"  void InvalidImageFormatDescriptorComputeException__ctor_m3349053293 (InvalidImageFormatDescriptorComputeException_t1307689117 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-39), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidImageSizeComputeException::.ctor()
extern "C"  void InvalidImageSizeComputeException__ctor_m354468173 (InvalidImageSizeComputeException_t811168388 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-40), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidKernelArgumentsComputeException::.ctor()
extern "C"  void InvalidKernelArgumentsComputeException__ctor_m2686482170 (InvalidKernelArgumentsComputeException_t1122558706 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-52), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidKernelComputeException::.ctor()
extern "C"  void InvalidKernelComputeException__ctor_m3724177594 (InvalidKernelComputeException_t926678227 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-48), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidKernelDefinitionComputeException::.ctor()
extern "C"  void InvalidKernelDefinitionComputeException__ctor_m1061364600 (InvalidKernelDefinitionComputeException_t1910702029 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-47), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidKernelNameComputeException::.ctor()
extern "C"  void InvalidKernelNameComputeException__ctor_m3425883653 (InvalidKernelNameComputeException_t1206973794 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-46), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidMemoryObjectComputeException::.ctor()
extern "C"  void InvalidMemoryObjectComputeException__ctor_m2795730210 (InvalidMemoryObjectComputeException_t1584946539 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-38), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidMipLevelComputeException::.ctor()
extern "C"  void InvalidMipLevelComputeException__ctor_m2734449470 (InvalidMipLevelComputeException_t2097497037 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-62), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidOperationComputeException::.ctor()
extern "C"  void InvalidOperationComputeException__ctor_m3035711447 (InvalidOperationComputeException_t1009558057 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-59), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidPlatformComputeException::.ctor()
extern "C"  void InvalidPlatformComputeException__ctor_m793721652 (InvalidPlatformComputeException_t1484941494 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-32), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidProgramComputeException::.ctor()
extern "C"  void InvalidProgramComputeException__ctor_m582511112 (InvalidProgramComputeException_t1992991535 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-44), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidProgramExecutableComputeException::.ctor()
extern "C"  void InvalidProgramExecutableComputeException__ctor_m3139956341 (InvalidProgramExecutableComputeException_t315365513 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-45), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidSamplerComputeException::.ctor()
extern "C"  void InvalidSamplerComputeException__ctor_m2894750045 (InvalidSamplerComputeException_t500922945 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-41), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidValueComputeException::.ctor()
extern "C"  void InvalidValueComputeException__ctor_m4076390645 (InvalidValueComputeException_t1884546994 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-30), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidWorkDimensionsComputeException::.ctor()
extern "C"  void InvalidWorkDimensionsComputeException__ctor_m1048105053 (InvalidWorkDimensionsComputeException_t3766439885 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-53), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidWorkGroupSizeComputeException::.ctor()
extern "C"  void InvalidWorkGroupSizeComputeException__ctor_m2849629393 (InvalidWorkGroupSizeComputeException_t2659536362 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-54), /*hidden argument*/NULL);
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
// System.Void Cloo.InvalidWorkItemSizeComputeException::.ctor()
extern "C"  void InvalidWorkItemSizeComputeException__ctor_m239448449 (InvalidWorkItemSizeComputeException_t3193750300 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-55), /*hidden argument*/NULL);
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
// System.Void Cloo.MapFailureComputeException::.ctor()
extern "C"  void MapFailureComputeException__ctor_m1563865810 (MapFailureComputeException_t609039928 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-12), /*hidden argument*/NULL);
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
// System.Void Cloo.MemoryCopyOverlapComputeException::.ctor()
extern "C"  void MemoryCopyOverlapComputeException__ctor_m764004675 (MemoryCopyOverlapComputeException_t861502170 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-8), /*hidden argument*/NULL);
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
// System.Void Cloo.MemoryObjectAllocationFailureComputeException::.ctor()
extern "C"  void MemoryObjectAllocationFailureComputeException__ctor_m3349746710 (MemoryObjectAllocationFailureComputeException_t1033166821 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-4), /*hidden argument*/NULL);
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
// System.Void Cloo.OutOfHostMemoryComputeException::.ctor()
extern "C"  void OutOfHostMemoryComputeException__ctor_m2326176698 (OutOfHostMemoryComputeException_t2750237157 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-6), /*hidden argument*/NULL);
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
// System.Void Cloo.OutOfResourcesComputeException::.ctor()
extern "C"  void OutOfResourcesComputeException__ctor_m2203742086 (OutOfResourcesComputeException_t3780973734 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-5), /*hidden argument*/NULL);
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
// System.Void Cloo.ProfilingInfoNotAvailableComputeException::.ctor()
extern "C"  void ProfilingInfoNotAvailableComputeException__ctor_m951743102 (ProfilingInfoNotAvailableComputeException_t3456066642 * __this, const RuntimeMethod* method)
{
	{
		ComputeException__ctor_m941830565(__this, ((int32_t)-7), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
