// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_NativeWindowDisplayStateEvent
#include <openfl/events/NativeWindowDisplayStateEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ce7954d4ba23c2d4_74_new,"openfl.events.NativeWindowDisplayStateEvent","new",0x1434b71f,"openfl.events.NativeWindowDisplayStateEvent.new","openfl/events/NativeWindowDisplayStateEvent.hx",74,0xef75c351)
HX_LOCAL_STACK_FRAME(_hx_pos_ce7954d4ba23c2d4_81_clone,"openfl.events.NativeWindowDisplayStateEvent","clone",0xc35a67dc,"openfl.events.NativeWindowDisplayStateEvent.clone","openfl/events/NativeWindowDisplayStateEvent.hx",81,0xef75c351)
HX_LOCAL_STACK_FRAME(_hx_pos_ce7954d4ba23c2d4_92_toString,"openfl.events.NativeWindowDisplayStateEvent","toString",0x8bb6158d,"openfl.events.NativeWindowDisplayStateEvent.toString","openfl/events/NativeWindowDisplayStateEvent.hx",92,0xef75c351)
static const ::String _hx_array_data_7a6d3bad_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("beforeDisplayState",8e,2f,55,39),HX_("afterDisplayState",ab,b8,27,b4),
};
HX_LOCAL_STACK_FRAME(_hx_pos_ce7954d4ba23c2d4_29_boot,"openfl.events.NativeWindowDisplayStateEvent","boot",0x92048493,"openfl.events.NativeWindowDisplayStateEvent.boot","openfl/events/NativeWindowDisplayStateEvent.hx",29,0xef75c351)
HX_LOCAL_STACK_FRAME(_hx_pos_ce7954d4ba23c2d4_45_boot,"openfl.events.NativeWindowDisplayStateEvent","boot",0x92048493,"openfl.events.NativeWindowDisplayStateEvent.boot","openfl/events/NativeWindowDisplayStateEvent.hx",45,0xef75c351)
namespace openfl{
namespace events{

void NativeWindowDisplayStateEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::Dynamic beforeDisplayState, ::Dynamic afterDisplayState){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_ce7954d4ba23c2d4_74_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(bubbles,"bubbles")
            	HX_STACK_ARG(cancelable,"cancelable")
            	HX_STACK_ARG(beforeDisplayState,"beforeDisplayState")
            	HX_STACK_ARG(afterDisplayState,"afterDisplayState")
HXLINE(  74)
HXLINE(  75)		super::__construct(type,bubbles,cancelable);
HXLINE(  76)		this->beforeDisplayState = beforeDisplayState;
HXLINE(  77)		this->afterDisplayState = afterDisplayState;
            	}

Dynamic NativeWindowDisplayStateEvent_obj::__CreateEmpty() { return new NativeWindowDisplayStateEvent_obj; }

void *NativeWindowDisplayStateEvent_obj::_hx_vtable = 0;

Dynamic NativeWindowDisplayStateEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NativeWindowDisplayStateEvent_obj > _hx_result = new NativeWindowDisplayStateEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool NativeWindowDisplayStateEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x7990795b;
	}
}

 ::openfl::events::Event NativeWindowDisplayStateEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_ce7954d4ba23c2d4_81_clone)
            	HX_STACK_THIS(this)
HXLINE(  81)
HXLINE(  82)		HX_VARI(  ::openfl::events::NativeWindowDisplayStateEvent,event) =  ::openfl::events::NativeWindowDisplayStateEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->beforeDisplayState,this->afterDisplayState);
HXLINE(  84)		event->target = this->target;
HXLINE(  85)		event->currentTarget = this->currentTarget;
HXLINE(  86)		event->eventPhase = this->eventPhase;
HXLINE(  87)		return event;
            	}


::String NativeWindowDisplayStateEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_ce7954d4ba23c2d4_92_toString)
            	HX_STACK_THIS(this)
HXLINE(  92)
HXDLIN(  92)		return this->_hx___formatToString(HX_("NativeWindowDisplayStateEvent",24,b8,6c,5a),::Array_obj< ::String >::fromData( _hx_array_data_7a6d3bad_3,5));
            	}


::String NativeWindowDisplayStateEvent_obj::DISPLAY_STATE_CHANGING;

::String NativeWindowDisplayStateEvent_obj::DISPLAY_STATE_CHANGE;


::hx::ObjectPtr< NativeWindowDisplayStateEvent_obj > NativeWindowDisplayStateEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::Dynamic beforeDisplayState, ::Dynamic afterDisplayState) {
	::hx::ObjectPtr< NativeWindowDisplayStateEvent_obj > __this = new NativeWindowDisplayStateEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,beforeDisplayState,afterDisplayState);
	return __this;
}

