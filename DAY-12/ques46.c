//armstrong

#include <stdio.h>
#include<math.h>
void armstrong(int a );

int main(){
    int a;
    printf("enter number= \n");
    scanf("%d" , &a);
    armstrong(a);
    return 0;
}

void armstrong(int a){
    int count=0;
    int temp=a;
    while(temp!=0){
        temp=temp/10;
        count++;
    }
    int sum=0;
    temp=a;
    while(temp>0){
        int r=temp%10;
        sum=sum+(int)(pow(r,count)+0.5);
        temp=temp/10;
    }
    if (sum==a){
        printf("Number is armstrong");
    }
    else{
        printf("Number is not armstrong");
    }


}
