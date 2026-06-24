//Write a program to Merge two sorted arrays. 


#include<stdio.h>
int main(){
    int n1,n2,i,j,a1[100],a2[100],c[100],k;

    printf("enter size of array1");
    scanf("%d" ,&n1);
    printf("enter elements of array1 :\n");
    for(i=0;i<n1;i++){
        scanf("%d",&a1[i]);
    }

    printf("enter size of array2");
    scanf("%d" ,&n2);
    printf("enter elements of array2 :\n");
    for(j=0;j<n2;j++){
        scanf("%d",&a2[j]);
    }
    i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(a1[i]<a2[j]){
            c[k]=a1[i];  //compare both arrays and keep inserting the smaller element into c 
            i++ , k++;
        }
        else{
            c[k]=a2[j];
            j++ , k++;
        }

    }

    //now to copy remaining elements(if any) left in one of the arrsys
    while(i<n1){
        c[k]=a1[i];   
        i++ , k++;

    }
    while(j<n2){
        c[k]=a2[j];   
        j++ , k++;

    }
    printf("Merge of 2 sorted arrays : \n");
    for(int k=0;k<n1+n2;k++){
        printf("%d " , c[k]);
    }

    
}
