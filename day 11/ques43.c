//Write a program to Write function to check prime

#include <stdio.h>

int prime(int a );

int main(){
    int a;
    printf("enter number= \n");
    scanf("%d" , &a);
    prime(a);
    return 0;

}

int prime(int a){
    int flag=1;
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            flag=0;
            break;
        }
    }
    if (flag==1){
        printf("Number is Prime");
    }

    if (flag==0){
        printf("Number is not Prime");
    }


}