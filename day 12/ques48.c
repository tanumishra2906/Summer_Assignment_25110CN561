//perfect number

#include <stdio.h>
void perfect(int a );

int main(){
    int a;
    printf("enter number= \n");
    scanf("%d" , &a);
    perfect(a);
    return 0;
}

void perfect(int a){
    int sum=0;

    for(int i=1;i<a;i++){
        if(a%i==0){
            sum=sum+i;
        }
    }
    
    if (sum==a){
        printf("Number is perfect");
    }
    else{
        printf("Number is not perfect");
    }


}
