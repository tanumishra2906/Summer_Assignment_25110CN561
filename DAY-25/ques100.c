//Write a program to Sort words by length. 

#include<stdio.h>
#include<string.h>

int main(){
    int n;
    char names[25][50],temp[50]; 
    
    printf("enter no. of Names \n");
    scanf("%d" , &n);
    getchar(); 

    //to input names in a 2d string
    for(int i=0;i<n;i++){
        fgets(names[i],sizeof(names[i]),stdin); 
        names[i][strcspn(names[i] ,"\n")]= '\0';
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((strlen(names[i])>strlen(names[j]))){ 
                
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
        }
    }

    printf("Sorted names are \n");

    for(int i=0;i<n;i++){
        printf("%s \n" , names[i]);
    }

    return 0;
}