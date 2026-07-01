#include <stdio.h>
#include <math.h>
int main(){
    int n,i,temp ,r,sum , count;
    printf("enter range \n");
    scanf("%d" ,&n);


    for( i=1;i<=n;i++){
        //DIGIT COUNT
        temp=i;
        count=0;
        while(temp!=0){
            temp=temp/10;
            count++;
        }
        sum=0;
        temp=i;
        while(temp>0){
            r=temp%10;
            sum = sum + (int)(pow(r,count) + 0.5);
            temp=temp/10;
        } if (sum==i){
        printf("%d \n", i); }

    } 
    
    
    return 0;
}