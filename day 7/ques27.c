//Write a program to Recursive sum of digits

#include <stdio.h>

int sum(int n){
    if (n==0){
        return 0;
    }
    return sum(n/10)+n%10; //add last dig in the sum of rest digits
}

int main(){
    int x;
    printf("enter number");
    scanf("%d" ,&x);
    printf("sum is %d" ,sum(x));
    return 0;
}
