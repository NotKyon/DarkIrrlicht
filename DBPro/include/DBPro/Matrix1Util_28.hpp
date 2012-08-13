/*
            File : DBPro/Matrix1Util_28.hpp
       Generated : 2011/09/02 20:15:50
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_28_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_28_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    DWORD __cdecl AcceptSocket(DWORD SocketHandle);
    DWORD __cdecl AcceptSocket(DWORD SocketHandle,int Timeout);
    DWORD __cdecl BindSocket(DWORD SocketHandle,DWORD IpAddress,int PortNumber);
    DWORD __cdecl BindSocket(DWORD SocketHandle,int PortNumber);
    void __cdecl ClearSocketError();
    DWORD __cdecl ConnectSocket(DWORD SocketHandle,DWORD IpAddress,int PortNumber);
    DWORD __cdecl ConnectSocket(DWORD SocketHandle,DWORD IpAddress,int PortNumber,int Timeout);
    void __cdecl DeleteSocket(DWORD SocketHandle);
    DWORD __cdecl FirstSocket();
    float __cdecl FloatToNetFormat(float LongValue);
    DWORD __cdecl HostnameToIp(LPCSTR HostnameString);
    int __cdecl InterfaceCount();
    DWORD __cdecl InterfaceIp(int TablePosition);
    LPSTR __cdecl IpToString(DWORD IpAddress);
    DWORD __cdecl ListenSocket(DWORD SocketHandle);
    DWORD __cdecl ListenSocket(DWORD SocketHandle,int Backlog);
    DWORD __cdecl LongToNetFormat(DWORD LongValue);
    float __cdecl NetFormatToFloat(float LongValue);
    DWORD __cdecl NetFormatToLong(DWORD LongValue);
    DWORD __cdecl NetFormatToWord(DWORD WordValue);
    DWORD __cdecl NewAcceptSocket(DWORD IpAddress,int PortNumber);
    DWORD __cdecl NewAcceptSocket(DWORD IpAddress,int PortNumber,int Timeout);
    DWORD __cdecl NewAcceptSocket(int PortNumber);
    DWORD __cdecl NewConnectSocket(DWORD IpAddress,int PortNumber);
    DWORD __cdecl NewConnectSocket(DWORD IpAddress,int PortNumber,int Timeout);
    DWORD __cdecl NewListenSocket(DWORD IpAddress,int PortNumber);
    DWORD __cdecl NewListenSocket(int PortNumber);
    DWORD __cdecl NewTcpSocket();
    DWORD __cdecl NewUdpSocket();
    DWORD __cdecl NextSocket();
    int __cdecl PeekSocket(DWORD SocketHandle,DWORD BufferAddress,int BufferSize);
    void __cdecl PerformChecklistForInterfaces();
    void __cdecl PerformChecklistForSockets();
    void __cdecl PerformChecklistForSockets(int a);
    int __cdecl PortnameToPort(LPCSTR Portname);
    int __cdecl PortnameToPort(LPCSTR Portname,LPCSTR Protocolname);
    int __cdecl RecvFromSocket(DWORD SocketHandle,DWORD BufferAddress,int BufferSize);
    DWORD __cdecl RecvSocketBank(DWORD SocketHandle,int Bank);
    DWORD __cdecl RecvSocketByte(DWORD SocketHandle);
    float __cdecl RecvSocketFloat(DWORD SocketHandle);
    DWORD __cdecl RecvSocketLong(DWORD SocketHandle);
    DWORD __cdecl RecvSocketMemblock(DWORD SocketHandle,int Memblock);
    LPSTR __cdecl RecvSocketString(DWORD SocketHandle);
    DWORD __cdecl RecvSocketWord(DWORD SocketHandle);
    int __cdecl RecvSocket(DWORD SocketHandle,DWORD BufferAddress,int BufferSize);
    DWORD __cdecl SendSocketBankTo(DWORD SocketHandle,int Bank,DWORD IpAddress,int PortNumber);
    DWORD __cdecl SendSocketBank(DWORD SocketHandle,int Bank);
    DWORD __cdecl SendSocketByte(DWORD SocketHandle,DWORD ByteValue);
    DWORD __cdecl SendSocketFloat(DWORD SocketHandle,float FloatValue);
    DWORD __cdecl SendSocketLong(DWORD SocketHandle,DWORD LongValue);
    DWORD __cdecl SendSocketMemblockTo(DWORD SocketHandle,int Memblock,DWORD IpAddress,int PortNumber);
    DWORD __cdecl SendSocketMemblock(DWORD SocketHandle,int Memblock);
    DWORD __cdecl SendSocketStringTo(DWORD SocketHandle,LPCSTR StringValue,DWORD IpAddress,int PortNumber);
    DWORD __cdecl SendSocketString(DWORD SocketHandle,LPCSTR StringValue);
    DWORD __cdecl SendSocketWord(DWORD SocketHandle,DWORD WordValue);
    int __cdecl SendSocket(DWORD SocketHandle,DWORD BufferAddress,int BufferSize);
    int __cdecl SendToSocket(DWORD SocketHandle,DWORD BufferAddress,int BufferSize,DWORD IpAddress,int PortNumber);
    void __cdecl SetSocketBlockingOff(DWORD SocketHandle);
    void __cdecl SetSocketBlockingOn(DWORD SocketHandle);
    void __cdecl SetSocketBlocking(DWORD SocketHandle,DWORD Flag);
    void __cdecl SetSocketName(DWORD SocketHandle,LPCSTR Name);
    void __cdecl SetSocketNoDelay(DWORD SocketHandle,DWORD NodelayFlag);
    void __cdecl SetSocketRecvBuffer(DWORD SocketHandle,int BufferSize);
    void __cdecl SetSocketReference(DWORD Handle,DWORD Value);
    void __cdecl SetSocketSendBuffer(DWORD SocketHandle,int BufferSize);
    void __cdecl SetSocketStringDelimiter(DWORD SocketHandle,LPCSTR DelimiterString);
    void __cdecl SetSocketStringSized(DWORD SocketHandle);
    void __cdecl ShutdownSocketRecv(DWORD SocketHandle);
    void __cdecl ShutdownSocketSend(DWORD SocketHandle);
    DWORD __cdecl SocketBlocking(DWORD SocketHandle);
    int __cdecl SocketBytesAvailable(DWORD SocketHandle);
    DWORD __cdecl SocketCount();
    DWORD __cdecl SocketError();
    DWORD __cdecl SocketIsValid(DWORD Handle);
    DWORD __cdecl SocketLocalIp(DWORD SocketHandle);
    int __cdecl SocketLocalPort(DWORD SocketHandle);
    LPSTR __cdecl SocketName(DWORD SocketHandle);
    DWORD __cdecl SocketNoDelay(DWORD SocketHandle);
    DWORD __cdecl SocketPollRead(DWORD SocketHandle);
    DWORD __cdecl SocketPollRead(DWORD SocketHandle,int Timeout);
    DWORD __cdecl SocketPollWrite(DWORD SocketHandle);
    DWORD __cdecl SocketPollWrite(DWORD SocketHandle,int Timeout);
    DWORD __cdecl SocketPoll(DWORD SocketHandle);
    DWORD __cdecl SocketPoll(DWORD SocketHandle,DWORD Mask,int Timeout);
    DWORD __cdecl SocketPoll(DWORD SocketHandle,int Timeout);
    int __cdecl SocketRecvBuffer(DWORD SocketHandle);
    DWORD __cdecl SocketReference(DWORD Handle);
    DWORD __cdecl SocketRemoteIp(DWORD SocketHandle);
    int __cdecl SocketRemotePort(DWORD SocketHandle);
    int __cdecl SocketSendBuffer(DWORD SocketHandle);
    DWORD __cdecl SocketType(DWORD SocketHandle);
    DWORD __cdecl SocketUsage(DWORD SocketHandle);
    DWORD __cdecl WordToNetFormat(DWORD WordValue);
}

#endif
