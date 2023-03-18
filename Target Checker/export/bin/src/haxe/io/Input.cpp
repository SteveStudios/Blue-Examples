#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_exceptions_NotImplementedException
#include <haxe/exceptions/NotImplementedException.h>
#endif
#ifndef INCLUDED_haxe_exceptions_PosException
#include <haxe/exceptions/PosException.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_63b8fa1e9f95a159_51_readByte,"haxe.io.Input","readByte",0x4de8a3c2,"haxe.io.Input.readByte","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",51,0x854a6ecd)
HX_LOCAL_STACK_FRAME(_hx_pos_63b8fa1e9f95a159_92_close,"haxe.io.Input","close",0xfc421af4,"haxe.io.Input.close","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",92,0x854a6ecd)
HX_LOCAL_STACK_FRAME(_hx_pos_63b8fa1e9f95a159_176_readLine,"haxe.io.Input","readLine",0x54789cae,"haxe.io.Input.readLine","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",176,0x854a6ecd)
namespace haxe{
namespace io{

void Input_obj::__construct() { }

Dynamic Input_obj::__CreateEmpty() { return new Input_obj; }

void *Input_obj::_hx_vtable = 0;

Dynamic Input_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Input_obj > _hx_result = new Input_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Input_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x19e22056;
}

int Input_obj::readByte(){
            	HX_GC_STACKFRAME(&_hx_pos_63b8fa1e9f95a159_51_readByte)
HXDLIN(  51)		HX_STACK_DO_THROW( ::haxe::exceptions::NotImplementedException_obj::__alloc( HX_CTX ,null(),null(),::hx::SourceInfo(HX_("haxe/io/Input.hx",f4,10,5a,cd),51,HX_("haxe.io.Input",aa,0e,f5,9f),HX_("readByte",7e,f9,1a,69))));
HXDLIN(  51)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readByte,return )

void Input_obj::close(){
            	HX_STACKFRAME(&_hx_pos_63b8fa1e9f95a159_92_close)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,close,(void))

::String Input_obj::readLine(){
            	HX_GC_STACKFRAME(&_hx_pos_63b8fa1e9f95a159_176_readLine)
HXLINE( 177)		 ::haxe::io::BytesBuffer buf =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE( 178)		int last;
HXLINE( 179)		::String s;
HXLINE( 180)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 181)			while(true){
HXLINE( 181)				last = this->readByte();
HXDLIN( 181)				if (!((last != 10))) {
HXLINE( 181)					goto _hx_goto_2;
            				}
HXLINE( 182)				buf->b->push(last);
            			}
            			_hx_goto_2:;
HXLINE( 183)			s = buf->getBytes()->toString();
HXLINE( 184)			if (::hx::IsEq( s.charCodeAt((s.length - 1)),13 )) {
HXLINE( 185)				s = s.substr(0,-1);
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 186)				{
HXLINE( 186)					null();
            				}
HXDLIN( 186)				 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 180)				if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::haxe::io::Eof >())) {
HXLINE( 186)					 ::haxe::io::Eof e = ( ( ::haxe::io::Eof)(_g1) );
HXDLIN( 186)					{
HXLINE( 187)						s = buf->getBytes()->toString();
HXLINE( 188)						if ((s.length == 0)) {
HXLINE( 189)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            						}
            					}
            				}
            				else {
HXLINE( 180)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 191)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readLine,return )


Input_obj::Input_obj()
{
}

::hx::Val Input_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return ::hx::Val( readByte_dyn() ); }
		if (HX_FIELD_EQ(inName,"readLine") ) { return ::hx::Val( readLine_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Input_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Input_obj_sStaticStorageInfo = 0;
#endif

static ::String Input_obj_sMemberFields[] = {
	HX_("readByte",7e,f9,1a,69),
	HX_("close",b8,17,63,48),
	HX_("readLine",6a,f2,aa,6f),
	::String(null()) };

::hx::Class Input_obj::__mClass;

void Input_obj::__register()
{
	Input_obj _hx_dummy;
	Input_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.io.Input",aa,0e,f5,9f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Input_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Input_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Input_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Input_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
