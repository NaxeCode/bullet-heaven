// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_Bullet
#include <Bullet.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
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
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
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
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_8_new,"Player","new",0x8d5554f3,"Player.new","Player.hx",8,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_32_setGraphics,"Player","setGraphics",0xd38d9220,"Player.setGraphics","Player.hx",32,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_36_setPhysics,"Player","setPhysics",0x711ee112,"Player.setPhysics","Player.hx",36,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_42_setGun,"Player","setGun",0xda59754b,"Player.setGun","Player.hx",42,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_57_update,"Player","update",0xf1f8df56,"Player.update","Player.hx",57,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_65_movement,"Player","movement",0x91ad8bbc,"Player.movement","Player.hx",65,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_95_gun,"Player","gun",0x8d501313,"Player.gun","Player.hx",95,0xa27fc9dd)

void Player_obj::__construct( ::Dynamic X, ::Dynamic Y){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_8_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(X,"X")
            	HX_STACK_ARG(Y,"Y")
HXLINE(   8)
HXLINE(  92)		this->ticker = 0;
HXLINE(  91)		this->tickerSize = 4;
HXLINE(  17)		this->drag_y = 1200;
HXLINE(  16)		this->drag_x = 1200;
HXLINE(  14)		this->maxVel_y = 500;
HXLINE(  13)		this->maxVel_x = 500;
HXLINE(  11)		this->speed_y = 2500;
HXLINE(  10)		this->speed_x = 2500;
HXLINE(  23)		super::__construct(X,Y,null());
HXLINE(  25)		this->setGraphics();
HXLINE(  26)		this->setPhysics();
HXLINE(  27)		this->setGun();
            	}

Dynamic Player_obj::__CreateEmpty() { return new Player_obj; }

void *Player_obj::_hx_vtable = 0;

Dynamic Player_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Player_obj > _hx_result = new Player_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Player_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x33e526a5) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x33e526a5;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Player_obj::setGraphics(){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_32_setGraphics)
            	HX_STACK_THIS(this)
HXLINE(  32)
HXDLIN(  32)		this->makeGraphic(32,32,-16744448,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,setGraphics,(void))

void Player_obj::setPhysics(){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_36_setPhysics)
            	HX_STACK_THIS(this)
HXLINE(  36)
HXLINE(  37)		{
HXLINE(  37)			 ::flixel::math::FlxBasePoint this1 = this->drag;
HXDLIN(  37)			Float y = ( (Float)(this->drag_y) );
HXDLIN(  37)			this1->set_x(( (Float)(this->drag_x) ));
HXDLIN(  37)			this1->set_y(y);
            		}
HXLINE(  38)		{
HXLINE(  38)			 ::flixel::math::FlxBasePoint this2 = this->maxVelocity;
HXDLIN(  38)			Float y1 = ( (Float)(this->maxVel_y) );
HXDLIN(  38)			this2->set_x(( (Float)(this->maxVel_x) ));
HXDLIN(  38)			this2->set_y(y1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,setPhysics,(void))

void Player_obj::setGun(){
            	HX_GC_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_42_setGun)
            	HX_STACK_THIS(this)
HXLINE(  42)
HXLINE(  43)		HX_VARI( int,bulletSpeed) = 500;
HXLINE(  44)		HX_VARI( int,bulletGroupSize) = 100;
HXLINE(  45)		this->bulletGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,bulletGroupSize);
HXLINE(  47)		{
HXLINE(  47)			int _g = 0;
HXDLIN(  47)			int _g1 = bulletGroupSize;
HXDLIN(  47)			while((_g < _g1)){
HXLINE(  47)				_g = (_g + 1);
HXDLIN(  47)				HX_VARI( int,i) = (_g - 1);
HXLINE(  49)				HX_VARI(  ::Bullet,bullet) =  ::Bullet_obj::__alloc( HX_CTX ,-20,-20);
HXLINE(  50)				bullet->velocity->set_y(( (Float)(-(bulletSpeed)) ));
HXLINE(  51)				bullet->kill();
HXLINE(  52)				this->bulletGroup->add(bullet).StaticCast<  ::Bullet >();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,setGun,(void))

void Player_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_57_update)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(elapsed,"elapsed")
HXLINE(  57)
HXLINE(  58)		this->super::update(elapsed);
HXLINE(  60)		this->movement();
HXLINE(  61)		this->gun();
            	}


void Player_obj::movement(){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_65_movement)
            	HX_STACK_THIS(this)
HXLINE(  65)
HXLINE(  66)		{
HXLINE(  66)			 ::flixel::math::FlxBasePoint this1 = this->acceleration;
HXDLIN(  66)			this1->set_x(( (Float)(0) ));
HXDLIN(  66)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  68)		HX_VAR( bool,LEFT);
HXDLIN(  68)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  68)		if (!(_this->keyManager->checkStatusUnsafe(65,_this->status))) {
HXLINE(  68)			 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  68)			LEFT = _this1->keyManager->checkStatusUnsafe(37,_this1->status);
            		}
            		else {
HXLINE(  68)			LEFT = true;
            		}
