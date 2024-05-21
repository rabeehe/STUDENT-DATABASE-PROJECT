#include "header.h"
void mod_by_rollno(sll *ptr)
{
	if(ptr==0)
	{
		printf("no records found\n");
		return;
	}
	sll *temp=ptr;
	char newname[20];
	float newmarks;
	int num;
	show_the_list(ptr);
	printf("enter the rollno of node to be modified\n");
	scanf("%d",&num);
	while(temp)
	{
		if(temp->rollno==num)
		{
			printf("enter new roll\n");
				scanf("%d",&num);
				temp->rollno=num;
			printf("enter new name\n");
				scanf("%s",newname);
				strcpy(temp->name,newname);
			printf("enter new marks \n");
				scanf("%f",&newmarks);
				temp->marks=newmarks;
		}
		temp=temp->next;
	}
}
void mod_by_name(sll *ptr)
{
	if(ptr==0)
	{
		printf("no records found\n");
		return;
	}
	sll *temp=ptr,*t=ptr;
	char newname[20],sname[20];
	float newmarks;
	int num,c=0;
	show_the_list(ptr);
	printf("enter the name to search\n");
	scanf("%s",sname);
	while(t)
	{
		if(strcmp(t->name,sname)==0)
			c++;
		t=t->next;
	}
	if(c==1)
	{
		while(temp)
		{
			if(strcmp(temp->name,sname)==0)
			{
				printf("enter new roll\n");
				scanf("%d",&num);
				temp->rollno=num;
				printf("enter new name\n");
				scanf("%s",newname);
				strcpy(temp->name,newname);
				printf("enter new marks \n");
				scanf("%f",&newmarks);
				temp->marks=newmarks;
			}
			temp=temp->next;
		}
	}
	else if(c>1)
	{
	printf("given name is more than once.\n for clarification give the rollno also to search\n");
	scanf("%d",&num);
		while(temp)
		{
			if(temp->rollno==num)
			{
				printf("enter  new rollno\n");
				scanf("%d",&num);
				temp->rollno=num;
				printf("enter new name\n");
				scanf("%s",newname);
				strcpy(temp->name,newname);
				printf("enter new marks \n");
				scanf("%f",&newmarks);
				temp->marks=newmarks;
			}
			temp=temp->next;
		}
	}
	else if(c>1)
	{
	printf("given name is more than once.\n for clarification give the rollno also to search\n");
	scanf("%d",&num);
		while(temp)
		{
			if(temp->rollno==num)
			{
				printf("enter  new rollno\n");
				scanf("%d",&num);
				temp->rollno=num;
				printf("enter new name\n");
				scanf("%s",newname);
				strcpy(temp->name,newname);
				printf("enter new marks \n");
				scanf("%f",&newmarks);
				temp->marks=newmarks;
			}
			temp=temp->next;
		}
	}
}

void mod_by_marks(sll *ptr)
{
	if(ptr==0)
	{
		printf("no records found\n");
		return;
	}
	sll *temp=ptr;
	char newname[20];
	float newmarks;
	int num;
	show_the_list(ptr);
	printf("enter the marks of node to be modified\n");
	scanf("%f",&newmarks);
	while(temp)
	{
		if(temp->marks==newmarks)
		{
			printf("enter new rollno\n");
			scanf("%d",&num);
			temp->rollno=num;
			printf("enter new name\n");
			scanf("%s",newname);
			strcpy(temp->name,newname);
			printf("enter new marks \n");
			scanf("%f",&newmarks);
			temp->marks=newmarks;
		}
		temp=temp->next;
	}
}
