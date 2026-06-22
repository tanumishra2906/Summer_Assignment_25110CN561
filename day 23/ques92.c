//Write a program to Find maximum occurring character


#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    int i,j ,count[256]={0}; //rather than taking diff count var for each letter consider an array of count which can contain max 256 boxes cuz utne hi characters

    printf("enter string 1 : ");
    fgets(str1,sizeof(str1),stdin);

    str1[strcspn(str1, "\n")] = '\0';

    for(i=0;str1[i]!='\0' ;i++){
        count[str1[i]]++;  //keeps a count of each letter of str 1 as an element
    }
    

    int max=0;
    char maxchar;

    for(int i=0;i<256;i++){
        if(count[i]>max){
            max=count[i];
            maxchar=i;
            
        }
    }

    printf("Maximum occurring character = '%c'\n", maxchar);
    printf("Frequency = %d\n", max);   
    
    return 0;
}