/*
            File : DBPro/Matrix1Util_21.hpp
       Generated : 2011/09/02 20:15:39
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_21_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_21_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    void __cdecl ClearAllZones();
    void __cdecl ClearZone(int Zone);
    int __cdecl FindFreeZone();
    int __cdecl FindFreeZone(int a,int b);
    int __cdecl FirstZoneInGroup(int ZoneGroup);
    int __cdecl FirstZone();
    float __cdecl GetZoneLowerX(int ZoneNumber);
    float __cdecl GetZoneLowerY(int ZoneNumber);
    float __cdecl GetZoneLowerZ(int ZoneNumber);
    float __cdecl GetZoneUpperX(int ZoneNumber);
    float __cdecl GetZoneUpperY(int ZoneNumber);
    float __cdecl GetZoneUpperZ(int ZoneNumber);
    int __cdecl NextZoneInGroup(int ZoneGroup);
    int __cdecl NextZone();
    void __cdecl PlaceZoneInGroup(int ZoneNumber,int ZoneGroup);
    int __cdecl PointInZone(float Xcoord,float Ycoord,float Zcoord,int Zoneno);
    int __cdecl PointInZone(float Xcoord,float Ycoord,int Zoneno);
    void __cdecl ReleaseReservedZone(int a);
    int __cdecl ReserveFreeZone();
    int __cdecl ReserveFreeZone(int Start,int Rangesize);
    void __cdecl SetDefaultZoneGroup(int ZoneGroup);
    void __cdecl SetZone(int Zone,float Startx,float Starty,float Endx,float Endy);
    void __cdecl SetZone(int Zone,float Startx,float Starty,float Startz,float Endx,float Endy,float Endz);
    int __cdecl ZoneExist(int ZoneNumber);
    int __cdecl ZoneFromGroup(int ZoneGroup,int Index);
    int __cdecl ZoneGroupCount(int ZoneGroup);
    int __cdecl ZoneGroup(int ZoneNumber);
    int __cdecl ZoneIs3d(int ZoneNumber);
    int __cdecl ZoneReserved(int Zoneid);
    int __cdecl Zone(float Xcoord,float Ycoord);
    int __cdecl Zone(float Xcoord,float Ycoord,float Zcoord);
}

#endif
