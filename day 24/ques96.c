//Write a program to Remove duplicate characters

#include<stdio.h>
int main(){
    char str[100] ;
    int i,j;

    printf("enter string : ");
    fgets(str,sizeof(str),stdin);


    
    for(i=0;str[i]!='\0' ;i++){
        int found=0;

        for( j=0;j<i;j++){
            if(str[j]==str[i]){
                found=1;
                break;
            }

        }
        if (found==0){
        printf("%c" , str[i]);
    }
    
    }
    
    
    
    return 0;
}