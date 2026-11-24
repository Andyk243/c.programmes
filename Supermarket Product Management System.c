//Author:Andy Ondieki
//Registration number:BCS-05-0553/2026
//Description:Supermarket Product Management System

#include <stdio.h>

// Define the Product structure
struct Product {
    int productCode;
    char productName[100];
    float unitPrice;
    int quantityInStock;
};

int main() {
    // Declare a structure variable and a variable for total stock value
    struct Product prod;
    float totalStockValue;

    // Input product details
    printf("Enter Product Code: ");
    scanf("%d", &prod.productCode);
    while (getchar() != '\n'); // Clear leftover characters from the input buffer

    printf("Enter Product Name: ");
    fgets(prod.productName, sizeof(prod.productName), stdin);

    printf("Enter Unit Price: ");
    scanf("%f", &prod.unitPrice);

    printf("Enter Quantity in Stock: ");
    scanf("%d", &prod.quantityInStock);

    // Calculate the total value of the available stock
    totalStockValue = prod.unitPrice * prod.quantityInStock;

    // Display the product details and total stock value
    printf("\n--- Supermarket Product Details ---\n");
    printf("Product Code: %d\n", prod.productCode);
    printf("Product Name: %s", prod.productName);
    printf("Unit Price: KSh %.2f\n", prod.unitPrice);
    printf("Quantity in Stock: %d\n", prod.quantityInStock);
    printf("Total Stock Value: KSh %.2f\n", totalStockValue);

    return 0;
}
