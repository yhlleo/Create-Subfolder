
在一些图像处理或者数据处理时，需要给计算返回的数据指定一个存储路径，如果直接以被处理的文件所在路径下，并以其名命名自动生成一个文件夹，挺方便的，做法如下;

 - `CreateSubfolder.h`
```c
/* create subfolder for results saving.
   
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
	/*
	   Create a subfolder according to the full-path of the input filepathh
	    - filepath: full path, input
	    - subfolder: created folder, output
	    - filename: name of the input file, output
	*/
	static void creatSubfolderViaFname( 
		char* filepath, char* subfolder, char* filename );
};

#endif // CREATE_SUBFOLDER_H
```

 - `CreateSubfolder.cpp`
```c
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
```

比如，下面的例子，对一张图片抠出每个单独的图形，并存在该文件夹下：


![1](http://img.blog.csdn.net/20160303163242291)

运行完就是这效果：

![2](http://img.blog.csdn.net/20160303163421238)


![3](http://img.blog.csdn.net/20160303163503301)

（图像处理的代码很简单，就不公布啦~）
