/*
            File : Support/Checklist.hpp
   DBPro release : 6.0
*/

#ifndef INCLUDE_GUARD_Support_Checklist_hpp
#define INCLUDE_GUARD_Support_Checklist_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

namespace DBPro
{
	void __cdecl ResetChecklist(DWORD Size, bool HasStrings = true, bool HasValues = true);
	void __cdecl SetChecklistString(DWORD Pos, LPCSTR Value);
	void __cdecl SetChecklistInteger(DWORD Pos, DWORD Index, int Value);
	void __cdecl SetChecklistFloat(DWORD Pos, DWORD Index, float Value);
}

#endif

