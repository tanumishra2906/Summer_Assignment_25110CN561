#include <stdio.h>
int main(){
    int n, flag=1;
    printf("enter number \n");
    scanf("%d" , &n);
    if(n<=1){
        flag=0; //cuz 1 is every nos factor
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            flag=0;
            break;
        }

    }
    if (flag==1){
        printf("num is prime");
    }
    
    if (flag==0){
        printf("num is not prime");
    }
    
    return 0;
}
