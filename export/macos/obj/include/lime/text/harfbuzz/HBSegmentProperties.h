// Generated by Haxe 4.3.3
#ifndef INCLUDED_lime_text_harfbuzz_HBSegmentProperties
#define INCLUDED_lime_text_harfbuzz_HBSegmentProperties

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_cfdc9bdb1c536a26_6_new)
HX_DECLARE_CLASS3(lime,text,harfbuzz,HBSegmentProperties)

namespace lime{
namespace text{
namespace harfbuzz{


class HXCPP_CLASS_ATTRIBUTES HBSegmentProperties_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HBSegmentProperties_obj OBJ_;
		HBSegmentProperties_obj();

	public:
		enum { _hx_ClassId = 0x7e7caa2a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.text.harfbuzz.HBSegmentProperties")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.text.harfbuzz.HBSegmentProperties"); }

		inline static ::hx::ObjectPtr< HBSegmentProperties_obj > __new() {
			::hx::ObjectPtr< HBSegmentProperties_obj > __this = new HBSegmentProperties_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< HBSegmentProperties_obj > __alloc(::hx::Ctx *_hx_ctx) {
			HBSegmentProperties_obj *__this = (HBSegmentProperties_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HBSegmentProperties_obj), false, "lime.text.harfbuzz.HBSegmentProperties"));
			*(void **)__this = HBSegmentProperties_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_cfdc9bdb1c536a26_6_new)
            	HX_STACK_THIS(__this)
HXLINE(   6)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HBSegmentProperties_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HBSegmentProperties",2c,95,43,8b); }

};

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz

#endif /* INCLUDED_lime_text_harfbuzz_HBSegmentProperties */ 
