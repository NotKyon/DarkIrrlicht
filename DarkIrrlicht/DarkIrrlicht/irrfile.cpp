#include "main.h"

// Started WLGfx - 2012/08/26

EXPORTC DWORD irrfile_addzipfilearchive(char *filename, int ignorecase, int ignorepaths)
{
	bool icase, ipaths;
	icase = ignorecase ? true : false;
	ipaths = ignorepaths ? true : false;
	return irrcore.device->getFileSystem()->addZipFileArchive(filename,icase,ipaths)
		? 1 : 0;
}

EXPORTC DWORD irrfile_removefilearchive(char *filename)
{
	return irrcore.device->getFileSystem()->removeFileArchive(filename) ? 1 : 0;
}

