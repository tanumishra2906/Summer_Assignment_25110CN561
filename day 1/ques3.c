#include <stdio.h>
int main(){
    int n, fact=1;
    printf("enter number whose factorial is required \n");
    scanf("%d" , &n);
    for(int i=1 ; i<=n ;i++){
        fact=fact*i;
        
    }
    printf("factorial is %d" , fact);
    
    return 0;
}
