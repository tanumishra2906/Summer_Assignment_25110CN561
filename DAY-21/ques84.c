//Write a program to Convert lowercase to uppercase

#include <stdio.h>
#include<string.h>

int main(){
    char str[100] ;
    printf("enter string");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a'&& str[i]<='z'){
            str[i]=str[i]-32 ;//cuz comp stores these letters as ascii values
        }
    }
    printf("Uppercase string: %s", str);


    
    return 0;
}

            