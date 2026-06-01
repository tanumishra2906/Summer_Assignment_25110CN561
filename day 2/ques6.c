#include <stdio.h>
int main(){
    int n , rev=0 ,r;
    printf("enter the number \n");
    scanf("%d" , &n);
    while(n>0){
        r=n%10;
        rev= rev*10 + r;
        n=n/10;
    }
    printf("reverse of the given number is: %d " , rev);
    return 0;
}
