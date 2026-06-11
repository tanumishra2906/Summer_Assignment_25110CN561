//Write a program to Write function to find factorial

#include <stdio.h>

int fact(int a );

int main(){
    int a;
    printf("enter number= \n");
    scanf("%d" , &a);
    fact(a);
    return 0;

}

int fact(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
        }
    
    printf("factorial is %d" ,fact);


}