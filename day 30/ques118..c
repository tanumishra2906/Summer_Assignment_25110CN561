//Write a program to Create mini library system.

#include <stdio.h>

#define MAX_BOOKS 50
#define MAX_MEMBERS 30
#define MAX_STR 100

struct Book {
    char title[MAX_STR];
    char author[MAX_STR];
    int available;
};

struct Member {
    char name[MAX_STR];
    int id;
};

struct Book library[MAX_BOOKS];
struct Member members[MAX_MEMBERS];
int bookCount = 0;
int memberCount = 0;

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

int compareStrings(char str1[], char str2[]) {
    int i = 0;
    
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;
        }
        i++;
    }
    
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1;
    }
    return 0;
}

void copyString(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
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

void addBook();
void displayBooks();
void addMember();
void displayMembers();
void borrowBook();
void returnBook();
void searchBook();

int main() {
    int choice;
    
    printf("\n====================================\n");
    printf("   SIMPLE COLLEGE LIBRARY SYSTEM\n");
    printf("====================================\n");
    
    do {
        printf("\n======= MENU =======\n");
        printf("1. Add Book\n");
        printf("2. Show All Books\n");
        printf("3. Add Member\n");
        printf("4. Show All Members\n");
        printf("5. Borrow Book\n");
        printf("6. Return Book\n");
        printf("7. Search Book\n");
        printf("8. Exit\n");
        printf("===================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        
        switch(choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: addMember(); break;
            case 4: displayMembers(); break;
            case 5: borrowBook(); break;
            case 6: returnBook(); break;
            case 7: searchBook(); break;
            case 8: printf("\nThanks for using Library System!\n"); break;
            default: printf("\nInvalid choice! Try again.\n");
        }
    } while(choice != 8);
    
    return 0;
}

void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("\nLibrary is full!\n");
        return;
    }
    
    printf("\n--- ADD NEW BOOK ---\n");
    
    printf("Enter book title: ");
    getString(library[bookCount].title, MAX_STR);
    
    printf("Enter author name: ");
    getString(library[bookCount].author, MAX_STR);
    
    library[bookCount].available = 1;
    
    bookCount++;
    printf("\nBook added successfully! Book ID: %d\n", bookCount-1);
}

void displayBooks() {
    int i;
    
    if (bookCount == 0) {
        printf("\nNo books in library!\n");
        return;
    }
    
    printf("\n============= BOOK LIST =============\n");
    printf("ID\tTitle\t\t\tAuthor\t\tStatus\n");
    printf("----------------------------------------\n");
    
    for (i = 0; i < bookCount; i++) {
        printf("%d\t%-20s\t%-15s\t", i, library[i].title, library[i].author);
        if (library[i].available == 1) {
            printf("Available\n");
        } else {
            printf("Borrowed\n");
        }
    }
}

void addMember() {
    if (memberCount >= MAX_MEMBERS) {
        printf("\nMember list is full!\n");
        return;
    }
    
    printf("\n--- ADD NEW MEMBER ---\n");
    
    printf("Enter member name: ");
    getString(members[memberCount].name, MAX_STR);
    
    members[memberCount].id = memberCount;
    memberCount++;
    
    printf("\nMember added successfully! Member ID: %d\n", memberCount-1);
}

void displayMembers() {
    int i;
    
    if (memberCount == 0) {
        printf("\nNo members registered!\n");
        return;
    }
    
    printf("\n============= MEMBER LIST =============\n");
    printf("ID\tName\n");
    printf("----------------------------------------\n");
    
    for (i = 0; i < memberCount; i++) {
        printf("%d\t%s\n", members[i].id, members[i].name);
    }
}

void borrowBook() {
    int bookId, memberId;
    
    printf("\n--- BORROW BOOK ---\n");
    printf("Enter Book ID: ");
    scanf("%d", &bookId);
    printf("Enter Member ID: ");
    scanf("%d", &memberId);
    
    if (bookId < 0 || bookId >= bookCount) {
        printf("\nInvalid Book ID!\n");
        return;
    }
    
    if (memberId < 0 || memberId >= memberCount) {
        printf("\nInvalid Member ID!\n");
        return;
    }
    
    if (library[bookId].available == 0) {
        printf("\nSorry! Book is already borrowed.\n");
        return;
    }
    
    library[bookId].available = 0;
    printf("\nBook '%s' borrowed by %s successfully!\n", 
           library[bookId].title, members[memberId].name);
}

void returnBook() {
    int bookId;
    
    printf("\n--- RETURN BOOK ---\n");
    printf("Enter Book ID: ");
    scanf("%d", &bookId);
    
    if (bookId < 0 || bookId >= bookCount) {
        printf("\nInvalid Book ID!\n");
        return;
    }
    
    if (library[bookId].available == 1) {
        printf("\nThis book is already in library!\n");
        return;
    }
    
    library[bookId].available = 1;
    printf("\nBook '%s' returned successfully!\n", library[bookId].title);
}

void searchBook() {
    char search[MAX_STR];
    int i, found = 0;
    
    printf("\n--- SEARCH BOOK ---\n");
    printf("Enter book title to search: ");
    getchar();
    getString(search, MAX_STR);
    
    printf("\n============= SEARCH RESULTS =============\n");
    
    for (i = 0; i < bookCount; i++) {
        if (containsString(library[i].title, search) == 1) {
            printf("ID: %d | Title: %s | Author: %s | Status: ", 
                   i, library[i].title, library[i].author);
            if (library[i].available == 1) {
                printf("Available\n");
            } else {
                printf("Borrowed\n");
            }
            found = 1;
        }
    }
    
    if (found == 0) {
        printf("No book found with title '%s'\n", search);
    }
}