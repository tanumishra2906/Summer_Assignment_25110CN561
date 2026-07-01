//Write a program to Count set bits in a number. 
//Set bits = number of 1s in the binary representation of a number.
#include <stdio.h>
int main(){
    int n, rem ,place=1, sum=0,count=0;
    printf("enter decimal number \n");
    scanf("%d" , &n);
    while(n>0){
        rem=n%2;
        sum=sum+place*rem;
        place=place*10;
        n=n/2;
    }
    printf("binary number is %d \n" , sum);
    while(sum>0){
        int d = sum%10;
        if(d==1){
            count++;
        }
        sum=sum/10;
    }
    printf("set bits in the given number is %d" , count);
    return 0;
}