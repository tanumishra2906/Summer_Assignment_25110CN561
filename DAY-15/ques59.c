//Write a program to Rotate array right

#include<stdio.h>
int main(){
    int n,i,temp,a[100];
    printf("enter size of array");
    scanf("%d" ,&n);
    printf("enter elements of array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    temp=a[n-1]; 
    for(int i=n-1;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=temp;
    printf("rotated array is \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }


        
    return 0;
}