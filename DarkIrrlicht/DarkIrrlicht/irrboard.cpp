#include "main.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// IRRBOARD library (IBillboardSceneNode manager)
//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

EXPORTC void irrboard_setsize(scene::IBillboardSceneNode* node,float w,float h)
{
	node->setSize(core::dimension2d<f32>(w,h));
}

EXPORTC DWORD irrboard_getwidth(scene::IBillboardSceneNode* node)
{
	return DBPro::CastFloatToDword(node->getSize().Width);
}

EXPORTC DWORD irrboard_getheight(scene::IBillboardSceneNode* node)
{
	return DBPro::CastFloatToDword(node->getSize().Height);
}

EXPORTC void irrboard_setcolor(scene::IBillboardSceneNode* node,
	video::SColor top, video::SColor bottom)
{
	node->setColor(top,bottom);
}

// *** IRRTBOARD IBillBoardTextSceneNode

EXPORTC void irrtboard_settext(scene::IBillboardTextSceneNode* node,
	char* ctext)
{
	node->setText(irr_getwstring(ctext).c_str());
}

