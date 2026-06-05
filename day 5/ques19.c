//wap to print factors of a no.
#include <stdio.h>
int main(){
    int n ;
    printf("enter number \n");
    scanf("%d" , &n);
    printf("factors of the number are \n");
    
    for(int i=1;i<n;i++){ 
        if(n%i==0){
            printf("%d " ,i);
        }

    }
    
    return 0;
}
