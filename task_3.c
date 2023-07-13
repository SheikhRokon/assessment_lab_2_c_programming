#include <stdio.h>

int main() {
    int first, second;
    
    printf("Enter the first number: ");
    scanf("%d", &first);
    
    printf("Enter the second number: ");
    scanf("%d", &second);
    
    if (first > second) {
        printf("First is greater\n");
    } else if (second > first) {
        printf("Second is greater\n");
    } else {
        printf("The numbers are equal\n");
    }
    
    return 0;
}