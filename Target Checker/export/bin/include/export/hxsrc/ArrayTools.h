#ifndef INCLUDED_export_hxsrc_ArrayTools
#define INCLUDED_export_hxsrc_ArrayTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(_hx_export,hxsrc,ArrayTools)

namespace _hx_export{
namespace hxsrc{


class HXCPP_CLASS_ATTRIBUTES ArrayTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ArrayTools_obj OBJ_;
		ArrayTools_obj();

	public:
		enum { _hx_ClassId = 0x6f16f01e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="export.hxsrc.ArrayTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"export.hxsrc.ArrayTools"); }

		inline static ::hx::ObjectPtr< ArrayTools_obj > __new() {
			::hx::ObjectPtr< ArrayTools_obj > __this = new ArrayTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ArrayTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ArrayTools_obj *__this = (ArrayTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ArrayTools_obj), false, "export.hxsrc.ArrayTools"));
			*(void **)__this = ArrayTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ArrayTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ArrayTools",e2,ad,0c,05); }

		static  ::Dynamic pop( ::Dynamic array);
		static ::Dynamic pop_dyn();

		static  ::Dynamic shift( ::Dynamic array);
		static ::Dynamic shift_dyn();

		static  ::Dynamic addElement( ::Dynamic array, ::Dynamic element);
		static ::Dynamic addElement_dyn();

		static  ::Dynamic arraySize( ::Dynamic array);
		static ::Dynamic arraySize_dyn();

};

} // end namespace export
} // end namespace hxsrc

#endif /* INCLUDED_export_hxsrc_ArrayTools */ 
