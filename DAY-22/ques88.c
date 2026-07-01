//Write a program to Remove spaces from string.

#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int i,j=0;// j is the new index
    printf("enter string = ");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            str[j]=str[i];
            j++;
        }
        
    }
    str[j]='\0';

    printf("after removing spaces = %s" , str);

}