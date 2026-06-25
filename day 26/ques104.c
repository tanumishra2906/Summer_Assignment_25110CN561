// Write a program to Create quiz application. 

#include <stdio.h>

int main() {

    int answer;
    int score = 0;

    printf("===== QUIZ APPLICATION =====\n\n");

    // Question 1
    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    // Question 2
    printf("\n2. Which language is used for system programming?\n");
    printf("1. C\n2. HTML\n3. CSS\n4. SQL\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    // Question 3
    printf("\n3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
        score++;

    printf("\n===== RESULT =====\n");
    printf("Your Score: %d/3\n", score);

    if(score == 3)
        printf("Excellent!\n");
    else if(score == 2)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}