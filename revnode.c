#include"header.h"
void reverse_records(sll **ptr)
{
    if(*ptr==0)
    {
        printf("NO RECORDS FOUND\n");
        return;
    }
    int c=0;
    sll *rev=*ptr;
    while(rev!=0)
    {
        c++;
        rev=rev->next;
    }
    rev=*ptr;
    if(c>1)
    {
        sll *t=*ptr;
        sll **a=malloc(sizeof(sll*)*c);
        for(int i=0;i<c;i++)
        {
            a[i]=t;
            t=t->next;
        }
        for(int i=c-1;i>0;i--)
            a[i]->next=a[i-1];
        a[0]->next=0;
        *ptr=a[c-1];
    }
}