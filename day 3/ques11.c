/* #include <stdio.h>

int main() {
    int a, b, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for(int i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    printf("GCD = %d", gcd);

    return 0;
} */

//method 2
//Euclid's Algorithm: Repeatedly replace (a,b) with (b, a%b) until the remainder becomes 0. The last non-zero divisor is the GCD. 
#include <stdio.h>

int main() {
    int a, b, gcd , temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }

    printf("GCD = %d", a);

    return 0;
}
