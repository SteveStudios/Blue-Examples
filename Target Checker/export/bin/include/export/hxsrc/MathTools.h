#ifndef INCLUDED_export_hxsrc_MathTools
#define INCLUDED_export_hxsrc_MathTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(_hx_export,hxsrc,MathTools)

namespace _hx_export{
namespace hxsrc{


class HXCPP_CLASS_ATTRIBUTES MathTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MathTools_obj OBJ_;
		MathTools_obj();

	public:
		enum { _hx_ClassId = 0x074716f3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="export.hxsrc.MathTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"export.hxsrc.MathTools"); }

		inline static ::hx::ObjectPtr< MathTools_obj > __new() {
			::hx::ObjectPtr< MathTools_obj > __this = new MathTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< MathTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			MathTools_obj *__this = (MathTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MathTools_obj), false, "export.hxsrc.MathTools"));
			*(void **)__this = MathTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MathTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MathTools",13,2b,ed,32); }

		static void __boot();
		static  ::Dynamic one;
		static  ::Dynamic arcsine( ::Dynamic x);
		static ::Dynamic arcsine_dyn();

		static  ::Dynamic arccos( ::Dynamic x);
		static ::Dynamic arccos_dyn();

		static  ::Dynamic cosine( ::Dynamic x);
		static ::Dynamic cosine_dyn();

		static  ::Dynamic sine( ::Dynamic x);
		static ::Dynamic sine_dyn();

		static  ::Dynamic floorValue( ::Dynamic x);
		static ::Dynamic floorValue_dyn();

};

} // end namespace export
} // end namespace hxsrc

#endif /* INCLUDED_export_hxsrc_MathTools */ 
