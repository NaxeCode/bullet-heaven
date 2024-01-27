// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_map_buffer_range
#include <lime/graphics/opengl/ext/EXT_map_buffer_range.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_267ae1770c737ebc_4_new,"lime.graphics.opengl.ext.EXT_map_buffer_range","new",0x9b075e93,"lime.graphics.opengl.ext.EXT_map_buffer_range.new","lime/graphics/opengl/ext/EXT_map_buffer_range.hx",4,0x29d83fdb)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_map_buffer_range_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_267ae1770c737ebc_4_new)
            	HX_STACK_THIS(this)
HXLINE(   4)
HXLINE(  11)		this->MAP_UNSYNCHRONIZED_BIT_EXT = 32;
HXLINE(  10)		this->MAP_FLUSH_EXPLICIT_BIT_EXT = 16;
HXLINE(   9)		this->MAP_INVALIDATE_BUFFER_BIT_EXT = 8;
HXLINE(   8)		this->MAP_INVALIDATE_RANGE_BIT_EXT = 4;
HXLINE(   7)		this->MAP_WRITE_BIT_EXT = 2;
HXLINE(   6)		this->MAP_READ_BIT_EXT = 1;
            	}

Dynamic EXT_map_buffer_range_obj::__CreateEmpty() { return new EXT_map_buffer_range_obj; }

void *EXT_map_buffer_range_obj::_hx_vtable = 0;

Dynamic EXT_map_buffer_range_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EXT_map_buffer_range_obj > _hx_result = new EXT_map_buffer_range_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_map_buffer_range_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5ab6768d;
}


EXT_map_buffer_range_obj::EXT_map_buffer_range_obj()
{
}

::hx::Val EXT_map_buffer_range_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"MAP_READ_BIT_EXT") ) { return ::hx::Val( MAP_READ_BIT_EXT ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"MAP_WRITE_BIT_EXT") ) { return ::hx::Val( MAP_WRITE_BIT_EXT ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"MAP_FLUSH_EXPLICIT_BIT_EXT") ) { return ::hx::Val( MAP_FLUSH_EXPLICIT_BIT_EXT ); }
		if (HX_FIELD_EQ(inName,"MAP_UNSYNCHRONIZED_BIT_EXT") ) { return ::hx::Val( MAP_UNSYNCHRONIZED_BIT_EXT ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"MAP_INVALIDATE_RANGE_BIT_EXT") ) { return ::hx::Val( MAP_INVALIDATE_RANGE_BIT_EXT ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"MAP_INVALIDATE_BUFFER_BIT_EXT") ) { return ::hx::Val( MAP_INVALIDATE_BUFFER_BIT_EXT ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EXT_map_buffer_range_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"MAP_READ_BIT_EXT") ) { MAP_READ_BIT_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"MAP_WRITE_BIT_EXT") ) { MAP_WRITE_BIT_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"MAP_FLUSH_EXPLICIT_BIT_EXT") ) { MAP_FLUSH_EXPLICIT_BIT_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAP_UNSYNCHRONIZED_BIT_EXT") ) { MAP_UNSYNCHRONIZED_BIT_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"MAP_INVALIDATE_RANGE_BIT_EXT") ) { MAP_INVALIDATE_RANGE_BIT_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"MAP_INVALIDATE_BUFFER_BIT_EXT") ) { MAP_INVALIDATE_BUFFER_BIT_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_map_buffer_range_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("MAP_READ_BIT_EXT",69,de,3b,db));
	outFields->push(HX_("MAP_WRITE_BIT_EXT",ac,69,24,f9));
	outFields->push(HX_("MAP_INVALIDATE_RANGE_BIT_EXT",2c,0f,a4,db));
	outFields->push(HX_("MAP_INVALIDATE_BUFFER_BIT_EXT",f1,1b,6e,04));
	outFields->push(HX_("MAP_FLUSH_EXPLICIT_BIT_EXT",02,81,37,cb));
	outFields->push(HX_("MAP_UNSYNCHRONIZED_BIT_EXT",c0,12,90,a0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EXT_map_buffer_range_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(EXT_map_buffer_range_obj,MAP_READ_BIT_EXT),HX_("MAP_READ_BIT_EXT",69,de,3b,db)},
	{::hx::fsInt,(int)offsetof(EXT_map_buffer_range_obj,MAP_WRITE_BIT_EXT),HX_("MAP_WRITE_BIT_EXT",ac,69,24,f9)},
	{::hx::fsInt,(int)offsetof(EXT_map_buffer_range_obj,MAP_INVALIDATE_RANGE_BIT_EXT),HX_("MAP_INVALIDATE_RANGE_BIT_EXT",2c,0f,a4,db)},
	{::hx::fsInt,(int)offsetof(EXT_map_buffer_range_obj,MAP_INVALIDATE_BUFFER_BIT_EXT),HX_("MAP_INVALIDATE_BUFFER_BIT_EXT",f1,1b,6e,04)},
	{::hx::fsInt,(int)offsetof(EXT_map_buffer_range_obj,MAP_FLUSH_EXPLICIT_BIT_EXT),HX_("MAP_FLUSH_EXPLICIT_BIT_EXT",02,81,37,cb)},
	{::hx::fsInt,(int)offsetof(EXT_map_buffer_range_obj,MAP_UNSYNCHRONIZED_BIT_EXT),HX_("MAP_UNSYNCHRONIZED_BIT_EXT",c0,12,90,a0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EXT_map_buffer_range_obj_sStaticStorageInfo = 0;
#endif

static ::String EXT_map_buffer_range_obj_sMemberFields[] = {
	HX_("MAP_READ_BIT_EXT",69,de,3b,db),
	HX_("MAP_WRITE_BIT_EXT",ac,69,24,f9),
	HX_("MAP_INVALIDATE_RANGE_BIT_EXT",2c,0f,a4,db),
	HX_("MAP_INVALIDATE_BUFFER_BIT_EXT",f1,1b,6e,04),
	HX_("MAP_FLUSH_EXPLICIT_BIT_EXT",02,81,37,cb),
	HX_("MAP_UNSYNCHRONIZED_BIT_EXT",c0,12,90,a0),
	::String(null()) };

::hx::Class EXT_map_buffer_range_obj::__mClass;

void EXT_map_buffer_range_obj::__register()
{
	EXT_map_buffer_range_obj _hx_dummy;
	EXT_map_buffer_range_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.EXT_map_buffer_range",21,19,92,c6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EXT_map_buffer_range_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EXT_map_buffer_range_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_map_buffer_range_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_map_buffer_range_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
