// Generated by Haxe 4.3.3
#ifndef INCLUDED_lime_media_openal__ALSource_ALSource_Impl_
#define INCLUDED_lime_media_openal__ALSource_ALSource_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,media,openal,_ALSource,ALSource_Impl_)

namespace lime{
namespace media{
namespace openal{
namespace _ALSource{


class HXCPP_CLASS_ATTRIBUTES ALSource_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ALSource_Impl__obj OBJ_;
		ALSource_Impl__obj();

	public:
		enum { _hx_ClassId = 0x027142d3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.media.openal._ALSource.ALSource_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.media.openal._ALSource.ALSource_Impl_"); }

		inline static ::hx::ObjectPtr< ALSource_Impl__obj > __new() {
			::hx::ObjectPtr< ALSource_Impl__obj > __this = new ALSource_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ALSource_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			ALSource_Impl__obj *__this = (ALSource_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ALSource_Impl__obj), false, "lime.media.openal._ALSource.ALSource_Impl_"));
			*(void **)__this = ALSource_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ALSource_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ALSource_Impl_",46,3d,35,f9); }

		static  ::Dynamic _new( ::Dynamic handle);
		static ::Dynamic _new_dyn();

};

} // end namespace lime
} // end namespace media
} // end namespace openal
} // end namespace _ALSource

#endif /* INCLUDED_lime_media_openal__ALSource_ALSource_Impl_ */ 
