#include <stdio.h>
int main(){
    int n, prod=1;
    printf("enter number whose table is required \n");
    scanf("%d" , &n);
    for(int i=1 ; i<=10 ;i++){
        prod=n*i;
        printf("%d * %d = %d \n", n ,i , prod);
    }
    
    return 0;
}
