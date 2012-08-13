/*
            File : DBPro/Matrix1Util_13.hpp
       Generated : 2011/09/02 20:15:27
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_13_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_13_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    int __cdecl DisplayDepth();
    int __cdecl DisplayHeight();
    int __cdecl DisplayWidth();
    DWORD __cdecl FirstWindowClass(LPCSTR ClassName);
    DWORD __cdecl FirstWindowClass(LPCSTR ClassName,DWORD SearchMode);
    DWORD __cdecl FirstWindow();
    DWORD __cdecl FirstWindow(LPCSTR WindowTitle);
    DWORD __cdecl FirstWindow(LPCSTR WindowTitle,DWORD SearchMode);
    DWORD __cdecl GetDbproWindow();
    DWORD __cdecl GetDesktopWindow();
    int __cdecl GetWindowClientHeight();
    int __cdecl GetWindowClientHeight(DWORD WindowHandle);
    int __cdecl GetWindowClientWidth();
    int __cdecl GetWindowClientWidth(DWORD WindowHandle);
    int __cdecl GetWindowHeight();
    int __cdecl GetWindowHeight(DWORD WindowHandle);
    int __cdecl GetWindowWidth();
    int __cdecl GetWindowWidth(DWORD WindowHandle);
    void __cdecl GrabFocus();
    DWORD __cdecl HasFocus();
    void __cdecl HideAppIcon();
    void __cdecl HideWindowIcon(DWORD WindowHandle);
    DWORD __cdecl IsAWindow(DWORD WindowHandle);
    DWORD __cdecl IsExclusive();
    DWORD __cdecl IsFullscreen();
    DWORD __cdecl IsMaximised();
    DWORD __cdecl IsMaximised(DWORD WindowHandle);
    DWORD __cdecl IsMinimised();
    DWORD __cdecl IsMinimised(DWORD WindowHandle);
    DWORD __cdecl IsVisible();
    DWORD __cdecl IsVisible(DWORD WindowHandle);
    void __cdecl MaximiseWindow(DWORD WindowHandle);
    void __cdecl MinimiseWindow(DWORD WindowHandle);
    DWORD __cdecl NextWindow();
    void __cdecl PositionWindow(DWORD WindowHandle,int b,int c);
    void __cdecl RestoreWindow(DWORD WindowHandle);
    DWORD __cdecl ScreenMode();
    void __cdecl SetActiveWindow(DWORD WindowHandle);
    void __cdecl SetWindowClientSize(DWORD WindowHandle,int Width,int Height);
    void __cdecl SetWindowClientSize(int Width,int Height);
    void __cdecl SetWindowSize(DWORD WindowHandle,int Width,int Height);
    void __cdecl ShowAppIcon();
    void __cdecl ShowWindowIcon(DWORD WindowHandle);
    LPSTR __cdecl WindowClass(DWORD WindowHandle);
    LPSTR __cdecl WindowTitle(DWORD WindowHandle);
}

#endif
