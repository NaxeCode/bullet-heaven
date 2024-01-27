// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
#ifndef INCLUDED_openfl_display3D__internal_AGALConverter
#include <openfl/display3D/_internal/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_ProgramType
#include <openfl/display3D/_internal/_AGALConverter/ProgramType.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_SourceRegister
#include <openfl/display3D/_internal/_AGALConverter/SourceRegister.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6326831c4b7b616c_962_new,"openfl.display3D._internal._AGALConverter.SourceRegister","new",0xa0d15d23,"openfl.display3D._internal._AGALConverter.SourceRegister.new","openfl/display3D/_internal/AGALConverter.hx",962,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_6326831c4b7b616c_980_toGLSL,"openfl.display3D._internal._AGALConverter.SourceRegister","toGLSL",0x906ee816,"openfl.display3D._internal._AGALConverter.SourceRegister.toGLSL","openfl/display3D/_internal/AGALConverter.hx",980,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_6326831c4b7b616c_965_parse,"openfl.display3D._internal._AGALConverter.SourceRegister","parse",0xa1e213b6,"openfl.display3D._internal._AGALConverter.SourceRegister.parse","openfl/display3D/_internal/AGALConverter.hx",965,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_6326831c4b7b616c_950_boot,"openfl.display3D._internal._AGALConverter.SourceRegister","boot",0x0e79220f,"openfl.display3D._internal._AGALConverter.SourceRegister.boot","openfl/display3D/_internal/AGALConverter.hx",950,0x4de1651d)
namespace openfl{
namespace display3D{
namespace _internal{
namespace _AGALConverter{

void SourceRegister_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6326831c4b7b616c_962_new)
            	HX_STACK_THIS(this)
HXLINE( 962)
            	}

Dynamic SourceRegister_obj::__CreateEmpty() { return new SourceRegister_obj; }

void *SourceRegister_obj::_hx_vtable = 0;

Dynamic SourceRegister_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SourceRegister_obj > _hx_result = new SourceRegister_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SourceRegister_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5dd77f8b;
}

::String SourceRegister_obj::toGLSL(::hx::Null< bool >  __o_emitSwizzle,::hx::Null< int >  __o_offset){
            		bool emitSwizzle = __o_emitSwizzle.Default(true);
            		int offset = __o_offset.Default(0);
            	HX_STACKFRAME(&_hx_pos_6326831c4b7b616c_980_toGLSL)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(emitSwizzle,"emitSwizzle")
            	HX_STACK_ARG(offset,"offset")
HXLINE( 980)
HXLINE( 981)		if ((this->type == 3)) {
HXLINE( 983)			if (::hx::IsPointerEq( this->programType,::openfl::display3D::_internal::_AGALConverter::ProgramType_obj::VERTEX_dyn() )) {
HXLINE( 983)				return HX_("gl_Position",63,0d,2a,e5);
            			}
            			else {
HXLINE( 983)				return HX_("gl_FragColor",d7,68,e4,21);
            			}
            		}
HXLINE( 986)		HX_VAR( bool,fullxyzw);
HXDLIN( 986)		if ((this->s == 228)) {
HXLINE( 986)			fullxyzw = (this->sourceMask == 15);
            		}
            		else {
HXLINE( 986)			fullxyzw = false;
            		}
HXLINE( 987)		HX_VARI( ::String,swizzle) = HX_("",00,00,00,00);
HXLINE( 989)		bool _hx_tmp;
HXDLIN( 989)		if ((this->type != 5)) {
HXLINE( 989)			_hx_tmp = !(fullxyzw);
            		}
            		else {
HXLINE( 989)			_hx_tmp = false;
            		}
HXDLIN( 989)		if (_hx_tmp) {
HXLINE( 994)			if (((this->sourceMask & 1) != 0)) {
HXLINE( 996)				switch((int)((this->s & 3))){
            					case (int)0: {
HXLINE( 999)						swizzle = (swizzle + HX_("x",78,00,00,00));
            					}
            					break;
            					case (int)1: {
HXLINE(1001)						swizzle = (swizzle + HX_("y",79,00,00,00));
            					}
            					break;
            					case (int)2: {
HXLINE(1003)						swizzle = (swizzle + HX_("z",7a,00,00,00));
            					}
            					break;
            					case (int)3: {
HXLINE(1005)						swizzle = (swizzle + HX_("w",77,00,00,00));
            					}
            					break;
            				}
            			}
HXLINE( 994)			if (((this->sourceMask & 2) != 0)) {
HXLINE( 996)				switch((int)(((this->s >> 2) & 3))){
            					case (int)0: {
HXLINE( 999)						swizzle = (swizzle + HX_("x",78,00,00,00));
            					}
            					break;
            					case (int)1: {
HXLINE(1001)						swizzle = (swizzle + HX_("y",79,00,00,00));
            					}
            					break;
            					case (int)2: {
HXLINE(1003)						swizzle = (swizzle + HX_("z",7a,00,00,00));
            					}
            					break;
            					case (int)3: {
HXLINE(1005)						swizzle = (swizzle + HX_("w",77,00,00,00));
            					}
            					break;
            				}
            			}
HXLINE( 994)			if (((this->sourceMask & 4) != 0)) {
HXLINE( 996)				switch((int)(((this->s >> 4) & 3))){
            					case (int)0: {
HXLINE( 999)						swizzle = (swizzle + HX_("x",78,00,00,00));
            					}
            					break;
            					case (int)1: {
HXLINE(1001)						swizzle = (swizzle + HX_("y",79,00,00,00));
            					}
            					break;
            					case (int)2: {
HXLINE(1003)						swizzle = (swizzle + HX_("z",7a,00,00,00));
            					}
            					break;
            					case (int)3: {
HXLINE(1005)						swizzle = (swizzle + HX_("w",77,00,00,00));
            					}
            					break;
            				}
            			}
HXLINE( 994)			if (((this->sourceMask & 8) != 0)) {
HXLINE( 996)				switch((int)(((this->s >> 6) & 3))){
            					case (int)0: {
HXLINE( 999)						swizzle = (swizzle + HX_("x",78,00,00,00));
            					}
            					break;
            					case (int)1: {
HXLINE(1001)						swizzle = (swizzle + HX_("y",79,00,00,00));
            					}
            					break;
            					case (int)2: {
HXLINE(1003)						swizzle = (swizzle + HX_("z",7a,00,00,00));
            					}
            					break;
            					case (int)3: {
HXLINE(1005)						swizzle = (swizzle + HX_("w",77,00,00,00));
            					}
            					break;
            				}
            			}
            		}
HXLINE(1011)		HX_VARI( ::String,str) = ::openfl::display3D::_internal::AGALConverter_obj::prefixFromType(this->type,this->programType);
HXLINE(1013)		if ((this->d == 0)) {
HXLINE(1016)			str = (str + (this->n + offset));
            		}
            		else {
HXLINE(1021)			str = (str + this->o);
HXLINE(1022)			HX_VARI( ::String,indexComponent) = HX_("",00,00,00,00);
HXLINE(1023)			switch((int)(this->q)){
            				case (int)0: {
HXLINE(1026)					indexComponent = HX_("x",78,00,00,00);
            				}
            				break;
            				case (int)1: {
HXLINE(1028)					indexComponent = HX_("y",79,00,00,00);
            				}
            				break;
            				case (int)2: {
HXLINE(1030)					indexComponent = HX_("z",7a,00,00,00);
            				}
            				break;
            				case (int)3: {
HXLINE(1032)					indexComponent = HX_("w",77,00,00,00);
            				}
            				break;
            			}
HXLINE(1034)			::String indexRegister = ::openfl::display3D::_internal::AGALConverter_obj::prefixFromType(this->itype,this->programType);
HXDLIN(1034)			HX_VARI_NAME( ::String,indexRegister1,"indexRegister") = (((indexRegister + this->n) + HX_(".",2e,00,00,00)) + indexComponent);
HXLINE(1035)			str = (str + ((((HX_("[ int(",3e,aa,07,15) + indexRegister1) + HX_(") +",74,38,1f,00)) + offset) + HX_("]",5d,00,00,00)));
            		}
HXLINE(1038)		bool _hx_tmp1;
HXDLIN(1038)		if (emitSwizzle) {
HXLINE(1038)			_hx_tmp1 = (swizzle != HX_("",00,00,00,00));
            		}
            		else {
HXLINE(1038)			_hx_tmp1 = false;
            		}
HXDLIN(1038)		if (_hx_tmp1) {
HXLINE(1040)			str = (str + (HX_(".",2e,00,00,00) + swizzle));
            		}
HXLINE(1043)		return str;
            	}


HX_DEFINE_DYNAMIC_FUNC2(SourceRegister_obj,toGLSL,return )

