//selection sort


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
    
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }int temp=a[i];
            a[i]=a[min];
            a[min]=temp;
    }

    printf("Sorted aaray is \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
    return 0;
}