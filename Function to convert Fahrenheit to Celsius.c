//Author:Andy Ondieki
//Registration number:BCS-05-0553/2026
//Description:Function to convert Fahrenheit to Celsius

#include <stdio.h>

// Function to convert Fahrenheit to Celsius
double convertToCelsius(double fahrenheit) {
    // 5.0 / 9.0 is used instead of 5 / 9 to ensure floating-point division
    return (fahrenheit - 32.0) * (5.0 / 9.0);
}

int main() {
    double fahrenheitTemp;
    double celsiusTemp;

    // Prompt the user to input the temperature
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheitTemp); 

    // Convert temperature using the function
    celsiusTemp = convertToCelsius(fahrenheitTemp);
    
    // Display the result
    printf("Temperature in Celsius: %.2f°C\n", celsiusTemp);
    
    return 0;
}
