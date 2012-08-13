/*
            File : Support/Compiler/VisualCpp.hpp
   DBPro release : 7.1
*/

// Do not include this file directly.

#pragma warning(disable:4244)

#if _MSC_VER <= 1300 /* VC++6 or VC++7 (.NET) */

#   error The VC++6.0 and VC++7.0 compilers are no longer supported

#elif _MSC_VER <= 1400 /* VC++7.1 (2003) or VC++8 (2005) */

#	if !defined (_DEBUG)
#	    pragma comment(lib, "DBProInterface7.1.lib")
#	else
#	    pragma comment(lib, "DBProInterfaceD7.1.lib")
#	endif

#elif _MSC_VER <= 1500 /* VC++9 (2008) */

#	if !defined (_DEBUG)
#	    pragma comment(lib, "DBProInterface9.0.lib")
#	else
#	    pragma comment(lib, "DBProInterfaceD9.0.lib")
#	endif

#endif

#if _MSC_VER > 1310
    // Apparently MS deprecated standard functions...
#   ifndef _CRT_SECURE_NO_DEPRECATE
#       define _CRT_SECURE_NO_DEPRECATE
#   endif
#endif

#define DBPRO__COMPILER_HAS_PRAGMA_ONCE

