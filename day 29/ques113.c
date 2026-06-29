//Q113	Write a program to Create menu-driven calculator.	

// Write a program to create a Menu-Driven Calculator.

#include<stdio.h>

int main()
{
    int choice;
    float num1, num2;

    do
    {
        printf("\n********** MENU-DRIVEN CALCULATOR **********\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Two Numbers: ");
                scanf("%f%f",&num1,&num2);

                printf("Sum = %.2f\n",num1+num2);
                break;

            case 2:
                printf("Enter Two Numbers: ");
                scanf("%f%f",&num1,&num2);

                printf("Difference = %.2f\n",num1-num2);
                break;

            case 3:
                printf("Enter Two Numbers: ");
                scanf("%f%f",&num1,&num2);

                printf("Product = %.2f\n",num1*num2);
                break;

            case 4:
                printf("Enter Two Numbers: ");
                scanf("%f%f",&num1,&num2);

                if(num2!=0)
                {
                    printf("Quotient = %.2f\n",num1/num2);
                }
                else
                {
                    printf("Division by Zero is Not Possible!\n");
                }
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