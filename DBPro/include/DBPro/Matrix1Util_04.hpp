/*
            File : DBPro/Matrix1Util_04.hpp
       Generated : 2011/09/02 20:15:16
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_04_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_04_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    DWORD __cdecl AllocString(LPCSTR String);
    DWORD __cdecl AllocZeroed(int Size);
    DWORD __cdecl Alloc(int Size);
    double __cdecl CastDoubleFloatToDoubleInteger(LONGLONG DoubleFloat);
    LONGLONG __cdecl CastDoubleIntegerToDoubleFloat(double DoubleInteger);
    float __cdecl CastDwordToFloat(DWORD Dword);
    DWORD __cdecl CastFloatToDword(float Float);
    int __cdecl CompareMemory(DWORD Address1,DWORD Address2,int Size);
    void __cdecl Free(DWORD Address);
    DWORD __cdecl GetStringPtr(LPCSTR String);
    DWORD __cdecl IsEmpty(LPCSTR String);
    DWORD __cdecl IsMemoryReadable(DWORD Address);
    DWORD __cdecl IsMemoryReadable(DWORD Address,int Size);
    DWORD __cdecl IsMemoryWriteable(DWORD Address);
    DWORD __cdecl IsMemoryWriteable(DWORD Address,int Size);
    DWORD __cdecl IsNull(LPCSTR String);
    double __cdecl MemblockDoubleFloat(int Memblock,int Offset);
    LONGLONG __cdecl MemblockDoubleInteger(int Memblock,int Offset);
    LPSTR __cdecl MemblockString(int Memblock,int Offset);
    LPSTR __cdecl MemblockString(int Memblock,int Offset,int Fieldsize);
    int __cdecl MemorySize(DWORD Address);
    LPSTR __cdecl Null();
    char __cdecl PeekByte(DWORD a);
    double __cdecl PeekDoubleFloat(DWORD a);
    LONGLONG __cdecl PeekDoubleInteger(DWORD a);
    DWORD __cdecl PeekDword(DWORD a);
    float __cdecl PeekFloat(DWORD a);
    int __cdecl PeekInteger(DWORD a);
    LPSTR __cdecl PeekString(DWORD Address);
    LPSTR __cdecl PeekString(DWORD Address,int Maxsize);
    DWORD __cdecl PeekWord(DWORD a);
    void __cdecl PokeByte(DWORD Address,char Byte);
    void __cdecl PokeDoubleFloat(DWORD Address,double DoubleFloat);
    void __cdecl PokeDoubleInteger(DWORD Address,LONGLONG DoubleInteger);
    void __cdecl PokeDword(DWORD Address,DWORD Dword);
    void __cdecl PokeFloat(DWORD Address,float Float);
    void __cdecl PokeInteger(DWORD Address,int Integer);
    void __cdecl PokeString(DWORD Address,LPCSTR String);
    void __cdecl PokeString(DWORD Address,LPCSTR String,DWORD Maxsize);
    void __cdecl PokeWord(DWORD Address,DWORD Word);
    DWORD __cdecl ReallocZeroed(DWORD Address,int NewSize);
    DWORD __cdecl Realloc(DWORD Address,int NewSize);
    LPSTR __cdecl Reserve(int Size);
    void __cdecl WriteMemblockDoubleFloat(int Memblock,int Offset,double DoubleFloat);
    void __cdecl WriteMemblockDoubleInteger(int Memblock,int Offset,LONGLONG DoubleInteger);
    void __cdecl WriteMemblockString(int Memblock,int Offset,LPCSTR String);
    void __cdecl WriteMemblockString(int Memblock,int Offset,LPCSTR String,int FieldSize);
}

#endif
