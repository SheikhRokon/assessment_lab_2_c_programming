#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0 || num % 5 == 0) {
        printf("%d\n", num);
    } else {
        printf("Not a multiple of 2 OR 5\n");
    }

    return 0;
}