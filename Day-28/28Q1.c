#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int id;
    char title[100];
    char author[50];
    int year;
};

void addBook(struct Book books[], int *count) {
    printf("\nEnter Book ID: ");
    scanf("%d", &books[*count].id);
    printf("Enter Title: ");
    scanf(" %[^\n]", books[*count].title);
    printf("Enter Author: ");
    scanf(" %[^\n]", books[*count].author);
    printf("Enter Year: ");
    scanf("%d", &books[*count].year);
    (*count)++;
    printf("Book added successfully!\n");
}

void displayBooks(struct Book books[], int count) {
    if (count == 0) {
        printf("\nNo books found.\n");
        return;
    }
    printf("\n--- Library Books ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Title: %s | Author: %s | Year: %d\n",
               books[i].id, books[i].title, books[i].author, books[i].year);
    }
}

void searchBook(struct Book books[], int count) {
    int id;
    printf("\nEnter Book ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (books[i].id == id) {
            printf("Book Found: ID: %d | Title: %s | Author: %s | Year: %d\n",
                   books[i].id, books[i].title, books[i].author, books[i].year);
            return;
        }
    }
    printf("No book found with ID %d.\n", id);
}

void deleteBook(struct Book books[], int *count) {
    int id;
    printf("\nEnter Book ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < *count; i++) {
        if (books[i].id == id) {
            for (int j = i; j < *count - 1; j++) {
                books[j] = books[j + 1];
            }
            (*count)--;
            printf("Book deleted successfully!\n");
            return;
        }
    }
    printf("No book found with ID %d.\n", id);
}

int main() {
    struct Book books[100];
    int count = 0, choice;

    while (1) {
        printf("\n--- Library Management System ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBook(books, &count); break;
            case 2: displayBooks(books, count); break;
            case 3: searchBook(books, count); break;
            case 4: deleteBook(books, &count); break;
            case 5: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
