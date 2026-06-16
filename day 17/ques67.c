//Write a program to Intersection of arrays.
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

    printf("intersection of both array is \n");   
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if (a[i]==b[j]){
                printf("%d ",a[i]);
                break;
      
            }
        }
    }  
        
    return 0;
}