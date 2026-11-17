//Author:Andy Ondieki
//Registration number:BCS-05-0553/2026
//Description:Library book tracking system


#include <stdio.h>

int main() {
    FILE *file;
    char title[100];

    // Open file in append mode ("a") so existing records are kept
    file = fopen("borrowed_books.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the book title: ");
    fgets(title, sizeof(title), stdin);

    // Write the title to the file
    fprintf(file, "%s", title);

    // Close the file
    fclose(file);

    printf("Book title successfully stored!\n");

    return 0;
}
