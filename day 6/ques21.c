//Write a program to Convert decimal to binary

#include <stdio.h>
int main(){
    int n, rem ,place=1, sum=0;
    printf("enter decimal number \n");
    scanf("%d" , &n);
    while(n>0){
        rem=n%2;
        sum=sum+place*rem;
        place=place*10;
        n=n/2;
    }

    printf("binary number is %d" ,sum);
    
    return 0;
}
