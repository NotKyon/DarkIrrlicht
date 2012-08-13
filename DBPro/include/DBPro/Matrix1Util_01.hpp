/*
            File : DBPro/Matrix1Util_01.hpp
       Generated : 2011/09/02 20:15:11
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_01_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_01_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    DWORD __cdecl BankBoolean(DWORD Bank,DWORD Position);
    DWORD __cdecl BankByte(DWORD Bank,DWORD Position);
    double __cdecl BankDoubleFloat(DWORD Bank,DWORD Position);
    LONGLONG __cdecl BankDoubleInteger(DWORD Bank,DWORD Position);
    DWORD __cdecl BankDword(DWORD Bank,DWORD Position);
    DWORD __cdecl BankExist(DWORD Bank);
    float __cdecl BankFloat(DWORD Bank,DWORD Position);
    int __cdecl BankInteger(DWORD Bank,DWORD Position);
    int __cdecl BankReserved(int Bankid);
    LPSTR __cdecl BankString(DWORD Bank,DWORD Position,DWORD Size);
    DWORD __cdecl BankWord(DWORD Bank,DWORD Position);
    void __cdecl CopyBank(DWORD Sourcebank,DWORD Sourcepos,DWORD Size,DWORD Targetbank,DWORD Targetpos);
    void __cdecl DeleteBank(DWORD Bank);
    DWORD __cdecl FindFreeBank();
    DWORD __cdecl FindFreeBank(DWORD Start,DWORD Rangesize);
    DWORD __cdecl GetBankMemblock(DWORD Bank);
    LPVOID __cdecl GetBankPtr(DWORD Bank);
    LPSTR __cdecl GetBankSharedName(DWORD Bank);
    DWORD __cdecl GetBankSize(DWORD Bank);
    void __cdecl MakeBankFromBank(DWORD Targetbank,DWORD SourceBank);
    void __cdecl MakeBankFromBank(DWORD Targetbank,DWORD Sourcebank,DWORD Startpos,DWORD Size);
    void __cdecl MakeBankFromFile(DWORD Bank,LPCSTR Filename);
    void __cdecl MakeBankFromFile(DWORD Bank,LPCSTR Filename,DWORD Startpos,DWORD Size);
    void __cdecl MakeBankFromMemblock(DWORD Bank,DWORD Memblock);
    void __cdecl MakeBankFromMemblock(DWORD Bank,DWORD Memblock,DWORD Startpos,DWORD Size);
    void __cdecl MakeBank(DWORD Bank,DWORD Size);
    void __cdecl MakeFileFromBank(LPCSTR Filename,DWORD Bank);
    void __cdecl MakeMemblockFromBank(DWORD Memblock,DWORD Bank);
    void __cdecl MakeMemblockFromBank(DWORD Memblock,DWORD Bank,DWORD Startpos,DWORD Size);
    void __cdecl MapFileToBank(LPCSTR Filename,DWORD Bank);
    void __cdecl MapFileToBank(LPCSTR Filename,DWORD Bank,DWORD Minimumsize);
    void __cdecl MapMemblockToBank(DWORD Memblock,DWORD Bank);
    void __cdecl MapMemoryToBank(DWORD MemoryPointer,DWORD Bank,DWORD Size);
    void __cdecl MapSharedMemToBank(LPCSTR Sharedname,DWORD Bank,DWORD Size);
    void __cdecl ReleaseReservedBank(int a);
    void __cdecl RenumberBank(DWORD Sourcebank,DWORD Targetbank);
    int __cdecl ReserveFreeBank();
    int __cdecl ReserveFreeBank(int Start,int Rangesize);
    int __cdecl SearchBank(int Bank,LPCSTR Searchstring);
    int __cdecl SearchBank(int Bank,LPCSTR Searchstring,int Startpos);
    int __cdecl SearchBank(int Bank,LPCSTR Searchstring,int Startpos,int Size);
    void __cdecl SwapBanks(DWORD Bank1,DWORD Bank2);
    void __cdecl WriteBankBoolean(DWORD Bank,DWORD Position,DWORD Value);
    void __cdecl WriteBankByte(DWORD Bank,DWORD Position,DWORD Value);
    void __cdecl WriteBankDoubleFloat(DWORD Bank,DWORD Position,double Value);
    void __cdecl WriteBankDoubleInteger(DWORD Bank,DWORD Position,LONGLONG Value);
    void __cdecl WriteBankDword(DWORD Bank,DWORD Position,DWORD Value);
    void __cdecl WriteBankFloat(DWORD Bank,DWORD Position,float Value);
    void __cdecl WriteBankInteger(DWORD Bank,DWORD Position,int Value);
    void __cdecl WriteBankString(DWORD Bank,DWORD Position,LPCSTR Value,DWORD Size);
    void __cdecl WriteBankWord(DWORD Bank,DWORD Position,DWORD Value);
    void __cdecl ZeroBank(int Bank);
    void __cdecl ZeroBank(int Bank,DWORD Startpos,DWORD Size);
}

#endif
