/* Write a program to Print repeated character pattern.
A
BB
CCC
DDDD
EEEEE
 */

#include <stdio.h>
int main(){
    int n;
    printf("enter height of pyramid");
    scanf("%d" ,&n);
    char ch='A'; 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c " , ch);
        }  ch++ ;
        printf("\n");
    }
    
    return 0;
}