//Write a program to Create ATM simulation

#include <stdio.h>

int main() {
    int choice,pin,attempts;
    float balance=1000,amount,validinput;

    printf("**************************ATM Simulation*******************************\n\n");

    //pin validation
    do{
        printf("Enter Pin\n");
        validinput=scanf("%d" , &pin); //returns true only if digit entered

        while(getchar()!='\n'); //invalid char are stored in buffer...this line consumes al invalid char and once \n is reached buffer is cleared and ready to store new input

        if(!validinput){
            printf("Enter numbers only\n");
            attempts--;
            continue;

        }

        if(pin!=1234){
            attempts --;
            if(attempts>0){
                printf("Invalid pin\n Please try again\n");
            }
            
        }
    }while(pin!=1234 && attempts>0);


    
    if(pin!=1234){
        printf("Invalid pin\n too many login attempts \n");
    }

    do{
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter choice\n");
        validinput=scanf("%d" , &choice);

        while(getchar()!='\n');
        if(!validinput){
            printf("Enter numbers only\n");
            continue;

        }
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