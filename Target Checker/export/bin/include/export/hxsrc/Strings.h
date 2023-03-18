#ifndef INCLUDED_export_hxsrc_Strings
#define INCLUDED_export_hxsrc_Strings

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(_hx_export,hxsrc,Strings)

namespace _hx_export{
namespace hxsrc{


class HXCPP_CLASS_ATTRIBUTES Strings_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Strings_obj OBJ_;
		Strings_obj();

	public:
		enum { _hx_ClassId = 0x4a01ea42 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="export.hxsrc.Strings")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"export.hxsrc.Strings"); }

		inline static ::hx::ObjectPtr< Strings_obj > __new() {
			::hx::ObjectPtr< Strings_obj > __this = new Strings_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Strings_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Strings_obj *__this = (Strings_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Strings_obj), false, "export.hxsrc.Strings"));
			*(void **)__this = Strings_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Strings_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Strings",62,b6,44,c6); }

		static int stringSize( ::Dynamic text);
		static ::Dynamic stringSize_dyn();

		static ::String stringReplace( ::Dynamic text, ::Dynamic toReplace, ::Dynamic replacement);
		static ::Dynamic stringReplace_dyn();

		static ::String stringSub( ::Dynamic text, ::Dynamic firstInt, ::Dynamic secondInt);
		static ::Dynamic stringSub_dyn();

};

} // end namespace export
} // end namespace hxsrc

#endif /* INCLUDED_export_hxsrc_Strings */ 