HXLINE(  69)		HX_VAR( bool,RIGHT);
HXDLIN(  69)		 ::flixel::input::keyboard::FlxKeyList _this2 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  69)		if (!(_this2->keyManager->checkStatusUnsafe(68,_this2->status))) {
HXLINE(  69)			 ::flixel::input::keyboard::FlxKeyList _this3 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  69)			RIGHT = _this3->keyManager->checkStatusUnsafe(39,_this3->status);
            		}
            		else {
HXLINE(  69)			RIGHT = true;
            		}
HXLINE(  70)		HX_VAR( bool,UP);
HXDLIN(  70)		 ::flixel::input::keyboard::FlxKeyList _this4 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  70)		if (!(_this4->keyManager->checkStatusUnsafe(87,_this4->status))) {
HXLINE(  70)			 ::flixel::input::keyboard::FlxKeyList _this5 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  70)			UP = _this5->keyManager->checkStatusUnsafe(38,_this5->status);
            		}
            		else {
HXLINE(  70)			UP = true;
            		}
HXLINE(  71)		HX_VAR( bool,DOWN);
HXDLIN(  71)		 ::flixel::input::keyboard::FlxKeyList _this6 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  71)		if (!(_this6->keyManager->checkStatusUnsafe(83,_this6->status))) {
HXLINE(  71)			 ::flixel::input::keyboard::FlxKeyList _this7 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  71)			DOWN = _this7->keyManager->checkStatusUnsafe(40,_this7->status);
            		}
            		else {
HXLINE(  71)			DOWN = true;
            		}
HXLINE(  73)		if (LEFT) {
HXLINE(  75)			this->acceleration->set_x(( (Float)(-(this->speed_x)) ));
            		}
HXLINE(  77)		if (RIGHT) {
HXLINE(  79)			this->acceleration->set_x(( (Float)(this->speed_x) ));
            		}
HXLINE(  81)		if (UP) {
HXLINE(  83)			this->acceleration->set_y(( (Float)(-(this->speed_y)) ));
            		}
