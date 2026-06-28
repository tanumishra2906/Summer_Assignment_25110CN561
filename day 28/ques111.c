//Write a program to Create ticket booking system.
// Write a C program to create a Ticket Booking System using Structures.

#include<stdio.h>

struct Ticket
{
    int ticketNo;
    char name[50];
    char destination[50];
};

int main()
{
    struct Ticket t[100];
    int n=0, choice, i, ticketNo, found;

    do
    {
        printf("\n********** TICKET BOOKING SYSTEM **********\n");
        printf("1. Book Ticket\n");
        printf("2. Display Tickets\n");
        printf("3. Search Ticket\n");
        printf("4. Update Ticket\n");
        printf("5. Cancel Ticket\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Ticket Number: ");
                scanf("%d",&t[n].ticketNo);

                printf("Enter Passenger Name: ");
                scanf("%s",t[n].name);

                printf("Enter Destination: ");
                scanf("%s",t[n].destination);

                n++;
                printf("Ticket Booked Successfully!\n");
                break;

            case 2:
                if(n==0)
                {
                    printf("No Tickets Booked!\n");
                }
                else
                {
                    for(i=0;i<n;i++)
                    {
                        printf("\nTicket %d\n",i+1);
                        printf("Ticket No : %d\n",t[i].ticketNo);
                        printf("Passenger : %s\n",t[i].name);
                        printf("Destination : %s\n",t[i].destination);
                    }
                }
                break;

            case 3:
                printf("Enter Ticket Number: ");
                scanf("%d",&ticketNo);

                found=0;

                for(i=0;i<n;i++)
                {
                    if(t[i].ticketNo==ticketNo)
                    {
                        printf("Ticket Found!\n");
                        printf("Ticket No : %d\n",t[i].ticketNo);
                        printf("Passenger : %s\n",t[i].name);
                        printf("Destination : %s\n",t[i].destination);

                        found=1;
                        break;
                    }
                }

                if(found==0)
                    printf("Ticket Not Found!\n");

                break;

            case 4:
                printf("Enter Ticket Number to Update: ");
                scanf("%d",&ticketNo);

                found=0;

                for(i=0;i<n;i++)
                {
                    if(t[i].ticketNo==ticketNo)
                    {
                        printf("Enter New Passenger Name: ");
                        scanf("%s",t[i].name);

                        printf("Enter New Destination: ");
                        scanf("%s",t[i].destination);

                        printf("Ticket Updated Successfully!\n");

                        found=1;
                        break;
                    }
                }

                if(found==0)
                    printf("Ticket Not Found!\n");

                break;

            case 5:
                printf("Enter Ticket Number to Cancel: ");
                scanf("%d",&ticketNo);

                found=0;

                for(i=0;i<n;i++)
                {
                    if(t[i].ticketNo==ticketNo)
                    {
                        int j;

                        for(j=i;j<n-1;j++)
                        {
                            t[j]=t[j+1];
                        }

                        n--;

                        printf("Ticket Cancelled Successfully!\n");

                        found=1;
                        break;
                    }
                }

                if(found==0)
                    printf("Ticket Not Found!\n");

                break;

            case 6:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    }while(choice!=6);

    return 0;
}