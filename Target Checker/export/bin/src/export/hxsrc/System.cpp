#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_export_hxsrc_System
#include <export/hxsrc/System.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7c225832da6f6ee8_5_runcmd,"export.hxsrc.System","runcmd",0x9814077a,"export.hxsrc.System.runcmd","export/hxsrc/System.hx",5,0xc4f039f9)
HX_LOCAL_STACK_FRAME(_hx_pos_7c225832da6f6ee8_9_shutdown,"export.hxsrc.System","shutdown",0x77c0fcc1,"export.hxsrc.System.shutdown","export/hxsrc/System.hx",9,0xc4f039f9)
HX_LOCAL_STACK_FRAME(_hx_pos_7c225832da6f6ee8_13_varTrace,"export.hxsrc.System","varTrace",0x6993ba49,"export.hxsrc.System.varTrace","export/hxsrc/System.hx",13,0xc4f039f9)
HX_LOCAL_STACK_FRAME(_hx_pos_7c225832da6f6ee8_16_varRead,"export.hxsrc.System","varRead",0x62fcc412,"export.hxsrc.System.varRead","export/hxsrc/System.hx",16,0xc4f039f9)
namespace _hx_export{
namespace hxsrc{

void System_obj::__construct() { }

Dynamic System_obj::__CreateEmpty() { return new System_obj; }

void *System_obj::_hx_vtable = 0;

Dynamic System_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< System_obj > _hx_result = new System_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool System_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x13740b67;
}

void System_obj::runcmd( ::Dynamic command){
            	HX_STACKFRAME(&_hx_pos_7c225832da6f6ee8_5_runcmd)
HXDLIN(   5)		::Sys_obj::command(( (::String)(command) ),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,runcmd,(void))

void System_obj::shutdown( ::Dynamic exitCode){
            	HX_STACKFRAME(&_hx_pos_7c225832da6f6ee8_9_shutdown)
HXDLIN(   9)		::Sys_obj::exit(( (int)(exitCode) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,shutdown,(void))

void System_obj::varTrace( ::Dynamic variable){
            	HX_STACKFRAME(&_hx_pos_7c225832da6f6ee8_13_varTrace)
HXDLIN(  13)		::Sys_obj::println(variable);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,varTrace,(void))

::String System_obj::varRead( ::Dynamic prompt){
            	HX_STACKFRAME(&_hx_pos_7c225832da6f6ee8_16_varRead)
HXLINE(  17)		::Sys_obj::print(prompt);
HXLINE(  18)		return ::Sys_obj::_hx_stdin()->readLine();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,varRead,return )


System_obj::System_obj()
{
}

bool System_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"runcmd") ) { outValue = runcmd_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"varRead") ) { outValue = varRead_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shutdown") ) { outValue = shutdown_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"varTrace") ) { outValue = varTrace_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *System_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *System_obj_sStaticStorageInfo = 0;
#endif

::hx::Class System_obj::__mClass;

static ::String System_obj_sStaticFields[] = {
	HX_("runcmd",0f,f8,91,3b),
	HX_("shutdown",96,fc,0b,6b),
	HX_("varTrace",1e,ba,de,5c),
	HX_("varRead",dd,55,b1,cd),
	::String(null())
};

void System_obj::__register()
{
	System_obj _hx_dummy;
	System_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("export.hxsrc.System",a3,11,8c,8a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &System_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(System_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< System_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = System_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = System_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace export
} // end namespace hxsrc
