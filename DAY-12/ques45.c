//Write a program to Write function for palindrome.


#include <stdio.h>
void palindrome(int a );

int main(){
    int a;
    printf("enter number= \n");
    scanf("%d" , &a);
    palindrome(a);
    return 0;
}

void palindrome(int a){
    int rev=0;
    int original=a;
    while(a>0){
        int r=a%10;
        rev= r+10*rev;
        a=a/10;
    }
    if (rev==original){
        printf("Number is palindrome");
    }
    else{
        printf("Number is not palindrome");
    }


}
