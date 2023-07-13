#include <stdio.h>

int main() {
    int canvasCount, paintCount;
    int canvasPrice = 120;  // Price of each 10 x 10 sized canvas
    int paintPrice = 75;   // Price of each 25 ml paint tube
    int totalAmount, discount;

    // Input the number of canvases and paint tubes ordered
    printf("Enter the number of canvases ordered: ");
    scanf("%d", &canvasCount);
    printf("Enter the number of paint tubes ordered: ");
    scanf("%d", &paintCount);

    // Calculate the total amount
    totalAmount = (canvasCount * canvasPrice) + (paintCount * paintPrice);

    // Calculate the discount based on the total amount
    if (totalAmount >= 0 && totalAmount < 300) {
        discount = 0;
    } else if (totalAmount >= 300 && totalAmount < 500) {
        discount = 10;
    } else if (totalAmount >= 500 && totalAmount < 750) {
        discount = 20;
    } else if (totalAmount >= 750 && totalAmount < 1000) {
        discount = 50;
    } else {
        discount = 150;
    }

    // Apply the discount and calculate the final amount
    totalAmount -= discount;

    // Output the total amount Fiona needs to pay
    printf("Total amount to pay: %d TK\n", totalAmount);

    return 0;
}