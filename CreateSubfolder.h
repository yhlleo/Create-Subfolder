/* create subfolder for results saving.

   - Editor: Yahui Liu.
   - Data:   2016-01-27
   - Email:  yahui.cvrs@gmail.com
   - Address: Computer Vision and Remote Sensing(CVRS) Lab, Wuhan University.
 */

#ifndef CREATE_SUBFOLDER_H
#define CREATE_SUBFOLDER_H
#pragma once
#include <direct.h>
#include <stdlib.h>  
#include <stdio.h> 
#include <string>

using namespace std;

class CreateSubfolder
{
public:
	CreateSubfolder(){}
	~CreateSubfolder(){}

public:
	static void creatSubfolderViaFname( 
		char* filepath, char* subfolder, char* filename );
};

#endif // CREATE_SUBFOLDER_H
