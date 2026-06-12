//Write a program to Find largest and smallest element

#include<stdio.h>
int main(){
    int n,i,max,min;
    printf("enter size of array");
    scanf("%d" ,&n);
    int a[n];
    printf("enter elements of array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }printf("largest element of array is %d \n" ,max);
min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }printf("smallest element of array is %d" ,min);
    return 0;
}