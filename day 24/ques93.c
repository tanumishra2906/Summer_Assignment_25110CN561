//Write a program to Check string rotation. 
// Logic: Lengths must be same and s2 should be a substring of (s1+s1).
//we add s1 from itself cuz then every possible rotation is a part i.e substring of this s1+s1

#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100];
    printf("enter string 1 : ");
    fgets(str1,sizeof(str1),stdin);

    printf("enter string 2 :");
    fgets(str2,sizeof(str2),stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if(strlen(str1)!=strlen(str2)){
        printf("no rotation");
    }
    
    char temp[200];
    strcpy(temp,str1);
    strcat(temp,str1);

    if(strstr(temp,str2)){ //this is to check whether str2 is a substring of temp
        printf("Rotation");
    }

    else{
        printf("no rotaion");
    }

    return 0;
}