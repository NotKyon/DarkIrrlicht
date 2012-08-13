/*
            File : DBPro/Matrix1Util_20.hpp
       Generated : 2011/09/02 20:15:37
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_20_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_20_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    void __cdecl AllowNullFunctionPtr(DWORD AllowNullsFlag);
    DWORD __cdecl ArglistBoolean(int ArglistHandle);
    DWORD __cdecl ArglistByte(int ArglistHandle);
    double __cdecl ArglistDoubleFloat(int ArglistHandle);
    LONGLONG __cdecl ArglistDoubleInteger(int ArglistHandle);
    DWORD __cdecl ArglistDword(int ArglistHandle);
    float __cdecl ArglistFloat(int ArglistHandle);
    int __cdecl ArglistInteger(int ArglistHandle);
    LPSTR __cdecl ArglistString(int ArglistHandle);
    DWORD __cdecl ArglistWord(int ArglistHandle);
    LPVOID __cdecl CallFunctionName(LPCSTR a);
    LPVOID __cdecl CallFunctionName(LPCSTR a,LPVOID b);
    LPVOID __cdecl CallFunctionName(LPCSTR a,LPVOID b,LPVOID c);
    LPVOID __cdecl CallFunctionName(LPCSTR a,LPVOID b,LPVOID c,LPVOID d);
    LPVOID __cdecl CallFunctionName(LPCSTR a,LPVOID b,LPVOID c,LPVOID d,LPVOID e);
    LPVOID __cdecl CallFunctionName(LPCSTR a,LPVOID b,LPVOID c,LPVOID d,LPVOID e,LPVOID f);
    LPVOID __cdecl CallFunctionName(LPCSTR a,LPVOID b,LPVOID c,LPVOID d,LPVOID e,LPVOID f,LPVOID g);
    LPVOID __cdecl CallFunctionName(LPCSTR a,LPVOID b,LPVOID c,LPVOID d,LPVOID e,LPVOID f,LPVOID g,LPVOID h);
    LPVOID __cdecl CallFunctionName(LPCSTR a,LPVOID b,LPVOID c,LPVOID d,LPVOID e,LPVOID f,LPVOID g,LPVOID h,LPVOID i);
    LPVOID __cdecl CallFunctionName(LPCSTR a,LPVOID b,LPVOID c,LPVOID d,LPVOID e,LPVOID f,LPVOID g,LPVOID h,LPVOID i,LPVOID j);
    LPVOID __cdecl CallFunctionPtr(int a);
    LPVOID __cdecl CallFunctionPtr(int a,LPVOID b);
    LPVOID __cdecl CallFunctionPtr(int a,LPVOID b,LPVOID c);
    LPVOID __cdecl CallFunctionPtr(int a,LPVOID b,LPVOID c,LPVOID d);
    LPVOID __cdecl CallFunctionPtr(int a,LPVOID b,LPVOID c,LPVOID d,LPVOID e);
    LPVOID __cdecl CallFunctionPtr(int a,LPVOID b,LPVOID c,LPVOID d,LPVOID e,LPVOID f);
    LPVOID __cdecl CallFunctionPtr(int a,LPVOID b,LPVOID c,LPVOID d,LPVOID e,LPVOID f,LPVOID g);
    LPVOID __cdecl CallFunctionPtr(int a,LPVOID b,LPVOID c,LPVOID d,LPVOID e,LPVOID f,LPVOID g,LPVOID h);
    LPVOID __cdecl CallFunctionPtr(int a,LPVOID b,LPVOID c,LPVOID d,LPVOID e,LPVOID f,LPVOID g,LPVOID h,LPVOID i);
    LPVOID __cdecl CallFunctionPtr(int a,LPVOID b,LPVOID c,LPVOID d,LPVOID e,LPVOID f,LPVOID g,LPVOID h,LPVOID i,LPVOID j);
    int __cdecl CoroutineActive(int CoroutineId);
    int __cdecl CoroutineExist(int CoroutineId);
    int __cdecl CoroutineReserved(int Coroutineid);
    void __cdecl CreateCoroutine(int CoroutineId,DWORD FunctionPointer);
    void __cdecl CreateCoroutine(int CoroutineId,DWORD FunctionPointer,DWORD StackSize);
    void __cdecl CreateCoroutine(int CoroutineId,LPCSTR FunctionName);
    void __cdecl CreateCoroutine(int CoroutineId,LPCSTR FunctionName,DWORD StackSize);
    int __cdecl CurrentCoroutine();
    void __cdecl DeleteCoroutine(int CoroutineId);
    LPSTR __cdecl DllFilename(DWORD DllHandle);
    DWORD __cdecl DllHandleIsValid(DWORD DllHandle);
    DWORD __cdecl DllLoadCount(DWORD DllHandle);
    int __cdecl FindFreeCoroutine();
    int __cdecl FindFreeCoroutine(int Start,int Rangesize);
    DWORD __cdecl FunctionPtrIsValid(DWORD FunctionPointer);
    DWORD __cdecl GetFunctionCount();
    LPSTR __cdecl GetFunctionName(int FunctionNumber);
    DWORD __cdecl GetPtrToDllFunction(DWORD DllHandle,LPCSTR FunctionName);
    DWORD __cdecl GetPtrToFunction(DWORD FunctionNumber);
    DWORD __cdecl GetPtrToFunction(LPCSTR FunctionName);
    DWORD __cdecl GetPtrToNextFunction();
    DWORD __cdecl GetPtrToPrevFunction();
    DWORD __cdecl GetPtrToThisFunction();
    DWORD __cdecl LoadDll(LPCSTR DllName);
    void __cdecl NextCoroutine();
    int __cdecl OpenArglist();
    void __cdecl RegisterFunctionPtr(DWORD FunctionPointer);
    void __cdecl ReleaseReservedCoroutine(int a);
    int __cdecl ReserveFreeCoroutine();
    int __cdecl ReserveFreeCoroutine(int Start,int Rangesize);
    void __cdecl ResetArglist(int ArglistHandle);
    void __cdecl RestartCoroutine(int CoroutineId);
    DWORD __cdecl ReturnedBoolean();
    DWORD __cdecl ReturnedByte();
    double __cdecl ReturnedDoubleFloat();
    LONGLONG __cdecl ReturnedDoubleInteger();
    DWORD __cdecl ReturnedDword();
    float __cdecl ReturnedFloat();
    int __cdecl ReturnedInteger();
    LPSTR __cdecl ReturnedString();
    DWORD __cdecl ReturnedWord();
    void __cdecl SetCallFunctionTunables(DWORD Buffer,DWORD Args);
    void __cdecl SetCoroutineEndState(int CoroutineId,DWORD ActiveFlag);
    void __cdecl SwitchToCoroutine(int CoroutineId);
    void __cdecl UnloadDll(DWORD DllHandle);
    void __cdecl UnloadDll(DWORD DllHandle,DWORD ForceFlag);
    void __cdecl UnregisterFunctionPtr(DWORD FunctionPointer);
}

#endif
