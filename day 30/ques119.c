//Write a program to Create mini employee management system.

#include <stdio.h>

#define MAX_EMPLOYEES 50
#define MAX_STR 100

struct Employee {
    int id;
    char name[MAX_STR];
    char department[MAX_STR];
    float salary;
    int age;
};

struct Employee employees[MAX_EMPLOYEES];
int empCount = 0;

void getString(char str[], int size) {
    int i = 0;
    char ch;
    
    while (i < size - 1) {
        ch = getchar();
        if (ch == '\n') {
            break;
        }
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
}

int containsString(char str[], char sub[]) {
    int i, j, found;
    
    for (i = 0; str[i] != '\0'; i++) {
        found = 1;
        for (j = 0; sub[j] != '\0'; j++) {
            if (str[i + j] == '\0' || str[i + j] != sub[j]) {
                found = 0;
                break;
            }
        }
        if (found == 1) {
            return 1;
        }
    }
    return 0;
}

void addEmployee();
void displayEmployees();
void searchEmployee();
void updateSalary();
void deleteEmployee();
void displayHighSalary();

int main() {
    int choice;
    
    printf("\n========================================\n");
    printf("   EMPLOYEE MANAGEMENT SYSTEM\n");
    printf("========================================\n");
    
    do {
        printf("\n========= MENU =========\n");
        printf("1. Add Employee\n");
        printf("2. Show All Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Show High Salary Employees\n");
        printf("7. Exit\n");
        printf("========================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        
        switch(choice) {
            case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: searchEmployee(); break;
            case 4: updateSalary(); break;
            case 5: deleteEmployee(); break;
            case 6: displayHighSalary(); break;
            case 7: printf("\nThank you! Exiting...\n"); break;
            default: printf("\nInvalid choice!\n");
        }
    } while(choice != 7);
    
    return 0;
}

void addEmployee() {
    if (empCount >= MAX_EMPLOYEES) {
        printf("\nEmployee list is full!\n");
        return;
    }
    
    printf("\n--- ADD NEW EMPLOYEE ---\n");
    
    employees[empCount].id = empCount + 1;
    
    printf("Enter employee name: ");
    getString(employees[empCount].name, MAX_STR);
    
    printf("Enter department: ");
    getString(employees[empCount].department, MAX_STR);
    
    printf("Enter salary: ");
    scanf("%f", &employees[empCount].salary);
    
    printf("Enter age: ");
    scanf("%d", &employees[empCount].age);
    getchar();
    
    empCount++;
    printf("\nEmployee added successfully! ID: %d\n", empCount);
}

void displayEmployees() {
    int i;
    
    if (empCount == 0) {
        printf("\nNo employees in the system!\n");
        return;
    }
    
    printf("\n============= EMPLOYEE LIST =============\n");
    printf("ID\tName\t\tDepartment\tSalary\t\tAge\n");
    printf("--------------------------------------------------------\n");
    
    for (i = 0; i < empCount; i++) {
        printf("%d\t%-15s\t%-12s\t%.2f\t\t%d\n", 
               employees[i].id,
               employees[i].name,
               employees[i].department,
               employees[i].salary,
               employees[i].age);
    }
}

void searchEmployee() {
    char search[MAX_STR];
    int i, found = 0;
    
    printf("\n--- SEARCH EMPLOYEE ---\n");
    printf("Enter name to search: ");
    getString(search, MAX_STR);
    
    printf("\n============= SEARCH RESULTS =============\n");
    
    for (i = 0; i < empCount; i++) {
        if (containsString(employees[i].name, search) == 1) {
            printf("ID: %d\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("Department: %s\n", employees[i].department);
            printf("Salary: %.2f\n", employees[i].salary);
            printf("Age: %d\n", employees[i].age);
            printf("----------------------------------------\n");
            found = 1;
        }
    }
    
    if (found == 0) {
        printf("No employee found with name '%s'\n", search);
    }
}

void updateSalary() {
    int id, i, found = 0;
    float newSalary;
    
    printf("\n--- UPDATE SALARY ---\n");
    printf("Enter Employee ID: ");
    scanf("%d", &id);
    
    for (i = 0; i < empCount; i++) {
        if (employees[i].id == id) {
            printf("Current salary: %.2f\n", employees[i].salary);
            printf("Enter new salary: ");
            scanf("%f", &newSalary);
            
            employees[i].salary = newSalary;
            printf("\nSalary updated successfully!\n");
            found = 1;
            break;
        }
    }
    
    if (found == 0) {
        printf("\nEmployee ID %d not found!\n", id);
    }
}

void deleteEmployee() {
    int id, i, found = 0;
    
    printf("\n--- DELETE EMPLOYEE ---\n");
    printf("Enter Employee ID to delete: ");
    scanf("%d", &id);
    
    for (i = 0; i < empCount; i++) {
        if (employees[i].id == id) {
            found = 1;
            break;
        }
    }
    
    if (found == 0) {
        printf("\nEmployee ID %d not found!\n", id);
        return;
    }
    
    printf("\nEmployee found:\n");
    printf("Name: %s\n", employees[i].name);
    printf("Department: %s\n", employees[i].department);
    printf("Confirm delete? (1 for Yes, 0 for No): ");
    int confirm;
    scanf("%d", &confirm);
    
    if (confirm == 1) {
        for (int j = i; j < empCount - 1; j++) {
            employees[j] = employees[j + 1];
            employees[j].id = j + 1;
        }
        empCount--;
        printf("\nEmployee deleted successfully!\n");
    } else {
        printf("\nDeletion cancelled!\n");
    }
}

void displayHighSalary() {
    float limit;
    int i, found = 0;
    
    printf("\n--- HIGH SALARY EMPLOYEES ---\n");
    printf("Enter minimum salary: ");
    scanf("%f", &limit);
    
    printf("\n============= RESULTS =============\n");
    printf("ID\tName\t\tDepartment\tSalary\t\tAge\n");
    printf("--------------------------------------------------------\n");
    
    for (i = 0; i < empCount; i++) {
        if (employees[i].salary >= limit) {
            printf("%d\t%-15s\t%-12s\t%.2f\t\t%d\n", 
                   employees[i].id,
                   employees[i].name,
                   employees[i].department,
                   employees[i].salary,
                   employees[i].age);
            found = 1;
        }
    }
    
    if (found == 0) {
        printf("No employees found with salary >= %.2f\n", limit);
    }
}