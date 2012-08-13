#include "main.h"

using namespace std;
using namespace irr;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// Setup all safe memory operations on initialisation
// of the DarkIrrlicht project for DBPro, and close down.
//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


vector<core::aabbox3df*>	irr_aboxes;
vector<video::SMaterial*>	irr_materials;

void irr_constructor()
{
	irr_aboxes.clear();
	irr_materials.clear();
}

void irr_destructor()
{
	int loop;

	for (loop=0; loop<irr_aboxes.size(); loop++)
		if (irr_aboxes[loop]) delete irr_aboxes[loop];

	for (loop=0; loop<irr_materials.size(); loop++)
		if (irr_materials[loop]) delete irr_materials[loop];

	irr_aboxes.clear();
	irr_materials.clear();
}
