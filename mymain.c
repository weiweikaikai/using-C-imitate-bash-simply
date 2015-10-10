/**********************************************************************   
* Copyright (c)2015,WK Studios 
* Filename:   main.c 
* Compiler: GCC,VS,VC6.0  win32   
* Author:WK   
* Time: 2015 29 4 
************************************************************************/ 
#include "cmd_bash.h"

int main() 
{ 
	char cmd[128]={'0'}; //»º³åÇø
	while(1) 
	{ 
		printf("input command:");
		scanf("%s", cmd); 
		if(0==strcmp(cmd,"help")) 
		{ 
			help();
		} 
		else if(0==strcmp(cmd,"quit") || 0==strcmp(cmd,"q"))
		{ 
			 quit();
			
		} 
		else if(0==(strcmp(cmd,"version")))
		{ 
			version();
		} 
		else
		{
			printf("command not found\n"); 
		}
	}
	return 0;
}