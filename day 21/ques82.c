//Write a program to Reverse a string.


#include <stdio.h>
#include <string.h>
int main(){
    char a[100] ;
    printf("enter string");
    fgets(a,sizeof(a),stdin);
    strrev(a);

    

    printf("reverse of string is %s" , a);
    return 0;
}

