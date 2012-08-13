/*
            File : DBPro/Matrix1Util_32.hpp
       Generated : 2011/09/02 20:15:56
   DBPro release : 7.7
*/

#ifndef INCLUDE_GUARD_DBPro_Matrix1Util_32_hpp
#define INCLUDE_GUARD_DBPro_Matrix1Util_32_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#define VC_EXTRALEAN
#include <windows.h>
#include <D3dx9tex.h>


namespace DBPro
{
    void __cdecl AddVector3ToCameraPosition(int Vector3,float Scale,int Camera);
    void __cdecl AddVector3ToCameraPosition(int Vector3,int Camera);
    void __cdecl AddVector3ToObjectPosition(int Vector3,float Scale,int Object);
    void __cdecl AddVector3ToObjectPosition(int Vector3,int Object);
    void __cdecl ApplyProjectionMatrix4(int Matrix4source);
    void __cdecl ApplyProjectionMatrix4(int Matrix4source,int CameraId);
    void __cdecl ApplyViewMatrix4(int Matrix4source);
    void __cdecl ApplyViewMatrix4(int Matrix4source,int CameraId);
    void __cdecl BuildMatrix4(int Matrix4result,float PositionX,float PositionY,float PositionZ,float AngleX,float AngleY,float AngleZ);
    void __cdecl BuildMatrix4(int Matrix4result,int Vector3Position,int Vector3Angle);
    int __cdecl FindFreeVector();
    int __cdecl FindFreeVector(int Start,int Rangesize);
    int __cdecl NewMatrix4();
    int __cdecl NewMatrix4(float _11,float _12,float _13,float _14,float _21,float _22,float _23,float _24,float _31,float _32,float _33,float _34,float _41,float _42,float _43,float _44);
    int __cdecl NewVector2();
    int __cdecl NewVector2(float X,float Y);
    int __cdecl NewVector3();
    int __cdecl NewVector3(float X,float Y,float Z);
    int __cdecl NewVector4();
    int __cdecl NewVector4(float X,float Y,float Z,float W);
    void __cdecl PointCameraAtVector3(int Camera,int Vector3);
    void __cdecl PointObjectAtVector3(int Object,int Vector3);
    void __cdecl PositionCameraAtVector3(int Camera,int Vector3);
    void __cdecl PositionObjectAtVector3(int Object,int Vector3);
    void __cdecl ProjectionMatrix4(int Matrix4result,int CameraId);
    void __cdecl ReleaseReservedVector(int a);
    int __cdecl ReserveFreeVector();
    int __cdecl ReserveFreeVector(int Start,int Rangesize);
    void __cdecl RotateCameraToVector3(int Camera,int Vector3);
    void __cdecl RotateObjectToVector3(int Object,int Vector3);
    void __cdecl RotateXyzMatrix4(int Matrix4result,float X,float Y,float Z);
    void __cdecl RotateXyzMatrix4(int Matrix4result,int Vector3source);
    void __cdecl SetMatrix4ToLimb(int Matrix4,int Object,int Limb);
    void __cdecl SetMatrix4ToObject(int Matrix4,int Object);
    void __cdecl SetMatrix4(int Matrix4result,float _11,float _12,float _13,float _14,float _21,float _22,float _23,float _24,float _31,float _32,float _33,float _34,float _41,float _42,float _43,float _44);
    void __cdecl SetVector3ToAnglesBetweenVectors(int Vector3result,int Vector3source,int Vector3target);
    void __cdecl SetVector3ToLimbDirection(int Vector3,int Object,int Limb);
    void __cdecl SetVector3ToLimbOffset(int Vector3,int Object,int Limb);
    void __cdecl SetVector3ToLimbPosition(int Vector3,int Object,int Limb);
    void __cdecl SetVector3ToLimbRotation(int Vector3,int Object,int Limb);
    void __cdecl SetVector3ToMatrix4Position(int Vector3,int Matrix4source);
    void __cdecl SetVector3ToMatrix4Rotation(int Vector3,int Matrix4source);
    void __cdecl SetVector3ToObjectPosition(int Vector3,int Object);
    void __cdecl SetVector3ToObjectRotation(int Vector3,int Object);
    int __cdecl VectorReserved(int Vectorid);
    int __cdecl VectorType(int Vector);
    void __cdecl Vector3ToDegrees(int Vector3);
    void __cdecl Vector3ToRadians(int Vector3);
    void __cdecl ViewMatrix4(int Matrix4result,int CameraId);
}

#endif
