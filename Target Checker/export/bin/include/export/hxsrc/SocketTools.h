#ifndef INCLUDED_export_hxsrc_SocketTools
#define INCLUDED_export_hxsrc_SocketTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(_hx_export,hxsrc,SocketTools)
HX_DECLARE_CLASS2(sys,net,Socket)

namespace _hx_export{
namespace hxsrc{


class HXCPP_CLASS_ATTRIBUTES SocketTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SocketTools_obj OBJ_;
		SocketTools_obj();

	public:
		enum { _hx_ClassId = 0x24266928 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="export.hxsrc.SocketTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"export.hxsrc.SocketTools"); }

		inline static ::hx::ObjectPtr< SocketTools_obj > __new() {
			::hx::ObjectPtr< SocketTools_obj > __this = new SocketTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SocketTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SocketTools_obj *__this = (SocketTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SocketTools_obj), false, "export.hxsrc.SocketTools"));
			*(void **)__this = SocketTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SocketTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SocketTools",48,c5,91,14); }

		static void __boot();
		static ::Array< ::Dynamic> socketsArray;
		static ::cpp::VirtualArray trackedSocketsArray;
		static void socketMake( ::Dynamic tag);
		static ::Dynamic socketMake_dyn();

		static void socketConnect( ::Dynamic tag, ::Dynamic host, ::Dynamic port);
		static ::Dynamic socketConnect_dyn();

		static void socketWrite( ::Dynamic tag, ::Dynamic data);
		static ::Dynamic socketWrite_dyn();

		static ::String socketRead( ::Dynamic tag);
		static ::Dynamic socketRead_dyn();

		static void socketDestroy( ::Dynamic tag);
		static ::Dynamic socketDestroy_dyn();

};

} // end namespace export
} // end namespace hxsrc

#endif /* INCLUDED_export_hxsrc_SocketTools */ 
