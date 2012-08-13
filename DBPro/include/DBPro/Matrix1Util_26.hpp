/*
            File : DBPro/Matrix1Util_26.hpp
       Generated : 2011/09/02 20:15:47
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_26_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_26_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    float __cdecl CameraAspect();
    float __cdecl CameraAspect(int Camera);
    DWORD __cdecl CameraBackdropColor();
    DWORD __cdecl CameraBackdropColor(int Camera);
    int __cdecl CameraBackdropOn();
    int __cdecl CameraBackdropOn(int Camera);
    float __cdecl CameraFov();
    float __cdecl CameraFov(int Camera);
    float __cdecl CameraRangeFar();
    float __cdecl CameraRangeFar(int Camera);
    float __cdecl CameraRangeNear();
    float __cdecl CameraRangeNear(int Camera);
    int __cdecl CameraViewBottom();
    int __cdecl CameraViewBottom(int Camera);
    int __cdecl CameraViewLeft();
    int __cdecl CameraViewLeft(int Camera);
    int __cdecl CameraViewRight();
    int __cdecl CameraViewRight(int Camera);
    int __cdecl CameraViewTop();
    int __cdecl CameraViewTop(int Camera);
    void __cdecl ClearSpriteView();
    void __cdecl ClearSpriteView(int FillColour);
    int __cdecl CurrentCamera();
    void __cdecl DrawAnimationAuto();
    void __cdecl DrawAnimationManual();
    void __cdecl DrawAnimation();
    void __cdecl DrawSpritesAuto();
    void __cdecl DrawSpritesManual();
    void __cdecl DrawSprites();
    void __cdecl ResetSpriteView();
    void __cdecl SetMessageCallback(DWORD FunctionPointer);
    void __cdecl SetMessageCallback(LPCSTR FunctionName);
    void __cdecl SetPostcameraCallback(DWORD FunctionPointer);
    void __cdecl SetPostcameraCallback(LPCSTR FunctionName);
    void __cdecl SetPostrenderCallback(DWORD FunctionPointer);
    void __cdecl SetPostrenderCallback(LPCSTR FunctionName);
    void __cdecl SetPostspriteCallback(DWORD FunctionPointer);
    void __cdecl SetPostspriteCallback(LPCSTR FunctionName);
    void __cdecl SetPostsyncCallback(DWORD FunctionPointer);
    void __cdecl SetPostsyncCallback(LPCSTR FunctionName);
    void __cdecl SetPrecameraCallback(DWORD FunctionPointer);
    void __cdecl SetPrecameraCallback(LPCSTR FunctionName);
    void __cdecl SetPrerenderCallback(DWORD FunctionPointer);
    void __cdecl SetPrerenderCallback(LPCSTR FunctionName);
    void __cdecl SetPrespriteCallback(DWORD FunctionPointer);
    void __cdecl SetPrespriteCallback(LPCSTR FunctionName);
    void __cdecl SetPresyncCallback(DWORD FunctionPointer);
    void __cdecl SetPresyncCallback(LPCSTR FunctionName);
    void __cdecl SetSpriteView(int Left,int Top,int Right,int Bottom);
    int __cdecl SpriteViewBottom();
    int __cdecl SpriteViewLeft();
    int __cdecl SpriteViewRight();
    int __cdecl SpriteViewTop();
    void __cdecl StopCurrentMessage();
    DWORD __cdecl SyncElapsed();
}

#endif
