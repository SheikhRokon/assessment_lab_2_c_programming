#include <stdio.h>
#include <math.h>

int main() {
    int S;
    printf("Enter the value of S: ");
    scanf("%d", &S);

    int L;

    if (S < 100) {
        L = 3000 - 125 * pow(S, 2);

    } else {
        L = 1200 / 4 + pow(S, 2) / 14900;
        
    }

    printf("The value of L is: %d\n", L);

    return 0;
}