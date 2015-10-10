/**********************************************************************   
* Copyright (c)2015,WK Studios 
* Filename:   cmd_bash.c 
* Compiler: GCC,VS,VC6.0  win32   
* Author:WK   
* Time: 2015 29 4 
************************************************************************/ 
#include "cmd_bash.h"
int  help()
{
	printf("this is help\n");
	return 1;
}
int quit()
{
	printf("this is quit\n");
	exit(0);
}
int version()
{
	printf("vesion  -Menu progrma V1.0\n");
	return 1;
}