 ::openfl::display3D::_internal::_AGALConverter::SourceRegister SourceRegister_obj::parse(::cpp::Int64 v, ::openfl::display3D::_internal::_AGALConverter::ProgramType programType,int sourceMask){
            	HX_GC_STACKFRAME(&_hx_pos_6326831c4b7b616c_965_parse)
            	HX_STACK_ARG(v,"v")
            	HX_STACK_ARG(programType,"programType")
            	HX_STACK_ARG(sourceMask,"sourceMask")
HXLINE( 965)
HXLINE( 966)		HX_VARI(  ::openfl::display3D::_internal::_AGALConverter::SourceRegister,sr) =  ::openfl::display3D::_internal::_AGALConverter::SourceRegister_obj::__alloc( HX_CTX );
HXLINE( 967)		sr->programType = programType;
HXLINE( 968)		sr->d = _hx_int64_low(_hx_int64_and(_hx_int64_shr(v,63),( (::cpp::Int64)(1) )));
HXLINE( 969)		sr->q = _hx_int64_low(_hx_int64_and(_hx_int64_shr(v,48),( (::cpp::Int64)(3) )));
HXLINE( 970)		sr->itype = _hx_int64_low(_hx_int64_and(_hx_int64_shr(v,40),( (::cpp::Int64)(15) )));
HXLINE( 971)		sr->type = _hx_int64_low(_hx_int64_and(_hx_int64_shr(v,32),( (::cpp::Int64)(15) )));
HXLINE( 972)		sr->s = _hx_int64_low(_hx_int64_and(_hx_int64_shr(v,24),( (::cpp::Int64)(255) )));
HXLINE( 973)		sr->o = _hx_int64_low(_hx_int64_and(_hx_int64_shr(v,16),( (::cpp::Int64)(255) )));
HXLINE( 974)		sr->n = _hx_int64_low(_hx_int64_and(v,( (::cpp::Int64)(65535) )));
HXLINE( 975)		sr->sourceMask = sourceMask;
HXLINE( 976)		return sr;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SourceRegister_obj,parse,return )


::hx::ObjectPtr< SourceRegister_obj > SourceRegister_obj::__new() {
	::hx::ObjectPtr< SourceRegister_obj > __this = new SourceRegister_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SourceRegister_obj > SourceRegister_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SourceRegister_obj *__this = (SourceRegister_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SourceRegister_obj), true, "openfl.display3D._internal._AGALConverter.SourceRegister"));
	*(void **)__this = SourceRegister_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SourceRegister_obj::SourceRegister_obj()
{
}

