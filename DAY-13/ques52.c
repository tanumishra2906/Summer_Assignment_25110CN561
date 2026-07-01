//Write a program to Count even and odd elements.

#include<stdio.h>
int main(){
    int n,i,oddsum=0,evensum=0;
    printf("enter size of array");
    scanf("%d" ,&n);
    int a[n];
    printf("enter elements of array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            evensum=evensum+a[i];
        }

        else{
            oddsum=oddsum+a[i];
        } 
    } printf("sum of odd elements of array is %d \n" ,oddsum);
    printf("sum of even elements of array is %d " ,evensum);
    

    return 0;
}
