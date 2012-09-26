#include "main.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// IRRSC library (Scene manager)
//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

EXPORTC DWORD irrsc_getmesh(char* file)
{
	return (DWORD)irrcore.smgr->getMesh(file);
}

EXPORTC DWORD irrsc_addcubescenenode(scene::ISceneNode *parent, f32 size)
{
	return (DWORD)irrcore.smgr->addCubeSceneNode(size,parent);
}

EXPORTC DWORD irrsc_addspherescenenode(scene::ISceneNode *parent,f32 radius,s32 polycount)
{
	return (DWORD)irrcore.smgr->addSphereSceneNode(radius,polycount,parent);
}

EXPORTC DWORD irrsc_addanimatedmeshscenenode(scene::ISceneNode *parent,
	scene::IAnimatedMesh* mesh)
{
	return (DWORD)irrcore.smgr->addAnimatedMeshSceneNode(mesh,parent);
}

EXPORTC DWORD irrsc_addmeshscenenode(scene::ISceneNode *parent,scene::IMesh *mesh)
{
	return (DWORD)irrcore.smgr->addMeshSceneNode(mesh,parent);
}

EXPORTC DWORD irrsc_addwatersurfacescenenode(scene::ISceneNode* parent,
	scene::IMesh *mesh,f32 waveheight,f32 wavespeed,f32 wavelength)
{
	return (DWORD)irrcore.smgr->addWaterSurfaceSceneNode(
		mesh,waveheight,wavespeed,wavelength,parent);
}

EXPORTC DWORD irrsc_addcamerascenenode(scene::ISceneNode *parent)
{
	return (DWORD)irrcore.smgr->addCameraSceneNode(parent);
}

EXPORTC DWORD irrsc_addlightscenenode(scene::ISceneNode *parent)
{
	return (DWORD)irrcore.smgr->addLightSceneNode(parent);
}

EXPORTC DWORD irrsc_addbillboardscenenode(scene::ISceneNode *parent)
{
	return (DWORD)irrcore.smgr->addBillboardSceneNode(parent);
}

EXPORTC DWORD irrsc_addskyboxscenenode(scene::ISceneNode *parent,
	video::ITexture *top,video::ITexture *bottom,
	video::ITexture *left,video::ITexture *right,
	video::ITexture *front,video::ITexture *back)
{
	return (DWORD)irrcore.smgr->addSkyBoxSceneNode(
		top,bottom,left,right,front,back,parent);
}

EXPORTC DWORD irrsc_addskydomescenenode(scene::ISceneNode *parent,
	video::ITexture *texture,
	u32 horires,u32 vertres,
	f32 texturepercentage,f32 spherepercentage,
	f32 radius)
{
	return (DWORD)irrcore.smgr->addSkyDomeSceneNode(texture,
		horires,vertres,texturepercentage,spherepercentage,radius,
		parent);
}

EXPORTC DWORD irrsc_addparticlesystemscenenode(scene::ISceneNode *parent,
	int usedefault)
{
	bool flag;
	if (usedefault) flag=true; else flag=false;
	return (DWORD)irrcore.smgr->addParticleSystemSceneNode(flag,parent);
}

EXPORTC DWORD irrsc_addterrainscenenode(scene::ISceneNode *parent,
	char* heightmapfile)
{
	return (DWORD)irrcore.smgr->addTerrainSceneNode(heightmapfile,parent);
}

EXPORTC DWORD irrsc_addemptyscenenode(scene::ISceneNode *parent)
{
	return (DWORD)irrcore.smgr->addEmptySceneNode(parent);
}

EXPORTC DWORD irrsc_adddummytransformationscenenode(scene::ISceneNode *parent)
{
	return (DWORD)irrcore.smgr->addDummyTransformationSceneNode(parent);
}

EXPORTC DWORD irrsc_addtextscenenode(scene::ISceneNode *parent,
	gui::IGUIFont *font,char *text,video::SColor col)
{
	std::wstring wstr=irr_getwstring(text);
	return (DWORD)irrcore.smgr->addTextSceneNode(font,wstr.c_str(),col,parent);
}

EXPORTC DWORD irrsc_addbillboardtextscenenode(scene::ISceneNode *parent,
	gui::IGUIFont *font,char *text)
{
	std::wstring wstr=irr_getwstring(text);
	return (DWORD)irrcore.smgr->addBillboardTextSceneNode(font,wstr.c_str(),parent);
}

EXPORTC DWORD irrsc_addterrainmesh(
	char* meshname,video::IImage *texture,video::IImage *heightmap)
{
	return (DWORD)irrcore.smgr->addTerrainMesh(meshname,texture,heightmap);
}

EXPORTC DWORD irrsc_addspheremesh(char* name,f32 radius,
	u32 polycountx,u32 polycounty)
{
	return (DWORD)irrcore.smgr->addSphereMesh(name,radius,polycountx,polycounty);
}

EXPORTC DWORD irrsc_addvolumelightmesh(char* name,
	u32 subdivideU,u32 subdivideV,
	video::SColor footcolor,video::SColor tailcolor)
{
	return (DWORD)irrcore.smgr->addVolumeLightMesh(name,subdivideU,subdivideV,footcolor,tailcolor);
}

EXPORTC DWORD irrsc_getrootscenenode()
{
	return (DWORD)irrcore.smgr->getRootSceneNode();
}

EXPORTC DWORD irrsc_getscenenodefromid(s32 id,scene::ISceneNode *start)
{
	return (DWORD)irrcore.smgr->getSceneNodeFromId(id,start);
}

EXPORTC DWORD irrsc_getscenenodefromname(c8 *name,scene::ISceneNode *start)
{
	return (DWORD)irrcore.smgr->getSceneNodeFromName(name,start);
}

EXPORTC DWORD irrsc_getactivecamera()
{
	return (DWORD)irrcore.smgr->getActiveCamera();
}

EXPORTC void irrsc_setactivecamera(scene::ICameraSceneNode *camera)
{
	irrcore.smgr->setActiveCamera(camera);
}

EXPORTC void irrsc_setshadowcolor(video::SColor col)
{
	irrcore.smgr->setShadowColor(col);
}

EXPORTC DWORD irrsc_getshadowcolor()
{
	video::SColor col=irrcore.smgr->getShadowColor();;
	return (DWORD)col.color;
}

EXPORTC void irrsc_drawall()
{
	irrcore.smgr->drawAll();
}

EXPORTC void irrsc_clear()
{
	irrcore.smgr->clear();
}

EXPORTC DWORD irrsc_addscenenode(scene::ISceneNode *parent,char* name)
{
	return (DWORD)irrcore.smgr->addSceneNode(name,parent);
}

EXPORTC DWORD irrsc_createnewscenemanager(int clonecontent)
{
	bool flag;
	if (clonecontent) flag=true; else flag=false;
	return (DWORD)irrcore.smgr->createNewSceneManager(flag);
}

EXPORTC DWORD irr_isculled(scene::ISceneNode *node)
{
	return (DWORD)irrcore.smgr->isCulled(node);
}

// Added WLGfx - 2012/08/26

EXPORTC DWORD irrsc_addoctreescenenode(scene::IAnimatedMesh* mesh, 
	scene::ISceneNode *parent, int minpolyspernode)
{
	return (DWORD)irrcore.smgr->addOctreeSceneNode(mesh,parent,minpolyspernode);
}

EXPORTC DWORD irrsc_addcamerascenenodefps()
{
	return (DWORD)irrcore.smgr->addCameraSceneNodeFPS();
}

