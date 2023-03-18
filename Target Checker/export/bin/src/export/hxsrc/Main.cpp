#include <hxcpp.h>

#ifndef INCLUDED_export_hxsrc_Main
#include <export/hxsrc/Main.h>
#endif
#ifndef INCLUDED_export_hxsrc_System
#include <export/hxsrc/System.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9b14cff1bc5b74e5_13_main,"export.hxsrc.Main","main",0x3e346e5a,"export.hxsrc.Main.main","export/hxsrc/Main.hx",13,0x53aedc6f)
HX_LOCAL_STACK_FRAME(_hx_pos_9b14cff1bc5b74e5_12_boot,"export.hxsrc.Main","boot",0x36f9ba53,"export.hxsrc.Main.boot","export/hxsrc/Main.hx",12,0x53aedc6f)
namespace _hx_export{
namespace hxsrc{

void Main_obj::__construct() { }

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3f721195;
}

 ::Dynamic Main_obj::target;

void Main_obj::main(){
            	HX_STACKFRAME(&_hx_pos_9b14cff1bc5b74e5_13_main)
HXLINE(  14)		::_hx_export::hxsrc::Main_obj::target = HX_("haxe",26,34,08,45);
HXLINE(  15)		::_hx_export::hxsrc::System_obj::varTrace(::_hx_export::hxsrc::Main_obj::target);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { outValue = ( target ); return true; }
	}
	return false;
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Main_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Main_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Main_obj::target,HX_("target",51,f3,ec,86)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Main_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::target,"target");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Main_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::target,"target");
};

#endif

::hx::Class Main_obj::__mClass;

static ::String Main_obj_sStaticFields[] = {
	HX_("target",51,f3,ec,86),
	HX_("main",39,38,56,48),
	::String(null())
};

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("export.hxsrc.Main",ed,dd,03,1d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = Main_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Main_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Main_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Main_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Main_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9b14cff1bc5b74e5_12_boot)
HXDLIN(  12)		target = HX_("NULL",87,66,cf,33);
            	}
}

} // end namespace export
} // end namespace hxsrc
