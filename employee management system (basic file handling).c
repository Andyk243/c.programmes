//Author:Andy Ondieki
//Registration number:BCS-05-0553/2026
//Description:employee management system(basic file handling)

#include <stdio.h>

#define SIZE 100

// Function declarations
void writeEmployee();
void readEmployee();
void appendEmployee();

int main() {
    writeEmployee();
    readEmployee();
    appendEmployee();
    readEmployee();

    return 0;
}

//Save the first employee's details in write mode ("w")
void writeEmployee() {
    FILE *file = fopen("employees.txt", "w");
    char id[SIZE], fullName[SIZE], department[SIZE];

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter Employee ID: ");
    fgets(id, sizeof(id), stdin);

    printf("Enter Full Name: ");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Enter Department: ");
    fgets(department, sizeof(department), stdin);

    fputs("Employee ID: ", file);
    fputs(id, file);

    fputs("Full Name: ", file);
    fputs(fullName, file);

    fputs("Department: ", file);
    fputs(department, file);

    fputs("------------------------\n", file);

    fclose(file);
}

//Display all employee records one character at a time in read mode ("r")
void readEmployee() {
    FILE *file = fopen("employees.txt", "r");
    int ch;

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\n--- Employee Records ---\n");
    while ((ch = getc(file)) != EOF) {
        putchar(ch);
    }
    printf("\n");

    fclose(file);
}

// Add another employee's details in append mode ("a")
void appendEmployee() {
    FILE *file = fopen("employees.txt", "a");
    char id[SIZE], fullName[SIZE], department[SIZE];

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter Another Employee ID: ");
    fgets(id, sizeof(id), stdin);

    printf("Enter Full Name: ");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Enter Department: ");
    fgets(department, sizeof(department), stdin);

    fputs("Employee ID: ", file);
    fputs(id, file);

    fputs("Full Name: ", file);
    fputs(fullName, file);

    fputs("Department: ", file);
    fputs(department, file);

    fputs("------------------------\n", file);

    fclose(file);
}
