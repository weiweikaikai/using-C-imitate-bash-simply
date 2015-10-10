/**********************************************************************   
* Copyright (c)2015,WK Studios 
* Filename:   main.c 
* Compiler: GCC,VS,VC6.0  win32   
* Author:WK   
* Time: 2015 29 4 
************************************************************************/ 
#include"cmd_bash.h"
int main()
{	
	while(1)
	{    
		char cmd[CMD_MAX_LEN];
		printf("Input a command number>");
		scanf("%s",cmd);
		tDataNode* p=find(head,cmd);
		if(p== NULL)
		{
			printf("command not found!\n");
			continue;
		}
		printf("%s - %s\n",p->cmd,p->desc);
		if(p->handler != NULL)//有点多态的意思调用同一个handler效果不同
		{
            p->handler();//function point
		}
	}
	return 0;
}