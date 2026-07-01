#include <stdio.h>
int main(){
    int n , sum=0;
    printf("enter number of naturnal numbers \n");
    scanf("%d" , &n);
    for(int i=0 ; i<=n ;i++){
        sum=sum+i;
    }
    printf("sum of first n natural number is: %d " , sum);
    return 0;
}