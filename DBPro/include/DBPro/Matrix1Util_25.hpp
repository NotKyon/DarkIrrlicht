/*
            File : DBPro/Matrix1Util_25.hpp
       Generated : 2011/09/02 20:15:45
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_25_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_25_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    void __cdecl SetShortcutArgs(LPCSTR ShortcutName,LPCSTR Arguments);
    void __cdecl SetShortcutDescription(LPCSTR ShortcutName,LPCSTR Description);
    void __cdecl SetShortcutDir(LPCSTR ShortcutName,LPCSTR WorkingDirectory);
    void __cdecl SetShortcutIcon(LPCSTR ShortcutName,LPCSTR IconFile,int IconNumber);
    void __cdecl SetShortcutTarget(LPCSTR ShortcutName,LPCSTR Target);
    void __cdecl SetShortcut(LPCSTR ShortcutName,LPCSTR Target,LPCSTR Arguments,LPCSTR WorkingDirectory,LPCSTR Description,LPCSTR IconFile,int IconId);
    LPSTR __cdecl ShortcutArgs(LPCSTR ShortcutName);
    LPSTR __cdecl ShortcutDescription(LPCSTR ShortcutName);
    LPSTR __cdecl ShortcutDir(LPCSTR ShortcutName);
    int __cdecl ShortcutIconId(LPCSTR ShortcutName);
    LPSTR __cdecl ShortcutIcon(LPCSTR ShortcutName);
    LPSTR __cdecl ShortcutTarget(LPCSTR ShortcutName);
}

#endif
