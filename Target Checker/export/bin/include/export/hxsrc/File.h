#ifndef INCLUDED_export_hxsrc_File
#define INCLUDED_export_hxsrc_File

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(_hx_export,hxsrc,File)

namespace _hx_export{
namespace hxsrc{


class HXCPP_CLASS_ATTRIBUTES File_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef File_obj OBJ_;
		File_obj();

	public:
		enum { _hx_ClassId = 0x3ad7a7d8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="export.hxsrc.File")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"export.hxsrc.File"); }

		inline static ::hx::ObjectPtr< File_obj > __new() {
			::hx::ObjectPtr< File_obj > __this = new File_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< File_obj > __alloc(::hx::Ctx *_hx_ctx) {
			File_obj *__this = (File_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(File_obj), false, "export.hxsrc.File"));
			*(void **)__this = File_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~File_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("File",9c,fa,94,2e); }

		static  ::Dynamic read( ::Dynamic filename);
		static ::Dynamic read_dyn();

		static void write( ::Dynamic filename, ::Dynamic content);
		static ::Dynamic write_dyn();

};

} // end namespace export
} // end namespace hxsrc

#endif /* INCLUDED_export_hxsrc_File */ 
