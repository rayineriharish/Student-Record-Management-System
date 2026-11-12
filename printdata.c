#include"header.h"
void printrecords(sll *ptr)
{
    if(ptr==0)
    {
        printf("no records found\n");
        return ;
    }
    printf("roll no.\tname\t\tpercentage\n");
    while(ptr!=0)
    {
        printf(" %-15d%-18s%-10.2f\n",ptr->rollno,ptr->name,ptr->percentage);
        ptr=ptr->next;
    }
    printf("------------------------------\n");
}