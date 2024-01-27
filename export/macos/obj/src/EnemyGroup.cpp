// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_Enemy
#include <Enemy.h>
#endif
#ifndef INCLUDED_EnemyGroup
#include <EnemyGroup.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_WatchFrontEnd
#include <flixel/system/frontEnds/WatchFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3e959f85a4b1e458_6_new,"EnemyGroup","new",0x88713869,"EnemyGroup.new","EnemyGroup.hx",6,0xe3e98727)
HX_LOCAL_STACK_FRAME(_hx_pos_3e959f85a4b1e458_20_addEnemyPool,"EnemyGroup","addEnemyPool",0xb96373ba,"EnemyGroup.addEnemyPool","EnemyGroup.hx",20,0xe3e98727)
HX_LOCAL_STACK_FRAME(_hx_pos_3e959f85a4b1e458_29_update,"EnemyGroup","update",0xf32c09a0,"EnemyGroup.update","EnemyGroup.hx",29,0xe3e98727)
HX_LOCAL_STACK_FRAME(_hx_pos_3e959f85a4b1e458_38_enemyGun,"EnemyGroup","enemyGun",0x8989a86f,"EnemyGroup.enemyGun","EnemyGroup.hx",38,0xe3e98727)

void EnemyGroup_obj::__construct( ::Dynamic __o_max){
            		 ::Dynamic max = __o_max;
            		if (::hx::IsNull(__o_max)) max = 30;
            	HX_STACKFRAME(&_hx_pos_3e959f85a4b1e458_6_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(max,"max")
HXLINE(   6)
HXLINE(  35)		this->ticker = 0;
HXLINE(  34)		this->tickerSize = 0;
HXLINE(  12)		super::__construct(max);
HXLINE(  13)		this->maxEnemies = ( (int)(max) );
HXLINE(  15)		this->addEnemyPool();
            	}

Dynamic EnemyGroup_obj::__CreateEmpty() { return new EnemyGroup_obj; }

void *EnemyGroup_obj::_hx_vtable = 0;

Dynamic EnemyGroup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EnemyGroup_obj > _hx_result = new EnemyGroup_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool EnemyGroup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x636bf2b7) {
		if (inClassId<=(int)0x62817b24) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
		} else {
			return inClassId==(int)0x636bf2b7;
		}
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void EnemyGroup_obj::addEnemyPool(){
            	HX_GC_STACKFRAME(&_hx_pos_3e959f85a4b1e458_20_addEnemyPool)
            	HX_STACK_THIS(this)
HXLINE(  20)
HXDLIN(  20)		int _g = 0;
HXDLIN(  20)		int _g1 = this->maxEnemies;
HXDLIN(  20)		while((_g < _g1)){
HXDLIN(  20)			_g = (_g + 1);
HXDLIN(  20)			HX_VARI( int,i) = (_g - 1);
HXLINE(  22)			HX_VARI(  ::Enemy,enemy) =  ::Enemy_obj::__alloc( HX_CTX );
HXLINE(  23)			enemy->kill();
HXLINE(  24)			this->add(enemy);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(EnemyGroup_obj,addEnemyPool,(void))

void EnemyGroup_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_3e959f85a4b1e458_29_update)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(elapsed,"elapsed")
HXLINE(  29)
HXLINE(  30)		this->super::update(elapsed);
HXLINE(  31)		this->enemyGun();
            	}


void EnemyGroup_obj::enemyGun(){
            	HX_STACKFRAME(&_hx_pos_3e959f85a4b1e458_38_enemyGun)
            	HX_STACK_THIS(this)
HXLINE(  38)
HXLINE(  39)		{
HXLINE(  39)			 ::flixel::_hx_system::frontEnds::WatchFrontEnd _this = ::flixel::FlxG_obj::watch;
HXDLIN(  39)			 ::flixel::_hx_system::debug::watch::Watch _hx_tmp = ::flixel::FlxG_obj::game->debugger->watch;
HXDLIN(  39)			_hx_tmp->add(HX_("tickerEnemy",de,90,14,bf),::flixel::_hx_system::debug::watch::WatchEntryData_obj::QUICK(::Std_obj::string(this->ticker)));
            		}
HXLINE(  40)		if ((this->ticker == 0)) {
HXLINE(  42)			HX_VARI(  ::Enemy,enemy) = ( ( ::Enemy)(this->recycle(null(),null(),null(),null())) );
HXLINE(  43)			int _hx_tmp1 = ::flixel::FlxG_obj::random->_hx_int(100,500,null());
HXDLIN(  43)			enemy->setPosition(_hx_tmp1,::flixel::FlxG_obj::random->_hx_int(50,85,null()));
HXLINE(  45)			this->ticker = this->tickerSize;
            		}
            		else {
HXLINE(  49)			this->ticker--;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(EnemyGroup_obj,enemyGun,(void))


::hx::ObjectPtr< EnemyGroup_obj > EnemyGroup_obj::__new( ::Dynamic __o_max) {
	::hx::ObjectPtr< EnemyGroup_obj > __this = new EnemyGroup_obj();
	__this->__construct(__o_max);
	return __this;
}

::hx::ObjectPtr< EnemyGroup_obj > EnemyGroup_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_max) {
	EnemyGroup_obj *__this = (EnemyGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EnemyGroup_obj), true, "EnemyGroup"));
	*(void **)__this = EnemyGroup_obj::_hx_vtable;
	__this->__construct(__o_max);
	return __this;
}

EnemyGroup_obj::EnemyGroup_obj()
{
}

::hx::Val EnemyGroup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"ticker") ) { return ::hx::Val( ticker ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"enemyGun") ) { return ::hx::Val( enemyGun_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxEnemies") ) { return ::hx::Val( maxEnemies ); }
		if (HX_FIELD_EQ(inName,"tickerSize") ) { return ::hx::Val( tickerSize ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addEnemyPool") ) { return ::hx::Val( addEnemyPool_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EnemyGroup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"ticker") ) { ticker=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxEnemies") ) { maxEnemies=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tickerSize") ) { tickerSize=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EnemyGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("maxEnemies",62,e2,32,3d));
	outFields->push(HX_("tickerSize",eb,86,a3,63));
	outFields->push(HX_("ticker",0a,6d,3a,18));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EnemyGroup_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(EnemyGroup_obj,maxEnemies),HX_("maxEnemies",62,e2,32,3d)},
	{::hx::fsInt,(int)offsetof(EnemyGroup_obj,tickerSize),HX_("tickerSize",eb,86,a3,63)},
	{::hx::fsInt,(int)offsetof(EnemyGroup_obj,ticker),HX_("ticker",0a,6d,3a,18)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EnemyGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String EnemyGroup_obj_sMemberFields[] = {
	HX_("maxEnemies",62,e2,32,3d),
	HX_("addEnemyPool",e3,a4,cf,a9),
	HX_("update",09,86,05,87),
	HX_("tickerSize",eb,86,a3,63),
	HX_("ticker",0a,6d,3a,18),
	HX_("enemyGun",18,d1,09,e4),
	::String(null()) };

::hx::Class EnemyGroup_obj::__mClass;

void EnemyGroup_obj::__register()
{
	EnemyGroup_obj _hx_dummy;
	EnemyGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("EnemyGroup",f7,cf,a8,4b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EnemyGroup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EnemyGroup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EnemyGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EnemyGroup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
