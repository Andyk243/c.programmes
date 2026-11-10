#include <stdio.h>
#include <math.h>

int main() {
    double length, width, diagonal;

    //Prompt the user to enter the length and width of the window
    printf("Enter the length of the window: ");
    scanf("%lf", &length);
    
    printf("Enter the width of the window: ");
    scanf("%lf", &width);

    //calculate the diagonal
    diagonal = sqrt(pow(length, 2) + pow(width, 2));

    //Display the length, width, and calculated diagonal to two decimal places
    printf("\nWindow Dimensions:\n");
    printf("Length: %.2f\n", length);
    printf("Width: %.2f\n", width);
    printf("Diagonal Length: %.2f\n", diagonal);

    return 0;
}
/*Purpose of the sqrt() function in the program:
 The purpose of the sqrt() function is to calculate the square root of 
 the sum of the squared length and width (Length^2 + Width^2). This finds 
 the final diagonal length of the window based on the Pythagorean theorem
 */
 