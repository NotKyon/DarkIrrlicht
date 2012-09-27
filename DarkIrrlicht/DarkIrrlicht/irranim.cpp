#include "main.h"

// You can pass the pointer to the ISCN DROP and other smgr functions

EXPORTC void irranim_drop(scene::ISceneNodeAnimator* anim)
{
	anim->drop();
}