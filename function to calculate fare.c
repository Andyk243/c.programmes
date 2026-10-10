//Author:Andy Ondieki
//Registration number:BCS-05-0553/2026
//Description:function to calculate fare


#include <stdio.h>

// Function to calculate fare based on KSh. 50 per kilometer
double calculateFare(double distance) {
    double ratePerKm = 50.0;
    return distance * ratePerKm;
}

int main() {
    double distanceTravelled;
    double totalFare;

    // Prompt the user to input the distance
    printf("Enter the distance traveled (in kilometers): ");
    scanf("%lf", &distanceTravelled); 

    // Calculate fare using the function
    totalFare = calculateFare(distanceTravelled);
    
    // Display the result
    printf("Total fare amount: KSh. %.2f\n", totalFare);
    
    return 0;
}
