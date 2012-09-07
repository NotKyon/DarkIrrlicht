#include "main.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// IRRNODE library (ISceneNode manager)
//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

EXPORTC DWORD irrnode_isvisible(scene::ISceneNode *node)
{
	return (DWORD)node->isVisible();
}

EXPORTC DWORD irrnode_istrulyvisible(scene::ISceneNode *node)
{
	return (DWORD)node->isTrulyVisible();
}

EXPORTC void irrnode_setvisible(scene::ISceneNode *node,int visible)
{
	bool flag;
	if (visible) flag=true; else flag=false;
	node->setVisible(flag);
}

EXPORTC DWORD irrnode_getid( scene::ISceneNode *node)
{
	return (DWORD)node->getID();
}

EXPORTC void irrnode_setid(scene::ISceneNode *node, s32 id)
{
	node->setID(id);
}

EXPORTC void irrnode_addchild(scene::ISceneNode *node,scene::ISceneNode *child)
{
	node->addChild(child);
}

EXPORTC DWORD irrnode_removechild(scene::ISceneNode *node,scene::ISceneNode *child)
{
	return (DWORD)node->removeChild(child);
}

EXPORTC void irrnode_removeall(scene::ISceneNode *node)
{
	node->removeAll();
}

EXPORTC void irrnode_remove(scene::ISceneNode *node)
{
	node->remove();
}

EXPORTC void irrnode_addanimator(scene::ISceneNode *node, scene::ISceneNodeAnimator *anim)
{
	node->addAnimator(anim);
}

EXPORTC void irrnode_removeanimator(scene::ISceneNode *node,scene::ISceneNodeAnimator *anim)
{
	node->removeAnimator(anim);
}

EXPORTC void irrnode_removeanimators(scene::ISceneNode *node)
{
	node->removeAnimators();
}

EXPORTC DWORD irrnode_getmaterialcount(scene::ISceneNode *node)
{
	return (DWORD)node->getMaterialCount();
}

EXPORTC void irrnode_setmaterialflag(scene::ISceneNode *node,int matflag,int newflag)
{
	bool boolflag;
	if (newflag) boolflag=true; else boolflag=false;
	node->setMaterialFlag((video::E_MATERIAL_FLAG)matflag,boolflag);
}

EXPORTC void irrnode_setmaterialtexture(scene::ISceneNode *node,
	u32 layer,video::ITexture *texture)
{
	node->setMaterialTexture(layer,texture);
}

EXPORTC void irrnode_setmaterialtype(scene::ISceneNode *node,int newtype)
{
	node->setMaterialType((video::E_MATERIAL_TYPE)newtype);
}

EXPORTC DWORD irrnode_getscalex(scene::ISceneNode *node)
{
	return DBPro::CastFloatToDword(node->getScale().X);
}

EXPORTC DWORD irrnode_getscaley(scene::ISceneNode *node)
{
	return DBPro::CastFloatToDword(node->getScale().Y);
}

EXPORTC DWORD irrnode_getscalez(scene::ISceneNode *node)
{
	return DBPro::CastFloatToDword(node->getScale().Z);
}

EXPORTC void irrnode_setscale(scene::ISceneNode *node,float x,float y,float z)
{
	core::vector3df vec(x,y,z);
	node->setScale(vec);
}

EXPORTC DWORD irrnode_getrotationx(scene::ISceneNode *node)
{
	return DBPro::CastFloatToDword(node->getRotation().X);
}

EXPORTC DWORD irrnode_getrotationy(scene::ISceneNode *node)
{
	return DBPro::CastFloatToDword(node->getRotation().Y);
}

EXPORTC DWORD irrnode_getrotationz(scene::ISceneNode *node)
{
	return DBPro::CastFloatToDword(node->getRotation().Z);
}

EXPORTC void irrnode_setrotation(scene::ISceneNode *node,float x,float y,float z)
{
	core::vector3df vec(x,y,z);
	node->setRotation(vec);
}

EXPORTC DWORD irrnode_getpositionx(scene::ISceneNode *node)
{
	return DBPro::CastFloatToDword(node->getPosition().X);
}

EXPORTC DWORD irrnode_getpositiony(scene::ISceneNode *node)
{
	return DBPro::CastFloatToDword(node->getPosition().Y);
}

EXPORTC DWORD irrnode_getpositionz(scene::ISceneNode *node)
{
	return DBPro::CastFloatToDword(node->getPosition().Z);
}

EXPORTC void irrnode_setposition(scene::ISceneNode *node,float x,float y,float z)
{
	node->setPosition(core::vector3df(x,y,z));
}

EXPORTC DWORD irrnode_getabsolutepositionx(scene::ISceneNode *node)
{
	return DBPro::CastFloatToDword(node->getAbsolutePosition().X);
}

EXPORTC DWORD irrnode_getabsolutepositiony(scene::ISceneNode *node)
{
	return DBPro::CastFloatToDword(node->getAbsolutePosition().Y);
}

