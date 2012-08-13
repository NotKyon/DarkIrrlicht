/*
            File : DBPro/Matrix1Util_02.hpp
       Generated : 2011/09/02 20:15:13
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_02_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_02_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    void __cdecl DeleteTicker(int TickerNo);
    int __cdecl FindFreeTicker();
    int __cdecl FindFreeTicker(int Start,int Rangesize);
    DWORD __cdecl Hitimer();
    LONGLONG __cdecl Hitimer(DWORD a);
    LONGLONG __cdecl Hitimer(double a);
    void __cdecl MakeFrequencyTicker(int TickerNo,float Frequency);
    void __cdecl MakeFrequencyTicker(int TickerNo,float Frequency,int Tickcount);
    void __cdecl MakeTicker(int TickerNo,int Time);
    void __cdecl MakeTicker(int TickerNo,int Time,int Tickcount);
    int __cdecl NiceWaitForTicker(int TickerNo);
    void __cdecl ReleaseReservedTicker(int a);
    int __cdecl ReserveFreeTicker();
    int __cdecl ReserveFreeTicker(int Start,int Rangesize);
    void __cdecl SetTickerRate(int TickerNo,int Time);
    void __cdecl SetTimerResolution(int Resolution);
    int __cdecl TickerExist(int TickerNo);
    int __cdecl TickerRate(int TickerNo);
    int __cdecl TickerReserved(int Tickerid);
    int __cdecl TickerReset(int TickerNo);
    int __cdecl TickerTicksLeft(int TickerNo);
    int __cdecl Ticker(int TickerNo);
    int __cdecl Ticker(int TickerNo,int TickOnce);
    int __cdecl TimerMaxResolution();
    int __cdecl TimerMinResolution();
    int __cdecl WaitForTicker(int TickerNo);
}

#endif
