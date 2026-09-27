//Author:Andy Ondieki
//Registration number:BCS-05-0553/2026
//Description:program to compute water bill in KES

#include <stdio.h>

int main() {
    int unitsconsumed, totalwaterbill;
    int fixedcharge = 50; 
    
    //Prompt the user for input
    printf("Enter water units consumed: ");
    scanf("%d", &unitsconsumed);

    //Use if-else if-else statements to calculate the bill
    if (unitsconsumed <= 30) {
        totalwaterbill = unitsconsumed * 20;
    } 
    else if (unitsconsumed <= 60) {
        totalwaterbill = (30 * 20) + ((unitsconsumed - 30) * 25);
    } 
    else {
        totalwaterbill = (30 * 20) + (30 * 25) + ((unitsconsumed - 60) * 30);
    }

    totalwaterbill += fixedcharge;

    //Display the total bill with .00 to match the output requirements
    printf("Total water bill: %d.00 KES\n", totalwaterbill);

    return 0;
}
