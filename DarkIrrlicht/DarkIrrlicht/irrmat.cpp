#include "main.h"

EXPORTC void irrmat_delete( video::SMaterial* mat )
{
	int size = irr_materials.size();
	bool flag = true;

	while ( size-- && flag )
	{
		if ( irr_materials[size] == mat )
		{
			delete mat;
			irr_materials.erase( irr_materials.begin() + size );
			flag = false;
		}
	}
}

EXPORTC DWORD irrmat_new()
{
	video::SMaterial* mat = new video::SMaterial();
	irr_materials.push_back( mat );
	return (DWORD)mat;
}

EXPORTC void irrmat_setmaterialflag( video::SMaterial* mat, int flag, int val )
{
	bool bflag;
	if (val) bflag=true; else bflag=false;
	mat->setFlag( (video::E_MATERIAL_FLAG) flag, bflag );
}

EXPORTC DWORD irrmat_getmaterialflag( video::SMaterial* mat, int flag )
{
	return (DWORD)mat->getFlag( (video::E_MATERIAL_FLAG)flag );
}

EXPORTC void irrmat_copy( video::SMaterial* mat, video::SMaterial* src )
{
	mat = src;
}

EXPORTC DWORD irrmat_gettexture( video::SMaterial* mat, int layer )
{
	return (DWORD)mat->getTexture( layer );
}

EXPORTC void irrmat_settexture( video::SMaterial* mat, int layer, video::ITexture* texture )
{
	mat->setTexture( layer, texture );
}

