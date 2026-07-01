#include <stdio.h>

int fib(int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }

    return fib(n-2)+fib(n-1) ;
}

int main(){
    int x;
    printf("enter no of terms ");
    scanf("%d" ,&x);
    printf("fibonacci series is \n");
    for(int i=0;i<x;i++){
        
        printf("%d " ,fib(i));

    }
    
    return 0;
}