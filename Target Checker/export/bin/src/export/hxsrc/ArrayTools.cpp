#include <hxcpp.h>

#ifndef INCLUDED_export_hxsrc_ArrayTools
#include <export/hxsrc/ArrayTools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c102bb0ef8646651_4_pop,"export.hxsrc.ArrayTools","pop",0xa8cf2f99,"export.hxsrc.ArrayTools.pop","export/hxsrc/ArrayTools.hx",4,0x5c569a06)
HX_LOCAL_STACK_FRAME(_hx_pos_c102bb0ef8646651_9_shift,"export.hxsrc.ArrayTools","shift",0x943b508a,"export.hxsrc.ArrayTools.shift","export/hxsrc/ArrayTools.hx",9,0x5c569a06)
HX_LOCAL_STACK_FRAME(_hx_pos_c102bb0ef8646651_14_addElement,"export.hxsrc.ArrayTools","addElement",0xe1b6d993,"export.hxsrc.ArrayTools.addElement","export/hxsrc/ArrayTools.hx",14,0x5c569a06)
HX_LOCAL_STACK_FRAME(_hx_pos_c102bb0ef8646651_20_arraySize,"export.hxsrc.ArrayTools","arraySize",0x47148302,"export.hxsrc.ArrayTools.arraySize","export/hxsrc/ArrayTools.hx",20,0x5c569a06)
namespace _hx_export{
namespace hxsrc{

void ArrayTools_obj::__construct() { }

Dynamic ArrayTools_obj::__CreateEmpty() { return new ArrayTools_obj; }

void *ArrayTools_obj::_hx_vtable = 0;

Dynamic ArrayTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ArrayTools_obj > _hx_result = new ArrayTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ArrayTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6f16f01e;
}

 ::Dynamic ArrayTools_obj::pop( ::Dynamic array){
            	HX_STACKFRAME(&_hx_pos_c102bb0ef8646651_4_pop)
HXLINE(   5)		array->__Field(HX_("pop",91,5d,55,00),::hx::paccDynamic)();
HXLINE(   6)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTools_obj,pop,return )

 ::Dynamic ArrayTools_obj::shift( ::Dynamic array){
            	HX_STACKFRAME(&_hx_pos_c102bb0ef8646651_9_shift)
HXLINE(  10)		array->__Field(HX_("shift",82,ec,22,7c),::hx::paccDynamic)();
HXLINE(  11)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTools_obj,shift,return )

 ::Dynamic ArrayTools_obj::addElement( ::Dynamic array, ::Dynamic element){
            	HX_STACKFRAME(&_hx_pos_c102bb0ef8646651_14_addElement)
HXLINE(  15)		array->__Field(HX_("push",da,11,61,4a),::hx::paccDynamic)(element);
HXLINE(  16)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayTools_obj,addElement,return )

 ::Dynamic ArrayTools_obj::arraySize( ::Dynamic array){
            	HX_STACKFRAME(&_hx_pos_c102bb0ef8646651_20_arraySize)
HXDLIN(  20)		return  ::Dynamic(array->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTools_obj,arraySize,return )


ArrayTools_obj::ArrayTools_obj()
{
}

bool ArrayTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pop") ) { outValue = pop_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shift") ) { outValue = shift_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"arraySize") ) { outValue = arraySize_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addElement") ) { outValue = addElement_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ArrayTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ArrayTools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ArrayTools_obj::__mClass;

static ::String ArrayTools_obj_sStaticFields[] = {
	HX_("pop",91,5d,55,00),
	HX_("shift",82,ec,22,7c),
	HX_("addElement",9b,da,de,6d),
	HX_("arraySize",fa,7a,c5,95),
	::String(null())
};

void ArrayTools_obj::__register()
{
	ArrayTools_obj _hx_dummy;
	ArrayTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("export.hxsrc.ArrayTools",76,8e,6a,b5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArrayTools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ArrayTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ArrayTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace export
} // end namespace hxsrc
