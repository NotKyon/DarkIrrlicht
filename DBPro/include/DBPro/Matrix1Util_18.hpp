/*
            File : DBPro/Matrix1Util_18.hpp
       Generated : 2011/09/02 20:15:34
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_18_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_18_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    int __cdecl AddNewLimbFromMesh(int MeshNumber);
    int __cdecl AddNewLimb();
    int __cdecl AddNewLimb(int VertexCount,int IndexCount);
    int __cdecl AddNewLimb(int VertexCount,int IndexCount,int Fvf);
    int __cdecl AddNewLimb(int VertexCount,int IndexCount,int Fvf,int InitialiseBuffers);
    void __cdecl BeginNewObject();
    void __cdecl ChangeMesh(int ObjectNumber,int LimbNumber,int MeshNumber,LPCSTR LimbName);
    void __cdecl FinishNewObject(int ObjectNumber);
    void __cdecl FixObjectScale(int ObjectNumber);
    int __cdecl GetNewLimbId();
    void __cdecl MakeObjectFromBank(int ObjectNumber,int BankNumber);
    void __cdecl MakeObjectFromBank(int ObjectNumber,int BankNumber,int Start);
    void __cdecl MakeObjectFromPointer(int ObjectNumber,DWORD MemoryAddress);
    void __cdecl MakeObjectNew(int ObjectNumber,int VertexCount,int IndexCount);
    void __cdecl MakeObjectNew(int ObjectNumber,int VertexCount,int IndexCount,DWORD Fvf);
    void __cdecl MakeObjectNew(int ObjectNumber,int VertexCount,int IndexCount,DWORD Fvf,int Initialisebuffers);
    void __cdecl MakeObjectPlain(DWORD ObjectNumber,float Width,float Depth,int RowCount,int ColumnCount,int LimbsX,int LimbsZ);
    void __cdecl MakeObjectPlain(DWORD ObjectNumber,float Width,float Depth,int RowCount,int ColumnCount,int LimbsX,int LimbsZ,DWORD Fvf);
    void __cdecl MakeObjectPlain(int ObjectNumber,float Width,float Depth,int RowCount,int ColumnCount);
    void __cdecl MakeObjectPlain(int ObjectNumber,float Width,float Depth,int RowCount,int ColumnCount,DWORD Fvf);
    void __cdecl MakeObjectPlane(DWORD ObjectNumber,float Width,float Depth,int RowCount,int ColumnCount,int LimbsX,int LimbsZ);
    void __cdecl MakeObjectPlane(DWORD ObjectNumber,float Width,float Depth,int RowCount,int ColumnCount,int LimbsX,int LimbsZ,DWORD Fvf);
    void __cdecl MakeObjectPlane(int ObjectNumber,float Width,float Depth,int RowCount,int ColumnCount);
    void __cdecl MakeObjectPlane(int ObjectNumber,float Width,float Depth,int RowCount,int ColumnCount,DWORD Fvf);
    void __cdecl MakeObject(int ObjectNnumber,int MeshNumber);
    void __cdecl MakeObject(int ObjectNumber,int MeshNumber,int TextureNumber,LPCSTR LimbName);
    void __cdecl MakeObject(int ObjectNumber,int MeshNumber,LPCSTR LimbName);
    DWORD __cdecl ObjectExcluded(int ObjectNumber);
    DWORD __cdecl ObjectGhosted(int ObjectNumber);
    int __cdecl ObjectGluedLimb(int Objectnumber);
    int __cdecl ObjectGlued(int ObjectNumber);
    DWORD __cdecl ObjectLocked(int ObjectNumber);
    float __cdecl ObjectScaleX(int ObjectNumber);
    float __cdecl ObjectScaleY(int ObjectNumber);
    float __cdecl ObjectScaleZ(int ObjectNumber);
    DWORD __cdecl ObjectTransparent(int ObjectNumber);
    void __cdecl SetNewLimbColor(DWORD Color);
    void __cdecl SetNewLimbCull(int CullMode);
    void __cdecl SetNewLimbLight(int LightingMode);
    void __cdecl SetNewLimbName(LPCSTR LimbName$);
    void __cdecl SetNewLimbOffset(float X,float Y,float Z);
    void __cdecl SetNewLimbParent(int LimbNumber);
    void __cdecl SetNewLimbRotation(float X,float Y,float Z);
    void __cdecl SetNewLimbScale(int X,int Y,int Z);
    void __cdecl SetNewLimbTexture(int TextureNumber);
    void __cdecl SetNewLimbTransparent(int TransparencyMode);
}

#endif
