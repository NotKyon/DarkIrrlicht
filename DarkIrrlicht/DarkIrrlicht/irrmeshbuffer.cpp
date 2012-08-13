#include "main.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// IRRMBUFF library (IMeshBuffer manager)
//
// set material before drawing a hardware meshbuffer
//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

EXPORTC DWORD irrmbuff_getmaterial( scene::IMeshBuffer* mb )
{
	return (DWORD) &mb->getMaterial();
}

EXPORTC DWORD irrmbuff_getvertexttype( scene::IMeshBuffer* mb )
{
	return (DWORD) mb->getVertexType();
}

EXPORTC DWORD irrmbuff_getvertices( scene::IMeshBuffer* mb )
{
	return (DWORD) mb->getVertices();
}

EXPORTC DWORD irrmbuff_getvertexcount( scene::IMeshBuffer* mb )
{
	return (DWORD) mb->getVertexCount();
}

EXPORTC DWORD irrmbuff_getindextype( scene::IMeshBuffer* mb )
{
	return (DWORD) mb->getIndexType();
}

EXPORTC DWORD irrmbuff_getindices( scene::IMeshBuffer* mb )
{
	return (DWORD) mb->getIndices();
}

EXPORTC DWORD irrmbuff_getindexcount( scene::IMeshBuffer* mb )
{
	return (DWORD) mb->getIndexCount();
}

EXPORTC DWORD irrmbuff_getvertposx( scene::IMeshBuffer* mb, int vert )
{
	return DBPro::CastFloatToDword( mb->getPosition( vert ).X );
}

EXPORTC DWORD irrmbuff_getvertposy( scene::IMeshBuffer* mb, int vert )
{
	return DBPro::CastFloatToDword( mb->getPosition( vert ).Y );
}

EXPORTC DWORD irrmbuff_getvertposz( scene::IMeshBuffer* mb, int vert )
{
	return DBPro::CastFloatToDword( mb->getPosition( vert ).Z );
}

EXPORTC DWORD irrmbuff_getvertnormx( scene::IMeshBuffer* mb, int vert )
{
	return DBPro::CastFloatToDword( mb->getNormal( vert ).X );
}

EXPORTC DWORD irrmbuff_getvertnormy( scene::IMeshBuffer* mb, int vert )
{
	return DBPro::CastFloatToDword( mb->getNormal( vert ).Y );
}

EXPORTC DWORD irrmbuff_getvertnormz( scene::IMeshBuffer* mb, int vert )
{
	return DBPro::CastFloatToDword( mb->getNormal( vert ).Z );
}

EXPORTC DWORD irrmbuff_getverttcoorU( scene::IMeshBuffer* mb, int vert )
{
	return DBPro::CastFloatToDword( mb->getTCoords( vert ).X );
}

EXPORTC DWORD irrmbuff_getverttcoorV( scene::IMeshBuffer* mb, int vert )
{
	return DBPro::CastFloatToDword( mb->getTCoords( vert ).Y );
}

EXPORTC void irrmbuff_appendraw( scene::IMeshBuffer* mb,
	const void* const vertices, u32 numVertices, const u16* const indices, u32 numIndices )
{
	mb->append( vertices, numVertices, indices, numIndices );
}

EXPORTC void irrmbuff_appendmeshbuffer( scene::IMeshBuffer* mb, scene::IMeshBuffer* src )
{
	mb->append( src );
}

EXPORTC DWORD irrmbuff_gethwhint_vertex( scene::IMeshBuffer* mb )
{
	return (DWORD) mb->getHardwareMappingHint_Vertex();
}

EXPORTC DWORD irrmbuff_gethwhint_index( scene::IMeshBuffer* mb )
{
	return (DWORD) mb->getHardwareMappingHint_Index();
}

EXPORTC void irrmbuff_sethwhint( scene::IMeshBuffer* mb,
	int newmaphint, int buffertype )
{
	mb->setHardwareMappingHint( (scene::E_HARDWARE_MAPPING) newmaphint,
		(scene::E_BUFFER_TYPE) buffertype );
}

EXPORTC void irrmbuff_setdirty( scene::IMeshBuffer* mb, int buffertype )
{
	mb->setDirty( (scene::E_BUFFER_TYPE) buffertype );
}
