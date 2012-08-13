#ifndef _CCAMERADATA_H_
#define _CCAMERADATA_H_

#include <D3DX9.h>

struct tagCameraData
{
        // variables for the camera

        D3DXMATRIX          matProjection;      // projection matrix
        D3DXMATRIX          matView;            // view matrix

        D3DXVECTOR3         vecLook;            // look vector
        D3DXVECTOR3         vecUp;              // up vector
        D3DXVECTOR3         vecRight;           // right vector
        D3DXVECTOR3         vecPosition;        // position vector

        D3DVIEWPORT9        viewPort2D;         // view port for 2D ( area on screen to take up )
        D3DVIEWPORT9        viewPort3D;         // view port for 3D ( area on screen to take up )

        int                 iCameraToImage;
        LPDIRECT3DTEXTURE9  pCameraToImageTexture;
        LPDIRECT3DSURFACE9  pCameraToImageSurface;
        LPDIRECT3DTEXTURE9  pCameraToImageAlphaTexture;
        LPDIRECT3DSURFACE9  pCameraToImageAlphaSurface;

        // U69 - 180508 - new stereoscopic mode for camera images
        int                 iStereoscopicMode;
        tagCameraData*      pStereoscopicFirstCamera;
        int                 iCameraToStereoImageBack;
        int                 iCameraToStereoImageFront;
        LPDIRECT3DTEXTURE9  pCameraToStereoImageBackTexture;
        LPDIRECT3DTEXTURE9  pCameraToStereoImageFrontTexture;
        LPDIRECT3DSURFACE9  pCameraToStereoImageBackSurface;
        LPDIRECT3DSURFACE9  pCameraToStereoImageFrontSurface;        

        int                 iBackdropState;     // used as an automatic clear
        DWORD               dwBackdropColor;    // color of backdrop

        // Can use XYZ rotation or FreeFlight(YPR)
        bool                bUseFreeFlightRotation;
        D3DXMATRIX          matFreeFlightRotate;
        float               fXRotate, fYRotate, fZRotate;        // rotateangle

        float               fAspect;            // aspect ratio
        float               fAspectMod;
        float               fFOV;               // field of view
        float               fZNear;             // z near
        float               fZFar;              // z far

        bool                bRotate;            // which rotate to use

        // mike - 250903 - override camera
        bool                bOverride;
        D3DXMATRIX          matOverride;

        // leeadd - 310506 - u62 - added clipping planes (so can do reflection tricks)
        int                 iClipPlaneOn;
        D3DXPLANE           planeClip;

// CONSTRUCTOR REMOVED - IRM
};

#endif _CCAMERADATA_H_

