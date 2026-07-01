//Write a program to Find maximum frequency element.



#include<stdio.h>
int main(){
    int n,i,maxfreq=0,maxelement;
    printf("enter size of array");
    scanf("%d" ,&n);
    int a[n];
 
    printf("enter elements of array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count > maxfreq){
            maxfreq=count;
            maxelement=a[i];
        }

    } 
    
    printf("Maximum frequency element = %d\n", maxelement);
    printf("Frequency = %d", maxfreq);

     

    return 0;
}