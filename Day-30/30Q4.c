#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LEN 50

struct Student {
    int rollNo;
    char name[NAME_LEN];
    float marks;
};

// Function prototypes
void addStudent(struct Student students[], int *count);
void displayStudents(struct Student students[], int count);
void searchStudent(struct Student students[], int count);
void updateStudent(struct Student students[], int count);
void deleteStudent(struct Student students[], int *count);

int main() {
    struct Student students[MAX_STUDENTS];
    int choice, count = 0;

    do {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll No\n");
        printf("4. Update Student Record\n");
        printf("5. Delete Student Record\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(students, &count); break;
            case 2: displayStudents(students, count); break;
            case 3: searchStudent(students, count); break;
            case 4: updateStudent(students, count); break;
            case 5: deleteStudent(students, &count); break;
            case 6: printf("Exiting system...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 6);

    return 0;
}

// Function to add student
void addStudent(struct Student students[], int *count) {
    if (*count < MAX_STUDENTS) {
        printf("Enter Roll No: ");
        scanf("%d", &students[*count].rollNo);
        getchar();

        printf("Enter Name: ");
        fgets(students[*count].name, NAME_LEN, stdin);
        students[*count].name[strcspn(students[*count].name, "\n")] = '\0';

        printf("Enter Marks: ");
        scanf("%f", &students[*count].marks);

        (*count)++;
        printf("Student added successfully!\n");
    } else {
        printf("Student list is full!\n");
    }
}

// Function to display all students
void displayStudents(struct Student students[], int count) {
    printf("\n--- Student List ---\n");
    for (int i = 0; i < count; i++) {
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name   : %s\n", students[i].name);
        printf("Marks  : %.2f\n", students[i].marks);
        printf("-----------------------\n");
    }
}

// Function to search student by roll number
void searchStudent(struct Student students[], int count) {
    int roll;
    printf("Enter Roll No to search: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == roll) {
            printf("Student Found!\n");
            printf("Name: %s, Marks: %.2f\n", students[i].name, students[i].marks);
            return;
        }
    }
    printf("Student not found!\n");
}

// Function to update student record
void updateStudent(struct Student students[], int count) {
    int roll;
    printf("Enter Roll No to update: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == roll) {
            printf("Enter new Name: ");
            getchar();
            fgets(students[i].name, NAME_LEN, stdin);
            students[i].name[strcspn(students[i].name, "\n")] = '\0';

            printf("Enter new Marks: ");
            scanf("%f", &students[i].marks);

            printf("Record updated successfully!\n");
            return;
        }
    }
    printf("Student not found!\n");
}

// Function to delete student record
void deleteStudent(struct Student students[], int *count) {
    int roll;
    printf("Enter Roll No to delete: ");
    scanf("%d", &roll);

    for (int i = 0; i < *count; i++) {
        if (students[i].rollNo == roll) {
            for (int j = i; j < *count - 1; j++) {
                students[j] = students[j + 1];
            }
            (*count)--;
            printf("Record deleted successfully!\n");
            return;
        }
    }
    printf("Student not found!\n");
}
