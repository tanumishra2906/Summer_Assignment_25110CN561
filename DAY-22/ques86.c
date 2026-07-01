//Write a program to Count words in a sentence.
#include <stdio.h>

int main(){
    char str[100] ;
    int count =1,i;
    printf("enter string");
    fgets(str,sizeof(str),stdin);
    for (i=0;str[i]!='\0' ;i++){
        if(str[i] == ' ' && str[i+1]!=' '){
            count++;
        }
    }

    
    printf("word count in sentence is %d" , count);
    return 0;
}