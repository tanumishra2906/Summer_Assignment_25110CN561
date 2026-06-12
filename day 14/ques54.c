//Q54 Write a program to Frequency of an element. 


#include<stdio.h>
int main(){
    int n,i,count=0,flag=0,target;
    printf("enter size of array");
    scanf("%d" ,&n);
    int a[n];
    printf("enter target to be searched :\n");
    scanf("%d" ,&target);
    printf("enter elements of array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        if(a[i]==target){
            flag=1;
            count++;
        }
    }if (flag==1){
        printf("number found %d times \n " , count);
    }else {
        printf("number is found 0 times");
    }
    return 0;
}