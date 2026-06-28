//Write a program to Create contact management system.

// Write a C program to create a Contact Management System using Structures.

#include<stdio.h>

struct Contact
{
    int id;
    char name[50];
    char phone[15];
};

int main()
{
    struct Contact c[100];
    int n=0, choice, i, id, found;

    do
    {
        printf("\n********** CONTACT MANAGEMENT SYSTEM **********\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Update Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Contact ID: ");
                scanf("%d",&c[n].id);

                printf("Enter Name: ");
                scanf("%s",c[n].name);

                printf("Enter Phone Number: ");
                scanf("%s",c[n].phone);

                n++;
                printf("Contact Added Successfully!\n");
                break;

            case 2:
                if(n==0)
                {
                    printf("No Contacts Found!\n");
                }
                else
                {
                    for(i=0;i<n;i++)
                    {
                        printf("\nContact %d\n",i+1);
                        printf("ID : %d\n",c[i].id);
                        printf("Name : %s\n",c[i].name);
                        printf("Phone : %s\n",c[i].phone);
                    }
                }
                break;

            case 3:
                printf("Enter Contact ID: ");
                scanf("%d",&id);

                found=0;

                for(i=0;i<n;i++)
                {
                    if(c[i].id==id)
                    {
                        printf("Contact Found!\n");
                        printf("ID : %d\n",c[i].id);
                        printf("Name : %s\n",c[i].name);
                        printf("Phone : %s\n",c[i].phone);

                        found=1;
                        break;
                    }
                }

                if(found==0)
                    printf("Contact Not Found!\n");

                break;

            case 4:
                printf("Enter Contact ID to Update: ");
                scanf("%d",&id);

                found=0;

                for(i=0;i<n;i++)
                {
                    if(c[i].id==id)
                    {
                        printf("Enter New Name: ");
                        scanf("%s",c[i].name);

                        printf("Enter New Phone Number: ");
                        scanf("%s",c[i].phone);

                        printf("Contact Updated Successfully!\n");

                        found=1;
                        break;
                    }
                }

                if(found==0)
                    printf("Contact Not Found!\n");

                break;

            case 5:
                printf("Enter Contact ID to Delete: ");
                scanf("%d",&id);

                found=0;

                for(i=0;i<n;i++)
                {
                    if(c[i].id==id)
                    {
                        int j;

                        for(j=i;j<n-1;j++)
                        {
                            c[j]=c[j+1];
                        }

                        n--;
                        found=1;

                        printf("Contact Deleted Successfully!\n");
                        break;
                    }
                }

                if(found==0)
                    printf("Contact Not Found!\n");

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







