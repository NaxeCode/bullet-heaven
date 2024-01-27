// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsQuadPath
#include <openfl/display/GraphicsQuadPath.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsPath
#include <openfl/display/IGraphicsPath.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7b37310b03d9d57e_65_new,"openfl.display.GraphicsQuadPath","new",0x93697fd3,"openfl.display.GraphicsQuadPath.new","openfl/display/GraphicsQuadPath.hx",65,0x6ee01b3b)
namespace openfl{
namespace display{

void GraphicsQuadPath_obj::__construct( ::openfl::_Vector::FloatVector rects, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector transforms){
            	HX_STACKFRAME(&_hx_pos_7b37310b03d9d57e_65_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rects,"rects")
            	HX_STACK_ARG(indices,"indices")
            	HX_STACK_ARG(transforms,"transforms")
HXLINE(  65)
HXLINE(  66)		this->rects = rects;
HXLINE(  67)		this->indices = indices;
HXLINE(  68)		this->transforms = transforms;
HXLINE(  71)		this->_hx___graphicsDataType = 6;
            	}

Dynamic GraphicsQuadPath_obj::__CreateEmpty() { return new GraphicsQuadPath_obj; }

void *GraphicsQuadPath_obj::_hx_vtable = 0;

Dynamic GraphicsQuadPath_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicsQuadPath_obj > _hx_result = new GraphicsQuadPath_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool GraphicsQuadPath_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3c185489;
}

static ::openfl::display::IGraphicsData_obj _hx_openfl_display_GraphicsQuadPath__hx_openfl_display_IGraphicsData= {
};

static ::openfl::display::IGraphicsPath_obj _hx_openfl_display_GraphicsQuadPath__hx_openfl_display_IGraphicsPath= {
};

void *GraphicsQuadPath_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xc177ee0c: return &_hx_openfl_display_GraphicsQuadPath__hx_openfl_display_IGraphicsData;
		case (int)0xc9667d87: return &_hx_openfl_display_GraphicsQuadPath__hx_openfl_display_IGraphicsPath;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}


::hx::ObjectPtr< GraphicsQuadPath_obj > GraphicsQuadPath_obj::__new( ::openfl::_Vector::FloatVector rects, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector transforms) {
	::hx::ObjectPtr< GraphicsQuadPath_obj > __this = new GraphicsQuadPath_obj();
	__this->__construct(rects,indices,transforms);
	return __this;
}

::hx::ObjectPtr< GraphicsQuadPath_obj > GraphicsQuadPath_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::_Vector::FloatVector rects, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector transforms) {
	GraphicsQuadPath_obj *__this = (GraphicsQuadPath_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicsQuadPath_obj), true, "openfl.display.GraphicsQuadPath"));
	*(void **)__this = GraphicsQuadPath_obj::_hx_vtable;
	__this->__construct(rects,indices,transforms);
	return __this;
}

GraphicsQuadPath_obj::GraphicsQuadPath_obj()
{
}

void GraphicsQuadPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsQuadPath);
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(rects,"rects");
	HX_MARK_MEMBER_NAME(transforms,"transforms");
	HX_MARK_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
	HX_MARK_END_CLASS();
}

void GraphicsQuadPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(rects,"rects");
	HX_VISIT_MEMBER_NAME(transforms,"transforms");
	HX_VISIT_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
}

::hx::Val GraphicsQuadPath_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"rects") ) { return ::hx::Val( rects ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { return ::hx::Val( indices ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"transforms") ) { return ::hx::Val( transforms ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { return ::hx::Val( _hx___graphicsDataType ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GraphicsQuadPath_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"rects") ) { rects=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast<  ::openfl::_Vector::IntVector >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"transforms") ) { transforms=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { _hx___graphicsDataType=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsQuadPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("indices",27,47,54,e3));
	outFields->push(HX_("rects",cf,32,bc,e6));
	outFields->push(HX_("transforms",87,91,34,9b));
	outFields->push(HX_("__graphicsDataType",0f,5d,4d,46));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GraphicsQuadPath_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::IntVector */ ,(int)offsetof(GraphicsQuadPath_obj,indices),HX_("indices",27,47,54,e3)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(GraphicsQuadPath_obj,rects),HX_("rects",cf,32,bc,e6)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(GraphicsQuadPath_obj,transforms),HX_("transforms",87,91,34,9b)},
	{::hx::fsInt,(int)offsetof(GraphicsQuadPath_obj,_hx___graphicsDataType),HX_("__graphicsDataType",0f,5d,4d,46)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GraphicsQuadPath_obj_sStaticStorageInfo = 0;
#endif

static ::String GraphicsQuadPath_obj_sMemberFields[] = {
	HX_("indices",27,47,54,e3),
	HX_("rects",cf,32,bc,e6),
	HX_("transforms",87,91,34,9b),
	HX_("__graphicsDataType",0f,5d,4d,46),
	::String(null()) };

::hx::Class GraphicsQuadPath_obj::__mClass;

void GraphicsQuadPath_obj::__register()
{
	GraphicsQuadPath_obj _hx_dummy;
	GraphicsQuadPath_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.GraphicsQuadPath",61,9a,7a,20);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GraphicsQuadPath_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GraphicsQuadPath_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicsQuadPath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicsQuadPath_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
