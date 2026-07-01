/* Write a program to Print number pyramid.
   1
  121
 12321
1234321
123454321 */


#include <stdio.h>
int main(){
    int n;
    printf("enter height of pyramid");
    scanf("%d" ,&n);
    for(int i=1;i<=n;i++){
        for(int spaces=1;spaces<=(n-i);spaces++){
            printf(" ");
        }    
        
        for(int j=1;j<=i;j++){
            printf("%d" , j);
        }
        for(int j=(i-1);j>=1;j--){
            printf("%d" , j);
        }
        
        printf("\n");
    }
    
    return 0;
}
