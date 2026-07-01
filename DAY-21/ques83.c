////Write a program to Count vowels and consonants.


#include <stdio.h>
#include<string.h>

int count(char str[]){
    int vowel = 0;
    int cons=0;
    for(int i=0;str[i]!='\0';i++){
        if((str[i]>='A'&& str[i]<='Z')||(str[i]>='a'&& str[i]<='z')){
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            vowel++;
        }
        else{
            cons++;
        } 

        }
        
    }
    printf("vowels are %d \n" , vowel);
    printf("consonants are %d \n" , cons);
    
}

int main(){
    char a[100] ;
    printf("enter string");
    fgets(a,sizeof(a),stdin);
    count(a);

    
    return 0;
}