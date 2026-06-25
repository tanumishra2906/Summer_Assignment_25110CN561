//Write a program to Create student record management system.

#include<stdio.h>

struct Students{
    int roll,marks;
    char name[50];

} ;

int main(){
    int i,n=0,choice,roll,marks,found;
    struct Students s[100];
    printf("***************************Student Record Management System********************************\n \n");
    
    do{
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n \n");

        printf("Enter choice: \n");
        scanf("%d" ,&choice);

        switch (choice)
        {
        case 1:
                printf("Enter roll no of student %d \n" , n+1);
                scanf("%d" , &s[n].roll);

                printf("Enter name of student %d \n" , n+1);
                scanf("%s" , s[n].name);

                printf("Enter marks of student %d \n" , n+1);
                scanf("%d" , &s[n].marks);
                n++;
            
            
            break;
        case 2:
            printf("\nFollowing are the Student's records\n");
            if(n==0){
                printf("No Record found\n");
            }
            else{
                for(i=0;i<n;i++){
                    printf("Roll no of student %d is %d\n" , i+1,s[i].roll);
                    printf("Name of student %d is %s \n" , i+1, s[i].name);
                    printf("Marks of student %d is %d \n" , i+1,s[i].marks);
                }
            }
            break;
        case 3:
            
            printf("Enter roll no of Student to be searched :\n");
            scanf("%d" , &roll);
            found=0;
            for(i=0;i<n;i++){
                if(s[i].roll==roll){
                    printf("\nStudent Found!\n");
                    printf("Roll No : %d\n", s[i].roll);
                    printf("Name    : %s\n", s[i].name);
                    printf("Marks   : %d\n", s[i].marks);
                    found =1;
                    break;

                }

            }
            if(found==0){
                printf("No records found\n");
            }
            break;
            
        

        case 4:
            
            printf("Enter roll no of Student to be updated :\n");
            scanf("%d" , &roll);
            found=0;
            for(i=0;i<n;i++){
                if(s[i].roll==roll){
                    printf("\nStudent Found!\n");

                    printf("Enter new name \n");
                    scanf("%s" , s[i].name);
                    printf("Enter new marks \n");
                    scanf("%d" , &s[i].marks);
                    printf("Records updated succesfully");
                    found =1;
                    break;

                }

            }
            if(found==0){
                printf("No records found\n");
            }
            break;
            
        
        case 5:
            
            printf("Enter roll no of Student to be deleted :\n");
            scanf("%d" , &roll);
            found=0;
            for(i=0;i<n;i++){
                if(s[i].roll==roll){
                    int j; //so here we will store index of record to be del in j so that we shift rest records 1 place back
                    for(j=i;j<(n-1);j++){
                        s[j]=s[j+1];
                    }
                    n--; //inc dec n whenever a change is about to happen in the array
                    
                    printf("Records deleted succesfully");
                    found =1;
                    break;

                }

            }
            if(found==0){
                printf("No records found\n");
            }
            break;
            
        
        case 6 :
            printf("exiting program \n");
            break;
        default:
            break;

    }
}while(choice!=6);
    return  0;
}



