//Write a program to Remove duplicates from array

#include<stdio.h>
int main(){
    int n;
    printf("enter size of array");
    scanf("%d" ,&n);
    int a[n];
 
    printf("enter elements of array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Array after removing duplicates:\n");

    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
                flag=1;
                break;
            }
            
        }

        if(flag==0){
            printf("%d " ,a[i]);

        }

    } 
    return 0;
}