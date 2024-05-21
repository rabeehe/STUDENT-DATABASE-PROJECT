#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
typedef struct st
{
        int rollno;
        char name[20];
        float marks;
        struct st *next;
}sll;
void add_new_node(sll **);
void show_the_list(sll *);
void delete_rollno_wise(sll **);
void delete_name_wise(sll **);
void mod_by_rollno(sll *);
void mod_by_name(sll *);
void mod_by_marks(sll *);
void save(sll *);
void sort_name(sll *);
void sort_percentage(sll *);
int count_node(sll *);
void delete_all(sll **);
void reverse_list(sll **);

