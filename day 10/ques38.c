#include <stdio.h>
int main(){
    int n;
    printf("enter height of pyramid");
    scanf("%d" ,&n);
    for(int i=(n-1);i>=0;i--){
        for(int spaces=1;spaces<=(n-i);spaces++){
            printf(" ");
        }    
        
        for(int j=1;j<=(2*i+1);j++){
            printf("*");
        } printf("\n");
    }
    
    return 0;
}
