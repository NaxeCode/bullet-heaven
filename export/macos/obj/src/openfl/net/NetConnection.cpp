// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_NetStatusEvent
#include <openfl/events/NetStatusEvent.h>
#endif
#ifndef INCLUDED_openfl_net_NetConnection
#include <openfl/net/NetConnection.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cbeb021ed190252c_325_new,"openfl.net.NetConnection","new",0x5c5dd97e,"openfl.net.NetConnection.new","openfl/net/NetConnection.hx",325,0x3b599834)
HX_LOCAL_STACK_FRAME(_hx_pos_cbeb021ed190252c_529_connect,"openfl.net.NetConnection","connect",0x1fc82c08,"openfl.net.NetConnection.connect","openfl/net/NetConnection.hx",529,0x3b599834)
HX_LOCAL_STACK_FRAME(_hx_pos_cbeb021ed190252c_51_boot,"openfl.net.NetConnection","boot",0x6dd97554,"openfl.net.NetConnection.boot","openfl/net/NetConnection.hx",51,0x3b599834)
HX_LOCAL_STACK_FRAME(_hx_pos_cbeb021ed190252c_54_boot,"openfl.net.NetConnection","boot",0x6dd97554,"openfl.net.NetConnection.boot","openfl/net/NetConnection.hx",54,0x3b599834)
namespace openfl{
namespace net{

void NetConnection_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cbeb021ed190252c_325_new)
            	HX_STACK_THIS(this)
HXLINE( 325)
HXDLIN( 325)		super::__construct(null());
            	}

Dynamic NetConnection_obj::__CreateEmpty() { return new NetConnection_obj; }

void *NetConnection_obj::_hx_vtable = 0;

Dynamic NetConnection_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NetConnection_obj > _hx_result = new NetConnection_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NetConnection_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x4bdf014e;
	}
}

void NetConnection_obj::connect(::String command, ::Dynamic p1, ::Dynamic p2, ::Dynamic p3, ::Dynamic p4, ::Dynamic p5){
            	HX_GC_STACKFRAME(&_hx_pos_cbeb021ed190252c_529_connect)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(command,"command")
            	HX_STACK_ARG(p1,"p1")
            	HX_STACK_ARG(p2,"p2")
            	HX_STACK_ARG(p3,"p3")
            	HX_STACK_ARG(p4,"p4")
            	HX_STACK_ARG(p5,"p5")
HXLINE( 529)
HXLINE( 530)		if (::hx::IsNotNull( command )) {
HXLINE( 532)			HX_STACK_DO_THROW(HX_("Error: Can only connect in \"HTTP streaming\" mode",fe,f3,67,57));
            		}
HXLINE( 535)		this->dispatchEvent( ::openfl::events::NetStatusEvent_obj::__alloc( HX_CTX ,HX_("netStatus",6f,4f,ec,46),false,true, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("code",2d,b1,c4,41),HX_("NetConnection.Connect.Success",4c,91,a7,41)))));
            	}


HX_DEFINE_DYNAMIC_FUNC6(NetConnection_obj,connect,(void))

::String NetConnection_obj::CONNECT_SUCCESS;


::hx::ObjectPtr< NetConnection_obj > NetConnection_obj::__new() {
	::hx::ObjectPtr< NetConnection_obj > __this = new NetConnection_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< NetConnection_obj > NetConnection_obj::__alloc(::hx::Ctx *_hx_ctx) {
	NetConnection_obj *__this = (NetConnection_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NetConnection_obj), true, "openfl.net.NetConnection"));
	*(void **)__this = NetConnection_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NetConnection_obj::NetConnection_obj()
{
}

::hx::Val NetConnection_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"connect") ) { return ::hx::Val( connect_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NetConnection_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo NetConnection_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &NetConnection_obj::CONNECT_SUCCESS,HX_("CONNECT_SUCCESS",ee,3c,d2,12)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NetConnection_obj_sMemberFields[] = {
	HX_("connect",ea,3b,80,15),
	::String(null()) };

static void NetConnection_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NetConnection_obj::CONNECT_SUCCESS,"CONNECT_SUCCESS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NetConnection_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NetConnection_obj::CONNECT_SUCCESS,"CONNECT_SUCCESS");
};

#endif

::hx::Class NetConnection_obj::__mClass;

static ::String NetConnection_obj_sStaticFields[] = {
	HX_("CONNECT_SUCCESS",ee,3c,d2,12),
	::String(null())
};

void NetConnection_obj::__register()
{
	NetConnection_obj _hx_dummy;
	NetConnection_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.net.NetConnection",8c,02,60,24);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NetConnection_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NetConnection_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NetConnection_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NetConnection_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NetConnection_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NetConnection_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NetConnection_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NetConnection_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_cbeb021ed190252c_51_boot)
HXDLIN(  51)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("statics",05,3c,65,36), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("CONNECT_SUCCESS",ee,3c,d2,12), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_cbeb021ed190252c_54_boot)
HXDLIN(  54)		CONNECT_SUCCESS = HX_("NetConnection.Connect.Success",4c,91,a7,41);
            	}
}

} // end namespace openfl
} // end namespace net
