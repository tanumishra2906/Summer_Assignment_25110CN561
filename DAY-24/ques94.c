//Write a program to Compress a string.

//if theres same consecutive character then compress and print it along with its count
//eg aabbbcddaaa= a2b3c1d2a3

#include<stdio.h>
#include<string.h>
int main(){
    char str[100] ;
    printf("enter string : ");
    fgets(str,sizeof(str),stdin);

    str[strcspn(str, "\n")] = '\0';
     

    printf("Compressed string is \n");
    for(int i=0;str[i]!='\0' ;i++){
        int count =1;
        while(str[i]==str[i+1]){
            count++;
            i++;
        }

        printf("%c%d" , str[i],count);
    
    }
    
    
    return 0;
}