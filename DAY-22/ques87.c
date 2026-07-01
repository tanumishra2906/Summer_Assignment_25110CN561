//Write a program to Character frequency. 
#include <stdio.h>

int main(){
    char str[100] ;
    int freq=0,i,j;
    printf("enter string : ");
    fgets(str,sizeof(str),stdin);

    printf("enter character : ");
    char ch;
    scanf("%c" ,&ch);
    for(i=0;str[i]!='\0' ;i++){
        if(str[i]==ch){
            freq++;
        }
    }
    printf("frequency of %c is %d" , ch,freq);
    return 0;
}