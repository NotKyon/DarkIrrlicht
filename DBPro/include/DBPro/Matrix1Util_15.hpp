/*
            File : DBPro/Matrix1Util_15.hpp
       Generated : 2011/09/02 20:15:30
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_15_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_15_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    void __cdecl AddToEntryBuffer(LPCSTR BufferContent);
    void __cdecl DisableSpecialKeys();
    void __cdecl EnableSpecialKeys();
    void __cdecl NiceSleep(DWORD Milliseconds);
    void __cdecl NiceWaitInput();
    void __cdecl NiceWaitKey();
    void __cdecl NiceWaitMouse();
    void __cdecl NiceWaitMousemove();
    void __cdecl NiceWaitNoInput();
    void __cdecl NiceWaitNoKey();
    void __cdecl NiceWaitNoMouse();
    void __cdecl NiceWait(DWORD Milliseconds);
    void __cdecl SetEntryBuffer(LPCSTR BufferContent);
    void __cdecl SuspendProgram();
    void __cdecl WaitInput();
    void __cdecl WaitMousemove();
    void __cdecl WaitNoInput();
    void __cdecl WaitNoKey();
    void __cdecl WaitNoMouse();
}

#endif
