//Author:Andy Ondieki
//Registration number:BCS-05-0553/2026
//Description:Hospital management system

#include <stdio.h>

// Define the Patient structure
struct Patient {
    int patientID;
    char name[100];
    int age;
    float temperature;
    int daysAdmitted;
};

int main() {
    // Declare a structure variable and a variable for total cost
    struct Patient p;
    float totalCost;

    // Input patient details
    printf("Enter Patient ID: ");
    scanf("%d", &p.patientID);
    while (getchar() != '\n'); // Clear leftover characters from the input buffer

    printf("Enter Patient Name: ");
    fgets(p.name, sizeof(p.name), stdin);

    printf("Enter Age: ");
    scanf("%d", &p.age);

    printf("Enter Temperature: ");
    scanf("%f", &p.temperature);

    printf("Enter Number of Days Admitted: ");
    scanf("%d", &p.daysAdmitted);

    // Calculate the estimated hospital accommodation cost at KSh 2,500 per day
    totalCost = p.daysAdmitted * 2500.0;

    // Display all patient details and the calculated cost
    printf("\n--- Patient Registration Details ---\n");
    printf("Patient ID: %d\n", p.patientID);
    printf("Patient Name: %s", p.name);
    printf("Age: %d years\n", p.age);
    printf("Temperature: %.1f C\n", p.temperature);
    printf("Days Admitted: %d\n", p.daysAdmitted);
    printf("Estimated Accommodation Cost: KSh %.2f\n", totalCost);

    return 0;
}
