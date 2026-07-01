#include <stdio.h>
int main(){
    int n,count =0, temp;
    printf("enter number  \n");
    scanf("%d" , &n);
    temp=n;
    while(temp>0){
        temp=temp/10;
        count++;

    }
    printf("nummber of digits in the number is %d " , count);
    
    return 0;
}
