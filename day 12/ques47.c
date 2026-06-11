//fibonacci
#include <stdio.h>
#include<math.h>
void fibonacci(int a );

int main(){
    int a;
    printf("enter number of terms= \n");
    scanf("%d" , &a);
    fibonacci(a);
    return 0;
}

void fibonacci(int a){
 int term1=0,term2=1,i,newnum;
 printf("fibonacci series is \n");
 if (a >= 1) {
        printf("%d ", term1);
    }
    if (a >= 2) {
        printf("%d ", term2);
    }
 for(i=3;i<=a;i++){
    newnum=term1+term2;
    term1=term2;
    term2=newnum;
    printf("%d " , newnum);
 }


}
