// Generated by Haxe 4.3.3
#ifndef INCLUDED_openfl_system_SecurityDomain
#define INCLUDED_openfl_system_SecurityDomain

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_708c5fba9d37bf54_23_new)
HX_DECLARE_CLASS2(openfl,_hx_system,SecurityDomain)

namespace openfl{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES SecurityDomain_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SecurityDomain_obj OBJ_;
		SecurityDomain_obj();

	public:
		enum { _hx_ClassId = 0x46406503 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.system.SecurityDomain")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.system.SecurityDomain"); }

		inline static ::hx::ObjectPtr< SecurityDomain_obj > __new() {
			::hx::ObjectPtr< SecurityDomain_obj > __this = new SecurityDomain_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SecurityDomain_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SecurityDomain_obj *__this = (SecurityDomain_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SecurityDomain_obj), false, "openfl.system.SecurityDomain"));
			*(void **)__this = SecurityDomain_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_708c5fba9d37bf54_23_new)
            	HX_STACK_THIS(__this)
HXLINE(  23)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SecurityDomain_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SecurityDomain",44,64,95,10); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::openfl::_hx_system::SecurityDomain currentDomain;
};

} // end namespace openfl
} // end namespace system

#endif /* INCLUDED_openfl_system_SecurityDomain */ 
