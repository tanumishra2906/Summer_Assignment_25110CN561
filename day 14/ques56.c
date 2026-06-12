//duplicates in array

#include<stdio.h>
int main(){
    int n,i;
    printf("enter size of array");
    scanf("%d" ,&n);
    int a[n];

    printf("enter elements of array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        for (int j= i+1; j<n; j++){
            if(a[i]==a[j]){
                printf("duplicate element is %d" , a[i]);
            }

            
        }
        
    }
        return 0;
}