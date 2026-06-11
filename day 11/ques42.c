//Write a program to Write function to find maximum

#include <stdio.h>

int max(int a , int b);

int main(){

    int a,b;
    printf("enter 1st number= \n");
    scanf("%d" , &a);
    printf("enter 2nd number= \n");
    scanf("%d" , &b);
    printf("max is %d" , max(a,b));
    return 0;

}

int max(int a , int b){
    return (a>b)? a : b ;

}