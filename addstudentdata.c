#include "header.h"

void addnewrecord(sll **ptr)
{
    sll *new, *pos;
    int r = 1, flag = 0, found;

    new = malloc(sizeof(sll));

    if (new == NULL)
        return;

    printf("Enter name & marks:\n");
    scanf("%s %f", new->name, &new->percentage);

    /* If list is empty */
    if (*ptr == NULL)
    {
            new->rollno = r;
            new->next = NULL;
            *ptr = new;
            return;
    }

    /* Find smallest available roll number */

    pos = *ptr;

    while(1)
    {
            found = 0;
            pos = *ptr;

            while (pos != NULL)
            {
                    if (pos->rollno == r)
                    {
                            found = 1;
                            r++;
                            break;
                    }

                    pos = pos->next;
            }

            if (found == 0)
                    break;
    }


    new->rollno = r;

    /* Check list order */
    if ((*ptr)->next != NULL &&(*ptr)->rollno > (*ptr)->next->rollno)
        flag = 1;

    /* Descending order insertion */
    if (flag == 1)
    {
        if (new->rollno > (*ptr)->rollno)
        {
            new->next = *ptr;
            *ptr = new;
            return;
        }

        pos = *ptr;

        while (pos->next != NULL && new->rollno < pos->next->rollno)
                pos = pos->next;

    }

    /* Ascending order insertion */
    else
    {
        if (new->rollno < (*ptr)->rollno)
        {
            new->next = *ptr;
            *ptr = new;
            return;
        }

        pos = *ptr;

        while (pos->next != NULL && new->rollno > pos->next->rollno)
        {
            pos = pos->next;
        }
    }

    new->next = pos->next;
    pos->next = new;
}