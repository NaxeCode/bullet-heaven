// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal__DrawCommandReader_BeginBitmapFillView_Impl_
#include <openfl/display/_internal/_DrawCommandReader/BeginBitmapFillView_Impl_.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_73397f6f71169552_335__new,"openfl.display._internal._DrawCommandReader.BeginBitmapFillView_Impl_","_new",0xaa7e8036,"openfl.display._internal._DrawCommandReader.BeginBitmapFillView_Impl_._new","openfl/display/_internal/DrawCommandReader.hx",335,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_73397f6f71169552_344_get_bitmap,"openfl.display._internal._DrawCommandReader.BeginBitmapFillView_Impl_","get_bitmap",0x1aba384d,"openfl.display._internal._DrawCommandReader.BeginBitmapFillView_Impl_.get_bitmap","openfl/display/_internal/DrawCommandReader.hx",344,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_73397f6f71169552_351_get_matrix,"openfl.display._internal._DrawCommandReader.BeginBitmapFillView_Impl_","get_matrix",0xe5765e9f,"openfl.display._internal._DrawCommandReader.BeginBitmapFillView_Impl_.get_matrix","openfl/display/_internal/DrawCommandReader.hx",351,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_73397f6f71169552_358_get_repeat,"openfl.display._internal._DrawCommandReader.BeginBitmapFillView_Impl_","get_repeat",0x302abfb9,"openfl.display._internal._DrawCommandReader.BeginBitmapFillView_Impl_.get_repeat","openfl/display/_internal/DrawCommandReader.hx",358,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_73397f6f71169552_365_get_smooth,"openfl.display._internal._DrawCommandReader.BeginBitmapFillView_Impl_","get_smooth",0x3119308c,"openfl.display._internal._DrawCommandReader.BeginBitmapFillView_Impl_.get_smooth","openfl/display/_internal/DrawCommandReader.hx",365,0x29f77eb3)
namespace openfl{
namespace display{
namespace _internal{
namespace _DrawCommandReader{

void BeginBitmapFillView_Impl__obj::__construct() { }

Dynamic BeginBitmapFillView_Impl__obj::__CreateEmpty() { return new BeginBitmapFillView_Impl__obj; }

void *BeginBitmapFillView_Impl__obj::_hx_vtable = 0;

Dynamic BeginBitmapFillView_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BeginBitmapFillView_Impl__obj > _hx_result = new BeginBitmapFillView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BeginBitmapFillView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3876f2eb;
}

 ::openfl::display::_internal::DrawCommandReader BeginBitmapFillView_Impl__obj::_new( ::openfl::display::_internal::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_73397f6f71169552_335__new)
            	HX_STACK_ARG(d,"d")
HXLINE( 335)
HXDLIN( 335)		return d;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BeginBitmapFillView_Impl__obj,_new,return )

 ::openfl::display::BitmapData BeginBitmapFillView_Impl__obj::get_bitmap( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_73397f6f71169552_344_get_bitmap)
HXLINE( 344)
HXDLIN( 344)		return ( ( ::openfl::display::BitmapData)(this1->buffer->o->__get(this1->oPos)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BeginBitmapFillView_Impl__obj,get_bitmap,return )

 ::openfl::geom::Matrix BeginBitmapFillView_Impl__obj::get_matrix( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_73397f6f71169552_351_get_matrix)
HXLINE( 351)
HXDLIN( 351)		return ( ( ::openfl::geom::Matrix)(this1->buffer->o->__get((this1->oPos + 1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BeginBitmapFillView_Impl__obj,get_matrix,return )

bool BeginBitmapFillView_Impl__obj::get_repeat( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_73397f6f71169552_358_get_repeat)
HXLINE( 358)
HXDLIN( 358)		return this1->buffer->b->__get(this1->bPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BeginBitmapFillView_Impl__obj,get_repeat,return )

bool BeginBitmapFillView_Impl__obj::get_smooth( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_73397f6f71169552_365_get_smooth)
HXLINE( 365)
HXDLIN( 365)		return this1->buffer->b->__get((this1->bPos + 1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BeginBitmapFillView_Impl__obj,get_smooth,return )


BeginBitmapFillView_Impl__obj::BeginBitmapFillView_Impl__obj()
{
}

bool BeginBitmapFillView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bitmap") ) { outValue = get_bitmap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_matrix") ) { outValue = get_matrix_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_repeat") ) { outValue = get_repeat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_smooth") ) { outValue = get_smooth_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *BeginBitmapFillView_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *BeginBitmapFillView_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class BeginBitmapFillView_Impl__obj::__mClass;

static ::String BeginBitmapFillView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_bitmap",b8,7f,93,e1),
	HX_("get_matrix",0a,a6,4f,ac),
	HX_("get_repeat",24,07,04,f7),
	HX_("get_smooth",f7,77,f2,f7),
	::String(null())
};

void BeginBitmapFillView_Impl__obj::__register()
{
	BeginBitmapFillView_Impl__obj _hx_dummy;
	BeginBitmapFillView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal._DrawCommandReader.BeginBitmapFillView_Impl_",b9,e5,f6,c6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BeginBitmapFillView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BeginBitmapFillView_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< BeginBitmapFillView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BeginBitmapFillView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BeginBitmapFillView_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
} // end namespace _DrawCommandReader