void SourceRegister_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SourceRegister);
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(itype,"itype");
	HX_MARK_MEMBER_NAME(n,"n");
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_MEMBER_NAME(programType,"programType");
	HX_MARK_MEMBER_NAME(q,"q");
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_MEMBER_NAME(sourceMask,"sourceMask");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void SourceRegister_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(itype,"itype");
	HX_VISIT_MEMBER_NAME(n,"n");
	HX_VISIT_MEMBER_NAME(o,"o");
	HX_VISIT_MEMBER_NAME(programType,"programType");
	HX_VISIT_MEMBER_NAME(q,"q");
	HX_VISIT_MEMBER_NAME(s,"s");
	HX_VISIT_MEMBER_NAME(sourceMask,"sourceMask");
	HX_VISIT_MEMBER_NAME(type,"type");
}

::hx::Val SourceRegister_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { return ::hx::Val( d ); }
		if (HX_FIELD_EQ(inName,"n") ) { return ::hx::Val( n ); }
		if (HX_FIELD_EQ(inName,"o") ) { return ::hx::Val( o ); }
		if (HX_FIELD_EQ(inName,"q") ) { return ::hx::Val( q ); }
		if (HX_FIELD_EQ(inName,"s") ) { return ::hx::Val( s ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"itype") ) { return ::hx::Val( itype ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toGLSL") ) { return ::hx::Val( toGLSL_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceMask") ) { return ::hx::Val( sourceMask ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { return ::hx::Val( programType ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SourceRegister_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
	}
	return false;
}

::hx::Val SourceRegister_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n") ) { n=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"q") ) { q=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"itype") ) { itype=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceMask") ) { sourceMask=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { programType=inValue.Cast<  ::openfl::display3D::_internal::_AGALConverter::ProgramType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SourceRegister_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("d",64,00,00,00));
	outFields->push(HX_("itype",a3,db,1b,c2));
	outFields->push(HX_("n",6e,00,00,00));
	outFields->push(HX_("o",6f,00,00,00));
	outFields->push(HX_("programType",5e,fb,2c,c4));
	outFields->push(HX_("q",71,00,00,00));
	outFields->push(HX_("s",73,00,00,00));
	outFields->push(HX_("sourceMask",67,27,ba,70));
	outFields->push(HX_("type",ba,f2,08,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SourceRegister_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(SourceRegister_obj,d),HX_("d",64,00,00,00)},
	{::hx::fsInt,(int)offsetof(SourceRegister_obj,itype),HX_("itype",a3,db,1b,c2)},
	{::hx::fsInt,(int)offsetof(SourceRegister_obj,n),HX_("n",6e,00,00,00)},
	{::hx::fsInt,(int)offsetof(SourceRegister_obj,o),HX_("o",6f,00,00,00)},
	{::hx::fsObject /*  ::openfl::display3D::_internal::_AGALConverter::ProgramType */ ,(int)offsetof(SourceRegister_obj,programType),HX_("programType",5e,fb,2c,c4)},
	{::hx::fsInt,(int)offsetof(SourceRegister_obj,q),HX_("q",71,00,00,00)},
	{::hx::fsInt,(int)offsetof(SourceRegister_obj,s),HX_("s",73,00,00,00)},
	{::hx::fsInt,(int)offsetof(SourceRegister_obj,sourceMask),HX_("sourceMask",67,27,ba,70)},
	{::hx::fsInt,(int)offsetof(SourceRegister_obj,type),HX_("type",ba,f2,08,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SourceRegister_obj_sStaticStorageInfo = 0;
#endif

static ::String SourceRegister_obj_sMemberFields[] = {
	HX_("d",64,00,00,00),
	HX_("itype",a3,db,1b,c2),
	HX_("n",6e,00,00,00),
	HX_("o",6f,00,00,00),
	HX_("programType",5e,fb,2c,c4),
	HX_("q",71,00,00,00),
	HX_("s",73,00,00,00),
	HX_("sourceMask",67,27,ba,70),
	HX_("type",ba,f2,08,4d),
	HX_("toGLSL",f9,58,08,7a),
	::String(null()) };

::hx::Class SourceRegister_obj::__mClass;

static ::String SourceRegister_obj_sStaticFields[] = {
	HX_("parse",33,90,55,bd),
	::String(null())
};

void SourceRegister_obj::__register()
{
	SourceRegister_obj _hx_dummy;
	SourceRegister_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D._internal._AGALConverter.SourceRegister",b1,8f,b5,4c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SourceRegister_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SourceRegister_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SourceRegister_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SourceRegister_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SourceRegister_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SourceRegister_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SourceRegister_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6326831c4b7b616c_950_boot)
HXDLIN( 950)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _internal
} // end namespace _AGALConverter
