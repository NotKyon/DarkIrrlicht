#include "main.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// IRRFONT library (FONT manager)
//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

EXPORTC void irrfont_draw( gui::IGUIFont* font,int x,int y,video::SColor col,char* text)
{
	font->draw(irr_getwstring(text).c_str(),core::rect<s32>(x,y,x,y),col);
}
