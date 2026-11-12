#include"header.h"
int main()
{
        sll *headptr=0;
        char op;
show_data(&headptr);
        while(1)
        {
                printf("********* STUDENT RECORD MENU ********\n");

                printf("a/A : Add new record\n");
                printf("d/D : Delete a record\n");
                printf("s/S : Show the list\n");
                printf("m/M : Modify a record\n");
                printf("v/V : Save records\n");
                printf("e/E : Exit\n");
                printf("t/T : Sort the list\n");
                printf("l/L : Delete all the records\n");
                printf("r/R : Reverse the list\n");
                printf("Enter your choice:\n");
                scanf(" %c",&op);

                switch(op)
                {
                        case 'a':
                        case 'A':addnewrecord(&headptr);break;

                        case 's':
                        case 'S':printrecords(headptr);break;

                        case 'e':
                        case 'E':printf("Enter Exit option\n");
                                 printf("s/S : save and Exit\n e/E : Exit without saving\n");
                                 scanf(" %c",&op);
                                 if((op=='s') || (op=='S'))
                                         save_records(&headptr);
                                         else if((op=='e') || (op=='E'))
                                                 delete_all_records(&headptr);
                                 exit(0);break;

                        case 'd':
                        case 'D':deleterecord(&headptr);break;

                        case 'm':
                        case 'M':modifyrecord(headptr);break;

                        case 't':
                        case 'T':sortrecords(headptr);break;

                        case 'l':
                        case 'L':delete_all_records(&headptr);break;

                        case 'r':
                        case 'R':reverse_records(&headptr);break;

                        case 'v':
                        case 'V':save_records(&headptr);break;


                }
        }
}