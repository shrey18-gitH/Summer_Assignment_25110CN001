#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    float marks[5];   // marks for 5 subjects
    float total;
    float percentage;
    char grade;
};

void calculateResult(struct Student *s) {
    s->total = 0;
    for (int i = 0; i < 5; i++) {
        s->total += s->marks[i];
    }
    s->percentage = s->total / 5.0;

    if (s->percentage >= 90) s->grade = 'A';
    else if (s->percentage >= 75) s->grade = 'B';
    else if (s->percentage >= 60) s->grade = 'C';
    else if (s->percentage >= 40) s->grade = 'D';
    else s->grade = 'F';
}

void displayMarksheet(struct Student s) {
    printf("\n--- Marksheet ---\n");
    printf("Roll No: %d\n", s.rollNo);
    printf("Name   : %s\n", s.name);
    printf("Marks  : ");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", s.marks[i]);
    }
    printf("\nTotal Marks : %.2f\n", s.total);
    printf("Percentage  : %.2f%%\n", s.percentage);
    printf("Grade       : %c\n", s.grade);
}

int main() {
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &s.marks[i]);
    }

    calculateResult(&s);
    displayMarksheet(s);

    return 0;
}
