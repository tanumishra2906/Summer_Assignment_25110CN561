#include <stdio.h>
int main(){
    int n , term1=0 ,term2 =1 , nextterm;
    printf("enter num of terms \n");
    scanf("%d" , &n);
    printf("Fibonacci series is \n");
    printf("%d %d " ,term1 , term2);
    
    for(int i=3;i<=n;i++){
        nextterm=term1+term2;
        term1=term2;
        term2=nextterm;
        printf("%d " , nextterm);

    }
    return 0;
}