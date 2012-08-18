#include <vector>
#include <string>
#include <stdio.h>

#define _IRR_STATIC_LIB_
#include "irrlicht.h"
#include "dbpro.hpp"

#pragma comment (lib, "irrlicht.lib")
#pragma comment (lib, "DBProInterface9.0.lib")

using namespace std;
using namespace irr;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// Main DarkIrrlicht classes
//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

class dbpirrreceiver : public IEventReceiver
{
public:
	bool keys[KEY_KEY_CODES_COUNT];

	virtual bool OnEvent(const SEvent &event)
	{
		switch ( event.EventType )
		{
		case irr::EET_KEY_INPUT_EVENT :
			keys[event.KeyInput.Key] = event.KeyInput.PressedDown;
			break;

		case irr::EET_MOUSE_INPUT_EVENT :
			mousex = event.MouseInput.X;
			mousey = event.MouseInput.Y;
			mouseclick = event.MouseInput.ButtonStates;

			switch ( event.MouseInput.Event )
			{
			case irr::EMIE_MOUSE_WHEEL :
				mousez = event.MouseInput.Wheel;
				break;
			}
		}

		return false;
	}
	virtual bool key(int code) const
	{
		return keys[code];
	}
	dbpirrreceiver()
	{
		for (u32 i=0; i<KEY_KEY_CODES_COUNT; i++)
			keys[i]=false;
	}

	// TO DO:
	// add mouse handler
	// add GUI events handler

	int		mousex, mousey, mousez, mouseclick;
	int		lastmousex, lastmousey;
};


struct IRR_CORE {
	dbpirrreceiver			events;		// irrev
	IrrlichtDevice*			device;		// irrde
	video::IVideoDriver*	driver;		// irrdr
	scene::ISceneManager*	smgr;		// irrsm
	gui::IGUIEnvironment*	gui;		// irrgu
	gui::IGUIFont*			font;
};

extern IRR_CORE irrcore;
extern std::wstring irr_wstring;
extern std::string  irr_string;

extern std::wstring irr_getwstring(char* str);

extern std::vector<core::aabbox3df*>	irr_aboxes;
extern std::vector<video::SMaterial*>	irr_materials;
extern std::vector<core::vector3df*>	irr_vector3df;

extern void irr_constructor();
extern void irr_destructor();

