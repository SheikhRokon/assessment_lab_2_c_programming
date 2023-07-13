#include <stdio.h>

int main() {
    int num1, num2, result;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        result = num1 - num2;
    } else {
        result = num2 - num1;
    }

    printf("The result of subtracting the smaller number from the larger one is: %d\n", result);

    return 0;
}