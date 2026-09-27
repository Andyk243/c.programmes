//Author:Andy Ondieki
//Registration number:BCS-05-0553/2026
//Description:program to handle mobile data bundle selection and display user output

#include <stdio.h>

int main() {
    int choice;

    // Display the data bundle menu
    printf("Select data bundle:\n");
    printf("1. 100MB @ 50 KES\n");
    printf("2. 500MB @ 200 KES\n");
    printf("3. 1GB @ 350 KES\n");
    printf("4. 2GB @ 600 KES\n");

    // Ask the user to enter their choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    //Use a switch statement to display the bundle selected and its cost
    switch (choice) {
        case 1:
            printf("You selected 100MB. Cost = 50 KES\n");
            break;
        case 2:
            printf("You selected 500MB. Cost = 200 KES\n");
            break;
        case 3:
            printf("You selected 1GB. Cost = 350 KES\n");
            break;
        case 4:
            printf("You selected 2GB. Cost = 600 KES\n");
            break;
        default:
            //Handle numbers outside 1-4
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
