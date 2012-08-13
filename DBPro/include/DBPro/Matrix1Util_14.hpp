/*
            File : DBPro/Matrix1Util_14.hpp
       Generated : 2011/09/02 20:15:28
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_14_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_14_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    int __cdecl ProcessorCount();
    LPSTR __cdecl ScancodeName(DWORD Scancode);
    int __cdecl WindowsIs64Bit();
    int __cdecl WindowsPlatform();
    LPSTR __cdecl WindowsUsername();
    int __cdecl WindowsVersion();
}

#endif
