//Write a program to Create student record system using arrays and strings
// Student Record System using Arrays and Strings

#include <stdio.h>
#include <string.h>

int main()
{
    int roll[100], n = 0;
    float marks[100];
    char name[100][50];

    int choice, i, search, found, j;
    while (1)
    {
        printf("\n===== STUDENT RECORD SYSTEM =====");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Update Student");
        printf("\n5. Delete Student");
        printf("\n6. Exit");

        printf("\n\nEnter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: // Add
            printf("\nEnter Roll No: ");
            scanf("%d", &roll[n]);

            printf("Enter Name: ");
            scanf(" %[^\n]", name[n]);

            printf("Enter Marks: ");
            scanf("%f", &marks[n]);

            n++;
            printf("\nStudent Added Successfully!\n");
            break;

        case 2: // Display
            if (n == 0)
            {
                printf("\nNo Records Found!\n");
                break;
            }

            printf("\n-------------------------------------------");
            printf("\nRoll\tName\t\tMarks");
            printf("\n-------------------------------------------");

            for (i = 0; i < n; i++)
            {
                printf("\n%d\t%s\t\t%.2f",
                       roll[i], name[i], marks[i]);
            }

            printf("\n");
            break;

        case 3: // Search
            printf("\nEnter Roll No to Search: ");
            scanf("%d", &search);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (roll[i] == search)
                {
                    printf("\nStudent Found!");
                    printf("\nRoll No : %d", roll[i]);
                    printf("\nName    : %s", name[i]);
                    printf("\nMarks   : %.2f\n", marks[i]);

                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("\nStudent Not Found!\n");

            break;

        case 4: // Update
            printf("\nEnter Roll No to Update: ");
            scanf("%d", &search);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (roll[i] == search)
                {
                    printf("Enter New Name: ");
                    scanf(" %[^\n]", name[i]);

                    printf("Enter New Marks: ");
                    scanf("%f", &marks[i]);

                    printf("\nRecord Updated Successfully!\n");

                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("\nStudent Not Found!\n");

            break;

        case 5: // Delete
            printf("\nEnter Roll No to Delete: ");
            scanf("%d", &search);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (roll[i] == search)
                {
                    for (j = i; j < n - 1; j++)
                    {
                        roll[j] = roll[j + 1];
                        strcpy(name[j], name[j + 1]);
                        marks[j] = marks[j + 1];
                    }

                    n--;

                    printf("\nRecord Deleted Successfully!\n");

                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("\nStudent Not Found!\n");

            break;

        case 6: // Exit
            printf("\nThank You!\n");
            return 0;

        default:
            printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}

