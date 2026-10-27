#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Loop counter variables declared at the top for older compiler compatibility
    int i, floor, room, branch;
    
    // Task 1 variables
    double revenue[7];
    double total_revenue = 0.0;
    double average_revenue = 0.0;

    // Task 2 variables
    int occupancy[5][10];
    int occupied_count, vacant_count;

    // Task 3 variables
    int chain[3][5][10];
    int total_chain_occupied = 0;

    // Seed the random number generator for occupancy simulation
    srand(time(NULL));

    printf("=== HOTEL MANAGEMENT SYSTEM ===\n\n");

    // TASK 1: 1D Array – Weekly Revenue Tracker
    printf("--- 1D Array: Weekly Revenue Tracker ---\n");

    // Input revenue for each day
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for Day %d: Ksh ", i + 1);
        scanf("%lf", &revenue[i]);
        total_revenue += revenue[i];
    }

    // Calculate average
    average_revenue = total_revenue / 7.0;

    // Display results
    printf("\nTotal Weekly Revenue: Ksh %.2f\n", total_revenue);
    printf("Average Daily Revenue: Ksh %.2f\n\n", average_revenue);


    // TASK 2: 2D Array – Room Occupancy (One Branch)
    printf("--- 2D Array: Room Occupancy (Single Branch) ---\n");

    // Simulate random occupancy data (0 or 1)
    for (floor = 0; floor < 5; floor++) {
        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; 
        }
    }

    // Calculate and display occupied vs vacant rooms per floor
    for (floor = 0; floor < 5; floor++) {
        occupied_count = 0;
        vacant_count = 0;

        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1) {
                occupied_count++;
            } else {
                vacant_count++;
            }
        }
        printf("Floor %d -> Occupied: %d | Vacant: %d\n", floor + 1, occupied_count, vacant_count);
    }
    printf("\n");


    // TASK 3: 3D Array – Multiple Branches
    printf("--- 3D Array: Multiple Branches Tracker ---\n");

    // Assign random occupancy and calculate total occupancy across the chain
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                
                if (chain[branch][floor][room] == 1) {
                    total_chain_occupied++;
                }
            }
        }
    }

    // Display total occupied rooms across the whole chain
    printf("Total occupied rooms across all 3 branches: %d / 150 rooms\n", total_chain_occupied);

    return 0;
}
