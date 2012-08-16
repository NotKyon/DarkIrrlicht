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
vector<core::vector3df*>	irr_vector3df;

void irr_constructor()
{
	irr_aboxes.clear();
	irr_materials.clear();
	irr_vector3df.clear();
}

void irr_destructor()
{
	size_t loop; //aaronm-20120813: signed/unsigned mismatch warning

	for (loop=0; loop<irr_aboxes.size(); loop++)
		if (irr_aboxes[loop]) delete irr_aboxes[loop];

	for (loop=0; loop<irr_materials.size(); loop++)
		if (irr_materials[loop]) delete irr_materials[loop];

	for (loop=0; loop<irr_vector3df.size(); loop++)
		if (irr_vector3df[loop]) delete irr_vector3df[loop];

	irr_aboxes.clear();
	irr_materials.clear();
	irr_vector3df.clear();
}
