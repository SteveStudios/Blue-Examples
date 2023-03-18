#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_export_hxsrc_SocketTools
#include <export/hxsrc/SocketTools.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fd3f0a5cb42fee99_10_socketMake,"export.hxsrc.SocketTools","socketMake",0x39002b3b,"export.hxsrc.SocketTools.socketMake","export/hxsrc/SocketTools.hx",10,0x2594bb4c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd3f0a5cb42fee99_16_socketConnect,"export.hxsrc.SocketTools","socketConnect",0xb3c858bd,"export.hxsrc.SocketTools.socketConnect","export/hxsrc/SocketTools.hx",16,0x2594bb4c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd3f0a5cb42fee99_26_socketWrite,"export.hxsrc.SocketTools","socketWrite",0x74629ef2,"export.hxsrc.SocketTools.socketWrite","export/hxsrc/SocketTools.hx",26,0x2594bb4c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd3f0a5cb42fee99_34_socketRead,"export.hxsrc.SocketTools","socketRead",0x3c513ca3,"export.hxsrc.SocketTools.socketRead","export/hxsrc/SocketTools.hx",34,0x2594bb4c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd3f0a5cb42fee99_44_socketDestroy,"export.hxsrc.SocketTools","socketDestroy",0xc2ce49cd,"export.hxsrc.SocketTools.socketDestroy","export/hxsrc/SocketTools.hx",44,0x2594bb4c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd3f0a5cb42fee99_7_boot,"export.hxsrc.SocketTools","boot",0x398ed0ac,"export.hxsrc.SocketTools.boot","export/hxsrc/SocketTools.hx",7,0x2594bb4c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd3f0a5cb42fee99_8_boot,"export.hxsrc.SocketTools","boot",0x398ed0ac,"export.hxsrc.SocketTools.boot","export/hxsrc/SocketTools.hx",8,0x2594bb4c)
namespace _hx_export{
namespace hxsrc{

void SocketTools_obj::__construct() { }

Dynamic SocketTools_obj::__CreateEmpty() { return new SocketTools_obj; }

void *SocketTools_obj::_hx_vtable = 0;

Dynamic SocketTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SocketTools_obj > _hx_result = new SocketTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SocketTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x24266928;
}

::Array< ::Dynamic> SocketTools_obj::socketsArray;

::cpp::VirtualArray SocketTools_obj::trackedSocketsArray;

void SocketTools_obj::socketMake( ::Dynamic tag){
            	HX_GC_STACKFRAME(&_hx_pos_fd3f0a5cb42fee99_10_socketMake)
HXLINE(  11)		::Array< ::Dynamic> _hx_tmp = ::_hx_export::hxsrc::SocketTools_obj::socketsArray;
HXDLIN(  11)		_hx_tmp->push( ::sys::net::Socket_obj::__alloc( HX_CTX ));
HXLINE(  12)		::_hx_export::hxsrc::SocketTools_obj::trackedSocketsArray->push(tag);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SocketTools_obj,socketMake,(void))

void SocketTools_obj::socketConnect( ::Dynamic tag, ::Dynamic host, ::Dynamic port){
            	HX_GC_STACKFRAME(&_hx_pos_fd3f0a5cb42fee99_16_socketConnect)
HXDLIN(  16)		int _g = 0;
HXDLIN(  16)		int _g1 = ::_hx_export::hxsrc::SocketTools_obj::trackedSocketsArray->get_length();
HXDLIN(  16)		while((_g < _g1)){
HXDLIN(  16)			_g = (_g + 1);
HXDLIN(  16)			int i = (_g - 1);
HXLINE(  17)			::String _hx_tmp = ::Std_obj::string(::_hx_export::hxsrc::SocketTools_obj::trackedSocketsArray->__get(i));
HXDLIN(  17)			if ((_hx_tmp == ::Std_obj::string(tag))) {
HXLINE(  18)				::_hx_export::hxsrc::SocketTools_obj::socketsArray->__get(i).StaticCast<  ::sys::net::Socket >()->setBlocking(true);
HXLINE(  19)				 ::sys::net::Socket _hx_tmp = ::_hx_export::hxsrc::SocketTools_obj::socketsArray->__get(i).StaticCast<  ::sys::net::Socket >();
HXDLIN(  19)				_hx_tmp->connect( ::sys::net::Host_obj::__alloc( HX_CTX ,( (::String)(host) )),( (int)(port) ));
HXLINE(  20)				goto _hx_goto_1;
            			}
            		}
            		_hx_goto_1:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SocketTools_obj,socketConnect,(void))

void SocketTools_obj::socketWrite( ::Dynamic tag, ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_fd3f0a5cb42fee99_26_socketWrite)
HXDLIN(  26)		int _g = 0;
HXDLIN(  26)		int _g1 = ::_hx_export::hxsrc::SocketTools_obj::trackedSocketsArray->get_length();
HXDLIN(  26)		while((_g < _g1)){
HXDLIN(  26)			_g = (_g + 1);
HXDLIN(  26)			int i = (_g - 1);
HXLINE(  27)			::String _hx_tmp = ::Std_obj::string(::_hx_export::hxsrc::SocketTools_obj::trackedSocketsArray->__get(i));
HXDLIN(  27)			if ((_hx_tmp == ::Std_obj::string(tag))) {
HXLINE(  28)				::_hx_export::hxsrc::SocketTools_obj::socketsArray->__get(i).StaticCast<  ::sys::net::Socket >()->write(( (::String)(data) ));
HXLINE(  29)				goto _hx_goto_3;
            			}
            		}
            		_hx_goto_3:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SocketTools_obj,socketWrite,(void))

