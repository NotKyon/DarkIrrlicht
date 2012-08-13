#include "main.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// IRRCAM library (ICameraSceneNode manager)
//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

EXPORTC void irrcam_settarget(scene::ICameraSceneNode *cam,float x,float y,float z)
{
	cam->setTarget(core::vector3df(x,y,z));
}

EXPORTC void irrcam_setrotation(scene::ICameraSceneNode *cam,float x,float y,float z)
{
	cam->setRotation(core::vector3df(x,y,z));
}

EXPORTC void irrcam_setupvector(scene::ICameraSceneNode *cam,float x,float y,float z)
{
	cam->setUpVector(core::vector3df(x,y,z));
}

EXPORTC DWORD irrcam_getnearvalue(scene::ICameraSceneNode *cam)
{
	return DBPro::CastFloatToDword(cam->getNearValue());
}

EXPORTC DWORD irrcam_getfarvalue(scene::ICameraSceneNode *cam)
{
	return DBPro::CastFloatToDword(cam->getFarValue());
}

EXPORTC DWORD irrcam_getaspectratio(scene::ICameraSceneNode *cam)
{
	return DBPro::CastFloatToDword(cam->getAspectRatio());
}

EXPORTC DWORD irrcam_getfov(scene::ICameraSceneNode *cam)
{
	return DBPro::CastFloatToDword(cam->getFOV());
}

EXPORTC void irrcam_setnearvalue(scene::ICameraSceneNode *cam,float val)
{
	cam->setNearValue(val);
}

EXPORTC void irrcam_setfarvalue(scene::ICameraSceneNode *cam,float val)
{
	cam->setFarValue(val);
}

EXPORTC void irrcam_setaspectratio(scene::ICameraSceneNode *cam,float aspect)
{
	cam->setAspectRatio(aspect);
}

EXPORTC void irrcam_setfov(scene::ICameraSceneNode *cam,float fov)
{
	cam->setFOV(fov);
}
