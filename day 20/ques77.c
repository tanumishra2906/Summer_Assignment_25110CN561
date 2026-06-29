///Write a program to Multiply matrices. 
#include<stdio.h>
 int main(){
    int i,j,k,r1,c1,r2,c2,mat1[25][25],mat2[25][25],mat3[25][25];
    printf("enter rows and column of matrix 1\n");
    scanf("%d %d" ,&r1 ,&c1); 
    printf("enter rows and column of matrix 2 \n");
    scanf("%d %d" ,&r2 ,&c2); 
    if(c1!=r2){
        printf("Multiplication not possible");
    }
    else{
    printf("enter elements for matrix 1:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d" ,&mat1[i][j]);
        }
    }

    printf("enter elements for matrix 2:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d" ,&mat2[i][j]);
        }
    }

    
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            int sum=0;
            for(k=0;k<r2;k++){
                sum=sum+mat1[k][j]*mat2[i][k];
            }
            mat3[i][j]= sum;
            
        }
    }
    printf("\nresultant matrix is =\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%4d ", mat3[i][j]);    
        }printf("\n");
    } 
   
    
    }
    
    
    
}