//Author:Andy Ondieki
//Registration number:BCS-05-0553/2026
//Description:retail shop program

#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0.0;

    // Create sample data only if sales.txt does not already exist
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        file = fopen("sales.txt", "w");
        if (file != NULL) {
            fprintf(file, "150.50\n200.00\n75.25\n");
            fclose(file);
        }
    } else {
        fclose(file);
    }

    // Open file in read mode ("r")
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error opening sales.txt!\n");
        return 1;
    }

    // Read all transactions and calculate total sales
    while (fscanf(file, "%f", &amount) == 1) {
        total = total + amount;
    }

    // Display total sales
    printf("Total sales for the day: %.2f\n", total);

    // Properly close the file
    fclose(file);

    return 0;
}
