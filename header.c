#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

typedef struct student
{
        int rollno;
        char name[50];
        float percentage;
        struct student *next;
}sll;

void addnewrecord(sll **);
void printrecords(sll *);
void deleterecord(sll **);
void modifyrecord(sll *);
void sortrecords(sll *);
void delete_all_records(sll **);
void reverse_records(sll **);
void save_records(sll **);
void show_data(sll **);