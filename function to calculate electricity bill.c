//Author:Andy Ondieki
//Registration number:BCS-05-0553/2026
//Description:C function to calculate electricity bill

#include <stdio.h>

// Function to calculate electric bill
double calculateElectricBill(int units) {
    double totalBill = 0.0;

    if (units <= 100) {
        totalBill = units * 10;
    } else if (units <= 200) {
        totalBill = (100 * 10) + ((units - 100) * 15);
    } else {
        totalBill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return totalBill;
}

int main() {
    int units;
    double bill;

    // Prompt the user to input the units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units); 

    // Calculate the bill using the function
    bill = calculateElectricBill(units);
    
    // Display the result
    printf("Total bill amount: KSh. %.2f\n", bill);
    
    return 0;
}
