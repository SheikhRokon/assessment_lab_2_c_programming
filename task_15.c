#include <stdio.h>

int main() {
    float cgpa;
    int credits;

    printf("Enter the CGPA: ");
    scanf("%f", &cgpa);

    printf("Enter the number of credits completed: ");
    scanf("%d", &credits);

    if (credits >= 30 && cgpa >= 3.8) {
        printf("The student is eligible for a waiver.\n");
        
        if (cgpa >= 3.8 && cgpa <= 3.89)
            printf("Waiver percentage: 25 percent\n");
        else if (cgpa >= 3.9 && cgpa <= 3.94)
            printf("Waiver percentage: 50 percent\n");
        else if (cgpa >= 3.95 && cgpa <= 3.99)
            printf("Waiver percentage: 75 percent\n");
        else if (cgpa == 4.0)
            printf("Waiver percentage: 100 percent\n");
    } else {
        printf("The student is not eligible for a waiver.\n");
    }

    return 0;
}