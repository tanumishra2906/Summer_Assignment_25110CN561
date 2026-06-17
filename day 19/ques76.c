//Write a program to Find diagonal sum.
#include<stdio.h>
 int main(){
    int i,j,n,mat1[25][25],mat2[25][25],lsum=0,rsum=0;
    printf("enter rows and column of matrix \n");
    scanf("%d %d" ,&n ,&n); 
    printf("enter elements of matrix :\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d" ,&mat1[i][j]);
        }
    }
    printf("\ngiven matrix is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%4d " ,mat1[i][j]);
            
            if(i==j){
                lsum=lsum+mat1[i][j];
            }
            if (i+j==n-1){
                rsum=rsum+mat1[i][j];
            }
        }printf("\n");
    }
    
    printf("\nsum of right diagonal is = %d\n" ,rsum);
    printf("\nsum of left diagonal is = %d\n" ,lsum);
    
}