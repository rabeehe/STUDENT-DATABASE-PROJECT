#include "header.h"
void add_new_node(sll **ptr)
{
	sll *last,*t=*ptr;
	sll *new=malloc(sizeof(sll));
	int j=1;
	while(t)
	{
		if(t->rollno==j)
		{
			t=t->next;
			j++;
		}
		else
			break;
	}
	new->rollno=j;
	printf("enter your data for roll no %d:\n",j++);
	scanf("%s%f",new->name,&new->marks);
	new->next=0;
	if((*ptr==0) || (new->rollno<(*ptr)->rollno))
	{
		new->next=*ptr;
		*ptr=new;
	}
	else
	{
		last=*ptr;
		while((last->next!=0) && (new->rollno>last->next->rollno))
			last=last->next;
		new->next=last->next;
		last->next=new;
	}	
}
int count_node(sll *ptr)
{
	int c=0;
	if(ptr==0)
	{
		printf("no records found\n");
		return 0;
	}
	while(ptr)
	{
		c++;
		ptr=ptr->next;
	}
	return c;
}
void show_the_list(sll *ptr)
{
	printf("\033[33m");
	if(ptr==0)
	{
		printf("no records found\n");
		return;
	}
	while(ptr)
	{
		printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->next;
	}	
	printf("\033[0m");
}