::hx::ObjectPtr< NativeWindowDisplayStateEvent_obj > NativeWindowDisplayStateEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::Dynamic beforeDisplayState, ::Dynamic afterDisplayState) {
	NativeWindowDisplayStateEvent_obj *__this = (NativeWindowDisplayStateEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NativeWindowDisplayStateEvent_obj), true, "openfl.events.NativeWindowDisplayStateEvent"));
	*(void **)__this = NativeWindowDisplayStateEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,beforeDisplayState,afterDisplayState);
	return __this;
}

NativeWindowDisplayStateEvent_obj::NativeWindowDisplayStateEvent_obj()
{
}

void NativeWindowDisplayStateEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeWindowDisplayStateEvent);
	HX_MARK_MEMBER_NAME(beforeDisplayState,"beforeDisplayState");
	HX_MARK_MEMBER_NAME(afterDisplayState,"afterDisplayState");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NativeWindowDisplayStateEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(beforeDisplayState,"beforeDisplayState");
	HX_VISIT_MEMBER_NAME(afterDisplayState,"afterDisplayState");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NativeWindowDisplayStateEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"afterDisplayState") ) { return ::hx::Val( afterDisplayState ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"beforeDisplayState") ) { return ::hx::Val( beforeDisplayState ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NativeWindowDisplayStateEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"afterDisplayState") ) { afterDisplayState=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"beforeDisplayState") ) { beforeDisplayState=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NativeWindowDisplayStateEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("beforeDisplayState",8e,2f,55,39));
	outFields->push(HX_("afterDisplayState",ab,b8,27,b4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NativeWindowDisplayStateEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NativeWindowDisplayStateEvent_obj,beforeDisplayState),HX_("beforeDisplayState",8e,2f,55,39)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NativeWindowDisplayStateEvent_obj,afterDisplayState),HX_("afterDisplayState",ab,b8,27,b4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NativeWindowDisplayStateEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &NativeWindowDisplayStateEvent_obj::DISPLAY_STATE_CHANGING,HX_("DISPLAY_STATE_CHANGING",b8,ca,85,2b)},
	{::hx::fsString,(void *) &NativeWindowDisplayStateEvent_obj::DISPLAY_STATE_CHANGE,HX_("DISPLAY_STATE_CHANGE",bb,98,1e,f4)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NativeWindowDisplayStateEvent_obj_sMemberFields[] = {
	HX_("beforeDisplayState",8e,2f,55,39),
	HX_("afterDisplayState",ab,b8,27,b4),
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

static void NativeWindowDisplayStateEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeWindowDisplayStateEvent_obj::DISPLAY_STATE_CHANGING,"DISPLAY_STATE_CHANGING");
	HX_MARK_MEMBER_NAME(NativeWindowDisplayStateEvent_obj::DISPLAY_STATE_CHANGE,"DISPLAY_STATE_CHANGE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NativeWindowDisplayStateEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeWindowDisplayStateEvent_obj::DISPLAY_STATE_CHANGING,"DISPLAY_STATE_CHANGING");
	HX_VISIT_MEMBER_NAME(NativeWindowDisplayStateEvent_obj::DISPLAY_STATE_CHANGE,"DISPLAY_STATE_CHANGE");
};

#endif

::hx::Class NativeWindowDisplayStateEvent_obj::__mClass;

static ::String NativeWindowDisplayStateEvent_obj_sStaticFields[] = {
	HX_("DISPLAY_STATE_CHANGING",b8,ca,85,2b),
	HX_("DISPLAY_STATE_CHANGE",bb,98,1e,f4),
	::String(null())
};

void NativeWindowDisplayStateEvent_obj::__register()
{
	NativeWindowDisplayStateEvent_obj _hx_dummy;
	NativeWindowDisplayStateEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.NativeWindowDisplayStateEvent",ad,3b,6d,7a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NativeWindowDisplayStateEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NativeWindowDisplayStateEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NativeWindowDisplayStateEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NativeWindowDisplayStateEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NativeWindowDisplayStateEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NativeWindowDisplayStateEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NativeWindowDisplayStateEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NativeWindowDisplayStateEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ce7954d4ba23c2d4_29_boot)
HXDLIN(  29)		DISPLAY_STATE_CHANGING = HX_("displayStateChanging",3c,c6,3f,f6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_ce7954d4ba23c2d4_45_boot)
HXDLIN(  45)		DISPLAY_STATE_CHANGE = HX_("displayStateChange",3f,cf,7a,46);
            	}
}

} // end namespace openfl
} // end namespace events
