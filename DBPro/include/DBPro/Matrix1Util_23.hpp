/*
            File : DBPro/Matrix1Util_23.hpp
       Generated : 2011/09/02 20:15:42
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_23_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_23_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    DWORD __cdecl AnsiColour(DWORD Colourid);
    DWORD __cdecl AnsiColour(DWORD Colourid,DWORD Alpha);
    float __cdecl CmyA(DWORD PackedCmy);
    float __cdecl CmyC(DWORD PackedCmy);
    float __cdecl CmyM(DWORD PackedCmy);
    DWORD __cdecl CmyToRgb(DWORD PackedCmy);
    DWORD __cdecl CmyToRgb(float Cyan,float Magenta,float Yellow);
    DWORD __cdecl CmyToRgb(float Alpha,float Cyan,float Magenta,float Yellow);
    float __cdecl CmyY(DWORD PackedCmy);
    float __cdecl CmykC(DWORD PackedCmyk);
    float __cdecl CmykK(DWORD PackedCmyk);
    float __cdecl CmykM(DWORD PackedCmyk);
    DWORD __cdecl CmykToRgb(DWORD PackedCmyk);
    DWORD __cdecl CmykToRgb(float Cyan,float Magenta,float Yellow,float Black);
    float __cdecl CmykY(DWORD PackedCmyk);
    DWORD __cdecl Css3Colour(LPCSTR ColourName);
    DWORD __cdecl Css3Colour(LPCSTR ColourName,DWORD Alpha);
    float __cdecl HslA(DWORD PackedHsl);
    float __cdecl HslH(DWORD PackedHsl);
    float __cdecl HslL(DWORD PackedHsl);
    float __cdecl HslS(DWORD PackedHsl);
    DWORD __cdecl HslToRgb(DWORD Alpha);
    DWORD __cdecl HslToRgb(float Hue,float Saturation,float Luminance);
    DWORD __cdecl HslToRgb(float Alpha,float Hue,float Saturation,float Value);
    float __cdecl HsvA(DWORD PackedHsv);
    float __cdecl HsvH(DWORD PackedHsv);
    float __cdecl HsvS(DWORD PackedHsv);
    DWORD __cdecl HsvToRgb(DWORD PackedHsv);
    DWORD __cdecl HsvToRgb(float Hue,float Saturation,float Value);
    DWORD __cdecl HsvToRgb(float Alpha,float Hue,float Saturation,float Value);
    float __cdecl HsvV(DWORD PackedHsv);
    DWORD __cdecl OldAnsiColour(DWORD Colourid);
    DWORD __cdecl OldAnsiColour(DWORD Colourid,DWORD Alpha);
    DWORD __cdecl PackCmyk(float Cyan,float Magenta,float Yellow,float Black);
    DWORD __cdecl PackCmy(float Cyan,float Magenta,float Yellow);
    DWORD __cdecl PackCmy(float Alpha,float Cyan,float Magenta,float Yellow);
    DWORD __cdecl PackHsl(float Hue,float Saturation,float Luminance);
    DWORD __cdecl PackHsl(float Alpha,float Hue,float Saturation,float Luminance);
    DWORD __cdecl PackHsv(float Hue,float Saturation,float Value);
    DWORD __cdecl PackHsv(float Alpha,float Hue,float Saturation,float Value);
    DWORD __cdecl RgbToCmyk(DWORD PackedRgb);
    DWORD __cdecl RgbToCmy(DWORD PackedRgb);
    DWORD __cdecl RgbToHsl(DWORD PackedRgb);
    DWORD __cdecl RgbToHsv(DWORD PackedRgb);
    DWORD __cdecl Rgb16a(DWORD Colour);
    DWORD __cdecl Rgb16b(DWORD Colour);
    DWORD __cdecl Rgb16g(DWORD Colour);
    DWORD __cdecl Rgb16r(DWORD Colour);
    DWORD __cdecl Rgb16(DWORD Red,DWORD Green,DWORD Blue);
    DWORD __cdecl Rgb16(DWORD Alpha,DWORD Red,DWORD Green,DWORD Blue);
    DWORD __cdecl Rgba(DWORD Colour);
    DWORD __cdecl Rgb(DWORD Alpha,DWORD Red,DWORD Green,DWORD Blue);
    DWORD __cdecl SetAlpha(DWORD Colour,DWORD Alpha);
}

#endif
