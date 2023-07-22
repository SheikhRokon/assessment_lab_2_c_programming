#include <stdio.h>

int main() {
    int num1, num2;
    int sum, product, difference;

    // Read the two numbers from the user
    printf("Enter the first Number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the sum, product, and difference
    sum = num1 + num2;
    product = num1 * num2;
    difference = num1 - num2;

    // Print the results
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Difference: %d\n", difference);

    return 0;
}