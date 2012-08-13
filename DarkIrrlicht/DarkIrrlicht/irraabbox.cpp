#include "main.h"

EXPORTC void irrabox_delete( core::aabbox3df* box )
{
	int size = irr_aboxes.size();
	bool flag = true;

	while ( size-- && flag )
	{
		if ( box == irr_aboxes[size] )
		{
			delete box;
			irr_aboxes.erase( irr_aboxes.begin() + size );
			flag = false;
		}
	}
}

EXPORTC DWORD irrabox_new()
{
	core::aabbox3df* temp = new core::aabbox3df();
	irr_aboxes.push_back( temp );
	return (DWORD)temp;
}

EXPORTC void irrabox_set( core::aabbox3df* box,
	f32 x1, f32 y1, f32 z1, f32 x2, f32 y2, f32 z2 )
{
	box->reset( x1,y1,z1 );
	box->addInternalPoint( x2,y2,z2 );
}

EXPORTC void irrabox_addpoint( core::aabbox3df* box,
	f32 x, f32 y, f32 z )
{
	box->addInternalPoint( x,y,z );
}

