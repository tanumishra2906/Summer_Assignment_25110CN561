//Write a program to Create number guessing game. 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int guess ,attempt=0;
    srand(time(NULL));
    int secret= rand()%100+1; //random no between 1-100
    printf("Secret number is%d \n" , secret);

    printf("*******************Number Guessing Game************************* \n");
    printf("Guess a NUMBER \n");

    do {
        printf("Enter a random number from 1-100 ");
        scanf("%d" , &guess);
        attempt++;

        if (guess < secret) {
            printf("Too Low!\n");
        }
        else if (guess > secret) {
            printf("Too High!\n");
        }
        else {
            printf("Correct!\n");
        }

    }while(guess!=secret);

    printf("You guessed the correct number in %d attempts" , attempt);






    return 0;
}