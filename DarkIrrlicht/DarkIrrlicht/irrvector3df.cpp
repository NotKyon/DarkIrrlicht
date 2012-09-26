#include "main.h"

// uses vector<core::vector3df*> irr_vector3df;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// Replacement library for vector3df instead of using the
// slow version built in to DBP
//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// NB: If you use a 'new' vector3df it will be stored
// in a safe shutdown array which will get cleared on the
// apps close to save memory leaks using this data type.
// However the delete function is also provided so that
// the programmer can handle this themselves.

// This goes for aabbox and SMaterial's too...

EXPORTC DWORD irrvec3df_new()
{
	static core::vector3df* temp = new core::vector3df();
	irr_vector3df.push_back( temp );
	return (DWORD) temp;
}

EXPORTC void irrvec3df_delete( core::vector3df* vec )
{
	int size = irr_vector3df.size();
	bool flag = true;
	
	while ( size-- && flag )
	{
		if (vec == irr_vector3df[size] )
		{
			delete vec;
			irr_vector3df.erase( irr_vector3df.begin() + size );
			flag = false;
		}
	}
}

EXPORTC void irrvec3df_set(core::vector3df* vec, float x, float y, float z)
{
	vec->X=x;
	vec->Y=y;
	vec->Z=z;
}

EXPORTC void irrvec3df_copy(core::vector3df* vec, core::vector3df* src)
{
	vec=src;
}

EXPORTC void irrvec3df_add(core::vector3df* vec, core::vector3df* src)
{
	vec->X+=src->X;
	vec->Y+=src->Y;
	vec->Z+=src->Z;
}

EXPORTC void irrvec3df_sub(core::vector3df* vec, core::vector3df* src)
{
	vec->X-=src->X;
	vec->Y-=src->Y;
	vec->Z-=src->Z;
}

EXPORTC void irrvec3df_div(core::vector3df* vec, core::vector3df* src)
{
	vec->X/=src->X;
	vec->Y/=src->Y;
	vec->Z/=src->Z;
}

EXPORTC void irrvec3df_mul(core::vector3df* vec, core::vector3df* src)
{
	vec->X*=src->X;
	vec->Y*=src->Y;
	vec->Z*=src->Z;
}

EXPORTC DWORD irrvec3df_greq(core::vector3df* vec, core::vector3df* src)
{
	return (DWORD) (src >= vec);
}

EXPORTC DWORD irrvec3df_loeq(core::vector3df* vec, core::vector3df* src)
{
	return (DWORD) (src <= vec);
}

EXPORTC DWORD irrvec3df_gr(core::vector3df* vec, core::vector3df* src)
{
	return (DWORD) (src > vec);
}

EXPORTC DWORD irrvec3df_lo(core::vector3df* vec, core::vector3df* src)
{
	return (DWORD) (src < vec);
}

EXPORTC DWORD irrvec3df_eq(core::vector3df* vec, core::vector3df* src)
{
	return (DWORD) (src == vec);
}

EXPORTC DWORD irrvec3df_length(core::vector3df* vec)
{
	return DBPro::CastFloatToDword( vec->getLength() );
}

EXPORTC DWORD irrvec3df_lengthsq(core::vector3df* vec)
{
	return DBPro::CastFloatToDword( vec->getLengthSQ() );
}

EXPORTC DWORD irrvec3df_dotproduct(core::vector3df* vec, core::vector3df& other)
{
	return DBPro::CastFloatToDword( vec->dotProduct( other ) );
}

EXPORTC DWORD irrvec3df_distancefrom(core::vector3df* vec, core::vector3df& other)
{
	return DBPro::CastFloatToDword( vec->getDistanceFrom( other ) );
}

EXPORTC DWORD irrvec3df_distancefromsq(core::vector3df* vec, core::vector3df& other)
{
	return DBPro::CastFloatToDword( vec->getDistanceFromSQ( other ) );
}

EXPORTC DWORD irrvec3df_crossproduct(core::vector3df* vec, core::vector3df& p)
{
	static core::vector3df temp = vec->crossProduct( p );
	return (DWORD) &temp;
}

EXPORTC DWORD irrvec3df_isbetweenpoints(core::vector3df* vec,
	core::vector3df& begin, core::vector3df& end)
{
	return (DWORD) vec->isBetweenPoints( begin, end );
}

EXPORTC void irrvec3df_normalize( core::vector3df* vec )
{
	vec->normalize();
}

EXPORTC void irrvec3df_setlength( core::vector3df& vec, float length )
{
	vec.normalize();
	vec *= length;
}

EXPORTC void irrvec3df_invert( core::vector3df* vec )
{
	vec->invert();
}

EXPORTC void irrvec3df_roty( core::vector3df& vec,
	float degrees, core::vector3df& center )
{
	vec.rotateXYBy( (f64)degrees, center );
}

EXPORTC void irrvec3df_rotz( core::vector3df& vec,
	float degrees, core::vector3df& center )
{
	vec.rotateXZBy( (f64)degrees, center );
}

EXPORTC void irrvec3df_rotx( core::vector3df& vec,
	float degrees, core::vector3df& center )
{
	vec.rotateYZBy( (f64)degrees, center );
}

EXPORTC DWORD irrvec3df_interpolated( core::vector3df& vec,
	core::vector3df& other, float d )
{
	static core::vector3df temp = vec.getInterpolated( other, (f64)d );
	return (DWORD) &temp;
}

EXPORTC DWORD irrvec3df_interpolated_quadratic( core::vector3df& vec,
	core::vector3df& v2, core::vector3df& v3, float d )
{
	static core::vector3df temp = vec.getInterpolated_quadratic( v2, v3, (f64)d );
	return (DWORD) &temp;
}

EXPORTC void irrvec3df_interpolate(core::vector3df& vec,
	core::vector3df& a, core::vector3df& b, float d)
{
	vec.interpolate( a, b, (f64)d );
}

EXPORTC DWORD irrvec3df_gethorizangle(core::vector3df& vec)
{
	return (DWORD) &vec.getHorizontalAngle();
}

EXPORTC DWORD irrvec3df_spherecoordangles(core::vector3df& vec)
{
	return (DWORD) &vec.getSphericalCoordinateAngles();
}

EXPORTC DWORD irrvec3df_rotdirection(core::vector3df& vec,
	core::vector3df& forward)
{
	return (DWORD) &vec.rotationToDirection( forward );
}

// ADD THE RETURN OF X, Y, Z FROM VEC3'S

EXPORTC DWORD irrvec_getx(core::vector3df* vec)
{
	return DBPro::CastFloatToDword( vec->X );
}

EXPORTC DWORD irrvec_gety(core::vector3df* vec)
{
	return DBPro::CastFloatToDword( vec->Y );
}

EXPORTC DWORD irrvec_getz(core::vector3df* vec)
{
	return DBPro::CastFloatToDword( vec->Z );
}

// Added WLGfx - 2012/08/26

EXPORTC void irrvec_setx(core::vector3df* vec, float x)
{
	vec->X = x;
}

EXPORTC void irrvec_sety(core::vector3df* vec, float y)
{
	vec->Y = y;
}

EXPORTC void irrvec_setz(core::vector3df* vec, float z)
{
	vec->Z = z;
}

