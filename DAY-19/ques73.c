//Write a program to Add matrices. 
#include<stdio.h>
int main(){
    int i , j ,mat1[3][3],mat2[3][3],mat3[3][3];
    printf("enter matrix 1 = \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d" ,&mat1[i][j]);
        }
    }
    printf("enter matrix 2 =\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d" ,&mat2[i][j]);
        }
    }
    //addition
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }

    printf("\naddition of these matrices\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%4d " ,mat3[i][j]);
        }printf("\n");
    }
}