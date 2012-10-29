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

// ***

EXPORTC void irrmat_setambientcolor( video::SMaterial* mat, video::SColor col )
{
	mat->AmbientColor = col;
}

EXPORTC void irrmat_setdiffusecolor( video::SMaterial* mat, video::SColor col )
{
	mat->DiffuseColor = col;
}

EXPORTC void irrmat_setemissivecolor( video::SMaterial* mat, video::SColor col )
{
	mat->EmissiveColor = col;
}

EXPORTC void irrmat_setspecularcolor(  video::SMaterial* mat, video::SColor col )
{
	mat->SpecularColor = col;
}

EXPORTC void irrmat_setshininess( video::SMaterial* mat, float shine )
{
	mat->Shininess = shine;
}

EXPORTC void irrmat_settypeparam1( video::SMaterial* mat, float param )
{
	mat->MaterialTypeParam = param;
}

EXPORTC void irrmat_settypeparam2( video::SMaterial* mat, float param )
{
	mat->MaterialTypeParam2 = param;
}

EXPORTC void irrmat_setthickness( video::SMaterial* mat, float thick )
{
	mat->Thickness = thick;
}

EXPORTC void irrmat_setzbuffer( video::SMaterial* mat, int zbuffer )
{
	mat->ZBuffer = (u8) ( zbuffer & 0xff );
}

EXPORTC void irrmat_setaa( video::SMaterial* mat, int aa )
{
	mat->AntiAliasing = (u8) ( aa & 0xff );
}

EXPORTC void irrmat_setcolormask( video::SMaterial* mat, int mask )
{
	mat->ColorMask = (u8) ( mask & 0xff );
}

EXPORTC void irrmat_setcolormaterial( video::SMaterial* mat, int colm )
{
	mat->ColorMaterial = (u8) ( colm & 0xff );
}

EXPORTC void irrmat_setwireframe( video::SMaterial* mat, int wire )
{
	bool flag;
	if (wire) flag=true; else flag=false;
	mat->Wireframe = flag;
}

EXPORTC void irrmat_setpointcloud( video::SMaterial* mat, int pc )
{
	bool flag;
	if (pc) flag=true; else flag=false;
	mat->PointCloud = flag;
}

EXPORTC void irrmat_setgoraudshading( video::SMaterial* mat, int gs )
{
	bool flag;
	if (gs) flag=true; else flag=false;
	mat->GouraudShading = flag;
}

EXPORTC void irrmat_setlighting( video::SMaterial* mat, int fs )
{
	bool flag;
	if (fs) flag=true; else flag=false;
	mat->Lighting = flag;
}

EXPORTC void irrmat_setzwrite( video::SMaterial* mat, int fs )
{
	bool flag;
	if (fs) flag=true; else flag=false;
	mat->ZWriteEnable = flag;
}

EXPORTC void irrmat_setbackfacecull( video::SMaterial* mat, int fs )
{
	bool flag;
	if (fs) flag=true; else flag=false;
	mat->BackfaceCulling = flag;
}

EXPORTC void irrmat_setfrontfacecull( video::SMaterial* mat, int fs )
{
	bool flag;
	if (fs) flag=true; else flag=false;
	mat->FrontfaceCulling = flag;
}

EXPORTC void irrmat_setfog( video::SMaterial* mat, int fs )
{
	bool flag;
	if (fs) flag=true; else flag=false;
	mat->FogEnable = flag;
}

EXPORTC void irrmat_setnormalizenormals( video::SMaterial* mat, int fs )
{
	bool flag;
	if (fs) flag=true; else flag=false;
	mat->NormalizeNormals = flag;
}

// ***

EXPORTC void irrmat_settexturewrap( video::SMaterial* mat, int layer, int flag )
{
	u8 newflag = (u8) ( flag & 0x0f );
	mat->TextureLayer[layer].TextureWrapU = newflag;
	mat->TextureLayer[layer].TextureWrapV = newflag;
}

EXPORTC void irrmat_setbilinear( video::SMaterial* mat, int layer, int fs )
{
	bool flag;
	if (fs) flag=true; else flag=false;
	mat->TextureLayer[layer].BilinearFilter = flag;
}

EXPORTC void irrmat_settriliniear( video::SMaterial* mat, int layer, int fs )
{
	bool flag;
	if (fs) flag=true; else flag=false;
	mat->TextureLayer[layer].TrilinearFilter = flag;
}

EXPORTC void irrmat_setanisotropic( video::SMaterial* mat, int layer, int fs )
{
	bool flag;
	if (fs) flag=true; else flag=false;
	mat->TextureLayer[layer].AnisotropicFilter = flag;
}

EXPORTC void irrmat_setlodbias( video::SMaterial* mat, int layer, int fs )
{
	mat->TextureLayer[layer].LODBias = (s8) fs;
}

EXPORTC void irrmat_setmaterialtype( video::SMaterial* mat, int type )
{
	mat->MaterialType = (video::E_MATERIAL_TYPE) type;
}
