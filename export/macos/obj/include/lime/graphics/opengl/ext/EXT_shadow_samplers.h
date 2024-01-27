// Generated by Haxe 4.3.3
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_shadow_samplers
#define INCLUDED_lime_graphics_opengl_ext_EXT_shadow_samplers

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_21ea11ad88c3ea67_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_shadow_samplers)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_shadow_samplers_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EXT_shadow_samplers_obj OBJ_;
		EXT_shadow_samplers_obj();

	public:
		enum { _hx_ClassId = 0x47639066 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_shadow_samplers")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_shadow_samplers"); }

		inline static ::hx::ObjectPtr< EXT_shadow_samplers_obj > __new() {
			::hx::ObjectPtr< EXT_shadow_samplers_obj > __this = new EXT_shadow_samplers_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EXT_shadow_samplers_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EXT_shadow_samplers_obj *__this = (EXT_shadow_samplers_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EXT_shadow_samplers_obj), false, "lime.graphics.opengl.ext.EXT_shadow_samplers"));
			*(void **)__this = EXT_shadow_samplers_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_21ea11ad88c3ea67_4_new)
            	HX_STACK_THIS(__this)
HXLINE(   4)
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::EXT_shadow_samplers)(__this) )->SAMPLER_2D_SHADOW_EXT = 35682;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::EXT_shadow_samplers)(__this) )->COMPARE_REF_TO_TEXTURE_EXT = 34894;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::EXT_shadow_samplers)(__this) )->TEXTURE_COMPARE_FUNC_EXT = 34893;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::EXT_shadow_samplers)(__this) )->TEXTURE_COMPARE_MODE_EXT = 34892;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EXT_shadow_samplers_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EXT_shadow_samplers",ec,92,50,09); }

		int TEXTURE_COMPARE_MODE_EXT;
		int TEXTURE_COMPARE_FUNC_EXT;
		int COMPARE_REF_TO_TEXTURE_EXT;
		int SAMPLER_2D_SHADOW_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_shadow_samplers */ 
