/*
            File : DBPro/Matrix1Util_08.hpp
       Generated : 2011/09/02 20:15:22
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_08_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_08_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    void __cdecl DeleteRng(DWORD RngId);
    DWORD __cdecl FindFreeRng();
    DWORD __cdecl FindFreeRng(DWORD Start,DWORD Rangesize);
    double __cdecl GetRng(DWORD RngId);
    void __cdecl MakeRngIc(DWORD RngId);
    void __cdecl MakeRngIc(DWORD RngId,float Scale);
    void __cdecl MakeRngIc(DWORD RngId,float LowerLimit,float UpperLimit);
    void __cdecl MakeRngKr(DWORD RngId);
    void __cdecl MakeRngKr(DWORD RngId,float Scale);
    void __cdecl MakeRngKr(DWORD RngId,float LowerLimit,float UpperLimit);
    void __cdecl MakeRngLf1(DWORD RngId);
    void __cdecl MakeRngLf1(DWORD RngId,float Scale);
    void __cdecl MakeRngLf1(DWORD RngId,float LowerLimit,float UpperLimit);
    void __cdecl MakeRngLf2(DWORD RngId);
    void __cdecl MakeRngLf2(DWORD RngId,float Scale);
    void __cdecl MakeRngLf2(DWORD RngId,float LowerLimit,float UpperLimit);
    void __cdecl MakeRngMinstd(DWORD RngId);
    void __cdecl MakeRngMinstd(DWORD RngId,float Scale);
    void __cdecl MakeRngMinstd(DWORD RngId,float LowerLimit,float UpperLimit);
    void __cdecl MakeRngMt1(DWORD RngId);
    void __cdecl MakeRngMt1(DWORD RngId,float Scale);
    void __cdecl MakeRngMt1(DWORD RngId,float LowerLimit,float UpperLimit);
    void __cdecl MakeRngMt2(DWORD RngId);
    void __cdecl MakeRngMt2(DWORD RngId,float Scale);
    void __cdecl MakeRngMt2(DWORD RngId,float LowerLimit,float UpperLimit);
    void __cdecl MakeRngRand(DWORD RngId);
    void __cdecl MakeRngRand(DWORD RngId,float Scale);
    void __cdecl MakeRngRand(DWORD RngId,float LowerLimit,float UpperLimit);
    void __cdecl RandomSeed(DWORD DwordValue);
    double __cdecl Random();
    double __cdecl Random(double Scale);
    void __cdecl ReleaseReservedRng(int a);
    int __cdecl ReserveFreeRng();
    int __cdecl ReserveFreeRng(int Start,int Rangesize);
    DWORD __cdecl RngExist(DWORD RngId);
    int __cdecl RngReserved(int Rngid);
    void __cdecl SetRngSeed(DWORD RngId,DWORD SeedValue);
}

#endif
