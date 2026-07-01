//Q115	Write a program to Create menu-driven string operations system.	

// Write a program to create a Menu-Driven String Operations System.

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];
    int choice;

    printf("Enter First String: ");
    scanf("%s",str1);

    do
    {
        printf("\n********** STRING OPERATIONS SYSTEM **********\n");
        printf("1. Display String\n");
        printf("2. Find Length\n");
        printf("3. Copy String\n");
        printf("4. Concatenate Strings\n");
        printf("5. Compare Strings\n");
        printf("6. Reverse String\n");
        printf("7. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("String = %s\n",str1);
                break;

            case 2:
                printf("Length = %d\n",strlen(str1));
                break;

            case 3:
                strcpy(str2,str1);
                printf("Copied String = %s\n",str2);
                break;

            case 4:
                printf("Enter Second String: ");
                scanf("%s",str2);

                strcat(str1,str2);

                printf("Concatenated String = %s\n",str1);
                break;

            case 5:
                printf("Enter Second String: ");
                scanf("%s",str2);

                if(strcmp(str1,str2)==0)
                    printf("Strings are Equal\n");
                else
                    printf("Strings are Not Equal\n");

                break;

            case 6:
                strrev(str1);
                printf("Reversed String = %s\n",str1);
                break;

            case 7:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    }while(choice!=7);

    return 0;
}