#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_export_hxsrc_MathTools
#include <export/hxsrc/MathTools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7d634a121f524a12_7_arcsine,"export.hxsrc.MathTools","arcsine",0x8123b730,"export.hxsrc.MathTools.arcsine","export/hxsrc/MathTools.hx",7,0x4ee5c4e1)
HX_LOCAL_STACK_FRAME(_hx_pos_7d634a121f524a12_11_arccos,"export.hxsrc.MathTools","arccos",0x39ee4cc4,"export.hxsrc.MathTools.arccos","export/hxsrc/MathTools.hx",11,0x4ee5c4e1)
HX_LOCAL_STACK_FRAME(_hx_pos_7d634a121f524a12_15_cosine,"export.hxsrc.MathTools","cosine",0x57093e88,"export.hxsrc.MathTools.cosine","export/hxsrc/MathTools.hx",15,0x4ee5c4e1)
HX_LOCAL_STACK_FRAME(_hx_pos_7d634a121f524a12_19_sine,"export.hxsrc.MathTools","sine",0x681cd01c,"export.hxsrc.MathTools.sine","export/hxsrc/MathTools.hx",19,0x4ee5c4e1)
HX_LOCAL_STACK_FRAME(_hx_pos_7d634a121f524a12_23_floorValue,"export.hxsrc.MathTools","floorValue",0x499c1914,"export.hxsrc.MathTools.floorValue","export/hxsrc/MathTools.hx",23,0x4ee5c4e1)
HX_LOCAL_STACK_FRAME(_hx_pos_7d634a121f524a12_4_boot,"export.hxsrc.MathTools","boot",0x5ce4be01,"export.hxsrc.MathTools.boot","export/hxsrc/MathTools.hx",4,0x4ee5c4e1)
namespace _hx_export{
namespace hxsrc{

void MathTools_obj::__construct() { }

Dynamic MathTools_obj::__CreateEmpty() { return new MathTools_obj; }

void *MathTools_obj::_hx_vtable = 0;

Dynamic MathTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MathTools_obj > _hx_result = new MathTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MathTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x074716f3;
}

 ::Dynamic MathTools_obj::one;

 ::Dynamic MathTools_obj::arcsine( ::Dynamic x){
            	HX_STACKFRAME(&_hx_pos_7d634a121f524a12_7_arcsine)
HXDLIN(   7)		return ::Math_obj::asin(( (Float)(x) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MathTools_obj,arcsine,return )

 ::Dynamic MathTools_obj::arccos( ::Dynamic x){
            	HX_STACKFRAME(&_hx_pos_7d634a121f524a12_11_arccos)
HXDLIN(  11)		return ::Math_obj::acos(( (Float)(x) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MathTools_obj,arccos,return )

 ::Dynamic MathTools_obj::cosine( ::Dynamic x){
            	HX_STACKFRAME(&_hx_pos_7d634a121f524a12_15_cosine)
HXDLIN(  15)		return ::Math_obj::cos(( (Float)(x) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MathTools_obj,cosine,return )

 ::Dynamic MathTools_obj::sine( ::Dynamic x){
            	HX_STACKFRAME(&_hx_pos_7d634a121f524a12_19_sine)
HXDLIN(  19)		return ::Math_obj::sin(( (Float)(x) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MathTools_obj,sine,return )

 ::Dynamic MathTools_obj::floorValue( ::Dynamic x){
            	HX_STACKFRAME(&_hx_pos_7d634a121f524a12_23_floorValue)
HXDLIN(  23)		return ::Math_obj::floor(( (Float)(x) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MathTools_obj,floorValue,return )


MathTools_obj::MathTools_obj()
{
}

bool MathTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"one") ) { outValue = ( one ); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"sine") ) { outValue = sine_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"arccos") ) { outValue = arccos_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"cosine") ) { outValue = cosine_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"arcsine") ) { outValue = arcsine_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"floorValue") ) { outValue = floorValue_dyn(); return true; }
	}
	return false;
}

bool MathTools_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"one") ) { one=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MathTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo MathTools_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &MathTools_obj::one,HX_("one",66,9a,54,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void MathTools_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MathTools_obj::one,"one");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MathTools_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MathTools_obj::one,"one");
};

#endif

::hx::Class MathTools_obj::__mClass;

static ::String MathTools_obj_sStaticFields[] = {
	HX_("one",66,9a,54,00),
	HX_("arcsine",9f,25,50,a3),
	HX_("arccos",35,c1,07,ae),
	HX_("cosine",f9,b2,22,cb),
	HX_("sine",4d,96,53,4c),
	HX_("floorValue",05,1a,c7,c9),
	::String(null())
};

void MathTools_obj::__register()
{
	MathTools_obj _hx_dummy;
	MathTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("export.hxsrc.MathTools",ff,78,13,84);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MathTools_obj::__GetStatic;
	__mClass->mSetStaticField = &MathTools_obj::__SetStatic;
	__mClass->mMarkFunc = MathTools_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MathTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< MathTools_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MathTools_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MathTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MathTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MathTools_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7d634a121f524a12_4_boot)
HXDLIN(   4)		one = 1;
            	}
}

} // end namespace export
} // end namespace hxsrc
