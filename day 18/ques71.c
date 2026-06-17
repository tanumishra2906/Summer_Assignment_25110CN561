//binary search

#include<stdio.h>
int main(){
    int n,pos,flag=0,target;
    printf("enter size of array");
    scanf("%d" ,&n);
    int a[n];
    printf("enter target to be searched :\n");
    scanf("%d" ,&target);
    printf("enter elements of array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int i=0;
    int j=n-1;
    while(i<=j){
        int mid=(i+j)/2;
        if(a[mid]==target){
            flag=1;
            pos=mid+1;
            break;
        }
        else if(a[mid]>target){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }if (flag==1){
        printf("number found at %d position \n " , pos);
    }else {
        printf("number not found");
    }
    return 0;
}