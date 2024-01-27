// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
namespace lime{
namespace graphics{

::lime::graphics::ImageChannel ImageChannel_obj::ALPHA;

::lime::graphics::ImageChannel ImageChannel_obj::BLUE;

::lime::graphics::ImageChannel ImageChannel_obj::GREEN;

::lime::graphics::ImageChannel ImageChannel_obj::RED;

bool ImageChannel_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ALPHA",3e,df,84,9f)) { outValue = ImageChannel_obj::ALPHA; return true; }
	if (inName==HX_("BLUE",9a,0a,da,2b)) { outValue = ImageChannel_obj::BLUE; return true; }
	if (inName==HX_("GREEN",a3,46,db,17)) { outValue = ImageChannel_obj::GREEN; return true; }
	if (inName==HX_("RED",31,75,3e,00)) { outValue = ImageChannel_obj::RED; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ImageChannel_obj)

int ImageChannel_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ALPHA",3e,df,84,9f)) return 3;
	if (inName==HX_("BLUE",9a,0a,da,2b)) return 2;
	if (inName==HX_("GREEN",a3,46,db,17)) return 1;
	if (inName==HX_("RED",31,75,3e,00)) return 0;
	return super::__FindIndex(inName);
}

int ImageChannel_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ALPHA",3e,df,84,9f)) return 0;
	if (inName==HX_("BLUE",9a,0a,da,2b)) return 0;
	if (inName==HX_("GREEN",a3,46,db,17)) return 0;
	if (inName==HX_("RED",31,75,3e,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ImageChannel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ALPHA",3e,df,84,9f)) return ALPHA;
	if (inName==HX_("BLUE",9a,0a,da,2b)) return BLUE;
	if (inName==HX_("GREEN",a3,46,db,17)) return GREEN;
	if (inName==HX_("RED",31,75,3e,00)) return RED;
	return super::__Field(inName,inCallProp);
}

static ::String ImageChannel_obj_sStaticFields[] = {
	HX_("RED",31,75,3e,00),
	HX_("GREEN",a3,46,db,17),
	HX_("BLUE",9a,0a,da,2b),
	HX_("ALPHA",3e,df,84,9f),
	::String(null())
};

::hx::Class ImageChannel_obj::__mClass;

Dynamic __Create_ImageChannel_obj() { return new ImageChannel_obj; }

void ImageChannel_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("lime.graphics.ImageChannel",32,a4,e9,ce), ::hx::TCanCast< ImageChannel_obj >,ImageChannel_obj_sStaticFields,0,
	&__Create_ImageChannel_obj, &__Create,
	&super::__SGetClass(), &CreateImageChannel_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ImageChannel_obj::__GetStatic;
}

void ImageChannel_obj::__boot()
{
ALPHA = ::hx::CreateConstEnum< ImageChannel_obj >(HX_("ALPHA",3e,df,84,9f),3);
BLUE = ::hx::CreateConstEnum< ImageChannel_obj >(HX_("BLUE",9a,0a,da,2b),2);
GREEN = ::hx::CreateConstEnum< ImageChannel_obj >(HX_("GREEN",a3,46,db,17),1);
RED = ::hx::CreateConstEnum< ImageChannel_obj >(HX_("RED",31,75,3e,00),0);
}


} // end namespace lime
} // end namespace graphics
