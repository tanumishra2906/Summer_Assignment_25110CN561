//Write a program to Find row-wise sum.

#include<stdio.h>
 int main(){
    int i,j,r1,c1,mat1[25][25],sum=0;
    printf("enter rows and column of matrix \n");
    scanf("%d %d" ,&r1 ,&c1); 
    printf("enter elements of matrix :\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d" ,&mat1[i][j]);
        }
    }
    printf("\ngiven matrix is:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%4d " ,mat1[i][j]);
            
        }printf("\n");
    }

    for(i=0;i<r1;i++){
        int sum=0;
        for(j=0;j<c1;j++){
            sum=sum+mat1[i][j];

        }printf("\n%d row sum is = %d\n" ,i+1,sum);
        
    }
    
    

    
}