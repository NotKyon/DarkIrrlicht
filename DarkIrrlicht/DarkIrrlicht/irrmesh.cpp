#include "main.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// IRRMESH library (IMeshSceneNode manager)
//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

EXPORTC void irrmesh_setmesh(scene::IMeshSceneNode *node,scene::IMesh *mesh)
{
	node->setMesh(mesh);
}

EXPORTC DWORD irrmesh_getmesh(scene::IMeshSceneNode* node)
{
	return (DWORD)node->getMesh();
}

EXPORTC void irrmesh_setreadonlymaterials(scene::IMeshSceneNode *node,int readonly)
{
	bool flag;
	if (readonly) flag=true; else flag=false;
	node->setReadOnlyMaterials(flag);
}

EXPORTC DWORD irrmesh_isreadonlymaterials(scene::IMeshSceneNode *node)
{
	return (DWORD)node->isReadOnlyMaterials();
}

// IMesh

EXPORTC DWORD irrmesh_getmeshbuffercount(scene::IMesh *mesh)
{
	return (DWORD)mesh->getMeshBufferCount();
}

EXPORTC DWORD irrmesh_getmeshbuffer(scene::IMesh *mesh,u32 number)
{
	return (DWORD)mesh->getMeshBuffer(number);
}

EXPORTC void irrmesh_setmaterialflag(scene::IMesh *mesh,
	video::E_MATERIAL_FLAG flag,int newvalue)
{
	bool newflag;
	if (newvalue) newflag=true; else newflag=false;
	mesh->setMaterialFlag(flag,newflag);
}

EXPORTC void irrmesh_sethardwaremappinghint(scene::IMesh *mesh,
	scene::E_HARDWARE_MAPPING newMappingHint,
	scene::E_BUFFER_TYPE buffer)
{
	mesh->setHardwareMappingHint(newMappingHint,buffer);
}

EXPORTC void irrmesh_setdirty(scene::IMesh *mesh,scene::E_BUFFER_TYPE buffer)
{
	mesh->setDirty(buffer);
}

// IAnimatedMesh

EXPORTC DWORD irramesh_getframecount(scene::IAnimatedMesh *amesh)
{
	return (DWORD)amesh->getFrameCount();
}

EXPORTC DWORD irramesh_getmesh(scene::IAnimatedMesh *amesh,
	s32 frame,s32 detaillevel,s32 startframe,s32 endframe)
{
	return (DWORD)amesh->getMesh(frame,detaillevel,startframe,endframe);
}

// IAnimatedMeshSceneNode

EXPORTC void irramesh_setcurrentframe(scene::IAnimatedMeshSceneNode* node,
	f32 frame)
{
	node->setCurrentFrame( frame );
}

EXPORTC void irramesh_setframeloop(scene::IAnimatedMeshSceneNode* node,
	s32 begin, s32 end)
{
	node->setFrameLoop( begin, end );
}

EXPORTC void irramesh_setanimspeed(scene::IAnimatedMeshSceneNode* node,
	f32 fps)
{
	node->setAnimationSpeed( fps );
}

