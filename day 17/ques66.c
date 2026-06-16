//Write a program to Union of arrays.

#include<stdio.h>
int main(){
    int n1,n2;
    printf("enter size of 1st array");
    scanf("%d" ,&n1);
    int a[n1];
   
    printf("enter elements of 1st array :\n");
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }

    printf("enter size of 2nd array");
    scanf("%d" ,&n2);
    int b[n2];
   
    printf("enter elements of 2nd array :\n");
    for(int i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }

    int c[n1+n2];
    int k=0; //initially 0 uniq elem in c array
    //copying 1st array
    for(int i=0;i<n1;i++){
        int flag=0;
        for(int j=0;j<k;j++){
            if (c[j]==a[i]){
                flag=1;
                break;
                
            }
        }
        if (flag==0){
            c[k]=a[i];
            k++;
        }
       
    }
//copying 2nd array
    for(int i=0;i<n2;i++){
        int flag=0;
        for(int j=0;j<k;j++){
            if (c[j]==b[i]){   
                flag=1;
                break;
            }
        }
        if (flag==0){
            c[k]=b[i];
            k++;
        }
       
    }
    
    printf("union of both array is \n");
    for(int i=0;i<k;i++){
        printf("%d " ,c[i]);
    }

        
    return 0;
}