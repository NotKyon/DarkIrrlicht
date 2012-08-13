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

EXPORTC void irr_beginscene(int a,int r,int g,int b)
{
	irrcore.driver->beginScene(true,true,video::SColor(a,r,g,b));
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

