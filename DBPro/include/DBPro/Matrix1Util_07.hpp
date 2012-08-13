/*
            File : DBPro/Matrix1Util_07.hpp
       Generated : 2011/09/02 20:15:21
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_07_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_07_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    int __cdecl Abs(int Value);
    double __cdecl Abs(double Value);
    LONGLONG __cdecl Abs(LONGLONG Value);
    LPSTR __cdecl BaseToBase(LPCSTR InputString,int InputBase,int OutputBase);
    LONGLONG __cdecl BaseToDecimal(LPCSTR InputString,int InputBase);
    LONGLONG __cdecl BinToDecimal(LPCSTR InputValue);
    float __cdecl Clamp(float Value,float MinValue,float MaxValue);
    int __cdecl Clamp(int Value,int MinValue,int MaxValue);
    double __cdecl Clamp(double Value,double MinValue,double MaxValue);
    LONGLONG __cdecl Clamp(LONGLONG Value,LONGLONG MinValue,LONGLONG MaxValue);
    void __cdecl CurveBezier(float Distance);
    int __cdecl CurveCount();
    void __cdecl CurvePoint(float X,float Y,float Z);
    void __cdecl CurveReset();
    float __cdecl CurveX();
    float __cdecl CurveY();
    float __cdecl CurveZ();
    LPSTR __cdecl DecimalToBase(LONGLONG InputValue,int OutputBase);
    float __cdecl Degtorad(float Value);
    double __cdecl Degtorad(double Value);
    int __cdecl Gcd(int IntegerValue,int IntegerValue_2);
    LONGLONG __cdecl Gcd(LONGLONG IntegerValue,LONGLONG IntegerValue_2);
    LONGLONG __cdecl HexToDecimal(LPCSTR InputValue);
    LONGLONG __cdecl Intval(LPCSTR String);
    float __cdecl Log10(float Value);
    double __cdecl Log10(double Value);
    float __cdecl Log2(float Value);
    double __cdecl Log2(double Value);
    float __cdecl Log(float Value);
    double __cdecl Log(double Value);
    LPSTR __cdecl Max(LPCSTR Value1,LPCSTR Value2);
    DWORD __cdecl Max(DWORD Value1,DWORD Value2);
    float __cdecl Max(float Value1,float Value2);
    int __cdecl Max(int Value1,int Value2);
    double __cdecl Max(double Value1,double Value2);
    LONGLONG __cdecl Max(LONGLONG Value1,LONGLONG Value2);
    LPSTR __cdecl Min(LPCSTR Value1,LPCSTR Value2);
    DWORD __cdecl Min(DWORD Value1,DWORD Value2);
    float __cdecl Min(float Value1,float Value2);
    int __cdecl Min(int Value1,int Value2);
    double __cdecl Min(double Value1,double Value2);
    LONGLONG __cdecl Min(LONGLONG Value1,LONGLONG Value2);
    double __cdecl Pi();
    float __cdecl Radtodeg(float Value);
    double __cdecl Radtodeg(double Value);
    float __cdecl Root(float Value,float Root);
    double __cdecl Root(double Value,double Root);
    void __cdecl SetVector3ToCurve(int Vector3Id);
    float __cdecl Sgn(float Value);
    int __cdecl Sgn(int Value);
    double __cdecl Sgn(double Value);
    LONGLONG __cdecl Sgn(LONGLONG Value);
    float __cdecl Wrap(float Value,float MinValue,float MaxValue);
    int __cdecl Wrap(int Value,int MinValue,int MaxValue);
    double __cdecl Wrap(double Value,double MinValue,double MaxValue);
    LONGLONG __cdecl Wrap(LONGLONG Value,LONGLONG MinValue,LONGLONG MaxValue);
}

#endif
