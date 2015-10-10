/**********************************************************************   
* Copyright (c)2015,WK Studios 
* Filename:   bash.c 
* Compiler: GCC,VS,VC6.0  win32   
* Author:WK   
* Time: 2015 29 4 
************************************************************************/ 
#include"cmd_bash.h"

tDataNode* find (tDataNode *head,char *cmd)
{
	if(head==NULL|| cmd==NULL)
	{
		return NULL;
    }
	 tDataNode *p=head;
	while(p!=NULL)
	{
	 	if(0==strcmp(p->cmd,cmd))
		{
			return p;
		}
		p=p->next;
	}
	return NULL;
}
int show(tDataNode *head)
{
	tDataNode *p=head;
	printf("Menu List:\n");
	while(p!=NULL)
	{
		printf("%s - %s\n",p->cmd,p->desc);
		p=p->next;
	}
	return 1;
}

int help()//´òÓ¡ËùÓĞÃüÁî
{
	show(head);
	return 1;
}
int quit()
{
	exit(0);
}