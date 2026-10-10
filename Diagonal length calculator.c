//Author:Andy Ondieki
//Registration number:BCS-05-0553/2026
//Description:Diagonal length calculator

#include <stdio.h>
#include <math.h> // Required for pow() and sqrt()

int main() {
    double length, width, diagonal;

    // a) Prompt user to enter length and width
    printf("Enter the length of the window: ");
    scanf("%lf", &length);
    
    printf("Enter the width of the window: ");
    scanf("%lf", &width);

    // b) & c) Use pow() and sqrt() to calculate the diagonal length
    diagonal = sqrt(pow(length, 2) + pow(width, 2));

    // d) Display details to two decimal places
    printf("\n...Window Dimensions...\n");
    printf("Length: %.2f\n", length);
    printf("Width: %.2f\n", width);
    printf("Calculated Diagonal: %.2f\n", diagonal);

    return 0;
}
