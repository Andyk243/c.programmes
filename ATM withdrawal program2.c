//Author:Andy Ondieki
//Registration number:BCS-05-0553/2026
//Description:ATM withdrawal program (while loop)

#include <stdio.h>

int main() {
    float balance = 50000.0; 
    float withdrawal;

    while (1) {
        printf("Enter amount to withdraw (or 0 to stop): ");
        scanf("%f", &withdrawal);

        if (withdrawal == 0) {
            printf("Transaction cancelled by user.\n");
            break;
        }

        if (withdrawal > balance) {
            printf("Error: Insufficient balance!\n");
            break;
        }

        balance -= withdrawal;
        printf("Successful withdrawal! Remaining balance: KSh %.2f\n\n", balance);
    }

    printf("Final balance: KSh %.2f\n", balance);
    return 0;
}
