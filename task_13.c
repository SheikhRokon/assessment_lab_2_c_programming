#include <stdio.h>

int main() {
    int mark;

    printf("Enter the student's mark: ");
    scanf("%d", &mark);

    // Check if mark is valid
    if (mark < 0 || mark > 100) {
        printf("Invalid mark. Mark must be between 0 and 100.\n");
    } else {
        // Determine the grade based on the mark
        if (mark >= 90) {
            printf("Grade: A\n");
        } else if (mark >= 80) {
            printf("Grade: B\n");
        } else if (mark >= 70) {
            printf("Grade: C\n");
        } else if (mark >= 60) {
            printf("Grade: D\n");
        } else if (mark >= 50) {
            printf("Grade: E\n");
        } else {
            printf("Grade: F\n");
        }
    }

    return 0;
}