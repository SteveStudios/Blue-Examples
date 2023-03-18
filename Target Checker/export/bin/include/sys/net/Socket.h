#ifndef INCLUDED_sys_net_Socket
#define INCLUDED_sys_net_Socket

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS2(sys,net,Host)
HX_DECLARE_CLASS2(sys,net,Socket)

namespace sys{
namespace net{


class HXCPP_CLASS_ATTRIBUTES Socket_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Socket_obj OBJ_;
		Socket_obj();

	public:
		enum { _hx_ClassId = 0x70c71ec3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="sys.net.Socket")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"sys.net.Socket"); }
		static ::hx::ObjectPtr< Socket_obj > __new();
		static ::hx::ObjectPtr< Socket_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Socket_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Socket",d3,ff,da,5a); }

		 ::Dynamic __s;
		Float _hx___timeout;
		bool _hx___blocking;
		bool _hx___fastSend;
		 ::haxe::io::Input input;
		 ::haxe::io::Output output;
		void init();
		::Dynamic init_dyn();

		void close();
		::Dynamic close_dyn();

		::String read();
		::Dynamic read_dyn();

		void write(::String content);
		::Dynamic write_dyn();

		void connect( ::sys::net::Host host,int port);
		::Dynamic connect_dyn();

		void setTimeout(Float timeout);
		::Dynamic setTimeout_dyn();

		void setBlocking(bool b);
		::Dynamic setBlocking_dyn();

		void setFastSend(bool b);
		::Dynamic setFastSend_dyn();

};

} // end namespace sys
} // end namespace net

#endif /* INCLUDED_sys_net_Socket */ 
