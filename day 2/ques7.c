#include <stdio.h>
int main(){
    int n , prod=1 ,r;
    printf("enter the number \n");
    scanf("%d" , &n);
    while(n>0){
        r=n%10;
        prod=prod *r; 
        n=n/10;
    }
    printf("product of the given number is: %d " , prod);
    return 0;
}