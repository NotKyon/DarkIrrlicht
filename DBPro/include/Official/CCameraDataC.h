#ifndef  DBPRO__CAMERA_VERSION
#define  DBPRO__CAMERA_VERSION  75
#endif

#if DBPRO__CAMERA_VERSION == 75
#  include "CCameraDataC_7_5.h"
#elif DBPRO__CAMERA_VERSION == 74
#  include "CCameraDataC_7_4.h"
#elif DBPRO__CAMERA_VERSION == 69
#  include "CCameraDataC_6_9.h"
#elif DBPRO__CAMERA_VERSION == 68
#  include "CCameraDataC_6_8.h"
#else
#  error "DBPRO__CAMERA_VERSION is set to an invalid value"
#endif
