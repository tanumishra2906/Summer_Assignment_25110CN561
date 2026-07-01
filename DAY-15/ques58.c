//Write a program to Rotate array left
#include<stdio.h>
int main(){
    int n,i,temp;
    printf("enter size of array");
    scanf("%d" ,&n);
    int a[n];
   
    printf("enter elements of array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    temp=a[0]; 
    for(int i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[n-1]=temp;
    printf("rotated array is \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }


        
    return 0;
}