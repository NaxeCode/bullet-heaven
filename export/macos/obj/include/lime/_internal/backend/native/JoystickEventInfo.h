// Generated by Haxe 4.3.3
#ifndef INCLUDED_lime__internal_backend_native_JoystickEventInfo
#define INCLUDED_lime__internal_backend_native_JoystickEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_21cd05885e6e0032_736_new)
HX_DECLARE_CLASS4(lime,_internal,backend,native,JoystickEventInfo)

namespace lime{
namespace _internal{
namespace backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES JoystickEventInfo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef JoystickEventInfo_obj OBJ_;
		JoystickEventInfo_obj();

	public:
		enum { _hx_ClassId = 0x442f8f48 };

		void __construct( ::Dynamic type,::hx::Null< int >  __o_id,::hx::Null< int >  __o_index,::hx::Null< int >  __o_value,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._internal.backend.native.JoystickEventInfo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime._internal.backend.native.JoystickEventInfo"); }

		inline static ::hx::ObjectPtr< JoystickEventInfo_obj > __new( ::Dynamic type,::hx::Null< int >  __o_id,::hx::Null< int >  __o_index,::hx::Null< int >  __o_value,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
			::hx::ObjectPtr< JoystickEventInfo_obj > __this = new JoystickEventInfo_obj();
			__this->__construct(type,__o_id,__o_index,__o_value,__o_x,__o_y);
			return __this;
		}

		inline static ::hx::ObjectPtr< JoystickEventInfo_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic type,::hx::Null< int >  __o_id,::hx::Null< int >  __o_index,::hx::Null< int >  __o_value,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
			JoystickEventInfo_obj *__this = (JoystickEventInfo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(JoystickEventInfo_obj), false, "lime._internal.backend.native.JoystickEventInfo"));
			*(void **)__this = JoystickEventInfo_obj::_hx_vtable;
{
            		int id = __o_id.Default(0);
            		int index = __o_index.Default(0);
            		int value = __o_value.Default(0);
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_21cd05885e6e0032_736_new)
            	HX_STACK_THIS(__this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(index,"index")
            	HX_STACK_ARG(value,"value")
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE( 736)
HXLINE( 737)		( ( ::lime::_internal::backend::native::JoystickEventInfo)(__this) )->type = ( (int)(type) );
HXLINE( 738)		( ( ::lime::_internal::backend::native::JoystickEventInfo)(__this) )->id = id;
HXLINE( 739)		( ( ::lime::_internal::backend::native::JoystickEventInfo)(__this) )->index = index;
HXLINE( 740)		( ( ::lime::_internal::backend::native::JoystickEventInfo)(__this) )->eventValue = value;
HXLINE( 741)		( ( ::lime::_internal::backend::native::JoystickEventInfo)(__this) )->x = x;
HXLINE( 742)		( ( ::lime::_internal::backend::native::JoystickEventInfo)(__this) )->y = y;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~JoystickEventInfo_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("JoystickEventInfo",2c,09,a3,75); }

		int id;
		int index;
		int type;
		int eventValue;
		Float x;
		Float y;
		 ::lime::_internal::backend::native::JoystickEventInfo clone();
		::Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native

#endif /* INCLUDED_lime__internal_backend_native_JoystickEventInfo */ 
