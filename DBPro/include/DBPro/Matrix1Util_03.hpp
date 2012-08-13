/*
            File : DBPro/Matrix1Util_03.hpp
       Generated : 2011/09/02 20:15:14
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_03_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_03_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    void __cdecl DeleteSysobj(int Sysobj);
    int __cdecl FindFreeSysobj();
    int __cdecl FindFreeSysobj(int Start,int Rangesize);
    LPSTR __cdecl GetSysobjName(int Sysobj);
    DWORD __cdecl IsSysobjLocked(int Sysobj);
    void __cdecl LockSysobj(int Sysobj);
    void __cdecl MakeSysobjMutex(int Sysobj,LPCSTR Name);
    void __cdecl ReleaseReservedSysobj(int Sysobjid);
    int __cdecl ReserveFreeSysobj();
    int __cdecl ReserveFreeSysobj(int Start,int Rangesize);
    DWORD __cdecl SysobjExist(int Sysobj);
    int __cdecl SysobjReserved(int Sysobjid);
    DWORD __cdecl TryLockSysobj(int Sysobj);
    DWORD __cdecl TryLockSysobj(int Sysobj,int Timeout);
    void __cdecl UnlockSysobj(int Sysobj);
}

#endif
