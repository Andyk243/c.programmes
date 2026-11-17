//Author:Andy Ondieki
//Registration number:BCS-05-0553/2026
//Description:university exam program


#include <stdio.h>

struct Student {
    char name[50];
    char reg_number[20];
    float total_marks;
};

int main() {
    FILE *file;
    struct Student s;

    // Create sample data only if results.dat does not already exist
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        file = fopen("results.dat", "wb");
        if (file != NULL) {
            struct Student sample[2] = {
                {"Alice Kamau", "REG001", 85.5},
                {"Brian Otieno", "REG002", 78.0}
            };
            fwrite(sample, sizeof(struct Student), 2, file);
            fclose(file);
        }
    } else {
        fclose(file);
    }

    // Open binary file in read mode ("rb")
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Error opening results.dat!\n");
        return 1;
    }

    printf("Student Examination Results:\n");
   

    // Read all records and display name and total marks
    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        printf("Name: %s | Marks: %.2f\n", s.name, s.total_marks);
    }

    fclose(file);

    return 0;
}
