//Author:Andy Ondieki
//Registration number:BCS-05-0553/2026
//Description:basic file handling program for student information

#include <stdio.h>

// Function declarations
void saveStudent();
void displayStudents();
void addStudent();

int main() {
    // d) Call functions in the required order
    saveStudent();
    displayStudents();
    addStudent();
    displayStudents();

    return 0;
}

// a) Save first student's details in write mode ("w")
void saveStudent() {
    FILE *file = fopen("students.txt", "w");
    char admNo[50], fullName[100], course[100];

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter Admission Number: ");
    fgets(admNo, sizeof(admNo), stdin);

    printf("Enter Full Name: ");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Enter Course: ");
    fgets(course, sizeof(course), stdin);

    fputs("Admission Number: ", file);
    fputs(admNo, file);

    fputs("Full Name: ", file);
    fputs(fullName, file);

    fputs("Course: ", file);
    fputs(course, file);

    fputs("===================\n", file);

    fclose(file);
}

// b) Display all student records character by character in read mode ("r")
void displayStudents() {
    FILE *file = fopen("students.txt", "r");
    int ch;

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\n=== Student Records ===\n");
    while ((ch = getc(file)) != EOF) {
        putchar(ch);
    }
    printf("\n");

    fclose(file);
}

// c) Add another student's details in append mode ("a")
void addStudent() {
    FILE *file = fopen("students.txt", "a");
    char admNo[50], fullName[100], course[100];

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter Another Admission Number: ");
    fgets(admNo, sizeof(admNo), stdin);

    printf("Enter Full Name: ");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Enter Course: ");
    fgets(course, sizeof(course), stdin);

    fputs("Admission Number: ", file);
    fputs(admNo, file);

    fputs("Full Name: ", file);
    fputs(fullName, file);

    fputs("Course: ", file);
    fputs(course, file);

    fputs("====================\n", file);

    fclose(file);
}
