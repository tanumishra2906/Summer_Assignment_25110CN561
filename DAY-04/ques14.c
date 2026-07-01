//Write a program to Find nth Fibonacci term.
#include <stdio.h>
int main(){
    int n , term1=0 ,term2 =1 , nextterm;
    printf("enter the required fibonacci term \n");
    scanf("%d" , &n);
    if(n==1){
        printf("nth fibonacci term is %d" , term1);
    }
    else if(n==2){
        printf("nth fibonacci term is %d" , term2);
    }
    else{
        for(int i=3;i<=n;i++){
            nextterm=term1+term2;
            term1=term2;
            term2=nextterm;
        }

    } printf("nth fibonacci term is %d" , nextterm);
    
    return 0;
}