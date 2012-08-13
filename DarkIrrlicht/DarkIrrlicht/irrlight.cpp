#include "main.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// IRRLIGHT library (ILightSceneNode manager)
//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

EXPORTC void irrlight_setradius(scene::ILightSceneNode* light,f32 radius)
{
	light->setRadius(radius);
}

EXPORTC DWORD irrlight_getradius(scene::ILightSceneNode* light)
{
	return DBPro::CastFloatToDword(light->getRadius());
}

EXPORTC void irrlight_settype(scene::ILightSceneNode* light,int type)
{
	light->setLightType((video::E_LIGHT_TYPE) type);
}

EXPORTC DWORD irrlight_gettype(scene::ILightSceneNode* light)
{
	return (DWORD)light->getLightType();
}

EXPORTC void irrlight_castshadow(scene::ILightSceneNode* light,int enable)
{
	bool flag;
	if (enable) flag=true; else flag=false;
	light->enableCastShadow(flag);
}

EXPORTC DWORD irrlight_getcastshadow(scene::ILightSceneNode* light)
{
	return (DWORD)light->getCastShadow();
}
