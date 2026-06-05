//Strong Number woh number hota hai jisme uske har digit ke factorial ka sum, original number ke equal ho.

#include <stdio.h>
int main(){
    int n , sum =0,r,fact , temp ;
    printf("enter number \n");
    scanf("%d" ,&n);
    temp=n;
    while(temp>0){
        r=temp%10;
        fact=1; //reset for each digit
        for(int j=1;j<=r;j++){
            fact=fact*j;

        }
        sum=sum+fact;
        temp=temp/10;

    }
    if (sum==n){
        printf("It is a strong number");
    }

    else{
        printf("number is not strong");
    }

    
    return 0;
}
