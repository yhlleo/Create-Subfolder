#include "CreateSubfolder.h"

void CreateSubfolder::creatSubfolderViaFname( 
	char* filepath, char* subfolder, char* filename )
{
	char drive[_MAX_DRIVE];
	char dir[_MAX_DIR];
	char fname[_MAX_FNAME];
	char ext[_MAX_EXT];

	_splitpath(filepath, drive, dir, fname, ext);
	char* subDir = new char[_MAX_DIR];
	sprintf(subDir, "%s\%s\\", dir, fname);
	sprintf(subfolder, "%s\%s", drive, subDir);
	_mkdir(subfolder);

	sprintf(filename, "%s", fname);

	delete[] subDir;
}
