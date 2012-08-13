/*
            File : DBPro/Matrix1Util_16.hpp
       Generated : 2011/09/02 20:15:31
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_16_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_16_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    int __cdecl Compare(LPCSTR First,LPCSTR Second);
    LPSTR __cdecl Cr();
    LPSTR __cdecl Crlf();
    LPSTR __cdecl DelimitCsv(LPCSTR Source);
    LPSTR __cdecl DelimitCsv(LPCSTR Source,int ForceFlag);
    LPSTR __cdecl ExpandEnvironment(LPCSTR Sourcestring);
    LPSTR __cdecl FastLeft(LPCSTR Source,int Size);
    int __cdecl FastLen(LPCSTR Source);
    LPSTR __cdecl FastLower(LPCSTR Source);
    LPSTR __cdecl FastRight(LPCSTR Source,int Size);
    LPSTR __cdecl FastUpper(LPCSTR Source);
    int __cdecl FindAscii(LPCSTR Source,int Searchascii);
    int __cdecl FindAscii(LPCSTR Source,int Searchascii,int Startpos);
    DWORD __cdecl FindChar(LPCSTR Source,LPCSTR Searchcharacters);
    DWORD __cdecl FindChar(LPCSTR Source,LPCSTR Searchcharacters,int Startposition);
    LPSTR __cdecl GenerateGuid();
    LPSTR __cdecl GenerateString(DWORD Size);
    LPSTR __cdecl GenerateString(LPCSTR Sourcechars,DWORD Size);
    LPSTR __cdecl GetSplitDelimiter(int WordNumber);
    int __cdecl GetSplitWordPos(int WordNumber);
    LPSTR __cdecl GetSplitWord(int WordNumber);
    LPSTR __cdecl Insert(LPCSTR Source,int InsertPosition,LPCSTR InsertString);
    int __cdecl Instr(LPCSTR Source,LPCSTR Search);
    int __cdecl Instr(LPCSTR Source,LPCSTR Search,int Startposition);
    int __cdecl LastInstr(LPCSTR Source,LPCSTR Search);
    LPSTR __cdecl Lf();
    int __cdecl MidAscii(LPCSTR Sourcestring,int Startposition);
    LPSTR __cdecl Mid(LPCSTR Source,int Startposition,int Size);
    LPSTR __cdecl Padleft(LPCSTR Source,int Size);
    LPSTR __cdecl Padleft(LPCSTR Source,LPCSTR Paddingchar,int Size);
    LPSTR __cdecl Padright(LPCSTR Source,int Size);
    LPSTR __cdecl Padright(LPCSTR Source,LPCSTR Paddingchar,int Size);
    LPSTR __cdecl Quote();
    LPSTR __cdecl Quote(LPCSTR Source);
    LPSTR __cdecl RemoveAll(LPCSTR Source,LPCSTR Search);
    LPSTR __cdecl Remove(LPCSTR Source,int Startposition,int Size);
    LPSTR __cdecl Remove(LPCSTR Source,LPCSTR Search);
    LPSTR __cdecl ReplaceAll(LPCSTR Source,LPCSTR SearchString,LPCSTR InsertString);
    LPSTR __cdecl Replace(LPCSTR Source,int StartPosition,int Size,LPCSTR InsertString);
    LPSTR __cdecl Replace(LPCSTR Source,LPCSTR SearchString,LPCSTR InsertString);
    int __cdecl SplitCount();
    void __cdecl SplitCsvString(LPCSTR Source);
    void __cdecl SplitCsvString(LPCSTR Source,LPCSTR Separator,LPCSTR Quote);
    LPSTR __cdecl SplitDelimiter(int WordNumber);
    void __cdecl SplitString(LPCSTR Source,LPCSTR Delimiters);
    int __cdecl SplitWordPos(int WordNumber);
    LPSTR __cdecl SplitWord(int WordNumber);
    int __cdecl StringCount(LPCSTR Source,LPCSTR Search);
    LPSTR __cdecl Tab();
    LPSTR __cdecl Trim(LPCSTR Source);
    LPSTR __cdecl Trim(LPCSTR Source,LPCSTR Paddingchars);
    LPSTR __cdecl Trimleft(LPCSTR Source);
    LPSTR __cdecl Trimleft(LPCSTR Source,LPCSTR Paddingchars);
    LPSTR __cdecl Trimright(LPCSTR Source);
    LPSTR __cdecl Trimright(LPCSTR Source,LPCSTR Paddingchars);
    LPSTR __cdecl Unquote(LPCSTR Source);
}

#endif
