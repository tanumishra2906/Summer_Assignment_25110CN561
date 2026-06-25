//Write a program to Create ATM simulation

#include <stdio.h>

int main() {
    int choice,pin;
    float balance=1000,amount;

    printf("**************************ATM Simulation*******************************\n\n");

    printf("enter Pin\n");
    scanf("%d" , &pin);

    if(pin!=1234){
        printf("Invalid Pin Entered \n");
        return 0;
    }

    do{
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("enter choice \n");
        scanf("%d" , &choice);

        switch(choice){
            
            
            case 1: 

                printf("Total Balance in your account is Rs %.2f \n" , balance);
                break ;

            case 2: 
                printf("Enter Amount to be deposited\n");
                scanf("%f" , &amount);

                if(amount<0){
                    printf("Invalid Amount Entered\n");
                }
                else{
                    printf("Rs %.2f Successfully Added to your account\n" , amount);
                    balance+=amount;
                    break;
                }
            
            case 3: 
                printf("enter amount to be withdrawn \n");
                scanf("%f" , &amount);


                if(amount<=0){
                    printf("Invalid amount entered\n");
                }
                else if(balance>=amount){
                    printf("RS %.2f Successfully withdrawn \n", amount);
                    printf("Please collect your cash\n");
                    balance-=amount;
                    printf("Remaining Balance in your account is Rs %.2f \n" , balance);   
                }
                
                else{
                    printf("Insufficient balance\n");
                }
                
                break ;

            case 4: 
                printf("Thank you For using our ATM\n");
                break ;
            default:
                printf("Invalid Choice\n");


        }
    }while(choice !=4);

    



    return 0;
}