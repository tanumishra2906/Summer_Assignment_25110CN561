//Write a program to Create bank account system.
// Write a C program to create a Bank Account Management System using Structures.

#include<stdio.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Account a[100];
    int n=0, choice, i, accNo, found;
    float amount;

    do
    {
        printf("\n********** BANK ACCOUNT MANAGEMENT SYSTEM **********\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Search Account\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Delete Account\n");
        printf("7. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Account Number: ");
                scanf("%d",&a[n].accNo);

                printf("Enter Account Holder Name: ");
                scanf("%s",a[n].name);

                printf("Enter Initial Balance: ");
                scanf("%f",&a[n].balance);

                n++;
                printf("Account Created Successfully!\n");
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
                        printf("\nAccount %d\n",i+1);
                        printf("Account No : %d\n",a[i].accNo);
                        printf("Name : %s\n",a[i].name);
                        printf("Balance : %.2f\n",a[i].balance);
                    }
                }
                break;

            case 3:
                printf("Enter Account Number: ");
                scanf("%d",&accNo);

                found=0;

                for(i=0;i<n;i++)
                {
                    if(a[i].accNo==accNo)
                    {
                        printf("Account Found!\n");
                        printf("Account No : %d\n",a[i].accNo);
                        printf("Name : %s\n",a[i].name);
                        printf("Balance : %.2f\n",a[i].balance);

                        found=1;
                        break;
                    }
                }

                if(found==0)
                    printf("Account Not Found!\n");

                break;

            case 4:
                printf("Enter Account Number: ");
                scanf("%d",&accNo);

                found=0;

                for(i=0;i<n;i++)
                {
                    if(a[i].accNo==accNo)
                    {
                        printf("Enter Amount to Deposit: ");
                        scanf("%f",&amount);

                        a[i].balance += amount;

                        printf("Amount Deposited Successfully!\n");
                        printf("Updated Balance : %.2f\n",a[i].balance);

                        found=1;
                        break;
                    }
                }

                if(found==0)
                    printf("Account Not Found!\n");

                break;

            case 5:
                printf("Enter Account Number: ");
                scanf("%d",&accNo);

                found=0;

                for(i=0;i<n;i++)
                {
                    if(a[i].accNo==accNo)
                    {
                        printf("Enter Amount to Withdraw: ");
                        scanf("%f",&amount);

                        if(amount<=a[i].balance)
                        {
                            a[i].balance -= amount;
                            printf("Amount Withdrawn Successfully!\n");
                            printf("Updated Balance : %.2f\n",a[i].balance);
                        }
                        else
                        {
                            printf("Insufficient Balance!\n");
                        }

                        found=1;
                        break;
                    }
                }

                if(found==0)
                    printf("Account Not Found!\n");

                break;

            case 6:
                printf("Enter Account Number to Delete: ");
                scanf("%d",&accNo);

                found=0;

                for(i=0;i<n;i++)
                {
                    if(a[i].accNo==accNo)
                    {
                        int j;

                        for(j=i;j<n-1;j++)
                        {
                            a[j]=a[j+1];
                        }

                        n--;
                        found=1;

                        printf("Account Deleted Successfully!\n");
                        break;
                    }
                }

                if(found==0)
                    printf("Account Not Found!\n");

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