//Write a program to Input and display array

#include<stdio.h>
int main(){
    int n,i,a[25];
    printf("enter size of array");
    scanf("%d" ,&n);
    printf("enter elements of array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    return 0;
}