EXPORTC DWORD irrnode_getabsolutepositionz(scene::ISceneNode *node)
{
	return DBPro::CastFloatToDword(node->getAbsolutePosition().Z);
}

EXPORTC void irrnode_setautomaticculling(scene::ISceneNode *node,int state)
{
	node->setAutomaticCulling((scene::E_CULLING_TYPE)state);
}

EXPORTC DWORD irrnode_getautomaticculling(scene::ISceneNode *node)
{
	return (DWORD)node->getAutomaticCulling();
}

EXPORTC void irrnode_setdebugdatavisible(scene::ISceneNode *node,s32 state)
{
	node->setDebugDataVisible(state);
}

EXPORTC DWORD irrnode_isdebugdatavisible(scene::ISceneNode *node)
{
	return (DWORD)node->isDebugDataVisible();
}

EXPORTC void irrnode_setparent(scene::ISceneNode *node,scene::ISceneNode *parent)
{
	node->setParent(parent);
}

EXPORTC DWORD irrnode_getparent(scene::ISceneNode *node)
{
	return (DWORD)node->getParent();
}

// not sure why this ain't working

EXPORTC DWORD irrnode_getmaterial(scene::ISceneNode *node, int id)
{
	return (DWORD)&node->getMaterial(id);
}

// Node material flags

EXPORTC void irrnode_setmatwireframe(scene::ISceneNode *node, int val)
{
	bool flag = val ? true : false;
	node->setMaterialFlag(video::EMF_WIREFRAME, flag);
}

EXPORTC void irrnode_setmatpointcloud(scene::ISceneNode *node, int val)
{
	bool flag = val ? true : false;
	node->setMaterialFlag(video::EMF_POINTCLOUD, flag);
}

EXPORTC void irrnode_setmatgoraudshading(scene::ISceneNode *node, int val)
{
	bool flag = val ? true : false;
	node->setMaterialFlag(video::EMF_GOURAUD_SHADING, flag);
}

EXPORTC void irrnode_setmatlighting(scene::ISceneNode *node, int val)
{
	bool flag = val ? true : false;
	node->setMaterialFlag(video::EMF_LIGHTING, flag);
}

EXPORTC void irrnode_setmatzbuffer(scene::ISceneNode *node, int val)
{
	bool flag = val ? true : false;
	node->setMaterialFlag(video::EMF_ZBUFFER, flag);
}

EXPORTC void irrnode_setmatzwriteenable(scene::ISceneNode *node, int val)
{
	bool flag = val ? true : false;
	node->setMaterialFlag(video::EMF_ZWRITE_ENABLE, flag);
}

EXPORTC void irrnode_setmatbackfacecull(scene::ISceneNode *node, int val)
{
	bool flag = val ? true : false;
	node->setMaterialFlag(video::EMF_BACK_FACE_CULLING, flag);
}

EXPORTC void irrnode_setmatfrontfacecull(scene::ISceneNode *node, int val)
{
	bool flag = val ? true : false;
	node->setMaterialFlag(video::EMF_FRONT_FACE_CULLING, flag);
}

EXPORTC void irrnode_setmatbilinear(scene::ISceneNode *node, int val)
{
	bool flag = val ? true : false;
	node->setMaterialFlag(video::EMF_BILINEAR_FILTER, flag);
}

EXPORTC void irrnode_setmattrilinear(scene::ISceneNode *node, int val)
{
	bool flag = val ? true : false;
	node->setMaterialFlag(video::EMF_TRILINEAR_FILTER, flag);
}

EXPORTC void irrnode_setmatanisotropic(scene::ISceneNode *node, int val)
{
	bool flag = val ? true : false;
	node->setMaterialFlag(video::EMF_ANISOTROPIC_FILTER, flag);
}

EXPORTC void irrnode_setmatfogenable(scene::ISceneNode *node, int val)
{
	bool flag = val ? true : false;
	node->setMaterialFlag(video::EMF_FOG_ENABLE, flag);
}
EXPORTC void irrnode_setmatnormalizenormals(scene::ISceneNode *node, int val)
{
	bool flag = val ? true : false;
	node->setMaterialFlag(video::EMF_NORMALIZE_NORMALS, flag);
}

EXPORTC void irrnode_setmattexturewrap(scene::ISceneNode *node, int val)
{
	bool flag = val ? true : false;
	node->setMaterialFlag(video::EMF_TEXTURE_WRAP, flag);
}

EXPORTC void irrnode_setmatantialiasing(scene::ISceneNode *node, int val)
{
	bool flag = val ? true : false;
	node->setMaterialFlag(video::EMF_ANTI_ALIASING, flag);
}

EXPORTC void irrnode_setmatcolormask(scene::ISceneNode *node, int val)
{
	bool flag = val ? true : false;
	node->setMaterialFlag(video::EMF_COLOR_MASK, flag);
}

EXPORTC void irrnode_setmatcolormaterial(scene::ISceneNode *node, int val)
{
	bool flag = val ? true : false;
	node->setMaterialFlag(video::EMF_COLOR_MATERIAL, flag);
}
