//Write a program to Create salary management system.


#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basic, bonus, deduction, netSalary;
};

int main()
{
    struct Employee emp[100];
    int n = 0, choice, i, id, found;
    do
    {
        printf("\n********** SALARY MANAGEMENT SYSTEM **********\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display Salary Details\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &emp[n].id);

                printf("Enter Employee Name: ");
                scanf("%s", emp[n].name);

                printf("Enter Basic Salary: ");
                scanf("%f", &emp[n].basic);

                printf("Enter Bonus: ");
                scanf("%f", &emp[n].bonus);

                printf("Enter Deduction: ");
                scanf("%f", &emp[n].deduction);
                emp[n].netSalary = emp[n].basic + emp[n].bonus - emp[n].deduction;
                n++;
                printf("Salary Record Added Successfully!\n");
                break;
            case 2:
                if(n == 0)
                {
                    printf("No Records Found!\n");
                }
                else
                {
                    printf("\nSalary Details\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nEmployee %d\n", i + 1);
                        printf("ID          : %d\n", emp[i].id);
                        printf("Name        : %s\n", emp[i].name);
                        printf("Basic Salary: %.2f\n", emp[i].basic);
                        printf("Bonus       : %.2f\n", emp[i].bonus);
                        printf("Deduction   : %.2f\n", emp[i].deduction);
                        printf("Net Salary  : %.2f\n", emp[i].netSalary);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(emp[i].id == id)
                    {
                        printf("\nEmployee Found!\n");
                        printf("Name       : %s\n", emp[i].name);
                        printf("Net Salary : %.2f\n", emp[i].netSalary);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Employee Not Found!\n");
                break;
            case 4:
                printf("Enter Employee ID: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(emp[i].id == id)
                    {
                        printf("Enter New Basic Salary: ");
                        scanf("%f", &emp[i].basic);

                        printf("Enter New Bonus: ");
                        scanf("%f", &emp[i].bonus);

                        printf("Enter New Deduction: ");
                        scanf("%f", &emp[i].deduction);
                        emp[i].netSalary = emp[i].basic + emp[i].bonus - emp[i].deduction;
                        printf("Salary Updated Successfully!\n");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Employee Not Found!\n");
                break;
            case 5:
                printf("Exiting Program...\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}