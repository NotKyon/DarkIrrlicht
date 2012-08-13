/*
            File : DBPro.hpp
   DBPro release : 6.7+
*/

#ifndef INCLUDE_GUARD_DBPro_hpp
#define INCLUDE_GUARD_DBPro_hpp

// Version of DBPro that this interface is based upon
#define DBPRO__INTERFACE_VERSION 1074

// Set up all compiler-specific stuff
#include <Support/Compiler.hpp>

#ifdef DBPRO__COMPILER_HAS_PRAGMA_ONCE
#pragma once
#endif

// Load the DBPro Globstruct and Object structures
#include <Official/Globstruct.h>
#include <Official/DBOData.h>
#include <Official/ccameradatac.h>

// Include special DBPro-specific types
#include <Support/DBProTypes.hpp>

// Load all DBPro DLL prototypes
#include <DBPro/Animation.hpp>
#include <DBPro/Basic2D.hpp>
#include <DBPro/Basic3D.hpp>
#include <DBPro/Bitmap.hpp>
#include <DBPro/Camera.hpp>
#include <DBPro/Core.hpp>
#include <DBPro/File.hpp>
#include <DBPro/FTP.hpp>
#include <DBPro/GameFX.hpp>
#include <DBPro/Image.hpp>
#include <DBPro/Input.hpp>
#include <DBPro/Light.hpp>
#include <DBPro/LODTerrain.hpp>
#include <DBPro/Matrix.hpp>
#include <DBPro/Memblock.hpp>
#include <DBPro/Multiplayer.hpp>
#include <DBPro/MultiplayerPlus.hpp>
#include <DBPro/Music.hpp>
#include <DBPro/ODE.hpp>
#include <DBPro/Particle.hpp>
#include <DBPro/Setup.hpp>
#include <DBPro/Sound.hpp>
#include <DBPro/Sprite.hpp>
#include <DBPro/System.hpp>
#include <DBPro/Terrain.hpp>
#include <DBPro/Text.hpp>
#include <DBPro/Vector.hpp>
#include <DBPro/World3D.hpp>

// Load all Util DLL prototypes
#include <DBPro/Matrix1Util_01.hpp>
#include <DBPro/Matrix1Util_02.hpp>
#include <DBPro/Matrix1Util_03.hpp>
#include <DBPro/Matrix1Util_04.hpp>
#include <DBPro/Matrix1Util_05.hpp>
// No 06
#include <DBPro/Matrix1Util_07.hpp>
#include <DBPro/Matrix1Util_08.hpp>
#include <DBPro/Matrix1Util_09.hpp>
// No 10
#include <DBPro/Matrix1Util_11.hpp>
// No 12
#include <DBPro/Matrix1Util_13.hpp>
#include <DBPro/Matrix1Util_14.hpp>
#include <DBPro/Matrix1Util_15.hpp>
#include <DBPro/Matrix1Util_16.hpp>
#include <DBPro/Matrix1Util_17.hpp>
#include <DBPro/Matrix1Util_18.hpp>
#include <DBPro/Matrix1Util_19.hpp>
#include <DBPro/Matrix1Util_20.hpp>
#include <DBPro/Matrix1Util_21.hpp>
#include <DBPro/Matrix1Util_22.hpp>
#include <DBPro/Matrix1Util_23.hpp>
#include <DBPro/Matrix1Util_24.hpp>
#include <DBPro/Matrix1Util_25.hpp>
#include <DBPro/Matrix1Util_26.hpp>
#include <DBPro/Matrix1Util_27.hpp>
#include <DBPro/Matrix1Util_28.hpp>
#include <DBPro/Matrix1Util_29.hpp>
#include <DBPro/Matrix1Util_30.hpp>
#include <DBPro/Matrix1Util_31.hpp>
#include <DBPro/Matrix1Util_32.hpp>

// Load extra user functions
#include <Support/Core.hpp>
#include <Support/Arrays.hpp>
#include <Support/SimpleHelp.hpp>
#include <Support/Checklist.hpp>
#include <Support/ErrorHandler.hpp>

#endif

