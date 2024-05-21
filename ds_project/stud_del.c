#include "header.h"
void delete_rollno_wise(sll **ptr)
{
	int num;
	if(*ptr==0)
	{
		printf("no records found\n");
		return;
	}
	sll *del=*ptr,*prev;
	printf("enter the no rollno to delete\n");
	scanf("%d",&num);
	while(del)
	{
		if(del->rollno==num)
		{
			if(*ptr==del)
				*ptr=del->next;
			else
				prev->next=del->next;
			printf("node to be deleted:%d\n",del->rollno);
			free(del);
		}
		prev=del;
		del=del->next;
	}
}
void delete_name_wise(sll **ptr)
{
	char delname[20];
	if(*ptr==0)
	{
		printf("no records found\n");
		return;
	}
	sll *del=*ptr,*prev;
	printf("enter the name to delete\n");
	scanf("%s",delname);
	while(del)
	{
		if(strcmp(del->name,delname)==0)
		{
			if(*ptr==del)
				*ptr=del->next;
			else
				prev->next=del->next;
			printf("node of name %s deleted\n",del->name);
			free(del);
		}
		prev=del;
		del=del->next;
}
}
void delete_all(sll **ptr)
{
	if(ptr==0)
	{
		printf("no records found\n");
		return;
	}
	sll *del=*ptr;
	while(del)
	{
		*ptr=del->next;
		free(del);
		del=*ptr;
	}
printf("all records are deleted\n");
}

