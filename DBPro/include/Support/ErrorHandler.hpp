/*
            File : Support/ErrorHandler.hpp
   DBPro release : 6.0
*/

#ifndef INCLUDE_GUARD_Support_ErrorHandler_hpp
#define INCLUDE_GUARD_Support_ErrorHandler_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#include <wtypes.h>

namespace DBPro
{
    void __cdecl RaiseError(int ErrorNo);
    int  __cdecl GetRuntimeError();
    void __cdecl SetErrorTitle(LPCSTR Title);
    void __cdecl ReportError(LPCSTR Message, ...);
    void __cdecl ReportError(LPCSTR Message, va_list Args);
}

#endif

