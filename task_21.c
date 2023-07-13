#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 != 0 || number % 5 != 0) {
        printf("The number %d satisfies the condition.\n", number);
    }

    return 0;
}