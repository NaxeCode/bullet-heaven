// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics__FlashRenderContext_FlashRenderContext_Impl_
#include <lime/graphics/_FlashRenderContext/FlashRenderContext_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_08592d0777a89d8f_34_fromRenderContext,"lime.graphics._FlashRenderContext.FlashRenderContext_Impl_","fromRenderContext",0x745f8f9a,"lime.graphics._FlashRenderContext.FlashRenderContext_Impl_.fromRenderContext","lime/graphics/FlashRenderContext.hx",34,0x50ca064b)
namespace lime{
namespace graphics{
namespace _FlashRenderContext{

void FlashRenderContext_Impl__obj::__construct() { }

Dynamic FlashRenderContext_Impl__obj::__CreateEmpty() { return new FlashRenderContext_Impl__obj; }

void *FlashRenderContext_Impl__obj::_hx_vtable = 0;

Dynamic FlashRenderContext_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlashRenderContext_Impl__obj > _hx_result = new FlashRenderContext_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlashRenderContext_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4dcc3cf1;
}

 ::Dynamic FlashRenderContext_Impl__obj::fromRenderContext( ::lime::graphics::RenderContext context){
            	HX_STACKFRAME(&_hx_pos_08592d0777a89d8f_34_fromRenderContext)
            	HX_STACK_ARG(context,"context")
HXLINE(  34)
HXDLIN(  34)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_Impl__obj,fromRenderContext,return )


FlashRenderContext_Impl__obj::FlashRenderContext_Impl__obj()
{
}

bool FlashRenderContext_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"fromRenderContext") ) { outValue = fromRenderContext_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlashRenderContext_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlashRenderContext_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlashRenderContext_Impl__obj::__mClass;

static ::String FlashRenderContext_Impl__obj_sStaticFields[] = {
	HX_("fromRenderContext",6f,19,d4,ba),
	::String(null())
};

void FlashRenderContext_Impl__obj::__register()
{
	FlashRenderContext_Impl__obj _hx_dummy;
	FlashRenderContext_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics._FlashRenderContext.FlashRenderContext_Impl_",d9,9f,ec,58);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlashRenderContext_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlashRenderContext_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlashRenderContext_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlashRenderContext_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlashRenderContext_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace _FlashRenderContext
