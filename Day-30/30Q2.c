#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define TITLE_LEN 50
#define AUTHOR_LEN 50

struct Book {
    int id;
    char title[TITLE_LEN];
    char author[AUTHOR_LEN];
};

int main() {
    struct Book library[MAX_BOOKS];
    int choice, count = 0, i;
    char search[TITLE_LEN];

    do {
        printf("\n--- Mini Library System ---\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by Title\n");
        printf("4. Search Book by Author\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // consume newline

        switch (choice) {
            case 1:
                if (count < MAX_BOOKS) {
                    library[count].id = count + 1;
                    printf("Enter Book Title: ");
                    fgets(library[count].title, TITLE_LEN, stdin);
                    library[count].title[strcspn(library[count].title, "\n")] = '\0';

                    printf("Enter Author Name: ");
                    fgets(library[count].author, AUTHOR_LEN, stdin);
                    library[count].author[strcspn(library[count].author, "\n")] = '\0';

                    count++;
                    printf("Book added successfully!\n");
                } else {
                    printf("Library is full!\n");
                }
                break;

            case 2:
                printf("\n--- Book List ---\n");
                for (i = 0; i < count; i++) {
                    printf("ID: %d\n", library[i].id);
                    printf("Title: %s\n", library[i].title);
                    printf("Author: %s\n", library[i].author);
                    printf("-------------------\n");
                }
                break;

            case 3:
                printf("Enter title to search: ");
                fgets(search, TITLE_LEN, stdin);
                search[strcspn(search, "\n")] = '\0';

                for (i = 0; i < count; i++) {
                    if (strcasecmp(library[i].title, search) == 0) {
                        printf("Book Found! ID: %d, Author: %s\n", library[i].id, library[i].author);
                        break;
                    }
                }
                if (i == count) printf("Book not found!\n");
                break;

            case 4:
                printf("Enter author to search: ");
                fgets(search, AUTHOR_LEN, stdin);
                search[strcspn(search, "\n")] = '\0';

                for (i = 0; i < count; i++) {
                    if (strcasecmp(library[i].author, search) == 0) {
                        printf("Book Found! ID: %d, Title: %s\n", library[i].id, library[i].title);
                    }
                }
                break;

            case 5:
                printf("Exiting system...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
