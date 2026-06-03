//lcm of 2 no.s
//gcd *lcm = a *b

#include <stdio.h>

int main() {
    int a, b, gcd , temp ,x , y;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    x=a ,y=b; //save original values cuz a and b changes

    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    gcd=a;

    printf("lcm = %d", (x*y)/gcd);

    return 0;
}
