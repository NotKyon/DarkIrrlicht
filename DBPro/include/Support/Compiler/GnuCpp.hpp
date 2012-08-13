/*
            File : Support/Compiler/GnuCpp.hpp
   DBPro release : 6.0
*/

// Do not include this file directly.

// The _MAX_PATH definition may not exist for Cygwin
#ifndef _MAX_PATH
#   define _MAX_PATH       MAX_PATH
#endif

// GCC doesn't allow you to redefine a library function as inline
#ifndef DBPRO__NO_INLINES
#   define DBPRO__NO_INLINES
#endif

