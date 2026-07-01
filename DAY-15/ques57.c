//Write a program to Reverse array

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

    for(int i=0;i<n/2;i++){
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    printf("reversed array is \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }


        
    return 0;
}