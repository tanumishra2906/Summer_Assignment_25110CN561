//Write a program to Write function to find sum of two numbers.

#include <stdio.h>

int sum(int a , int b);

int main(){

    int a,b;
    printf("enter 1st number= \n");
    scanf("%d" , &a);
    printf("enter 2nd number= \n");
    scanf("%d" , &b);
    printf("sum is %d" , sum(a,b));
    return 0;

}

int sum(int a , int b){
    return a+b;
}