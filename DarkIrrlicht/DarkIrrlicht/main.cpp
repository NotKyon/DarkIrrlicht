#include "main.h"

#include <iostream>
#include <stdlib.h>
#include <string>

BOOL APIENTRY DllMain( HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

GlobStruct*	g_pGlob;

void Constructor ( void ) {
	irr_constructor();
}

EXPORT void PreDestructor(void) { // Early shutdown stuff goes here
	irr_destructor();
}

void Destructor ( void ) {
}

void ReceiveCoreDataPtr ( LPVOID pCore ) {
	g_pGlob = (GlobStruct*)pCore;
}

const char* Dependencies[] =
{
    "DBProBasic3DDebug.dll",
	"DBProImageDebug.dll",
};


EXPORT int GetNumDependencies( void )
{
    return sizeof(Dependencies) / sizeof(const char*);
}


EXPORT const char* GetDependencyID(int ID)
{
    return Dependencies[ID];
}

// missing function declaration just in case I need it...

typedef sFrame* (__cdecl * dbCreateNewFrame0) ( sObject* pObject, LPSTR pName, bool bNewMesh );

sFrame* WL_dbCreateNewFrame( sObject* pObject, LPSTR pName, bool bNewMesh )
{
	static dbCreateNewFrame0 fPtr = 0;

	if ( fPtr == 0 )
		fPtr = (dbCreateNewFrame0) GetProcAddress(
			GetModuleHandle("DBProBasic3DDebug.dll"),
			"?CreateNewFrame@@YAPAUsFrame@@PAUsObject@@PAD_N@Z" );

	return fPtr(pObject, pName, bNewMesh);
}

