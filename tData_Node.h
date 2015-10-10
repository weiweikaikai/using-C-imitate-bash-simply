//**********************************************************************    
/* Copyright (c)2015,WK Studios  
 * Filename:   cmd_bash.h  
 * Compiler: GCC,VS,VC6.0  win32    
 * Author:WK    
 * Time: 2015 29 4  
************************************************************************/   
#pragma once
#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  


#define CMD_MAX_LEN 128   
  
typedef struct DataNode  
{  
    char *cmd;  
    char *desc;  
    int (*handler)();//函数指针  
    struct DataNode *next;  
	
}tDataNode;//  表示typedef定义  