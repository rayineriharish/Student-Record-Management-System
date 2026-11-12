#include"header.h"
void show_data(sll **ptr)
{
    FILE *fp;
    sll *save;
    if(*ptr==0)
    {
        fp=fopen("student.dat","r");
        if(fp==0)
        {
            printf("NO FILE EXIST\n");
            return;
        }
        else
        {
            while(1)
            {
                save=malloc(sizeof(sll));
                if(fscanf(fp,"%d %s %f",&save->rollno,save->name,&save->percentage)==-1)
                    break;
                save->next=0;
                if(*ptr==0)
                    *ptr=save;
                else
                {
                    sll *last=*ptr;
                    while(last->next)
                        last=last->next;
                    last->next=save;
                }
            }
            return;
        }
        fclose(fp);
    }
}


void save_records(sll **ptr)
{
    FILE *fp;
    sll *save;
    if(*ptr==0)
    {
        printf("NO RECORDS TO SAVE\n");
        return;
    }
    else
    {
        save=*ptr;
        fp=fopen("student.dat","w");
        while(save!=0)
        {
            fprintf(fp,"%d %s %f\n",save->rollno,save->name,save->percentage);
            save=save->next;
        }
        fclose(fp);
        printf("RECORDS SAVED SUCCESSFULLY\n");
    }
}