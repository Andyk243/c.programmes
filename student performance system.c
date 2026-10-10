//Author:Andy Ondieki
//Registration number:BCS-05-0553/2026
//Description:student performance system

#include <stdio.h>

// Function to calculate total marks
double calculateTotal(double sub1, double sub2, double sub3) {
    return sub1 + sub2 + sub3;
}

// Function to calculate average mark
double calculateAverage(double totalMarks) {
    return totalMarks / 3.0;
}

// Function to display Pass or Fail result
void displayResult(double averageMark) {
    if (averageMark >= 50.0) {
        printf("Result: Passed\n");
    } else {
        printf("Result: Failed\n");
    }
}

// Main function to tie everything together
int main() {
    double subject1, subject2, subject3;
    double total, average;

    // Prompt user to enter marks for the three subjects
    printf("Enter marks for Subject 1: ");
    scanf("%lf", &subject1);
    
    printf("Enter marks for Subject 2: ");
    scanf("%lf", &subject2);
    
    printf("Enter marks for Subject 3: ");
    scanf("%lf", &subject3);

    // Call functions to compute results
    total = calculateTotal(subject1, subject2, subject3);
    average = calculateAverage(total);

    // Display the requested outputs
    printf("\n...Performance Summary...\n");
    printf("Total Marks: %.2f\n", total);
    printf("Average Mark: %.2f\n", average);
    displayResult(average);

    return 0;
}
