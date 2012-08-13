/*
            File : DBPro/Matrix1Util_09.hpp
       Generated : 2011/09/02 20:15:24
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_09_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_09_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    DWORD __cdecl GetBackgroundColor();
    int __cdecl GetCursorX();
    int __cdecl GetCursorY();
    DWORD __cdecl GetForegroundColor();
    int __cdecl GetMatrixColumns(int Matrix);
    int __cdecl GetMatrixRows(int Matrix);
    void __cdecl Ink(DWORD ForegroundColor);
}

#endif
