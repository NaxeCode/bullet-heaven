// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display__internal_AbstractNoise
#include <openfl/display/_internal/AbstractNoise.h>
#endif
#ifndef INCLUDED_openfl_display__internal_PerlinNoise
#include <openfl/display/_internal/PerlinNoise.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7ac11d622634610f_50_new,"openfl.display._internal.PerlinNoise","new",0xd8492cdc,"openfl.display._internal.PerlinNoise.new","openfl/display/_internal/PerlinNoise.hx",50,0xa5e7a0d7)
HX_LOCAL_STACK_FRAME(_hx_pos_7ac11d622634610f_66_fill,"openfl.display._internal.PerlinNoise","fill",0x62775e87,"openfl.display._internal.PerlinNoise.fill","openfl/display/_internal/PerlinNoise.hx",66,0xa5e7a0d7)
HX_LOCAL_STACK_FRAME(_hx_pos_7ac11d622634610f_189_noise,"openfl.display._internal.PerlinNoise","noise",0x65250316,"openfl.display._internal.PerlinNoise.noise","openfl/display/_internal/PerlinNoise.hx",189,0xa5e7a0d7)
HX_LOCAL_STACK_FRAME(_hx_pos_7ac11d622634610f_261_setSeed,"openfl.display._internal.PerlinNoise","setSeed",0xcb5810af,"openfl.display._internal.PerlinNoise.setSeed","openfl/display/_internal/PerlinNoise.hx",261,0xa5e7a0d7)
HX_LOCAL_STACK_FRAME(_hx_pos_7ac11d622634610f_21_boot,"openfl.display._internal.PerlinNoise","boot",0x5fd71436,"openfl.display._internal.PerlinNoise.boot","openfl/display/_internal/PerlinNoise.hx",21,0xa5e7a0d7)
HX_LOCAL_STACK_FRAME(_hx_pos_7ac11d622634610f_24_boot,"openfl.display._internal.PerlinNoise","boot",0x5fd71436,"openfl.display._internal.PerlinNoise.boot","openfl/display/_internal/PerlinNoise.hx",24,0xa5e7a0d7)
static const int _hx_array_data_054aceea_10[] = {
	(int)151,(int)160,(int)137,(int)91,(int)90,(int)15,(int)131,(int)13,(int)201,(int)95,(int)96,(int)53,(int)194,(int)233,(int)7,(int)225,(int)140,(int)36,(int)103,(int)30,(int)69,(int)142,(int)8,(int)99,(int)37,(int)240,(int)21,(int)10,(int)23,(int)190,(int)6,(int)148,(int)247,(int)120,(int)234,(int)75,(int)0,(int)26,(int)197,(int)62,(int)94,(int)252,(int)219,(int)203,(int)117,(int)35,(int)11,(int)32,(int)57,(int)177,(int)33,(int)88,(int)237,(int)149,(int)56,(int)87,(int)174,(int)20,(int)125,(int)136,(int)171,(int)168,(int)68,(int)175,(int)74,(int)165,(int)71,(int)134,(int)139,(int)48,(int)27,(int)166,(int)77,(int)146,(int)158,(int)231,(int)83,(int)111,(int)229,(int)122,(int)60,(int)211,(int)133,(int)230,(int)220,(int)105,(int)92,(int)41,(int)55,(int)46,(int)245,(int)40,(int)244,(int)102,(int)143,(int)54,(int)65,(int)25,(int)63,(int)161,(int)1,(int)216,(int)80,(int)73,(int)209,(int)76,(int)132,(int)187,(int)208,(int)89,(int)18,(int)169,(int)200,(int)196,(int)135,(int)130,(int)116,(int)188,(int)159,(int)86,(int)164,(int)100,(int)109,(int)198,(int)173,(int)186,(int)3,(int)64,(int)52,(int)217,(int)226,(int)250,(int)124,(int)123,(int)5,(int)202,(int)38,(int)147,(int)118,(int)126,(int)255,(int)82,(int)85,(int)212,(int)207,(int)206,(int)59,(int)227,(int)47,(int)16,(int)58,(int)17,(int)182,(int)189,(int)28,(int)42,(int)223,(int)183,(int)170,(int)213,(int)119,(int)248,(int)152,(int)2,(int)44,(int)154,(int)163,(int)70,(int)221,(int)153,(int)101,(int)155,(int)167,(int)43,(int)172,(int)9,(int)129,(int)22,(int)39,(int)253,(int)19,(int)98,(int)108,(int)110,(int)79,(int)113,(int)224,(int)232,(int)178,(int)185,(int)112,(int)104,(int)218,(int)246,(int)97,(int)228,(int)251,(int)34,(int)242,(int)193,(int)238,(int)210,(int)144,(int)12,(int)191,(int)179,(int)162,(int)241,(int)81,(int)51,(int)145,(int)235,(int)249,(int)14,(int)239,(int)107,(int)49,(int)192,(int)214,(int)31,(int)181,(int)199,(int)106,(int)157,(int)184,(int)84,(int)204,(int)176,(int)115,(int)121,(int)50,(int)45,(int)127,(int)4,(int)150,(int)254,(int)138,(int)236,(int)205,(int)93,(int)222,(int)114,(int)67,(int)29,(int)24,(int)72,(int)243,(int)141,(int)128,(int)195,(int)78,(int)66,(int)215,(int)61,(int)156,(int)180,(int)151,(int)160,(int)137,(int)91,(int)90,(int)15,(int)131,(int)13,(int)201,(int)95,(int)96,(int)53,(int)194,(int)233,(int)7,(int)225,(int)140,(int)36,(int)103,(int)30,(int)69,(int)142,(int)8,(int)99,(int)37,(int)240,(int)21,(int)10,(int)23,(int)190,(int)6,(int)148,(int)247,(int)120,(int)234,(int)75,(int)0,(int)26,(int)197,(int)62,(int)94,(int)252,(int)219,(int)203,(int)117,(int)35,(int)11,(int)32,(int)57,(int)177,(int)33,(int)88,(int)237,(int)149,(int)56,(int)87,(int)174,(int)20,(int)125,(int)136,(int)171,(int)168,(int)68,(int)175,(int)74,(int)165,(int)71,(int)134,(int)139,(int)48,(int)27,(int)166,(int)77,(int)146,(int)158,(int)231,(int)83,(int)111,(int)229,(int)122,(int)60,(int)211,(int)133,(int)230,(int)220,(int)105,(int)92,(int)41,(int)55,(int)46,(int)245,(int)40,(int)244,(int)102,(int)143,(int)54,(int)65,(int)25,(int)63,(int)161,(int)1,(int)216,(int)80,(int)73,(int)209,(int)76,(int)132,(int)187,(int)208,(int)89,(int)18,(int)169,(int)200,(int)196,(int)135,(int)130,(int)116,(int)188,(int)159,(int)86,(int)164,(int)100,(int)109,(int)198,(int)173,(int)186,(int)3,(int)64,(int)52,(int)217,(int)226,(int)250,(int)124,(int)123,(int)5,(int)202,(int)38,(int)147,(int)118,(int)126,(int)255,(int)82,(int)85,(int)212,(int)207,(int)206,(int)59,(int)227,(int)47,(int)16,(int)58,(int)17,(int)182,(int)189,(int)28,(int)42,(int)223,(int)183,(int)170,(int)213,(int)119,(int)248,(int)152,(int)2,(int)44,(int)154,(int)163,(int)70,(int)221,(int)153,(int)101,(int)155,(int)167,(int)43,(int)172,(int)9,(int)129,(int)22,(int)39,(int)253,(int)19,(int)98,(int)108,(int)110,(int)79,(int)113,(int)224,(int)232,(int)178,(int)185,(int)112,(int)104,(int)218,(int)246,(int)97,(int)228,(int)251,(int)34,(int)242,(int)193,(int)238,(int)210,(int)144,(int)12,(int)191,(int)179,(int)162,(int)241,(int)81,(int)51,(int)145,(int)235,(int)249,(int)14,(int)239,(int)107,(int)49,(int)192,(int)214,(int)31,(int)181,(int)199,(int)106,(int)157,(int)184,(int)84,(int)204,(int)176,(int)115,(int)121,(int)50,(int)45,(int)127,(int)4,(int)150,(int)254,(int)138,(int)236,(int)205,(int)93,(int)222,(int)114,(int)67,(int)29,(int)24,(int)72,(int)243,(int)141,(int)128,(int)195,(int)78,(int)66,(int)215,(int)61,(int)156,(int)180,
};
namespace openfl{
namespace display{
namespace _internal{

void PerlinNoise_obj::__construct(int seed,int octaves,int channels,bool grayScale,Float falloff,::hx::Null< bool >  __o_stitch,::hx::Null< Float >  __o_stitch_threshold){
            		bool stitch = __o_stitch.Default(false);
            		Float stitch_threshold = __o_stitch_threshold.Default(((Float)0.05));
            	HX_STACKFRAME(&_hx_pos_7ac11d622634610f_50_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(seed,"seed")
            	HX_STACK_ARG(octaves,"octaves")
            	HX_STACK_ARG(channels,"channels")
            	HX_STACK_ARG(grayScale,"grayScale")
            	HX_STACK_ARG(falloff,"falloff")
            	HX_STACK_ARG(stitch,"stitch")
            	HX_STACK_ARG(stitch_threshold,"stitch_threshold")
HXLINE(  50)
HXLINE(  51)		super::__construct(seed,octaves,channels,grayScale,falloff,stitch,stitch_threshold);
HXLINE(  53)		this->p_perm = ::Array_obj< int >::__new(0);
HXLINE(  55)		{
HXLINE(  55)			int _g = 0;
HXDLIN(  55)			while((_g < 512)){
HXLINE(  55)				_g = (_g + 1);
HXDLIN(  55)				HX_VARI( int,i) = (_g - 1);
HXLINE(  57)				this->p_perm[i] = ::openfl::display::_internal::PerlinNoise_obj::P->__get((i & 255));
            			}
            		}
HXLINE(  60)		this->base_factor = ((Float)0.03125);
HXLINE(  62)		this->setSeed(seed);
            	}

Dynamic PerlinNoise_obj::__CreateEmpty() { return new PerlinNoise_obj; }

void *PerlinNoise_obj::_hx_vtable = 0;

Dynamic PerlinNoise_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PerlinNoise_obj > _hx_result = new PerlinNoise_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool PerlinNoise_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4234fc78) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4234fc78;
	} else {
		return inClassId==(int)0x5be429ce;
	}
}

void PerlinNoise_obj::fill( ::openfl::display::BitmapData bitmap,Float _scale_x,Float _scale_y,Float _scale_z){
            	HX_STACKFRAME(&_hx_pos_7ac11d622634610f_66_fill)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(bitmap,"bitmap")
            	HX_STACK_ARG(_scale_x,"_scale_x")
            	HX_STACK_ARG(_scale_y,"_scale_y")
            	HX_STACK_ARG(_scale_z,"_scale_z")
HXLINE(  66)
HXLINE(  67)		HX_VARI( int,width) = bitmap->width;
HXLINE(  68)		HX_VARI( int,height) = bitmap->height;
HXLINE(  70)		HX_VARI( int,octaves) = this->octaves;
HXLINE(  71)		HX_VARI( ::Array< Float >,octaves_frequencies) = this->octaves_frequencies;
HXLINE(  72)		HX_VARI( ::Array< Float >,octaves_persistences) = this->octaves_persistences;
HXLINE(  74)		HX_VARI( bool,isRed) = ((1 & this->channels) == 1);
HXLINE(  75)		HX_VARI( bool,isGreen) = ((2 & this->channels) == 2);
HXLINE(  76)		HX_VARI( bool,isBlue) = ((4 & this->channels) == 4);
HXLINE(  78)		HX_VARI( int,channels) = 0;
HXLINE(  80)		if (isRed) {
HXLINE(  82)			channels = (channels + 1);
            		}
HXLINE(  85)		if (isGreen) {
HXLINE(  87)			channels = (channels + 1);
            		}
HXLINE(  90)		if (isBlue) {
HXLINE(  92)			channels = (channels + 1);
            		}
HXLINE(  95)		HX_VARI( bool,grayscale) = this->grayscale;
HXLINE(  97)		HX_VARI( int,stitch_w) = ::Std_obj::_hx_int((this->stitch_threshold * ( (Float)(width) )));
HXLINE(  98)		HX_VARI( int,stitch_h) = ::Std_obj::_hx_int((this->stitch_threshold * ( (Float)(height) )));
HXLINE( 100)		HX_VARI( Float,base_x) = ((_scale_x * this->base_factor) + this->x_offset);
HXLINE( 102)		_scale_y = ((_scale_y * this->base_factor) + this->y_offset);
HXLINE( 103)		_scale_z = ((_scale_z * this->base_factor) + this->z_offset);
HXLINE( 105)		HX_VARI( Float,g_offset) = ((Float)1.0);
HXLINE( 106)		HX_VARI( Float,b_offset) = ((Float)2.0);
HXLINE( 108)		{
HXLINE( 108)			int _g = 0;
HXDLIN( 108)			int _g1 = height;
HXDLIN( 108)			while((_g < _g1)){
HXLINE( 108)				_g = (_g + 1);
HXDLIN( 108)				HX_VARI( int,py) = (_g - 1);
HXLINE( 110)				_scale_x = base_x;
HXLINE( 112)				{
HXLINE( 112)					int _g2 = 0;
HXDLIN( 112)					int _g3 = width;
HXDLIN( 112)					while((_g2 < _g3)){
HXLINE( 112)						_g2 = (_g2 + 1);
HXDLIN( 112)						HX_VARI( int,px) = (_g2 - 1);
HXLINE( 114)						HX_VARI( Float,color1) = ((Float)0.0);
HXLINE( 115)						HX_VARI( Float,color2) = ((Float)0.0);
HXLINE( 116)						HX_VARI( Float,color3) = ((Float)0.0);
HXLINE( 118)						{
HXLINE( 118)							int _g4 = 0;
HXDLIN( 118)							int _g5 = octaves;
HXDLIN( 118)							while((_g4 < _g5)){
HXLINE( 118)								_g4 = (_g4 + 1);
HXDLIN( 118)								HX_VARI( int,i) = (_g4 - 1);
HXLINE( 120)								HX_VARI( Float,frequency) = octaves_frequencies->__get(i);
HXLINE( 121)								HX_VARI( Float,persistence) = octaves_persistences->__get(i);
HXLINE( 123)								color1 = (color1 + (this->noise((_scale_x * frequency),(_scale_y * frequency),(_scale_z * frequency)) * persistence));
HXLINE( 125)								if (!(grayscale)) {
HXLINE( 127)									if ((1 < channels)) {
HXLINE( 129)										color2 = (color2 + (this->noise(((_scale_x + g_offset) * frequency),((_scale_y + g_offset) * frequency),(_scale_z * frequency)) * persistence));
            									}
HXLINE( 132)									if ((2 < channels)) {
HXLINE( 134)										color3 = (color3 + (this->noise(((_scale_x + b_offset) * frequency),((_scale_y + b_offset) * frequency),(_scale_z * frequency)) * persistence));
            									}
            								}
            							}
            						}
HXLINE( 139)						HX_VARI( int,color) = 0;
HXLINE( 141)						if (grayscale) {
HXLINE( 143)							color = this->color(color1,color1,color1);
            						}
            						else {
HXLINE( 145)							bool _hx_tmp;
HXDLIN( 145)							bool _hx_tmp1;
HXDLIN( 145)							if (isRed) {
HXLINE( 145)								_hx_tmp1 = isGreen;
            							}
            							else {
HXLINE( 145)								_hx_tmp1 = false;
            							}
HXDLIN( 145)							if (_hx_tmp1) {
HXLINE( 145)								_hx_tmp = isBlue;
            							}
            							else {
HXLINE( 145)								_hx_tmp = false;
            							}
HXDLIN( 145)							if (_hx_tmp) {
HXLINE( 147)								color = this->color(color1,color2,color3);
            							}
            							else {
HXLINE( 149)								bool _hx_tmp2;
HXDLIN( 149)								if (isRed) {
HXLINE( 149)									_hx_tmp2 = isGreen;
            								}
            								else {
HXLINE( 149)									_hx_tmp2 = false;
            								}
HXDLIN( 149)								if (_hx_tmp2) {
HXLINE( 151)									color = this->color(color1,color2,null());
            								}
            								else {
HXLINE( 153)									bool _hx_tmp3;
HXDLIN( 153)									if (isRed) {
HXLINE( 153)										_hx_tmp3 = isBlue;
            									}
            									else {
HXLINE( 153)										_hx_tmp3 = false;
            									}
HXDLIN( 153)									if (_hx_tmp3) {
HXLINE( 155)										color = this->color(color1,null(),color2);
            									}
            									else {
HXLINE( 157)										bool _hx_tmp4;
HXDLIN( 157)										if (isGreen) {
HXLINE( 157)											_hx_tmp4 = isBlue;
            										}
            										else {
HXLINE( 157)											_hx_tmp4 = false;
            										}
HXDLIN( 157)										if (_hx_tmp4) {
HXLINE( 159)											color = this->color(null(),color1,color2);
            										}
            										else {
HXLINE( 161)											if (isRed) {
HXLINE( 163)												color = this->color(color1,null(),null());
            											}
            											else {
HXLINE( 165)												if (isGreen) {
HXLINE( 167)													color = this->color(null(),color1,null());
            												}
            												else {
HXLINE( 169)													if (isBlue) {
HXLINE( 171)														color = this->color(null(),null(),color1);
            													}
            												}
            											}
            										}
            									}
            								}
            							}
            						}
HXLINE( 174)						if (this->stitch) {
HXLINE( 176)							color = this->stitching(bitmap,color,px,py,stitch_w,stitch_h,width,height);
            						}
HXLINE( 179)						bitmap->setPixel32(px,py,color);
HXLINE( 181)						_scale_x = (_scale_x + this->base_factor);
            					}
            				}
HXLINE( 184)				_scale_y = (_scale_y + this->base_factor);
            			}
            		}
            	}


Float PerlinNoise_obj::noise(Float x,Float y,Float z){
            	HX_STACKFRAME(&_hx_pos_7ac11d622634610f_189_noise)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
            	HX_STACK_ARG(z,"z")
HXLINE( 189)
HXLINE( 190)		HX_VARI( Float,xf) = (x - ::hx::Mod(x,1));
HXLINE( 191)		HX_VARI( Float,yf) = (y - ::hx::Mod(y,1));
HXLINE( 192)		HX_VARI( Float,zf) = (z - ::hx::Mod(z,1));
HXLINE( 194)		x = (x - xf);
HXLINE( 195)		y = (y - yf);
HXLINE( 196)		z = (z - zf);
HXLINE( 198)		HX_VARI( int,X) = (::Std_obj::_hx_int(xf) & 255);
HXLINE( 199)		HX_VARI( int,Y) = (::Std_obj::_hx_int(yf) & 255);
HXLINE( 200)		HX_VARI( int,Z) = (::Std_obj::_hx_int(zf) & 255);
HXLINE( 202)		HX_VARI( Float,u) = this->fade(x);
HXLINE( 203)		HX_VARI( Float,v) = this->fade(y);
HXLINE( 204)		HX_VARI( Float,w) = this->fade(z);
HXLINE( 206)		HX_VARI( int,A) = (this->p_perm->__get(X) + Y);
HXLINE( 207)		HX_VARI( int,AA) = (this->p_perm->__get(A) + Z);
HXLINE( 208)		HX_VARI( int,AB) = (this->p_perm->__get((A + 1)) + Z);
HXLINE( 209)		HX_VARI( int,B) = (this->p_perm->__get((X + 1)) + Y);
HXLINE( 210)		HX_VARI( int,BA) = (this->p_perm->__get(B) + Z);
HXLINE( 211)		HX_VARI( int,BB) = (this->p_perm->__get((B + 1)) + Z);
HXLINE( 213)		HX_VARI( Float,x1) = (x - ( (Float)(1) ));
HXLINE( 214)		HX_VARI( Float,y1) = (y - ( (Float)(1) ));
HXLINE( 215)		HX_VARI( Float,z1) = (z - ( (Float)(1) ));
HXLINE( 217)		HX_VARI( int,hash) = (this->p_perm->__get((BB + 1)) & 15);
HXLINE( 218)		Float g1;
HXDLIN( 218)		if (((hash & 1) == 0)) {
HXLINE( 218)			if ((hash < 8)) {
HXLINE( 218)				g1 = x1;
            			}
            			else {
HXLINE( 218)				g1 = y1;
            			}
            		}
            		else {
HXLINE( 218)			if ((hash < 8)) {
HXLINE( 218)				g1 = -(x1);
            			}
            			else {
HXLINE( 218)				g1 = -(y1);
            			}
            		}
HXLINE( 219)		Float g11;
HXDLIN( 219)		if (((hash & 2) == 0)) {
HXLINE( 219)			if ((hash < 4)) {
HXLINE( 219)				g11 = y1;
            			}
            			else {
HXLINE( 219)				if ((hash == 12)) {
HXLINE( 219)					g11 = x1;
            				}
            				else {
HXLINE( 219)					g11 = z1;
            				}
            			}
            		}
            		else {
HXLINE( 219)			if ((hash < 4)) {
HXLINE( 219)				g11 = -(y1);
            			}
            			else {
HXLINE( 219)				if ((hash == 14)) {
HXLINE( 219)					g11 = -(x1);
            				}
            				else {
HXLINE( 219)					g11 = -(z1);
            				}
            			}
            		}
HXLINE( 218)		HX_VARI_NAME( Float,g12,"g1") = (g1 + g11);
HXLINE( 221)		hash = (this->p_perm->__get((AB + 1)) & 15);
HXLINE( 222)		Float g2;
HXDLIN( 222)		if (((hash & 1) == 0)) {
HXLINE( 222)			if ((hash < 8)) {
HXLINE( 222)				g2 = x;
            			}
            			else {
HXLINE( 222)				g2 = y1;
            			}
            		}
            		else {
HXLINE( 222)			if ((hash < 8)) {
HXLINE( 222)				g2 = -(x);
            			}
            			else {
HXLINE( 222)				g2 = -(y1);
            			}
            		}
HXLINE( 223)		Float g21;
HXDLIN( 223)		if (((hash & 2) == 0)) {
HXLINE( 223)			if ((hash < 4)) {
HXLINE( 223)				g21 = y1;
            			}
            			else {
HXLINE( 223)				if ((hash == 12)) {
HXLINE( 223)					g21 = x;
            				}
            				else {
HXLINE( 223)					g21 = z1;
            				}
            			}
            		}
            		else {
HXLINE( 223)			if ((hash < 4)) {
HXLINE( 223)				g21 = -(y1);
            			}
            			else {
HXLINE( 223)				if ((hash == 14)) {
HXLINE( 223)					g21 = -(x);
            				}
            				else {
HXLINE( 223)					g21 = -(z1);
            				}
            			}
            		}
HXLINE( 222)		HX_VARI_NAME( Float,g22,"g2") = (g2 + g21);
HXLINE( 225)		hash = (this->p_perm->__get((BA + 1)) & 15);
HXLINE( 226)		Float g3;
HXDLIN( 226)		if (((hash & 1) == 0)) {
HXLINE( 226)			if ((hash < 8)) {
HXLINE( 226)				g3 = x1;
            			}
            			else {
HXLINE( 226)				g3 = y;
            			}
            		}
            		else {
HXLINE( 226)			if ((hash < 8)) {
HXLINE( 226)				g3 = -(x1);
            			}
            			else {
HXLINE( 226)				g3 = -(y);
            			}
            		}
HXLINE( 227)		Float g31;
HXDLIN( 227)		if (((hash & 2) == 0)) {
HXLINE( 227)			if ((hash < 4)) {
HXLINE( 227)				g31 = y;
            			}
            			else {
HXLINE( 227)				if ((hash == 12)) {
HXLINE( 227)					g31 = x1;
            				}
            				else {
HXLINE( 227)					g31 = z1;
            				}
            			}
            		}
            		else {
HXLINE( 227)			if ((hash < 4)) {
HXLINE( 227)				g31 = -(y);
            			}
            			else {
HXLINE( 227)				if ((hash == 14)) {
HXLINE( 227)					g31 = -(x1);
            				}
            				else {
HXLINE( 227)					g31 = -(z1);
            				}
            			}
            		}
HXLINE( 226)		HX_VARI_NAME( Float,g32,"g3") = (g3 + g31);
HXLINE( 229)		hash = (this->p_perm->__get((AA + 1)) & 15);
HXLINE( 230)		Float g4;
HXDLIN( 230)		if (((hash & 1) == 0)) {
HXLINE( 230)			if ((hash < 8)) {
HXLINE( 230)				g4 = x;
            			}
            			else {
HXLINE( 230)				g4 = y;
            			}
            		}
            		else {
HXLINE( 230)			if ((hash < 8)) {
HXLINE( 230)				g4 = -(x);
            			}
            			else {
HXLINE( 230)				g4 = -(y);
            			}
            		}
HXLINE( 231)		Float g41;
HXDLIN( 231)		if (((hash & 2) == 0)) {
HXLINE( 231)			if ((hash < 4)) {
HXLINE( 231)				g41 = y;
            			}
            			else {
HXLINE( 231)				if ((hash == 12)) {
HXLINE( 231)					g41 = x;
            				}
            				else {
HXLINE( 231)					g41 = z1;
            				}
            			}
            		}
            		else {
HXLINE( 231)			if ((hash < 4)) {
HXLINE( 231)				g41 = -(y);
            			}
            			else {
HXLINE( 231)				if ((hash == 14)) {
HXLINE( 231)					g41 = -(x);
            				}
            				else {
HXLINE( 231)					g41 = -(z1);
            				}
            			}
            		}
HXLINE( 230)		HX_VARI_NAME( Float,g42,"g4") = (g4 + g41);
HXLINE( 233)		hash = (this->p_perm->__get(BB) & 15);
HXLINE( 234)		Float g5;
HXDLIN( 234)		if (((hash & 1) == 0)) {
HXLINE( 234)			if ((hash < 8)) {
HXLINE( 234)				g5 = x1;
            			}
            			else {
HXLINE( 234)				g5 = y1;
            			}
            		}
            		else {
HXLINE( 234)			if ((hash < 8)) {
HXLINE( 234)				g5 = -(x1);
            			}
            			else {
HXLINE( 234)				g5 = -(y1);
            			}
            		}
HXLINE( 235)		Float g51;
HXDLIN( 235)		if (((hash & 2) == 0)) {
HXLINE( 235)			if ((hash < 4)) {
HXLINE( 235)				g51 = y1;
            			}
            			else {
HXLINE( 235)				if ((hash == 12)) {
HXLINE( 235)					g51 = x1;
            				}
            				else {
HXLINE( 235)					g51 = z;
            				}
            			}
            		}
            		else {
HXLINE( 235)			if ((hash < 4)) {
HXLINE( 235)				g51 = -(y1);
            			}
            			else {
HXLINE( 235)				if ((hash == 14)) {
HXLINE( 235)					g51 = -(x1);
            				}
            				else {
HXLINE( 235)					g51 = -(z);
            				}
            			}
            		}
HXLINE( 234)		HX_VARI_NAME( Float,g52,"g5") = (g5 + g51);
HXLINE( 237)		hash = (this->p_perm->__get(AB) & 15);
HXLINE( 238)		Float g6;
HXDLIN( 238)		if (((hash & 1) == 0)) {
HXLINE( 238)			if ((hash < 8)) {
HXLINE( 238)				g6 = x;
            			}
            			else {
HXLINE( 238)				g6 = y1;
            			}
            		}
            		else {
HXLINE( 238)			if ((hash < 8)) {
HXLINE( 238)				g6 = -(x);
            			}
            			else {
HXLINE( 238)				g6 = -(y1);
            			}
            		}
HXLINE( 239)		Float g61;
HXDLIN( 239)		if (((hash & 2) == 0)) {
HXLINE( 239)			if ((hash < 4)) {
HXLINE( 239)				g61 = y1;
            			}
            			else {
HXLINE( 239)				if ((hash == 12)) {
HXLINE( 239)					g61 = x;
            				}
            				else {
HXLINE( 239)					g61 = z;
            				}
            			}
            		}
            		else {
HXLINE( 239)			if ((hash < 4)) {
HXLINE( 239)				g61 = -(y1);
            			}
            			else {
HXLINE( 239)				if ((hash == 14)) {
HXLINE( 239)					g61 = -(x);
            				}
            				else {
HXLINE( 239)					g61 = -(z);
            				}
            			}
            		}
HXLINE( 238)		HX_VARI_NAME( Float,g62,"g6") = (g6 + g61);
HXLINE( 241)		hash = (this->p_perm->__get(BA) & 15);
HXLINE( 242)		Float g7;
HXDLIN( 242)		if (((hash & 1) == 0)) {
HXLINE( 242)			if ((hash < 8)) {
HXLINE( 242)				g7 = x1;
            			}
            			else {
HXLINE( 242)				g7 = y;
            			}
            		}
            		else {
HXLINE( 242)			if ((hash < 8)) {
HXLINE( 242)				g7 = -(x1);
            			}
            			else {
HXLINE( 242)				g7 = -(y);
            			}
            		}
HXLINE( 243)		Float g71;
HXDLIN( 243)		if (((hash & 2) == 0)) {
HXLINE( 243)			if ((hash < 4)) {
HXLINE( 243)				g71 = y;
            			}
            			else {
HXLINE( 243)				if ((hash == 12)) {
HXLINE( 243)					g71 = x1;
            				}
            				else {
HXLINE( 243)					g71 = z;
            				}
            			}
            		}
            		else {
HXLINE( 243)			if ((hash < 4)) {
HXLINE( 243)				g71 = -(y);
            			}
            			else {
HXLINE( 243)				if ((hash == 14)) {
HXLINE( 243)					g71 = -(x1);
            				}
            				else {
HXLINE( 243)					g71 = -(z);
            				}
            			}
            		}
HXLINE( 242)		HX_VARI_NAME( Float,g72,"g7") = (g7 + g71);
HXLINE( 245)		hash = (this->p_perm->__get(AA) & 15);
HXLINE( 246)		Float g8;
HXDLIN( 246)		if (((hash & 1) == 0)) {
HXLINE( 246)			if ((hash < 8)) {
HXLINE( 246)				g8 = x;
            			}
            			else {
HXLINE( 246)				g8 = y;
            			}
            		}
            		else {
HXLINE( 246)			if ((hash < 8)) {
HXLINE( 246)				g8 = -(x);
            			}
            			else {
HXLINE( 246)				g8 = -(y);
            			}
            		}
HXLINE( 247)		Float g81;
HXDLIN( 247)		if (((hash & 2) == 0)) {
HXLINE( 247)			if ((hash < 4)) {
HXLINE( 247)				g81 = y;
            			}
            			else {
HXLINE( 247)				if ((hash == 12)) {
HXLINE( 247)					g81 = x;
            				}
            				else {
HXLINE( 247)					g81 = z;
            				}
            			}
            		}
            		else {
HXLINE( 247)			if ((hash < 4)) {
HXLINE( 247)				g81 = -(y);
            			}
            			else {
HXLINE( 247)				if ((hash == 14)) {
HXLINE( 247)					g81 = -(x);
            				}
            				else {
HXLINE( 247)					g81 = -(z);
            				}
            			}
            		}
HXLINE( 246)		HX_VARI_NAME( Float,g82,"g8") = (g8 + g81);
HXLINE( 249)		g22 = (g22 + (u * (g12 - g22)));
HXLINE( 250)		g42 = (g42 + (u * (g32 - g42)));
HXLINE( 251)		g62 = (g62 + (u * (g52 - g62)));
HXLINE( 252)		g82 = (g82 + (u * (g72 - g82)));
HXLINE( 254)		g42 = (g42 + (v * (g22 - g42)));
HXLINE( 255)		g82 = (g82 + (v * (g62 - g82)));
HXLINE( 257)		return (g82 + (w * (g42 - g82)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(PerlinNoise_obj,noise,return )

void PerlinNoise_obj::setSeed(int seed){
            	HX_STACKFRAME(&_hx_pos_7ac11d622634610f_261_setSeed)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(seed,"seed")
HXLINE( 261)
HXLINE( 262)		seed = ::Std_obj::_hx_int(::hx::Mod((( (Float)(seed) ) * ((Float)16807.0)),(int)2147483647));
HXDLIN( 262)		this->x_offset = ( (Float)(seed) );
HXLINE( 263)		seed = ::Std_obj::_hx_int(::hx::Mod((( (Float)(seed) ) * ((Float)16807.0)),(int)2147483647));
HXDLIN( 263)		this->y_offset = ( (Float)(seed) );
HXLINE( 264)		seed = ::Std_obj::_hx_int(::hx::Mod((( (Float)(seed) ) * ((Float)16807.0)),(int)2147483647));
HXDLIN( 264)		this->z_offset = ( (Float)(seed) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(PerlinNoise_obj,setSeed,(void))

::Array< int > PerlinNoise_obj::P;


::hx::ObjectPtr< PerlinNoise_obj > PerlinNoise_obj::__new(int seed,int octaves,int channels,bool grayScale,Float falloff,::hx::Null< bool >  __o_stitch,::hx::Null< Float >  __o_stitch_threshold) {
	::hx::ObjectPtr< PerlinNoise_obj > __this = new PerlinNoise_obj();
	__this->__construct(seed,octaves,channels,grayScale,falloff,__o_stitch,__o_stitch_threshold);
	return __this;
}

::hx::ObjectPtr< PerlinNoise_obj > PerlinNoise_obj::__alloc(::hx::Ctx *_hx_ctx,int seed,int octaves,int channels,bool grayScale,Float falloff,::hx::Null< bool >  __o_stitch,::hx::Null< Float >  __o_stitch_threshold) {
	PerlinNoise_obj *__this = (PerlinNoise_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PerlinNoise_obj), true, "openfl.display._internal.PerlinNoise"));
	*(void **)__this = PerlinNoise_obj::_hx_vtable;
	__this->__construct(seed,octaves,channels,grayScale,falloff,__o_stitch,__o_stitch_threshold);
	return __this;
}

PerlinNoise_obj::PerlinNoise_obj()
{
}

void PerlinNoise_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PerlinNoise);
	HX_MARK_MEMBER_NAME(p_perm,"p_perm");
	HX_MARK_MEMBER_NAME(x_offset,"x_offset");
	HX_MARK_MEMBER_NAME(y_offset,"y_offset");
	HX_MARK_MEMBER_NAME(z_offset,"z_offset");
	HX_MARK_MEMBER_NAME(base_factor,"base_factor");
	 ::openfl::display::_internal::AbstractNoise_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PerlinNoise_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(p_perm,"p_perm");
	HX_VISIT_MEMBER_NAME(x_offset,"x_offset");
	HX_VISIT_MEMBER_NAME(y_offset,"y_offset");
	HX_VISIT_MEMBER_NAME(z_offset,"z_offset");
	HX_VISIT_MEMBER_NAME(base_factor,"base_factor");
	 ::openfl::display::_internal::AbstractNoise_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PerlinNoise_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return ::hx::Val( fill_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"noise") ) { return ::hx::Val( noise_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"p_perm") ) { return ::hx::Val( p_perm ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setSeed") ) { return ::hx::Val( setSeed_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"x_offset") ) { return ::hx::Val( x_offset ); }
		if (HX_FIELD_EQ(inName,"y_offset") ) { return ::hx::Val( y_offset ); }
		if (HX_FIELD_EQ(inName,"z_offset") ) { return ::hx::Val( z_offset ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"base_factor") ) { return ::hx::Val( base_factor ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PerlinNoise_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"P") ) { outValue = ( P ); return true; }
	}
	return false;
}

::hx::Val PerlinNoise_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"p_perm") ) { p_perm=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"x_offset") ) { x_offset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y_offset") ) { y_offset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z_offset") ) { z_offset=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"base_factor") ) { base_factor=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PerlinNoise_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"P") ) { P=ioValue.Cast< ::Array< int > >(); return true; }
	}
	return false;
}

