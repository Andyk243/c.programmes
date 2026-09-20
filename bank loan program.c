#include <stdio.h>

int main() {
    int age;
    float income;

    // Prompt user for input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income (Sh): ");
    scanf("%f", &income);

    // Check eligibility
    if (age >= 21 && income >= 21000) {
        printf("\nCongratulations you qualify for a loan.\n");
    } else {
        printf("\nUnfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}