//Write a program to Sort names alphabetically.

#include<stdio.h>
#include<string.h>

int main(){
    int n;
    char names[25][50],temp[50]; //using 2d string with max 25 strings and each string with 50 max characters
    
    printf("enter no. of Names \n");
    scanf("%d" , &n);
    getchar(); //removes newline(adds up when we press enter ) after scanning n words 

    //to input names in a 2d string
    for(int i=0;i<n;i++){
        fgets(names[i],sizeof(names[i]),stdin); //use names[i] i.e storing char in each string one by one
        names[i][strcspn(names[i] ,"\n")]= '\0';
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((strcmp(names[i],names[j])>0)) { //this func returns +ve val if ascii val of word 1 is greater than next word i.e we swap for this condition
                
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
        }
    }

    printf("Alphabetically sorted names are \n");

    for(int i=0;i<n;i++){
        printf("%s \n" , names[i]);
    }

    return 0;
}











        
