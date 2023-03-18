#ifndef INCLUDED_export_hxsrc_Main
#define INCLUDED_export_hxsrc_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(_hx_export,hxsrc,Main)

namespace _hx_export{
namespace hxsrc{


class HXCPP_CLASS_ATTRIBUTES Main_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Main_obj OBJ_;
		Main_obj();

	public:
		enum { _hx_ClassId = 0x3f721195 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="export.hxsrc.Main")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"export.hxsrc.Main"); }

		inline static ::hx::ObjectPtr< Main_obj > __new() {
			::hx::ObjectPtr< Main_obj > __this = new Main_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Main_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Main_obj *__this = (Main_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Main_obj), false, "export.hxsrc.Main"));
			*(void **)__this = Main_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Main",59,64,2f,33); }

		static void __boot();
		static  ::Dynamic target;
		static void main();
		static ::Dynamic main_dyn();

};

} // end namespace export
} // end namespace hxsrc

#endif /* INCLUDED_export_hxsrc_Main */ 
