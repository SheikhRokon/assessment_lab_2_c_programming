#include <stdio.h>

int main() {
    int hour;

    printf("Enter the hour (in 24-hour format): ");
    scanf("%d", &hour);

    if (hour >= 4 && hour <= 6) {
        printf("It's time for Breakfast\n");
    } else if (hour == 12 || hour == 13) {
        printf("It's time for Lunch\n");
    } else if (hour >= 16 && hour <= 17) {
        printf("It's time for Snacks\n");
    } else if (hour >= 19 && hour <= 20) {
        printf("It's time for Dinner\n");
    } else if (hour >= 0 && hour <= 23) {
        printf("Patience is a virtue\n");
    } else {
        printf("Wrong time\n");
    }

    return 0;
}