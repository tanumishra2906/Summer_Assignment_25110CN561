//Write a program to Check palindrome string. 
#include <stdio.h>
#include<string.h>

int main(){
    char a[100],b[100] ;
    printf("enter string");
    fgets(a,sizeof(a),stdin);
    a[strcspn(a, "\n")] = '\0';  // remove newline (fgets creates issue)

    strcpy(b,a);

    strrev(b);
    int temp = strcmp(a,b);

    if(temp==0){
        printf("String is palindrome\n");
    }
    else{
        printf("String is not palindrome");
    }



    
    return 0;
}