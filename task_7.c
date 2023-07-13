#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0 && number % 5 == 0) {
        printf("Multiple of 2 and 5 both\n");
    } else if (number % 2 == 0) {
        printf("Multiple of 2\n");
    } else if (number % 5 == 0) {
        printf("Multiple of 5\n");
    } else {
        printf("Not a multiple we want\n");
    }

    return 0;
}