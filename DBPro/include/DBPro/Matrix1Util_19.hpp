/*
            File : DBPro/Matrix1Util_19.hpp
       Generated : 2011/09/02 20:15:36
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_19_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_19_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    void __cdecl CallFunctionForAllObjects(DWORD FunctionPointer);
    void __cdecl CallFunctionForAllObjects(LPCSTR FunctionName);
    void __cdecl CallFunctionForObjectGroup(int GroupId,DWORD FunctionPointer);
    void __cdecl CallFunctionForObjectGroup(int GroupId,LPCSTR FunctionName);
    void __cdecl ExcludeAllObjectsOff();
    void __cdecl ExcludeAllObjectsOn();
    void __cdecl ExcludeObjectGroupOff(int GroupId);
    void __cdecl ExcludeObjectGroupOn(int GroupId);
    int __cdecl FindFreeObject();
    int __cdecl FindFreeObject(int Start,int Rangesize);
    int __cdecl FirstObjectInGroup(int GroupId);
    int __cdecl FirstObject();
    int __cdecl NextObjectInGroup(int GroupId);
    int __cdecl NextObject();
    int __cdecl ObjectCloneOf(int ObjectId);
    int __cdecl ObjectClonedCount(int ObjectId);
    int __cdecl ObjectCount();
    int __cdecl ObjectFromGroup(int GroupId,int Index);
    int __cdecl ObjectGroupCount(int GroupId);
    int __cdecl ObjectGroup(int ObjectId);
    int __cdecl ObjectInstanceOf(int ObjectId);
    int __cdecl ObjectInstancedCount(int ObjectId);
    int __cdecl ObjectReserved(int Objectid);
    void __cdecl PlaceObjectInGroup(int ObjectId,int GroupId);
    void __cdecl ReleaseReservedObject(int Objectid);
    int __cdecl ReserveFreeObject();
    int __cdecl ReserveFreeObject(int Start,int Rangesize);
    void __cdecl SetDefaultObjectGroup(int GroupId);
}

#endif
