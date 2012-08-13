/*
            File : DBPro/Matrix1Util_33.hpp
       Generated : 2011/09/02 20:15:57
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_33_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_33_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    int __cdecl CameraImage();
    int __cdecl CameraImage(int Camera);
    int __cdecl DrawTargetHeight();
    int __cdecl DrawTargetType();
    int __cdecl DrawTargetWidth();
    int __cdecl DrawTarget();
    void __cdecl DrawToBitmap(int Bitmapid);
    void __cdecl DrawToCamera(int Cameraid);
    void __cdecl DrawToImage(int ImageNumber);
    int __cdecl ImageAllowsRender(int ImageNumber);
    void __cdecl MakeImage(int ImageNumber,int Width,int Height);
    void __cdecl MakeImage(int ImageNumber,int Width,int Height,int D3dformat);
    void __cdecl SetDrawTarget(int TargetType,int TargetId);
}

#endif
