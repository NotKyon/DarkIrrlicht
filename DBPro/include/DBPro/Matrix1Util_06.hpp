/*
            File : DBPro/Matrix1Util_06.hpp
       Generated : 2011/09/02 20:15:19
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_06_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_06_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    void __cdecl AssertError(DWORD Booleanresult,LPCSTR Errormsg);
    void __cdecl AssertError(DWORD Booleanresult,LPCSTR Errormsg,LPCSTR Errortitle);
    void __cdecl RaiseError(int Errorno);
    void __cdecl RaiseError(int Errorno,LPCSTR Errortitle);
    void __cdecl ReportError(LPCSTR Errormsg);
    void __cdecl ReportError(LPCSTR Errormsg,LPCSTR Errortitle);
    void __cdecl SetDefaultErrorTitle();
    void __cdecl SetDefaultErrorTitle(LPCSTR Errortitle);
}

#endif
