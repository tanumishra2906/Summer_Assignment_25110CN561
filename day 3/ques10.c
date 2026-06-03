#include <stdio.h>
int main(){
    int n, flag=1 , i ,num;
    printf("enter range \n");
    scanf("%d" , &n);
    for(num=2;num<=n;num++){  
        flag=1;

        for(i=2;i*i<=num;i++){ 
            if(num %i == 0){
                flag=0;
                break;
            } 
        }

        if (flag == 1) {
            printf("%d ", num);

        }
    }
 
    
     
    return 0;
}