HXLINE(  85)		if (DOWN) {
HXLINE(  87)			this->acceleration->set_y(( (Float)(this->speed_y) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,movement,(void))

void Player_obj::gun(){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_95_gun)
            	HX_STACK_THIS(this)
HXLINE(  95)
HXLINE(  96)		{
HXLINE(  96)			 ::flixel::_hx_system::frontEnds::WatchFrontEnd _this = ::flixel::FlxG_obj::watch;
HXDLIN(  96)			 ::flixel::_hx_system::debug::watch::Watch _hx_tmp = ::flixel::FlxG_obj::game->debugger->watch;
HXDLIN(  96)			_hx_tmp->add(HX_("tickerGun",96,1b,1a,5b),::flixel::_hx_system::debug::watch::WatchEntryData_obj::QUICK(::Std_obj::string(this->ticker)));
            		}
HXLINE(  97)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  97)		HX_VARI( bool,GUN) = _this1->keyManager->checkStatusUnsafe(32,_this1->status);
HXLINE(  98)		bool _hx_tmp1;
HXDLIN(  98)		if (GUN) {
HXLINE(  98)			_hx_tmp1 = (this->ticker == this->tickerSize);
            		}
            		else {
HXLINE(  98)			_hx_tmp1 = false;
            		}
HXDLIN(  98)		if (_hx_tmp1) {
HXLINE( 100)			HX_VARI(  ::Bullet,bullet) = this->bulletGroup->recycle(null(),null(),null(),null()).StaticCast<  ::Bullet >();
HXLINE( 101)			bullet->setPosition(this->x,this->y);
            		}
HXLINE( 104)		this->ticker--;
HXLINE( 106)		if ((this->ticker <= 0)) {
HXLINE( 108)			this->ticker = this->tickerSize;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,gun,(void))


::hx::ObjectPtr< Player_obj > Player_obj::__new( ::Dynamic X, ::Dynamic Y) {
	::hx::ObjectPtr< Player_obj > __this = new Player_obj();
	__this->__construct(X,Y);
	return __this;
}

::hx::ObjectPtr< Player_obj > Player_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic X, ::Dynamic Y) {
	Player_obj *__this = (Player_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Player_obj), true, "Player"));
	*(void **)__this = Player_obj::_hx_vtable;
	__this->__construct(X,Y);
	return __this;
}

Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(speed_x,"speed_x");
	HX_MARK_MEMBER_NAME(speed_y,"speed_y");
	HX_MARK_MEMBER_NAME(maxVel_x,"maxVel_x");
	HX_MARK_MEMBER_NAME(maxVel_y,"maxVel_y");
	HX_MARK_MEMBER_NAME(drag_x,"drag_x");
	HX_MARK_MEMBER_NAME(drag_y,"drag_y");
	HX_MARK_MEMBER_NAME(bulletGroup,"bulletGroup");
	HX_MARK_MEMBER_NAME(tickerSize,"tickerSize");
	HX_MARK_MEMBER_NAME(ticker,"ticker");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(speed_x,"speed_x");
	HX_VISIT_MEMBER_NAME(speed_y,"speed_y");
	HX_VISIT_MEMBER_NAME(maxVel_x,"maxVel_x");
	HX_VISIT_MEMBER_NAME(maxVel_y,"maxVel_y");
	HX_VISIT_MEMBER_NAME(drag_x,"drag_x");
	HX_VISIT_MEMBER_NAME(drag_y,"drag_y");
	HX_VISIT_MEMBER_NAME(bulletGroup,"bulletGroup");
	HX_VISIT_MEMBER_NAME(tickerSize,"tickerSize");
	HX_VISIT_MEMBER_NAME(ticker,"ticker");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Player_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"gun") ) { return ::hx::Val( gun_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"drag_x") ) { return ::hx::Val( drag_x ); }
		if (HX_FIELD_EQ(inName,"drag_y") ) { return ::hx::Val( drag_y ); }
		if (HX_FIELD_EQ(inName,"setGun") ) { return ::hx::Val( setGun_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"ticker") ) { return ::hx::Val( ticker ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"speed_x") ) { return ::hx::Val( speed_x ); }
		if (HX_FIELD_EQ(inName,"speed_y") ) { return ::hx::Val( speed_y ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxVel_x") ) { return ::hx::Val( maxVel_x ); }
		if (HX_FIELD_EQ(inName,"maxVel_y") ) { return ::hx::Val( maxVel_y ); }
		if (HX_FIELD_EQ(inName,"movement") ) { return ::hx::Val( movement_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setPhysics") ) { return ::hx::Val( setPhysics_dyn() ); }
		if (HX_FIELD_EQ(inName,"tickerSize") ) { return ::hx::Val( tickerSize ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bulletGroup") ) { return ::hx::Val( bulletGroup ); }
		if (HX_FIELD_EQ(inName,"setGraphics") ) { return ::hx::Val( setGraphics_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Player_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"drag_x") ) { drag_x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drag_y") ) { drag_y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ticker") ) { ticker=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"speed_x") ) { speed_x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed_y") ) { speed_y=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxVel_x") ) { maxVel_x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxVel_y") ) { maxVel_y=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tickerSize") ) { tickerSize=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bulletGroup") ) { bulletGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("speed_x",80,1a,a4,e0));
	outFields->push(HX_("speed_y",81,1a,a4,e0));
	outFields->push(HX_("maxVel_x",92,99,7a,de));
	outFields->push(HX_("maxVel_y",93,99,7a,de));
	outFields->push(HX_("drag_x",2d,64,ca,df));
	outFields->push(HX_("drag_y",2e,64,ca,df));
	outFields->push(HX_("bulletGroup",9d,21,ce,4c));
	outFields->push(HX_("tickerSize",eb,86,a3,63));
	outFields->push(HX_("ticker",0a,6d,3a,18));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Player_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Player_obj,speed_x),HX_("speed_x",80,1a,a4,e0)},
	{::hx::fsInt,(int)offsetof(Player_obj,speed_y),HX_("speed_y",81,1a,a4,e0)},
	{::hx::fsInt,(int)offsetof(Player_obj,maxVel_x),HX_("maxVel_x",92,99,7a,de)},
	{::hx::fsInt,(int)offsetof(Player_obj,maxVel_y),HX_("maxVel_y",93,99,7a,de)},
	{::hx::fsInt,(int)offsetof(Player_obj,drag_x),HX_("drag_x",2d,64,ca,df)},
	{::hx::fsInt,(int)offsetof(Player_obj,drag_y),HX_("drag_y",2e,64,ca,df)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(Player_obj,bulletGroup),HX_("bulletGroup",9d,21,ce,4c)},
	{::hx::fsInt,(int)offsetof(Player_obj,tickerSize),HX_("tickerSize",eb,86,a3,63)},
	{::hx::fsInt,(int)offsetof(Player_obj,ticker),HX_("ticker",0a,6d,3a,18)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Player_obj_sStaticStorageInfo = 0;
#endif

static ::String Player_obj_sMemberFields[] = {
	HX_("speed_x",80,1a,a4,e0),
	HX_("speed_y",81,1a,a4,e0),
	HX_("maxVel_x",92,99,7a,de),
	HX_("maxVel_y",93,99,7a,de),
	HX_("drag_x",2d,64,ca,df),
	HX_("drag_y",2e,64,ca,df),
	HX_("bulletGroup",9d,21,ce,4c),
	HX_("setGraphics",8d,c2,c8,42),
	HX_("setPhysics",45,5d,30,11),
	HX_("setGun",fe,1b,66,6f),
	HX_("update",09,86,05,87),
	HX_("movement",2f,85,37,00),
	HX_("tickerSize",eb,86,a3,63),
	HX_("ticker",0a,6d,3a,18),
	HX_("gun",80,8e,4e,00),
	::String(null()) };

::hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	Player_obj _hx_dummy;
	Player_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Player",81,5f,4d,6c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Player_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Player_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Player_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Player_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