void PerlinNoise_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("p_perm",5f,72,5e,c5));
	outFields->push(HX_("x_offset",ba,27,5c,9e));
	outFields->push(HX_("y_offset",d9,99,8e,d7));
	outFields->push(HX_("z_offset",f8,0b,c1,10));
	outFields->push(HX_("base_factor",7d,56,3a,d7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PerlinNoise_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(PerlinNoise_obj,p_perm),HX_("p_perm",5f,72,5e,c5)},
	{::hx::fsFloat,(int)offsetof(PerlinNoise_obj,x_offset),HX_("x_offset",ba,27,5c,9e)},
	{::hx::fsFloat,(int)offsetof(PerlinNoise_obj,y_offset),HX_("y_offset",d9,99,8e,d7)},
	{::hx::fsFloat,(int)offsetof(PerlinNoise_obj,z_offset),HX_("z_offset",f8,0b,c1,10)},
	{::hx::fsFloat,(int)offsetof(PerlinNoise_obj,base_factor),HX_("base_factor",7d,56,3a,d7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo PerlinNoise_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(void *) &PerlinNoise_obj::P,HX_("P",50,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String PerlinNoise_obj_sMemberFields[] = {
	HX_("p_perm",5f,72,5e,c5),
	HX_("x_offset",ba,27,5c,9e),
	HX_("y_offset",d9,99,8e,d7),
	HX_("z_offset",f8,0b,c1,10),
	HX_("base_factor",7d,56,3a,d7),
	HX_("fill",83,ce,bb,43),
	HX_("noise",9a,8f,c2,9f),
	HX_("setSeed",33,c6,d4,11),
	::String(null()) };

static void PerlinNoise_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PerlinNoise_obj::P,"P");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PerlinNoise_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PerlinNoise_obj::P,"P");
};

#endif

::hx::Class PerlinNoise_obj::__mClass;

static ::String PerlinNoise_obj_sStaticFields[] = {
	HX_("P",50,00,00,00),
	::String(null())
};

void PerlinNoise_obj::__register()
{
	PerlinNoise_obj _hx_dummy;
	PerlinNoise_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.PerlinNoise",ea,ce,4a,05);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PerlinNoise_obj::__GetStatic;
	__mClass->mSetStaticField = &PerlinNoise_obj::__SetStatic;
	__mClass->mMarkFunc = PerlinNoise_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PerlinNoise_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PerlinNoise_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PerlinNoise_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PerlinNoise_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PerlinNoise_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PerlinNoise_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PerlinNoise_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7ac11d622634610f_21_boot)
HXDLIN(  21)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20)))))
            			->setFixed(1,HX_("statics",05,3c,65,36), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("P",50,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:ConstantName",20,38,cc,f4))))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ac11d622634610f_24_boot)
HXDLIN(  24)		P = ::Array_obj< int >::fromData( _hx_array_data_054aceea_10,512);
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
