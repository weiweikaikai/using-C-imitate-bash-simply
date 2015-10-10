//**********************************************************************    
/* Copyright (c)2015,WK Studios  
 * Filename:   cmd_bash.h  
 * Compiler: GCC,VS,VC6.0  win32    
 * Author:WK    
 * Time: 2015 29 4  
************************************************************************/   
#ifndef __CMD_BASH_H__  
#define __CMD_BASH_H__  
#include "tData_Node.h"
  
int help();  
int quit();  
int show(); 

tDataNode* find(tDataNode* head,char *cmd);
//链表数组 
static tDataNode head[]= 
{  
    {"help","This is help cmd",help,&head[1]},  
    {"version","Menu program v1.0",NULL,&head[2]},  
    {"quit","This is quit cmd",quit,NULL}
	//可以在数组中增加命令，这里只有几个命令  
};  

#endif  