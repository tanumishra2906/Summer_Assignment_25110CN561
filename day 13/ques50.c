//sum of array

#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter size of array");
    scanf("%d" ,&n);
    int a[n];
    printf("enter elements of array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }printf("sum of elements of array is %d" ,sum);
    return 0;
}