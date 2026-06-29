//Q114	Write a program to Create menu-driven array operations system.	
#include<stdio.h>

int main()
{
    int arr[100], n, i, choice, pos, value, found;

    printf("Enter Size of Array: ");
    scanf("%d",&n);

    printf("Enter Array Elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    do
    {
        printf("\n********** ARRAY OPERATIONS SYSTEM **********\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Update Element\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Array Elements: ");
                for(i=0;i<n;i++)
                {
                    printf("%d ",arr[i]);
                }
                printf("\n");
                break;

            case 2:
                printf("Enter Position: ");
                scanf("%d",&pos);

                printf("Enter Element: ");
                scanf("%d",&value);

                for(i=n;i>=pos;i--)
                {
                    arr[i]=arr[i-1];
                }

                arr[pos-1]=value;
                n++;

                printf("Element Inserted Successfully!\n");
                break;

            case 3:
                printf("Enter Position: ");
                scanf("%d",&pos);

                for(i=pos-1;i<n-1;i++)
                {
                    arr[i]=arr[i+1];
                }

                n--;

                printf("Element Deleted Successfully!\n");
                break;

            case 4:
                printf("Enter Element to Search: ");
                scanf("%d",&value);

                found=0;

                for(i=0;i<n;i++)
                {
                    if(arr[i]==value)
                    {
                        printf("Element Found at Position %d\n",i+1);
                        found=1;
                        break;
                    }
                }

                if(found==0)
                {
                    printf("Element Not Found!\n");
                }

                break;

            case 5:
                printf("Enter Position: ");
                scanf("%d",&pos);

                printf("Enter New Element: ");
                scanf("%d",&value);

                arr[pos-1]=value;

                printf("Element Updated Successfully!\n");
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