/*
            File : DBPro/Matrix1Util_27.hpp
       Generated : 2011/09/02 20:15:48
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_27_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_27_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    LPSTR __cdecl HashBankCrc32(DWORD Bank);
    LPSTR __cdecl HashBankCrc32(DWORD Bank,DWORD Offset,DWORD Size);
    LPSTR __cdecl HashBankMd4(DWORD Bank);
    LPSTR __cdecl HashBankMd4(DWORD Bank,DWORD Offset,DWORD Size);
    LPSTR __cdecl HashBankMd5(DWORD Bank);
    LPSTR __cdecl HashBankMd5(DWORD Bank,DWORD Offset,DWORD Size);
    LPSTR __cdecl HashBankRipemd128(DWORD Bank);
    LPSTR __cdecl HashBankRipemd128(DWORD Bank,DWORD Offset,DWORD Size);
    LPSTR __cdecl HashBankRipemd160(DWORD Bank);
    LPSTR __cdecl HashBankRipemd160(DWORD Bank,DWORD Offset,DWORD Size);
    LPSTR __cdecl HashBankRipemd256(DWORD Bank);
    LPSTR __cdecl HashBankRipemd256(DWORD Bank,DWORD Offset,DWORD Size);
    LPSTR __cdecl HashBankRipemd320(DWORD Bank);
    LPSTR __cdecl HashBankRipemd320(DWORD Bank,DWORD Offset,DWORD Size);
    LPSTR __cdecl HashBankSha1(DWORD Bank);
    LPSTR __cdecl HashBankSha1(DWORD Bank,DWORD Offset,DWORD Size);
    LPSTR __cdecl HashBankSha224(DWORD Bank);
    LPSTR __cdecl HashBankSha224(DWORD Bank,DWORD Offset,DWORD Size);
    LPSTR __cdecl HashBankSha256(DWORD Bank);
    LPSTR __cdecl HashBankSha256(DWORD Bank,DWORD Offset,DWORD Size);
    LPSTR __cdecl HashBankSha384(DWORD Bank);
    LPSTR __cdecl HashBankSha384(DWORD Bank,DWORD Offset,DWORD Size);
    LPSTR __cdecl HashBankSha512(DWORD Bank);
    LPSTR __cdecl HashBankSha512(DWORD Bank,DWORD Offset,DWORD Size);
    LPSTR __cdecl HashBankTiger(DWORD Bank);
    LPSTR __cdecl HashBankTiger(DWORD Bank,DWORD Offset,DWORD Size);
    LPSTR __cdecl HashBankWhirlpool(DWORD Bank);
    LPSTR __cdecl HashBankWhirlpool(DWORD Bank,DWORD Offset,DWORD Size);
    LPSTR __cdecl HashCrc32(DWORD Address,DWORD Size);
    LPSTR __cdecl HashCrc32(LPCSTR String);
    LPSTR __cdecl HashMd5(DWORD Address,DWORD Size);
    LPSTR __cdecl HashMd5(LPCSTR String);
    LPSTR __cdecl HashRipemd128(DWORD Address,DWORD Size);
    LPSTR __cdecl HashRipemd128(LPCSTR String);
    LPSTR __cdecl HashRipemd160(DWORD Address,DWORD Size);
    LPSTR __cdecl HashRipemd160(LPCSTR String);
    LPSTR __cdecl HashRipemd256(DWORD Address,DWORD Size);
    LPSTR __cdecl HashRipemd256(LPCSTR String);
    LPSTR __cdecl HashRipemd320(DWORD Address,DWORD Size);
    LPSTR __cdecl HashRipemd320(LPCSTR String);
    LPSTR __cdecl HashSha1(DWORD Address,DWORD Size);
    LPSTR __cdecl HashSha1(LPCSTR String);
    LPSTR __cdecl HashSha224(DWORD Address,DWORD Size);
    LPSTR __cdecl HashSha224(LPCSTR String);
    LPSTR __cdecl HashSha256(DWORD Address,DWORD Size);
    LPSTR __cdecl HashSha256(LPCSTR String);
    LPSTR __cdecl HashSha384(DWORD Address,DWORD Size);
    LPSTR __cdecl HashSha384(LPCSTR String);
    LPSTR __cdecl HashSha512(DWORD Address,DWORD Size);
    LPSTR __cdecl HashSha512(LPCSTR String);
    LPSTR __cdecl HashTiger(DWORD Address,DWORD Size);
    LPSTR __cdecl HashTiger(LPCSTR String);
    LPSTR __cdecl HashWhirlpool(DWORD Address,DWORD Size);
    LPSTR __cdecl HashWhirlpool(LPCSTR String);
    LPSTR __cdecl Hash_md4(DWORD Address,DWORD Size);
    LPSTR __cdecl Hash_md4(LPCSTR String);
}

#endif
