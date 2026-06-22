//Write a program to Find first non-repeating character.
#include<stdio.h>
int main(){
    char str[100] ;
    int i,j, found=0;
    printf("enter string : ");
    fgets(str,sizeof(str),stdin);

    for(i=0;str[i]!='\0' ;i++){
        int count =0;
        for( j=0;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
            }

        }
        if(count==1){
            printf("first non repeating character is %c" ,str[i]);
            found=1;
            break;
        }
    }
    if (found==0){
        printf("no non repeating character found");
    }
    
    
    
    return 0;
}