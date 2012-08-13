/*
            File : Support/Core.hpp
   DBPro release : 6.0
*/

#ifndef INCLUDE_GUARD_Support_Core_hpp
#define INCLUDE_GUARD_Support_Core_hpp

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#include <Official/globstruct.h>

namespace DBPro
{
    GlobStruct* __cdecl GetCore();

    struct Core_
    {
        GlobStruct* operator->()        { return GetCore(); }
    };
    static Core_ Core;
}

#endif

