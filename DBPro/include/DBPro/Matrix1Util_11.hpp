/*
            File : DBPro/Matrix1Util_11.hpp
       Generated : 2011/09/02 20:15:25
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_11_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_11_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    void __cdecl ClearConsole();
    void __cdecl CloseConsole();
    LPSTR __cdecl GetConsoleChar();
    DWORD __cdecl GetConsoleHandle();
    int __cdecl GetConsoleHeight();
    int __cdecl GetConsoleWidth();
    int __cdecl GetConsoleX();
    int __cdecl GetConsoleY();
    void __cdecl OpenConsole();
    void __cdecl OpenConsole(LPCSTR a);
    void __cdecl PrintConsole();
    void __cdecl PrintConsole(double Value);
    void __cdecl PrintConsole(LONGLONG Value);
    void __cdecl PrintConsole(LPCSTR Value);
    void __cdecl SetConsoleBackground(DWORD ColourIndex);
    void __cdecl SetConsoleColour(DWORD Foreground,DWORD Background);
    void __cdecl SetConsoleCursor(int XPosition,int YPosition);
    void __cdecl SetConsoleForeground(DWORD ColourIndex);
    void __cdecl SetConsoleOnTop(DWORD Ontop);
}

#endif
