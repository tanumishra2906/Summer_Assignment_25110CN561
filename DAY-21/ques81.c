//Write a program to Find string lengthwithout strlen().
#include <stdio.h>

int main(){
    char str[100] ;
    int length=0;
    printf("enter string");
    fgets(str,sizeof(str),stdin);

    while(str[length]!='\0' && str[length]!='\n'){
        length++;
    }

    printf("length of string is %d" , length);
    return 0;
}