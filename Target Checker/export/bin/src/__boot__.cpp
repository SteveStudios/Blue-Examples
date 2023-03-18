#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_export_hxsrc_SocketTools
#include <export/hxsrc/SocketTools.h>
#endif
#ifndef INCLUDED_export_hxsrc_MathTools
#include <export/hxsrc/MathTools.h>
#endif
#ifndef INCLUDED_export_hxsrc_Main
#include <export/hxsrc/Main.h>
#endif
#ifndef INCLUDED_haxe_SysTools
#include <haxe/SysTools.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
#ifndef INCLUDED_sys_net__Socket_SocketOutput
#include <sys/net/_Socket/SocketOutput.h>
#endif
#ifndef INCLUDED_sys_net__Socket_SocketInput
#include <sys/net/_Socket/SocketInput.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayIterator
#include <haxe/iterators/ArrayIterator.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_exceptions_NotImplementedException
#include <haxe/exceptions/NotImplementedException.h>
#endif
#ifndef INCLUDED_haxe_exceptions_PosException
#include <haxe/exceptions/PosException.h>
#endif
#ifndef INCLUDED_haxe_ValueException
#include <haxe/ValueException.h>
#endif
#ifndef INCLUDED_haxe_NativeStackTrace
#include <haxe/NativeStackTrace.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_export_hxsrc_System
#include <export/hxsrc/System.h>
#endif
#ifndef INCLUDED_export_hxsrc_Strings
#include <export/hxsrc/Strings.h>
#endif
#ifndef INCLUDED_export_hxsrc_File
#include <export/hxsrc/File.h>
#endif
#ifndef INCLUDED_export_hxsrc_ArrayTools
#include <export/hxsrc/ArrayTools.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif

void __files__boot();

void __boot_all()
{
__files__boot();
::hx::RegisterResources( ::hx::GetResources() );
::haxe::io::Error_obj::__register();
::haxe::io::Encoding_obj::__register();
::sys::net::Host_obj::__register();
::_hx_export::hxsrc::SocketTools_obj::__register();
::_hx_export::hxsrc::MathTools_obj::__register();
::_hx_export::hxsrc::Main_obj::__register();
::haxe::SysTools_obj::__register();
::sys::net::Socket_obj::__register();
::sys::net::_Socket::SocketOutput_obj::__register();
::sys::net::_Socket::SocketInput_obj::__register();
::sys::io::FileOutput_obj::__register();
::sys::io::FileInput_obj::__register();
::sys::io::File_obj::__register();
::haxe::iterators::ArrayIterator_obj::__register();
::haxe::io::Output_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::io::Bytes_obj::__register();
::haxe::exceptions::NotImplementedException_obj::__register();
::haxe::exceptions::PosException_obj::__register();
::haxe::ValueException_obj::__register();
::haxe::NativeStackTrace_obj::__register();
::haxe::Exception_obj::__register();
::_hx_export::hxsrc::System_obj::__register();
::_hx_export::hxsrc::Strings_obj::__register();
::_hx_export::hxsrc::File_obj::__register();
::_hx_export::hxsrc::ArrayTools_obj::__register();
::cpp::Lib_obj::__register();
::Sys_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Std_obj::__register();
::Reflect_obj::__register();
::EReg_obj::__register();
::haxe::io::Error_obj::__boot();
::haxe::io::Encoding_obj::__boot();
::sys::net::Host_obj::__init__();
::haxe::SysTools_obj::__boot();
::_hx_export::hxsrc::Main_obj::__boot();
::_hx_export::hxsrc::MathTools_obj::__boot();
::_hx_export::hxsrc::SocketTools_obj::__boot();
::sys::net::Host_obj::__boot();
}

