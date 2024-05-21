#include"header.h"
void sort_name(sll *ptr)
{
	if(ptr==0)
	{
		printf("no records found\n");
		return;
	}
	int i,j,c=count_node(ptr);
	sll *p1=ptr,*p2,t;
	for(i=0;i<c-1;i++)
	{
		p2=p1->next;
		for(j=0;j<c-i-1;j++)
		{
			if(strcmp(p1->name,p2->name)>0)
			{
				t.rollno=p1->rollno;
				strcpy(t.name,p1->name);
				t.marks=p1->marks;

				p1->rollno=p2->rollno;
				strcpy(p1->name,p2->name);
				p1->marks=p2->marks;

				p2->rollno=t.rollno;
				strcpy(p2->name,t.name);
				p2->marks=t.marks;
			}
			p2=p2->next;
		}
		p1=p1->next;
	}
	printf("sorted successfully by name wise\n");
}
void sort_percentage(sll *ptr)
{
	if(ptr==0)
	{
		printf("no records found\n");
		return;
	}
	int i,j,c=count_node(ptr);
	sll *p1=ptr,*p2,t;
	for(i=0;i<c-1;i++)
	{
		p2=p1->next;
		for(j=0;j<c-i-1;j++)
		{
			if(p1->marks>p2->marks)
			{
				t.rollno=p1->rollno;
				strcpy(t.name,p1->name);
				t.marks=p1->marks;

				p1->rollno=p2->rollno;
				strcpy(p1->name,p2->name);
				p1->marks=p2->marks;

				p2->rollno=t.rollno;
				strcpy(p2->name,t.name);
				p2->marks=t.marks;
			}
			p2=p2->next;
		}
		p1=p1->next;
	}
	printf("sorted successfully by name wise\n");
}

