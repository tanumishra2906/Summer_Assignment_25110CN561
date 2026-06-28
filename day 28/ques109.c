//Write a program to Create library management system.
// Write a C program to create a Library Management System using Structures.

#include<stdio.h>

struct Book
{
    int bookId;
    char title[50];
    char author[50];
};

int main()
{
    struct Book b[100];
    int n=0, choice, i, id, found;

    do
    {
        printf("\n********** LIBRARY MANAGEMENT SYSTEM **********\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Update Book\n");
        printf("5. Delete Book\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d",&b[n].bookId);

                printf("Enter Book Title: ");
                scanf("%s",b[n].title);

                printf("Enter Author Name: ");
                scanf("%s",b[n].author);

                n++;
                printf("Book Added Successfully!\n");
                break;

            case 2:
                if(n==0)
                {
                    printf("No Records Found!\n");
                }
                else
                {
                    for(i=0;i<n;i++)
                    {
                        printf("\nBook %d\n",i+1);
                        printf("Book ID : %d\n",b[i].bookId);
                        printf("Title : %s\n",b[i].title);
                        printf("Author : %s\n",b[i].author);
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d",&id);

                found=0;

                for(i=0;i<n;i++)
                {
                    if(b[i].bookId==id)
                    {
                        printf("Book Found!\n");
                        printf("Book ID : %d\n",b[i].bookId);
                        printf("Title : %s\n",b[i].title);
                        printf("Author : %s\n",b[i].author);

                        found=1;
                        break;
                    }
                }

                if(found==0)
                    printf("Book Not Found!\n");

                break;

            case 4:
                printf("Enter Book ID to Update: ");
                scanf("%d",&id);

                found=0;

                for(i=0;i<n;i++)
                {
                    if(b[i].bookId==id)
                    {
                        printf("Enter New Title: ");
                        scanf("%s",b[i].title);

                        printf("Enter New Author: ");
                        scanf("%s",b[i].author);

                        printf("Record Updated Successfully!\n");
                        found=1;
                        break;
                    }
                }

                if(found==0)
                    printf("Book Not Found!\n");

                break;

            case 5:
                printf("Enter Book ID to Delete: ");
                scanf("%d",&id);

                found=0;

                for(i=0;i<n;i++)
                {
                    if(b[i].bookId==id)
                    {
                        int j;

                        for(j=i;j<n-1;j++)
                        {
                            b[j]=b[j+1];
                        }

                        n--;
                        found=1;

                        printf("Book Deleted Successfully!\n");
                        break;
                    }
                }

                if(found==0)
                    printf("Book Not Found!\n");

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