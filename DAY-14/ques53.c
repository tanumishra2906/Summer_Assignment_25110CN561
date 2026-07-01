//linear search

#include<stdio.h>
int main(){
    int n,i,pos,flag=0,target;
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
            pos=i+1;
            break;
        }
    }if (flag==1){
        printf("number found at %d position \n " , pos);
    }else {
        printf("number not found");
    }
    return 0;
}