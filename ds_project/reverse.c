#include "header.h"
void reverse_list(sll **ptr)
{
	if(*ptr==0){
		printf("no record found\n");
		return;
	}
	int c=count_node(*ptr);
	if(c>1)
	{
		sll **p,*t=*ptr;
		p=malloc(sizeof(sll *)*c);
		int i=0;
		while(t)
		{
			p[i++]=t;
			t=t->next;
		}
		for(i=0;i<c;i++)
			p[i]->next=p[i-1];
		p[0]->next=0;
		*ptr=p[c-1];
	}
}
