//second largest element
#include<stdio.h>
int main(){
    int n,i,largest,seclargest;
    printf("enter size of array");
    scanf("%d" ,&n);
    int a[n];

    printf("enter elements of array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    largest=a[0];
    seclargest=-1;
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            seclargest=largest;
            largest=a[i];
                
        }
    }printf("second largest element is %d" ,seclargest);
    return 0;
}