#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

struct Student {
    int rollNo;
    char name[NAME_LENGTH];
    float marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student records
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        getchar(); // consume newline left by scanf

        printf("Name: ");
        fgets(students[i].name, NAME_LENGTH, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // remove newline

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student records
    printf("\n--- Student Records ---\n");
    for (i = 0; i < n; i++) {
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name   : %s\n", students[i].name);
        printf("Marks  : %.2f\n", students[i].marks);
        printf("-----------------------\n");
    }

    return 0;
}
