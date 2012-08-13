/*
            File : DBPro/Matrix1Util_17.hpp
       Generated : 2011/09/02 20:15:33
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_17_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_17_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    LONGLONG __cdecl BitClearMask(LONGLONG Bitset,LONGLONG Bitset_2);
    LONGLONG __cdecl BitClear(LONGLONG Bitset,DWORD Bitnumber);
    DWORD __cdecl BitCount(LONGLONG Bitset);
    DWORD __cdecl BitFindFirstClear(LONGLONG Bitset);
    DWORD __cdecl BitFindFirstSet(LONGLONG Bitset);
    DWORD __cdecl BitFindLastClear(LONGLONG Bitset);
    DWORD __cdecl BitFindLastSet(LONGLONG Bitset);
    LONGLONG __cdecl BitFlipMask(LONGLONG Bitset,LONGLONG Bitset_2);
    LONGLONG __cdecl BitFlip(LONGLONG Bitset,DWORD Bitnumber);
    DWORD __cdecl BitGet(LONGLONG Bitset,DWORD Bitnumber);
    LONGLONG __cdecl BitIntersectMask(LONGLONG Bitset,LONGLONG Bitset_2);
    int __cdecl BitRot32Left(int Bitset,int ShiftCount);
    int __cdecl BitRot32Right(int Bitset,int ShiftCount);
    LONGLONG __cdecl BitRot64Left(LONGLONG Bitset,int ShiftCount);
    LONGLONG __cdecl BitRot64Right(LONGLONG Bitset,int ShiftCount);
    LONGLONG __cdecl BitSetMask(LONGLONG Bitset,LONGLONG Bitset_2);
    LONGLONG __cdecl BitSet(LONGLONG Bitset,DWORD Bitnumber);
    LONGLONG __cdecl BitShiftLeft(LONGLONG Bitset,int ShiftCount);
    LONGLONG __cdecl BitShiftRight(LONGLONG Bitset,int ShiftCount);
}

#endif
