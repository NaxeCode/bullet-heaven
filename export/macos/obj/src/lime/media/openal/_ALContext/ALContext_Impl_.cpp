// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_lime_media_openal__ALContext_ALContext_Impl_
#include <lime/media/openal/_ALContext/ALContext_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f1d91d0137b8abbc_10__new,"lime.media.openal._ALContext.ALContext_Impl_","_new",0x7c63ff3e,"lime.media.openal._ALContext.ALContext_Impl_._new","lime/media/openal/ALContext.hx",10,0x28b7a4af)
namespace lime{
namespace media{
namespace openal{
namespace _ALContext{

void ALContext_Impl__obj::__construct() { }

Dynamic ALContext_Impl__obj::__CreateEmpty() { return new ALContext_Impl__obj; }

void *ALContext_Impl__obj::_hx_vtable = 0;

Dynamic ALContext_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ALContext_Impl__obj > _hx_result = new ALContext_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ALContext_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6553cc5b;
}

 ::Dynamic ALContext_Impl__obj::_new( ::Dynamic handle){
            	HX_STACKFRAME(&_hx_pos_f1d91d0137b8abbc_10__new)
            	HX_STACK_ARG(handle,"handle")
HXLINE(  10)
HXDLIN(  10)		return handle;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALContext_Impl__obj,_new,return )


ALContext_Impl__obj::ALContext_Impl__obj()
{
}

bool ALContext_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ALContext_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ALContext_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class ALContext_Impl__obj::__mClass;

static ::String ALContext_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	::String(null())
};

void ALContext_Impl__obj::__register()
{
	ALContext_Impl__obj _hx_dummy;
	ALContext_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.media.openal._ALContext.ALContext_Impl_",b1,c3,11,fe);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ALContext_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ALContext_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ALContext_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ALContext_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ALContext_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media
} // end namespace openal
} // end namespace _ALContext
