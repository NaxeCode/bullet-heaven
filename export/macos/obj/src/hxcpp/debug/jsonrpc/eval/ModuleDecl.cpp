// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_ModuleDecl
#include <hxcpp/debug/jsonrpc/eval/ModuleDecl.h>
#endif
namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace eval{

::hxcpp::debug::jsonrpc::eval::ModuleDecl ModuleDecl_obj::DClass( ::Dynamic c)
{
	return ::hx::CreateEnum< ModuleDecl_obj >(HX_("DClass",54,71,ca,0b),2,1)->_hx_init(0,c);
}

::hxcpp::debug::jsonrpc::eval::ModuleDecl ModuleDecl_obj::DImport(::Array< ::String > path, ::Dynamic everything)
{
	return ::hx::CreateEnum< ModuleDecl_obj >(HX_("DImport",c9,a0,ca,48),1,2)->_hx_init(0,path)->_hx_init(1,everything);
}

::hxcpp::debug::jsonrpc::eval::ModuleDecl ModuleDecl_obj::DPackage(::Array< ::String > path)
{
	return ::hx::CreateEnum< ModuleDecl_obj >(HX_("DPackage",a2,a3,68,40),0,1)->_hx_init(0,path);
}

::hxcpp::debug::jsonrpc::eval::ModuleDecl ModuleDecl_obj::DTypedef( ::Dynamic c)
{
	return ::hx::CreateEnum< ModuleDecl_obj >(HX_("DTypedef",67,af,8f,f7),3,1)->_hx_init(0,c);
}

bool ModuleDecl_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DClass",54,71,ca,0b)) { outValue = ModuleDecl_obj::DClass_dyn(); return true; }
	if (inName==HX_("DImport",c9,a0,ca,48)) { outValue = ModuleDecl_obj::DImport_dyn(); return true; }
	if (inName==HX_("DPackage",a2,a3,68,40)) { outValue = ModuleDecl_obj::DPackage_dyn(); return true; }
	if (inName==HX_("DTypedef",67,af,8f,f7)) { outValue = ModuleDecl_obj::DTypedef_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ModuleDecl_obj)

int ModuleDecl_obj::__FindIndex(::String inName)
{
	if (inName==HX_("DClass",54,71,ca,0b)) return 2;
	if (inName==HX_("DImport",c9,a0,ca,48)) return 1;
	if (inName==HX_("DPackage",a2,a3,68,40)) return 0;
	if (inName==HX_("DTypedef",67,af,8f,f7)) return 3;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ModuleDecl_obj,DClass,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ModuleDecl_obj,DImport,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ModuleDecl_obj,DPackage,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ModuleDecl_obj,DTypedef,return)

int ModuleDecl_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("DClass",54,71,ca,0b)) return 1;
	if (inName==HX_("DImport",c9,a0,ca,48)) return 2;
	if (inName==HX_("DPackage",a2,a3,68,40)) return 1;
	if (inName==HX_("DTypedef",67,af,8f,f7)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val ModuleDecl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DClass",54,71,ca,0b)) return DClass_dyn();
	if (inName==HX_("DImport",c9,a0,ca,48)) return DImport_dyn();
	if (inName==HX_("DPackage",a2,a3,68,40)) return DPackage_dyn();
	if (inName==HX_("DTypedef",67,af,8f,f7)) return DTypedef_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String ModuleDecl_obj_sStaticFields[] = {
	HX_("DPackage",a2,a3,68,40),
	HX_("DImport",c9,a0,ca,48),
	HX_("DClass",54,71,ca,0b),
	HX_("DTypedef",67,af,8f,f7),
	::String(null())
};

::hx::Class ModuleDecl_obj::__mClass;

Dynamic __Create_ModuleDecl_obj() { return new ModuleDecl_obj; }

void ModuleDecl_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxcpp.debug.jsonrpc.eval.ModuleDecl",81,b3,17,d6), ::hx::TCanCast< ModuleDecl_obj >,ModuleDecl_obj_sStaticFields,0,
	&__Create_ModuleDecl_obj, &__Create,
	&super::__SGetClass(), &CreateModuleDecl_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ModuleDecl_obj::__GetStatic;
}

void ModuleDecl_obj::__boot()
{
}


} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace eval
