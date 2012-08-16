#include "main.h"

// uses vector<core::vector3df*> irr_vector3df;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// Replacement library for vector3df instead of using the
// slow version built in to DBP
//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

EXPORTC DWORD irrvec3df_new()
{
	static core::vector3df* temp = new core::vector3df();
	return (DWORD) temp;
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

