//Write a program to Transpose matrix

#include<stdio.h>
int main(){
    int i , j ,mat1[3][3],mat2[3][3],mat3[3][3];
    printf("enter matrix 1 = \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d" ,&mat1[i][j]);
        }
    }
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            mat2[i][j]=mat1[j][i];
        }
    }

    printf("\nTranspose of this matrix is\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%4d " ,mat2[i][j]);
        }printf("\n");
    }
}