::String SocketTools_obj::socketRead( ::Dynamic tag){
            	HX_STACKFRAME(&_hx_pos_fd3f0a5cb42fee99_34_socketRead)
HXLINE(  35)		{
HXLINE(  35)			int _g = 0;
HXDLIN(  35)			int _g1 = ::_hx_export::hxsrc::SocketTools_obj::trackedSocketsArray->get_length();
HXDLIN(  35)			while((_g < _g1)){
HXLINE(  35)				_g = (_g + 1);
HXDLIN(  35)				int i = (_g - 1);
HXLINE(  36)				::String _hx_tmp = ::Std_obj::string(::_hx_export::hxsrc::SocketTools_obj::trackedSocketsArray->__get(i));
HXDLIN(  36)				if ((_hx_tmp == ::Std_obj::string(tag))) {
HXLINE(  37)					return ::_hx_export::hxsrc::SocketTools_obj::socketsArray->__get(i).StaticCast<  ::sys::net::Socket >()->read();
            				}
            			}
            		}
HXLINE(  40)		return HX_("",00,00,00,00);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SocketTools_obj,socketRead,return )

void SocketTools_obj::socketDestroy( ::Dynamic tag){
            	HX_STACKFRAME(&_hx_pos_fd3f0a5cb42fee99_44_socketDestroy)
HXDLIN(  44)		int _g = 0;
HXDLIN(  44)		int _g1 = ::_hx_export::hxsrc::SocketTools_obj::trackedSocketsArray->get_length();
HXDLIN(  44)		while((_g < _g1)){
HXDLIN(  44)			_g = (_g + 1);
HXDLIN(  44)			int i = (_g - 1);
HXLINE(  45)			::String _hx_tmp = ::Std_obj::string(::_hx_export::hxsrc::SocketTools_obj::trackedSocketsArray->__get(i));
HXDLIN(  45)			if ((_hx_tmp == ::Std_obj::string(tag))) {
HXLINE(  46)				::_hx_export::hxsrc::SocketTools_obj::socketsArray->__get(i).StaticCast<  ::sys::net::Socket >()->close();
HXLINE(  47)				goto _hx_goto_7;
            			}
            		}
            		_hx_goto_7:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SocketTools_obj,socketDestroy,(void))


SocketTools_obj::SocketTools_obj()
{
}

bool SocketTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"socketMake") ) { outValue = socketMake_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"socketRead") ) { outValue = socketRead_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"socketWrite") ) { outValue = socketWrite_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"socketsArray") ) { outValue = ( socketsArray ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"socketConnect") ) { outValue = socketConnect_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"socketDestroy") ) { outValue = socketDestroy_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"trackedSocketsArray") ) { outValue = ( trackedSocketsArray ); return true; }
	}
	return false;
}

bool SocketTools_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"socketsArray") ) { socketsArray=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"trackedSocketsArray") ) { trackedSocketsArray=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SocketTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo SocketTools_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &SocketTools_obj::socketsArray,HX_("socketsArray",19,30,8a,0d)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &SocketTools_obj::trackedSocketsArray,HX_("trackedSocketsArray",e3,32,cb,48)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void SocketTools_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SocketTools_obj::socketsArray,"socketsArray");
	HX_MARK_MEMBER_NAME(SocketTools_obj::trackedSocketsArray,"trackedSocketsArray");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SocketTools_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SocketTools_obj::socketsArray,"socketsArray");
	HX_VISIT_MEMBER_NAME(SocketTools_obj::trackedSocketsArray,"trackedSocketsArray");
};

#endif

::hx::Class SocketTools_obj::__mClass;

static ::String SocketTools_obj_sStaticFields[] = {
	HX_("socketsArray",19,30,8a,0d),
	HX_("trackedSocketsArray",e3,32,cb,48),
	HX_("socketMake",41,47,d1,b7),
	HX_("socketConnect",77,04,88,13),
	HX_("socketWrite",2c,08,8a,ec),
	HX_("socketRead",a9,58,22,bb),
	HX_("socketDestroy",87,f5,8d,22),
	::String(null())
};

void SocketTools_obj::__register()
{
	SocketTools_obj _hx_dummy;
	SocketTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("export.hxsrc.SocketTools",34,66,58,b6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SocketTools_obj::__GetStatic;
	__mClass->mSetStaticField = &SocketTools_obj::__SetStatic;
	__mClass->mMarkFunc = SocketTools_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SocketTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SocketTools_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SocketTools_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SocketTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SocketTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SocketTools_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_fd3f0a5cb42fee99_7_boot)
HXDLIN(   7)		socketsArray = ::Array_obj< ::Dynamic>::__new(0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_fd3f0a5cb42fee99_8_boot)
HXDLIN(   8)		trackedSocketsArray = ::cpp::VirtualArray_obj::__new(0);
            	}
}

} // end namespace export
} // end namespace hxsrc
