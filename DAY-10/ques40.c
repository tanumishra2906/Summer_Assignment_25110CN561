/* Write a program to Print character pyramid.
   A
  ABA
 ABCBA
ABCDCBA
ABCDEDCBA
 */
#include <stdio.h>
int main(){
    int n;
    printf("enter height of pyramid");
    scanf("%d" ,&n);
   
    for(int i=1;i<=n;i++){
        for(int spaces=1;spaces<=(n-i);spaces++){
            printf(" ");
        }    
        char ch='A';
        for(int j=1;j<=i;j++){
            printf("%c" , ch);
            ch++;
            
        }
        ch=ch-2;
        for(int j=(i-1);j>=1;j--){
            printf("%c" , ch);
            ch--;
            
        }
        
        printf("\n");
    } 
    
    return 0;
}
