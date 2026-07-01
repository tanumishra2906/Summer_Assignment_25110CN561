#include <stdio.h>
int main(){
    int n , rev=0 ,r;
    printf("enter the number \n");
    scanf("%d" , &n);
    int original = n;
    while(n>0){
        r=n%10;
        rev= rev*10 + r;
        n=n/10;
    }
    if(original==rev){
        printf("number is palindrome");
    }
    else{
        printf("number is not palindrome");
    }
    
    return 0;
}