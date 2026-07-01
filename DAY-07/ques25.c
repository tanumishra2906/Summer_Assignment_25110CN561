//Write a program to Recursive factorial
#include <stdio.h>

int fact(int n){
    if (n==0){
        return 1;
    }
    return fact(n-1)*n ;
}

int main(){
    int x;
    printf("enter number");
    scanf("%d" ,&x);
    printf("fact is %d" ,fact(x));
    return 0;
}

