#include "main.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// IRRDE library (Device manager)
//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

EXPORTC DWORD irrde_run()
{
	return (DWORD)irrcore.device->run();
}

EXPORTC void irrde_yeild()
{
	irrcore.device->yield();
}

EXPORTC void irrde_setwindowcaption(char* title)
{
	std::wstring wstr=irr_getwstring(title);
	irrcore.device->setWindowCaption(wstr.c_str());
}

EXPORTC DWORD irrde_iswindowactive()
{
	return (DWORD)irrcore.device->isWindowActive();
}

EXPORTC DWORD irrde_iswindowfocused()
{
	return (DWORD)irrcore.device->isWindowFocused();
}

EXPORTC DWORD irrde_iswindowminimized()
{
	return (DWORD)irrcore.device->isWindowMinimized();
}

EXPORTC DWORD irrde_isfullscreen()
{
	return (DWORD)irrcore.device->isFullscreen();
}

EXPORTC DWORD irrde_getcolorformat()
{
	return (DWORD)irrcore.device->getColorFormat();
}

EXPORTC void irrde_closedevice()
{
	irrcore.device->closeDevice();
}

EXPORTC void irrde_setresizable(int resize)
{
	bool flag;
	if (resize) flag=true; else flag=false;
	irrcore.device->setResizable(flag);
}

EXPORTC void irrde_minimizewindow()
{
	irrcore.device->minimizeWindow();
}

EXPORTC void irrde_maximizewindow()
{
	irrcore.device->maximizeWindow();
}

EXPORTC void irrde_restorewindow()
{
	irrcore.device->restoreWindow();
}

EXPORTC void irrde_clearsystemmessages()
{
	irrcore.device->clearSystemMessages();
}



// Irrlicht timer tick animation fix

EXPORTC void irrde_timertick()
{
	irrcore.device->getTimer()->tick();
}

EXPORTC DWORD irrde_gettime()
{
	return (DWORD)irrcore.device->getTimer()->getTime();
}