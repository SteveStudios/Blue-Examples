#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_export_hxsrc_Strings
#include <export/hxsrc/Strings.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ffa8e530badc878e_7_stringSize,"export.hxsrc.Strings","stringSize",0x86890d52,"export.hxsrc.Strings.stringSize","export/hxsrc/Strings.hx",7,0xbe2b5372)
HX_LOCAL_STACK_FRAME(_hx_pos_ffa8e530badc878e_11_stringReplace,"export.hxsrc.Strings","stringReplace",0xc2f64c43,"export.hxsrc.Strings.stringReplace","export/hxsrc/Strings.hx",11,0xbe2b5372)
HX_LOCAL_STACK_FRAME(_hx_pos_ffa8e530badc878e_15_stringSub,"export.hxsrc.Strings","stringSub",0x8810ba0f,"export.hxsrc.Strings.stringSub","export/hxsrc/Strings.hx",15,0xbe2b5372)
namespace _hx_export{
namespace hxsrc{

void Strings_obj::__construct() { }

Dynamic Strings_obj::__CreateEmpty() { return new Strings_obj; }

void *Strings_obj::_hx_vtable = 0;

Dynamic Strings_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Strings_obj > _hx_result = new Strings_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Strings_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4a01ea42;
}

int Strings_obj::stringSize( ::Dynamic text){
            	HX_STACKFRAME(&_hx_pos_ffa8e530badc878e_7_stringSize)
HXDLIN(   7)		return ::Std_obj::string(text).length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Strings_obj,stringSize,return )

::String Strings_obj::stringReplace( ::Dynamic text, ::Dynamic toReplace, ::Dynamic replacement){
            	HX_STACKFRAME(&_hx_pos_ffa8e530badc878e_11_stringReplace)
HXDLIN(  11)		return ::StringTools_obj::replace(::Std_obj::string(text),( (::String)(toReplace) ),( (::String)(replacement) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,stringReplace,return )

::String Strings_obj::stringSub( ::Dynamic text, ::Dynamic firstInt, ::Dynamic secondInt){
            	HX_STACKFRAME(&_hx_pos_ffa8e530badc878e_15_stringSub)
HXDLIN(  15)		return ::Std_obj::string(text).substring(( (int)(firstInt) ),secondInt);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Strings_obj,stringSub,return )


Strings_obj::Strings_obj()
{
}

bool Strings_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"stringSub") ) { outValue = stringSub_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stringSize") ) { outValue = stringSize_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stringReplace") ) { outValue = stringReplace_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Strings_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Strings_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Strings_obj::__mClass;

static ::String Strings_obj_sStaticFields[] = {
	HX_("stringSize",32,32,50,fe),
	HX_("stringReplace",63,73,4d,81),
	HX_("stringSub",2f,d1,bd,c7),
	::String(null())
};

void Strings_obj::__register()
{
	Strings_obj _hx_dummy;
	Strings_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("export.hxsrc.Strings",4e,71,95,15);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Strings_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Strings_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Strings_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Strings_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Strings_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace export
} // end namespace hxsrc
