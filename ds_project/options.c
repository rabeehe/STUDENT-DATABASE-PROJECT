#include<stdio.h>
#include "header.h"
void main()
{
sll *head;
char choice,op;
while(1)
{
printf("\033[32m-----------------------------------------\n");
printf("|	*****STUDENT RECORD*****        |\n");
printf("|	---------------------------     |\n");
printf("|				  	|\n");
printf("|  a/A :add new record		    	|\n");
printf("|  d/D :delete a record   		|\n");
printf("|  s/S :show the list     		|\n");
printf("|  m/M :modify a record   		|\n");
printf("|  v/V :save				|\n");
printf("|  e/E :exit 		  		|\n");
printf("|  t/T :sort the list			|\n");
printf("|  l/L :delete all the records		|\n");
printf("|  r/R :reverse the list		|\n");
printf("|					|\n");
printf("|  Enter your choice : 			|\n");
printf("-----------------------------------------\n\033[0m");

scanf(" %c",&choice);
switch(choice){
	case 'a':
	case 'A':add_new_node(&head);break;
	case 'd':
	case 'D':
		show_the_list(head);
printf("--------------------------------\n");
printf("|				|\n");	
printf("| R/r.Enter rollno to delete	|\n");	
printf("| N/n.Enter name to delete	|\n");	
printf("|				|\n");
printf("|  enter your option		|\n");
printf("--------------------------------\n");	
	 scanf(" %c",&op);
	 switch(op){
		case 'R':
		case 'r':delete_rollno_wise(&head);
			break;
		case 'N':
		case 'n':delete_name_wise(&head);
			break;
		}
		break;
case 's':
case 'S':show_the_list(head);break;
case 'm':
case 'M':
printf("--------------------------------\n");
printf("| R/r.To search a rollno	|\n");
printf("| N/n.To search a name		|\n");
printf("| P/p.Percentage based		|\n");
printf("|				|\n");
printf("|  enter your option		|\n");
printf("--------------------------------\n");	
scanf(" %c",&op);
	switch(op){
		case 'R':
		case 'r':mod_by_rollno(head);
			break;	
		case 'N':
		case 'n':mod_by_name(head);
			break;	
		case 'P':
		case 'p':mod_by_marks(head);
			break;
		}	
break;
case 'v':
case 'V':save(head);break;
case 'e':
case 'E':
printf("--------------------------------\n");
printf("| Enter				|\n");
printf("| S/s.save and exit		|\n");
printf("| E/e.exit without saving	|\n");
printf("|				|\n");
printf("|  enter your option		|\n");
printf("--------------------------------\n");	
scanf(" %c",&op);
	switch(op){
		case 'S':
		case 's':save(head);
			exit(0);	
		case 'E':
		case 'e':exit(0);
}break;

case 't':
case 'T':
printf("--------------------------------\n");
printf("| Enter				|\n");
printf("| N/n.sort with name		|\n");
printf("| P/p.sort with percentage	|\n");
printf("|				|\n");
printf("|  enter your option		|\n");
printf("--------------------------------\n");	
scanf(" %c",&op);
	switch(op){
		case 'N':
		case 'n':sort_name(head);break;
		case 'P':
		case 'p':sort_percentage(head);break;
}break;
case 'l':
case 'L':delete_all(&head);break;
case 'r':
case 'R':reverse_list(&head);break;
default :printf("\033[34m wrong choice selected\n\033[0m");break;
}
}
}
