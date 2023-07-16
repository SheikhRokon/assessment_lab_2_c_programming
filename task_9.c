#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    printf("Enter the number of seconds: ");
    scanf("%d", &totalSeconds);

    // Calculate the number of hours, minutes, and seconds
    hours = totalSeconds / 3600;
    totalSeconds %= 3600;

    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    // Display the result
    printf("The equivalent time is: %d hours, %d minutes, %d seconds\n", hours, minutes, seconds);

    return 0;
}














