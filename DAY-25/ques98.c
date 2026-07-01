//Write a program to Find common characters in strings.

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];


    printf("enter string\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str ,"\n")]= '\0';

    for(int i=0;str[i]!='\0';i++){
        int count=0;
        for(int j=i+1;str[j]!='\0';j++){
            
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count>0){
            printf("%c \n",str[i]);
        }

    }
    return 0;
}