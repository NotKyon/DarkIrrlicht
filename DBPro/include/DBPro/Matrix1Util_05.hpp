/*
            File : DBPro/Matrix1Util_05.hpp
       Generated : 2011/09/02 20:15:17
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_05_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_05_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    int __cdecl AnimationReserved(int Animationid);
    int __cdecl AvailableInFreelist(int FreelistId,int Id);
    int __cdecl BitmapReserved(int Bitmapid);
    int __cdecl CameraReserved(int Cameraid);
    void __cdecl DeleteFreelist(int FreelistId);
    int __cdecl DllReserved(int Dllid);
    int __cdecl EffectReserved(int Effectid);
    int __cdecl FileReserved(int Fileid);
    DWORD __cdecl FindFreeAnimation();
    DWORD __cdecl FindFreeAnimation(DWORD Start,DWORD RangeSize);
    DWORD __cdecl FindFreeBitmap();
    DWORD __cdecl FindFreeBitmap(DWORD Start,DWORD RangeSize);
    DWORD __cdecl FindFreeCamera();
    DWORD __cdecl FindFreeCamera(DWORD Start,DWORD RangeSize);
    DWORD __cdecl FindFreeDll();
    DWORD __cdecl FindFreeDll(DWORD Start,DWORD RangeSize);
    DWORD __cdecl FindFreeEffect();
    DWORD __cdecl FindFreeEffect(DWORD Start,DWORD RangeSize);
    DWORD __cdecl FindFreeFile();
    DWORD __cdecl FindFreeFile(DWORD Start,DWORD RangeSize);
    int __cdecl FindFreeFreelist();
    int __cdecl FindFreeFreelist(int Start,int RangeSize);
    DWORD __cdecl FindFreeImage();
    DWORD __cdecl FindFreeImage(DWORD Start,DWORD RangeSize);
    DWORD __cdecl FindFreeLight();
    DWORD __cdecl FindFreeLight(DWORD Start,DWORD RangeSize);
    DWORD __cdecl FindFreeMatrix();
    DWORD __cdecl FindFreeMatrix(DWORD Start,DWORD RangeSize);
    DWORD __cdecl FindFreeMemblock();
    DWORD __cdecl FindFreeMemblock(DWORD Start,DWORD RangeSize);
    DWORD __cdecl FindFreeMesh();
    DWORD __cdecl FindFreeMesh(DWORD Start,DWORD RangeSize);
    DWORD __cdecl FindFreeMusic();
    DWORD __cdecl FindFreeMusic(DWORD Start,DWORD RangeSize);
    DWORD __cdecl FindFreeParticles();
    DWORD __cdecl FindFreeParticles(DWORD Start,DWORD RangeSize);
    DWORD __cdecl FindFreePixelShader();
    DWORD __cdecl FindFreePixelShader(DWORD Start,DWORD RangeSize);
    DWORD __cdecl FindFreeSound();
    DWORD __cdecl FindFreeSound(DWORD Start,DWORD RangeSize);
    DWORD __cdecl FindFreeSprite();
    DWORD __cdecl FindFreeSprite(DWORD Start,DWORD RangeSize);
    DWORD __cdecl FindFreeTerrain();
    DWORD __cdecl FindFreeTerrain(DWORD Start,DWORD RangeSize);
    DWORD __cdecl FindFreeVertexShader();
    DWORD __cdecl FindFreeVertexShader(DWORD Start,DWORD RangeSize);
    int __cdecl FreelistExist(int FreelistId);
    int __cdecl FreelistReserved(int Freelistid);
    int __cdecl GetFromFreelist(int FreelistId);
    int __cdecl GetFromFreelist(int FreelistId,int Start,int RangeSize);
    int __cdecl ImageReserved(int Imageid);
    int __cdecl LightReserved(int Lightid);
    void __cdecl MakeFreelist(int FreelistId);
    void __cdecl MakeFreelist(int FreelistId,int RangeSize);
    void __cdecl MakeFreelist(int FreelistId,int Start,int RangeSize);
    void __cdecl MakeFreelist(int FreelistId,int Start,int RangeSize,int NotFoundId);
    int __cdecl MatrixReserved(int Matrixid);
    int __cdecl MemblockReserved(int Memblockid);
    int __cdecl MeshReserved(int Meshid);
    int __cdecl MusicReserved(int Musicid);
    int __cdecl ParticlesReserved(int Particlesid);
    int __cdecl PixelShaderReserved(int Pixelshaderid);
    void __cdecl ReleaseReservedAnimation(int Animationid);
    void __cdecl ReleaseReservedBitmap(int Bitmapid);
    void __cdecl ReleaseReservedCamera(int Cameraid);
    void __cdecl ReleaseReservedDll(int Dllid);
    void __cdecl ReleaseReservedEffect(int Effectid);
    void __cdecl ReleaseReservedFile(int Fileid);
    void __cdecl ReleaseReservedFreelist(int a);
    void __cdecl ReleaseReservedImage(int Imageid);
    void __cdecl ReleaseReservedLight(int Lightid);
    void __cdecl ReleaseReservedMatrix(int Matrixid);
    void __cdecl ReleaseReservedMemblock(int Memblockid);
    void __cdecl ReleaseReservedMesh(int Meshid);
    void __cdecl ReleaseReservedMusic(int Musicid);
    void __cdecl ReleaseReservedParticles(int Particleid);
    void __cdecl ReleaseReservedPixelShader(int Pixelshaderid);
    void __cdecl ReleaseReservedSound(int Soundid);
    void __cdecl ReleaseReservedSprite(int Spriteid);
    void __cdecl ReleaseReservedTerrain(int Terrainid);
    void __cdecl ReleaseReservedVertexShader(int Vertexshaderid);
    int __cdecl ReserveFreeAnimation();
    int __cdecl ReserveFreeAnimation(int Start,int Rangesize);
    int __cdecl ReserveFreeBitmap();
    int __cdecl ReserveFreeBitmap(int Start,int Rangesize);
    int __cdecl ReserveFreeCamera();
    int __cdecl ReserveFreeCamera(int Start,int Rangesize);
    int __cdecl ReserveFreeDll();
    int __cdecl ReserveFreeDll(int Start,int Rangesize);
    int __cdecl ReserveFreeEffect();
    int __cdecl ReserveFreeEffect(int Start,int Rangesize);
    int __cdecl ReserveFreeFile();
    int __cdecl ReserveFreeFile(int Start,int Rangesize);
    int __cdecl ReserveFreeFreelist();
    int __cdecl ReserveFreeFreelist(int Start,int Rangesize);
    int __cdecl ReserveFreeImage();
    int __cdecl ReserveFreeImage(int Start,int Rangesize);
    int __cdecl ReserveFreeLight();
    int __cdecl ReserveFreeLight(int Start,int Rangesize);
    int __cdecl ReserveFreeMatrix();
    int __cdecl ReserveFreeMatrix(int Start,int Rangesize);
    int __cdecl ReserveFreeMemblock();
    int __cdecl ReserveFreeMemblock(int Start,int Rangesize);
    int __cdecl ReserveFreeMesh();
    int __cdecl ReserveFreeMesh(int Start,int Rangesize);
    int __cdecl ReserveFreeMusic();
    int __cdecl ReserveFreeMusic(int Start,int Rangesize);
    int __cdecl ReserveFreeParticles();
    int __cdecl ReserveFreeParticles(int Start,int Rangesize);
    int __cdecl ReserveFreePixelShader();
    int __cdecl ReserveFreePixelShader(int Start,int Rangesize);
    int __cdecl ReserveFreeSound();
    int __cdecl ReserveFreeSound(int Start,int Rangesize);
    int __cdecl ReserveFreeSprite();
    int __cdecl ReserveFreeSprite(int Start,int Rangesize);
    int __cdecl ReserveFreeTerrain();
    int __cdecl ReserveFreeTerrain(int Start,int Rangesize);
    int __cdecl ReserveFreeVertexShader();
    int __cdecl ReserveFreeVertexShader(int Start,int Rangesize);
    void __cdecl ResetFreelist(int FreelistId);
    int __cdecl ReturnToFreelist(int FreelistId,int Id);
    int __cdecl SoundReserved(int Soundid);
    int __cdecl SpriteReserved(int Spriteid);
    int __cdecl TerrainReserved(int Terrainid);
    int __cdecl VertexShaderReserved(int Vertexshaderid);
}

#endif
