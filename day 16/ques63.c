//Write a program to Find pair with given sum.

#include<stdio.h>
int main(){
    int n,i,target,j;
    printf("enter target to be searched :\n");
    scanf("%d" ,&target);
    printf("enter size of array");
    scanf("%d" ,&n);
    int a[n];

    printf("enter elements of array :\n");
    for( i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            int sum = a[i] + a[j];
            if(sum == target){
                printf("The pair is %d %d\n", a[i], a[j]);
            } 
        }
    }
    
    return 0;
}