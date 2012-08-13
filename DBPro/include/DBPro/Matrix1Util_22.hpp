/*
            File : DBPro/Matrix1Util_22.hpp
       Generated : 2011/09/02 20:15:41
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_22_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_22_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    void __cdecl CloseDatafile(int Fileid);
    DWORD __cdecl DatafileBoolean(int Fileid);
    DWORD __cdecl DatafileByte(int Fileid);
    LPSTR __cdecl DatafileDatastring(int Fileid,int Maxbytes);
    double __cdecl DatafileDoubleFloat(int Fileid);
    LONGLONG __cdecl DatafileDoubleInteger(int Fileid);
    DWORD __cdecl DatafileDword(int Fileid);
    DWORD __cdecl DatafileEnd(int Fileid);
    DWORD __cdecl DatafileError(int Fileid);
    DWORD __cdecl DatafileExist(int Fileid);
    float __cdecl DatafileFloat(int Fileid);
    void __cdecl DatafileFlush(int Fileid);
    void __cdecl DatafileFlush(int Fileid,DWORD Mode);
    int __cdecl DatafileInteger(int Fileid);
    int __cdecl DatafileMemory(int Fileid,DWORD Address,int Maxbytes);
    DWORD __cdecl DatafileMode(int Fileid);
    LONGLONG __cdecl DatafilePosition(int Fileid);
    int __cdecl DatafileReserved(int Datafileid);
    LONGLONG __cdecl DatafileSize(int Fileid);
    void __cdecl DatafileSkip(int Fileid,LONGLONG Fileoffset);
    void __cdecl DatafileStringType(int Fileid,DWORD Mode);
    DWORD __cdecl DatafileStringType(int Fileid);
    LPSTR __cdecl DatafileString(int Fileid);
    DWORD __cdecl DatafileWord(int Fileid);
    int __cdecl DirStackSize();
    void __cdecl DropDir();
    LPSTR __cdecl ExpandPath(LPCSTR Pathname);
    LPSTR __cdecl FileCreationTimestamp(LPCSTR Filename);
    LPSTR __cdecl FileModificationTimestamp(LPCSTR Filename);
    DWORD __cdecl FindFreeDatafile();
    DWORD __cdecl FindFreeDatafile(DWORD Start,DWORD Size);
    LPSTR __cdecl GetDirTop();
    DWORD __cdecl OpenDatafileToAppend(int Fileid,LPCSTR Filename);
    DWORD __cdecl OpenDatafileToRead(int Fileid,LPCSTR Filename);
    DWORD __cdecl OpenDatafileToUpdate(int Fileid,LPCSTR Filename);
    DWORD __cdecl OpenDatafileToWrite(int Fileid,LPCSTR Filename);
    void __cdecl PopDir();
    void __cdecl PushDir(LPCSTR TargetDirectory);
    void __cdecl ReleaseReservedDatafile(int a);
    int __cdecl ReserveFreeDatafile();
    int __cdecl ReserveFreeDatafile(int Start,int Rangesize);
    void __cdecl SetDatafilePosition(int Fileid,LONGLONG Fileposition);
    void __cdecl SetDatafileSize(int Fileid,LONGLONG Filesize);
    LPSTR __cdecl Timestamp();
    void __cdecl WriteDatafileBoolean(int Fileid,DWORD Value);
    void __cdecl WriteDatafileByte(int Fileid,DWORD Value);
    void __cdecl WriteDatafileDatastring(int Fileid,LPCSTR DataString);
    void __cdecl WriteDatafileDatastring(int Fieldid,LPCSTR DataString,int Bytestowrite);
    void __cdecl WriteDatafileDoubleFloat(int Fileid,float Value);
    void __cdecl WriteDatafileDoubleInteger(int Fileid,LONGLONG Value);
    void __cdecl WriteDatafileDword(int Fileid,DWORD Value);
    void __cdecl WriteDatafileFloat(int Fileid,float Value);
    void __cdecl WriteDatafileInteger(int Fileid,int Value);
    void __cdecl WriteDatafileMemory(int Fileid,DWORD Address,int Bytestowrite);
    void __cdecl WriteDatafileString(int Fileid,LPCSTR Value);
    void __cdecl WriteDatafileWord(int Fileid,DWORD Value);
}

#endif
