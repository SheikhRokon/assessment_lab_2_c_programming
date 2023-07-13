#include <stdio.h>

int main() {
    int distance, time;
    float velocity;

    printf("Enter the distance in meters: ");
    scanf("%d", &distance);

    printf("Enter the time in seconds: ");
    scanf("%d", &time);

    // Calculating velocity in km/h
    velocity = (distance / 1000.0) / (time / 3600.0);

    printf("Velocity: %.1f km/h\n", velocity);

    // Checking the velocity and printing the appropriate message
    if (velocity < 60) {
        printf("Too slow. Needs more changes.\n");
    } else if (velocity >= 60 && velocity <= 90) {
        printf("Velocity is okay. The car is ready!\n");
    } else {
        printf("Too fast. Only a few changes should suffice.\n");
    }

    return 0;
}