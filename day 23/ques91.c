//Write a program to Check anagram strings.
//eg silent and listen i.e same length and same characters

#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100] ;
    int i,j ,count[256]={0}; //rather than taking diff count var for each letter consider an array of count which can contain max 256 boxes cuz utne hi characters

    printf("enter string 1 : ");
    fgets(str1,sizeof(str1),stdin);

    printf("enter string 1 : ");
    fgets(str2,sizeof(str2),stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0'; //this because fgets also stores newline


    if(strlen(str1)!=strlen(str2)){
        printf("strings are not anagram");
        return 0;
    }

    for(i=0;str1[i]!='\0' ;i++){
        count[str1[i]]++;  //look there are boxes for each letter..supposse letter s ka count from s1 is +1 then iss letter ka count from s2 is -1 net count 0 for that letter
        count[str2[i]]--;  //agr letter wont appear then unka count either +ve or -ve reh jayega not 0

    }
    
    for(int i=0;i<256;i++){
        if (count[i]!=0){
            printf("strings are not anagram");
        }
    }

    printf("Strings are anagram");
    
    
    
    return 0;
}