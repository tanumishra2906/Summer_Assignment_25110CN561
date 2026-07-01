//Write a program to Check Armstrong number.
#include <stdio.h>
#include <math.h>
int main(){
    int n ,temp , count,sum; 
    printf("enter the number \n");
    scanf("%d" , &n);
    temp=n;
    count=0;
    while(temp!=0){
        temp=temp/10;
        count++;
    }
    temp=n; //again assign cuz temp is set to 0 from 1st loop
    sum=0;
    while(temp>0){
        int r=temp%10;
        sum = sum + (int)(pow(r,count) + 0.5); // +0.5 for proper rounding, otherwise 124.999999 may become 124 after typecasting
        temp=temp/10;
    }
    if(sum==n){
        printf("given number is armstrong");
    }
    else{
        printf("number is not armstrong");
    }
    
    return 0;
}