/*
            File : Support/Arrays.hpp
   DBPro release : 7.5
*/

#ifndef INCLUDE_GUARD_Support_Array_hpp
#define INCLUDE_GUARD_Support_Array_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

namespace DBPro
{
	namespace Array
	{
		struct ArrayBase;
		struct ArrayHeader
		{
			DWORD       Dimensions[9];
			ArrayBase*  Support;			// Used by Matrix1Utils
			DWORD       ArraySize;
			DWORD       ItemSize;
			DWORD       ArrayType;
			int         Index;
		};

		inline ArrayHeader* Convert(const DWORD *ArrayID)
		{
			return ((ArrayHeader*)ArrayID)-1;
		}

		inline DWORD* Dimensions(const DWORD* Array)
		{
			return Convert(Array)->Dimensions;
		}

		inline DWORD Size(const DWORD *Array)
		{
			return Convert(Array)->ArraySize;
		}

		inline DWORD ItemSize(const DWORD *Array)
		{
			return Convert(Array)->ItemSize;
		}

		inline DWORD Type(const DWORD *Array)
		{
			return Convert(Array)->ArrayType;
		}

		inline int& Index(const DWORD *Array)
		{
			return Convert(Array)->Index;
		}

		inline DWORD& Item(DWORD *Array, int Position)
		{
			return Array[Position];
		}

		inline DWORD& DataPtr(DWORD *Array)
		{
			return *(Array-5);
		}
	}
}

#endif

