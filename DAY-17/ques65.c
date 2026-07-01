//Write a program to Merge arrays. 



#include<stdio.h>
int main(){
    int n1,n2;
    printf("enter size of 1st array");
    scanf("%d" ,&n1);
    int a[n1];
   
    printf("enter elements of 1st array :\n");
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }

    printf("enter size of 2nd array");
    scanf("%d" ,&n2);
    int b[n2];
   
    printf("enter elements of 2nd array :\n");
    for(int i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }

    int c[n1+n2];
    //copying 1st array
    for(int i=0;i<n1;i++){
        c[i]=a[i];
    }
//copying 2nd array
    for(int i=0;i<n2;i++){
        c[n1+i]=b[i];
    }
    printf("Merged array is \n");
    for(int i=0;i<n1+n2;i++){
        printf("%d " ,c[i]);
    }

        
    return 0;
}