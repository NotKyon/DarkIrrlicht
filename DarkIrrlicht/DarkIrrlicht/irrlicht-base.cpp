#include "main.h"

IRR_CORE irrcore;

std::wstring irr_wstring;
std::string  irr_string;

std::wstring irr_getwstring(char* str)
{
	string text=str;
	wstring wtext(text.length(), L' ');
	copy(text.begin(), text.end(), wtext.begin());
	return wtext;
}

EXPORTC void irr_init(int api, int w, int h)
{
	video::E_DRIVER_TYPE select;

	switch (api)
	{
	case 0 :	select = video::EDT_OPENGL;			break;
	//case 1 :	select = video::EDT_DIRECT3D8;		break;	// not supported
	case 1 :	select = video::EDT_DIRECT3D9;		break;
	case 2 :	select = video::EDT_SOFTWARE;		break;
	case 3 :	select = video::EDT_BURNINGSVIDEO;	break;
	default :	select = video::EDT_NULL;
	}

	core::dimension2d<u32> winbox(w,h);

	irrcore.device=createDevice(select, winbox, 32, false, false, false, &irrcore.events );

	irrcore.driver	= irrcore.device->getVideoDriver();
	irrcore.smgr	= irrcore.device->getSceneManager();
	irrcore.gui		= irrcore.device->getGUIEnvironment();
	irrcore.font	= irrcore.gui->getBuiltInFont();
}

EXPORTC void irr_drop()
{
	irrcore.device->drop();
}

EXPORTC int irr_keystate(int code)
{
	return irrcore.events.keys[code];
}

// ***

EXPORTC DWORD irr_mousex()
{
	return (DWORD) irrcore.events.mousex;
}

EXPORTC DWORD irr_mousey()
{
	return (DWORD) irrcore.events.mousey;
}

EXPORTC DWORD irr_mousez()
{
	return (DWORD) irrcore.events.mousez;
}

EXPORTC DWORD irr_mouseclick()
{
	return (DWORD) irrcore.events.mouseclick;
}

EXPORTC void irr_mousemoveflush()	// flushes mouse movements ready for use
{
	irrcore.events.lastmousex = irrcore.events.mousex;
	irrcore.events.lastmousey = irrcore.events.mousey;
}

EXPORTC DWORD irr_mousemovex()
{
	DWORD ret = irrcore.events.mousex - irrcore.events.lastmousex;
	irrcore.events.lastmousex = irrcore.events.mousex;
	return ret;
}

EXPORTC DWORD irr_mousemovey()
{
	DWORD ret = irrcore.events.mousey - irrcore.events.lastmousey;
	irrcore.events.lastmousey = irrcore.events.mousey;
	return ret;
}

// ***

EXPORTC void irr_beginscene(int col)
{
	irrcore.device->getTimer()->tick();
	irrcore.driver->beginScene(true,true,(video::SColor) col);
}

EXPORTC void irr_endscene()
{
	irrcore.smgr->drawAll();
	irrcore.gui->drawAll();
	irrcore.driver->endScene();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// IRRGUI library (GUI manager)
//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

EXPORTC DWORD irrgui_getfontdefault()
{
	return (DWORD)irrcore.gui->getBuiltInFont();
}

EXPORTC DWORD irrgui_getfont(char* file)
{
	return (DWORD)irrcore.gui->getFont(file);
}

