#include <stdio.h>
#include <math.h>
int main(){
    int n, d, sum=0;
    printf("enter binary number \n");
    scanf("%d" , &n);
    int i=0;
    while(n>0){
        d=n%10;
        sum=sum+d*pow(2,i);
        i++;
        n=n/10;
    }

    printf("decimal number is %d" ,sum);
    
    return 0;
}
