//Author:Andy Ondieki
//Registration number:BCS-05-0553/2026
//Description:volume and surface Area 

#include <stdio.h>

int main()
{
    float radius, height, volume, surfaceArea;
    const float pi = 3.14159;

    // Ask the user to enter radius
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    // Ask the user to enter height
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume
    volume = pi * radius * radius * height;

    // Calculate surface area
    surfaceArea = 2 * pi * radius * (radius + height);

    // Display results
    printf("Volume of the cylinder = %.2f\n", volume);
    printf("Surface area of the cylinder = %.2f\n", surfaceArea);

    return 0;
}
