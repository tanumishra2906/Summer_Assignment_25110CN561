//reverse using recursion

#include <stdio.h>
int rev=0;
int reverse(int n){
    
    if (n==0){
        return rev;
    }
    rev= rev*10+n%10;
    reverse(n/10);
}

int main(){
    int x;
    printf("enter number");
    scanf("%d" ,&x);
    printf("reverse is %d" ,reverse(x));
    return 0;
}
