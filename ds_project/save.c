#include "header.h"
void save(sll *ptr)
{
	if(ptr==0)
	{
		printf("no records found\n");
		return;
	}
	FILE *fp;
	fp=fopen("student.dat","w");
	if(fp==0)
	{
		printf("no data base file is present\n");
		return;
	}
	while(ptr)
	{
		fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
			ptr=ptr->next;
	}
	printf("file saved successfully\n");
	fclose(fp);
}
