/*
            File : DBPro/Matrix1Util_29.hpp
       Generated : 2011/09/02 20:15:51
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_29_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_29_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    int __cdecl ArrayCount(DWORD* Array,int Dimension);
    void __cdecl ClearArrayItem(DWORD* Array,int Position);
    void __cdecl ClearArray(DWORD* Array);
    void __cdecl ClearArray(DWORD* Array,int Start,int End);
    void __cdecl ClearArrayptrItem(DWORD ArrayPointer,int Position);
    int __cdecl GetArrayCount(DWORD* Array,int Dimension);
    int __cdecl GetArrayDimensions(DWORD* Array);
    int __cdecl GetArrayFieldCount(DWORD* Array);
    int __cdecl GetArrayFieldOffset(DWORD* Array,int Field);
    int __cdecl GetArrayFieldType(DWORD* Array,int Field);
    LPSTR __cdecl GetArrayFormat(DWORD* Array);
    int __cdecl GetArrayIndex(DWORD* Array);
    DWORD __cdecl GetArrayItemPtr(DWORD* Array,DWORD Pos);
    int __cdecl GetArrayItemSize(DWORD* Array);
    int __cdecl GetArraySize(DWORD* Array);
    DWORD __cdecl GetArraySort(DWORD* Array);
    int __cdecl GetFormatSize(LPCSTR Format$);
    LPVOID __cdecl LinkArray(DWORD* Array,DWORD ArrayPointer);
    LPVOID __cdecl LoadArrayFromDatafile(DWORD* Array,int DatafileId);
    void __cdecl ReverseSortArrayRange(DWORD* Array,int Start,int End);
    void __cdecl ReverseSortArray(DWORD* Array);
    void __cdecl RotateArray(DWORD* Array);
    void __cdecl RotateArray(DWORD* Array,DWORD Start,DWORD End);
    void __cdecl RotateArray(DWORD* Array,int Shift);
    void __cdecl RotateArray(DWORD* Array,int Shift,DWORD Start,DWORD End);
    void __cdecl SaveArrayToDatafile(DWORD* Array,int DatafileId);
    void __cdecl SetArrayIndex(DWORD* Array,int Pos);
    void __cdecl SetArraySort(DWORD* Array,DWORD SortMethod);
    void __cdecl SortArrayRange(DWORD* Array,int Start,int End);
    void __cdecl SortArrayRange(DWORD* Array,int Start,int End,int Field1);
    void __cdecl SortArrayRange(DWORD* Array,int Start,int End,int Field1,int Field2);
    void __cdecl SortArrayRange(DWORD* Array,int Start,int End,int Field1,int Field2,int Field3);
    void __cdecl SortArrayRange(DWORD* Array,int Start,int End,int Field1,int Field2,int Field3,int Field4);
    void __cdecl SortArrayRange(DWORD* Array,int Start,int End,int Field1,int Field2,int Field3,int Field4,int Field5);
    void __cdecl SortArrayRange(DWORD* Array,int Start,int End,int Field1,int Field2,int Field3,int Field4,int Field5,int Field6);
    void __cdecl SortArray(DWORD* Array);
    void __cdecl SortArray(DWORD* Array,int Field1);
    void __cdecl SortArray(DWORD* Array,int Field1,int Field2);
    void __cdecl SortArray(DWORD* Array,int Field1,int Field2,int Field3);
    void __cdecl SortArray(DWORD* Array,int Field1,int Field2,int Field3,int Field4);
    void __cdecl SortArray(DWORD* Array,int Field1,int Field2,int Field3,int Field4,int Field5);
    void __cdecl SortArray(DWORD* Array,int Field1,int Field2,int Field3,int Field4,int Field5,int Field6);
    void __cdecl SwapArrayItems(DWORD* ArrayPointer,int Pos1,int Pos2);
    LPVOID __cdecl UnlinkArray(DWORD* Array);
}

#endif
