//Write a program to Create marksheet generation system

// Write a C program to create a Marksheet Generation System using Structures.

#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    float english, maths, science;
    float total, percentage;
};

int main()
{
    struct Student s[100];
    int n=0, choice, i, roll, found;

    do
    {
        printf("\n********** MARKSHEET GENERATION SYSTEM **********\n");
        printf("1. Add Student\n");
        printf("2. Display Marksheet\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Roll No: ");
                scanf("%d",&s[n].roll);

                printf("Enter Name: ");
                scanf("%s",s[n].name);

                printf("Enter English Marks: ");
                scanf("%f",&s[n].english);

                printf("Enter Maths Marks: ");
                scanf("%f",&s[n].maths);

                printf("Enter Science Marks: ");
                scanf("%f",&s[n].science);

                s[n].total = s[n].english + s[n].maths + s[n].science;
                s[n].percentage = s[n].total / 3;

                n++;
                printf("Marksheet Generated Successfully!\n");
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
                        printf("\nStudent %d\n",i+1);
                        printf("Roll No : %d\n",s[i].roll);
                        printf("Name : %s\n",s[i].name);
                        printf("English : %.2f\n",s[i].english);
                        printf("Maths : %.2f\n",s[i].maths);
                        printf("Science : %.2f\n",s[i].science);
                        printf("Total : %.2f\n",s[i].total);
                        printf("Percentage : %.2f\n",s[i].percentage);
                    }
                }
                break;

            case 3:
                printf("Enter Roll No: ");
                scanf("%d",&roll);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(s[i].roll==roll)
                    {
                        printf("Student Found!\n");
                        printf("Name : %s\n",s[i].name);
                        printf("Total : %.2f\n",s[i].total);
                        printf("Percentage : %.2f\n",s[i].percentage);
                        found=1;
                        break;
                    }
                }
                if(found==0)
                    printf("Student Not Found!\n");

                break;
            case 4:
                printf("Enter Roll No: ");
                scanf("%d",&roll);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(s[i].roll==roll)
                    {
                        printf("Enter New English Marks: ");
                        scanf("%f",&s[i].english);

                        printf("Enter New Maths Marks: ");
                        scanf("%f",&s[i].maths);

                        printf("Enter New Science Marks: ");
                        scanf("%f",&s[i].science);

                        s[i].total = s[i].english + s[i].maths + s[i].science;
                        s[i].percentage = s[i].total / 3;

                        printf("Record Updated Successfully!\n");
                        found=1;
                        break;
                    }
                }
                if(found==0)
                    printf("Student Not Found!\n");

                break;
            case 5:
                printf("Exiting Program...\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    }while(choice!=5);

    return 0;
}