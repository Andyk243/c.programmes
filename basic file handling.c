//Author:Andy Ondieki
//Registration number:BCS-05-0553/2026
//Description:basic file handling program

#include <stdio.h>
#include <stdlib.h>

// Function declarations
void writeToFile();
void readFromFile();
void appendToFile();

int main() {
    //Call the functions in sequence
    writeToFile();
    readFromFile();
    appendToFile();
    readFromFile();

    return 0;
}

//Write a sentence to sample.txt in write mode ("w")
void writeToFile() {
    FILE *file = fopen("sample.txt", "w");
    char sentence[200];

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter a sentence to write: ");
    fgets(sentence, sizeof(sentence), stdin);

    fprintf(file, "%s", sentence);
    fclose(file);
}

//Read and display sample.txt one character at a time in read mode ("r")
void readFromFile() {
    FILE *file = fopen("sample.txt", "r");
    char ch;

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\nFile contents:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    printf("\n");

    fclose(file);
}

//Append a new sentence to sample.txt in append mode ("a")
void appendToFile() {
    FILE *file = fopen("sample.txt", "a");
    char sentence[200];

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter an additional sentence to append: ");
    fgets(sentence, sizeof(sentence), stdin);

    fprintf(file, "%s", sentence);
    fclose(file);
}
