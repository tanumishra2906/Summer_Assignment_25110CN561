//Write a program to Find missing number in array.

#include<stdio.h>
int main(){
    int n,i;
    printf("enter size of array");
    scanf("%d" ,&n);
    int a[n];
   
    printf("enter elements of array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n-1;i++){
        if ((a[i+1]-a[i])>1){
            printf("missing number is %d" , a[i]+1);
        }
        
    }
       
    return 0;
}