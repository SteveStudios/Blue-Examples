#include <hxcpp.h>

#ifndef INCLUDED_export_hxsrc_File
#include <export/hxsrc/File.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_68845ac6bb87ef79_5_read,"export.hxsrc.File","read",0x2a095854,"export.hxsrc.File.read","export/hxsrc/File.hx",5,0x17b4520c)
HX_LOCAL_STACK_FRAME(_hx_pos_68845ac6bb87ef79_9_write,"export.hxsrc.File","write",0x87c2be21,"export.hxsrc.File.write","export/hxsrc/File.hx",9,0x17b4520c)
namespace _hx_export{
namespace hxsrc{

void File_obj::__construct() { }

Dynamic File_obj::__CreateEmpty() { return new File_obj; }

void *File_obj::_hx_vtable = 0;

Dynamic File_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< File_obj > _hx_result = new File_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool File_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3ad7a7d8;
}

 ::Dynamic File_obj::read( ::Dynamic filename){
            	HX_STACKFRAME(&_hx_pos_68845ac6bb87ef79_5_read)
HXDLIN(   5)		return ::sys::io::File_obj::getContent(( (::String)(filename) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(File_obj,read,return )

void File_obj::write( ::Dynamic filename, ::Dynamic content){
            	HX_STACKFRAME(&_hx_pos_68845ac6bb87ef79_9_write)
HXDLIN(   9)		::sys::io::File_obj::saveContent(( (::String)(filename) ),( (::String)(content) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(File_obj,write,(void))


File_obj::File_obj()
{
}

bool File_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { outValue = read_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { outValue = write_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *File_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *File_obj_sStaticStorageInfo = 0;
#endif

::hx::Class File_obj::__mClass;

static ::String File_obj_sStaticFields[] = {
	HX_("read",56,4b,a7,4b),
	HX_("write",df,6c,59,d0),
	::String(null())
};

void File_obj::__register()
{
	File_obj _hx_dummy;
	File_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("export.hxsrc.File",30,74,69,18);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &File_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(File_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< File_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = File_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = File_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace export
} // end namespace hxsrc
