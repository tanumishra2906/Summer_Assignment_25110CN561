//move zeroes to end

#include<stdio.h>
int main(){
    int n,i,temp,a[100];
    printf("enter size of array");
    scanf("%d" ,&n);
    printf("enter elements of array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int j=0;
    for(int i=0;i<n;i++){
        if (a[i]!=0){
            a[j]=a[i];
            j++;
        }
    }
    while(j<n){
        a[j]=0;
        j++;
    }
    
    printf("final array is \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }


        
    return 0;
}