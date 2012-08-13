/*
            File : Support/Compiler.hpp
   DBPro release : 6.4
*/

#ifndef INCLUDE_GUARD_Support_Compiler_hpp
#define INCLUDE_GUARD_Support_Compiler_hpp

#include <Support\Compiler\Common.hpp>

#if defined(__DMC__)
    // Digital Mars
    #error The Digital Mars compiler is not yet supported

#elif defined(__GNUC__)
    // GCC of some form
    #error The GCC compiler is no longer supported
    #include <Support\Compiler\GnuCpp.hpp>

#elif defined(__BORLANDC__)
    // One of the Borland compilers
    #error  The Borland compilers are not yet supported

#elif defined(__MWERKS__)
    // Code warrior
    #error The Metrowerks compilers are not yet supported

#elif defined(_MSC_VER)
    // Visual C++ - last in the list because other compilers also define this sometimes ... Grrr
    #include <Support\Compiler\VisualCpp.hpp>

#else
    #error Unable to work out which compiler you are using
#endif

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

#endif

