//Write a program to Find longest word.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start = 0,maxstart=0,count=0 ,maxlen=0;      // start index of current word
    
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (int i=0; ; i++) {

        if(str[i]!= ' ' && str[i]!= '\0') {
            count++; //count of each word
        }
        //now count len of words and set maxlen and maxstart i.e start index of longest word
        else {
               if(count > maxlen) {
                maxlen = count;
                maxstart = start;
            }

            count = 0;
            start = i + 1;   //start position of each word
        }

        if (str[i] == '\0')
            break;
    }

    printf("Longest word: ");

    for (int i = maxstart; i < maxstart + maxlen; i++) {
        printf("%c", str[i]);
    }

    printf("\nLength = %d\n", maxlen);

    return 0;
}