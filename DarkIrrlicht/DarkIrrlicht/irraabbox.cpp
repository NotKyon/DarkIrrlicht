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

EXPORTC DWORD irrabox_getcenterx( core::aabbox3df* box )
{
	return DBPro::CastFloatToDword( box->getCenter().X );
}

EXPORTC DWORD irrabox_getcentery( core::aabbox3df* box )
{
	return DBPro::CastFloatToDword( box->getCenter().Y );
}

EXPORTC DWORD irrabox_getcenterz( core::aabbox3df* box )
{
	return DBPro::CastFloatToDword( box->getCenter().Z );
}

EXPORTC DWORD irrabox_getextentx( core::aabbox3df* box )
{
	return DBPro::CastFloatToDword( box->getExtent().X );
}

EXPORTC DWORD irrabox_getextenty( core::aabbox3df* box )
{
	return DBPro::CastFloatToDword( box->getExtent().Y );
}

EXPORTC DWORD irrabox_getextentz( core::aabbox3df* box )
{
	return DBPro::CastFloatToDword( box->getExtent().Z );
}

EXPORTC DWORD irrabox_isempty( core::aabbox3df* box )
{
	return (DWORD) box->isEmpty();
}

EXPORTC DWORD irrabox_getvolume( core::aabbox3df* box )
{
	return DBPro::CastFloatToDword( box->getVolume() );
}

EXPORTC DWORD irrabox_getarea( core::aabbox3df* box )
{
	return DBPro::CastFloatToDword( box->getArea() );
}

EXPORTC void irrabox_repair( core::aabbox3df* box )
{
	box->repair();
}

EXPORTC DWORD irrabox_ispointinside( core::aabbox3df* box,
	float x, float y, float z )
{
	return (DWORD)box->isPointInside( core::vector3d<f32>( x, y, z ) );
}

EXPORTC DWORD irrabox_isboxinside( core::aabbox3df* box,
	core::aabbox3df& src )
{
	return (DWORD)box->isFullInside( src );
}

// ***

EXPORTC DWORD irrabox_intersectswithbox( core::aabbox3df* box,
	core::aabbox3df& src )
{
	return (DWORD)box->intersectsWithBox( src );
}

EXPORTC DWORD irrabox_intersectswithline( core::aabbox3df* box,
	float x1, float y1, float z1, float x2, float y2, float z2 )
{
	core::line3df line(x1,y1,z1,x2,y2,z2);
	return (DWORD)box->intersectsWithLine( line );
}

