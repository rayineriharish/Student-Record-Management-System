#include"header.h"
void delete_all_records(sll **ptr)
{
    if(*ptr==0)
    {
        printf("NO RECORDS FOUND\n");
        return;
    }
    sll *del=*ptr;
    int c=0;
    while(del)
    {
        *ptr=del->next;
        c++;
        free(del);
        del=*ptr;
    }
    printf("All %d Nodes Deleted\n",c);
}