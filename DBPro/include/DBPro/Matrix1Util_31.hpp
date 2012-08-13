/*
            File : DBPro/Matrix1Util_31.hpp
       Generated : 2011/09/02 20:15:54
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_31_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_31_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    void __cdecl ClearLookup(int LookupId);
    void __cdecl CombineLookup(int SourceLookupId,int TargetLookupId);
    void __cdecl DeleteLookup(int LookupId);
    void __cdecl DeleteLookup(int LookupId,LPCSTR Key);
    void __cdecl DuplicateLookup(int SourceLookupId,int TargetLookupId);
    int __cdecl FindFreeLookup();
    int __cdecl FindFreeLookup(int RangeStart,int RangeSize);
    void __cdecl FirstLookup(int LookupId);
    int __cdecl GetLookupGetMode(int LookupId);
    int __cdecl GetLookupSetMode(int LookupId);
    DWORD __cdecl IsValidIniKey(LPCSTR Key);
    void __cdecl LastLookup(int LookupId);
    LPSTR __cdecl LookupCurrentKey(int LookupId);
    LPSTR __cdecl LookupCurrentValue(int LookupId);
    int __cdecl LookupExist(int LookupId);
    int __cdecl LookupExist(int LookupId,LPCSTR Key);
    int __cdecl LookupIsValid(int LookupId);
    int __cdecl LookupReserved(int Lookupid);
    int __cdecl LookupSize(int LookupId);
    LPSTR __cdecl Lookup(int LookupId,LPCSTR Key);
    LPSTR __cdecl Lookup(int LookupId,LPCSTR Key,LPCSTR DefaultValue);
    void __cdecl MakeLookupFromIni(int LookupId,LPCSTR Filename);
    void __cdecl MakeLookup(int LookupId);
    void __cdecl NextLookup(int LookupId);
    void __cdecl PrevLookup(int LookupId);
    void __cdecl ReleaseReservedLookup(int a);
    int __cdecl ReserveFreeLookup();
    int __cdecl ReserveFreeLookup(int Start,int Rangesize);
    void __cdecl SaveLookupToIni(int LookupId,LPCSTR Filename);
    int __cdecl SearchLookup(int LookupId,LPCSTR Key);
    void __cdecl SetLookupGetMode(int LookupId,int Mode);
    void __cdecl SetLookupSetMode(int LookupId,int Mode);
    void __cdecl SetLookup(int LookupId,LPCSTR Key,LPCSTR Value);
}

#endif
