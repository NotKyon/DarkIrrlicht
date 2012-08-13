/*
            File : DBPro/Matrix1Util_30.hpp
       Generated : 2011/09/02 20:15:53
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_30_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_30_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    void __cdecl BoxOutline(int X1,int Y1,int X2,int Y2);
    void __cdecl BoxOutline(int X1,int Y1,int X2,int Y2,DWORD Colour);
    void __cdecl Box(int X1,int Y1,int X2,int Y2,DWORD Colour);
    void __cdecl FillCircle(int X,int Y,int Radius);
    void __cdecl FillCircle(int X,int Y,int Radius,DWORD FillColour);
    void __cdecl FillEllipse(int X,int Y,int XRadius,int YRadius);
    void __cdecl FillEllipse(int X,int Y,int XRadius,int YRadius,DWORD FillColour);
    void __cdecl Fill(int X,int Y,DWORD FillColour);
    void __cdecl Fill(int X,int Y,DWORD FillColour,DWORD BorderColour);
    void __cdecl Line(int X1,int Y1,int X2,int Y2,DWORD Colour);
    void __cdecl SaveCurrentBitmap(LPCSTR Filename);
    void __cdecl SaveFrontbuffer(LPCSTR Filename);
}

#endif
