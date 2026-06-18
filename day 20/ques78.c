//Write a program to Check symmetric matrix.

#include<stdio.h>
int main(){
    int i , j ,mat1[3][3];
    printf("enter elements of matrix = \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d" ,&mat1[i][j]);
        }
    }
    int flag=1;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(mat1[i][j]!=mat1[j][i]){
                flag=0;
                break;
            }
        }
    }

    if(flag == 1){
        printf("It is a symmetric matrix");
    }
    
    else{
        printf("Not a symmetric matrix");
    }
    
}