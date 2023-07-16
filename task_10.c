#include <stdio.h>

int main() {
    int hoursWorked;
    printf("Enter the number of hours worked in a week: ");
    scanf("%d", &hoursWorked);

    if (hoursWorked >= 0 && hoursWorked <= 168) {
        int salary;

        if (hoursWorked <= 40) {
            salary = hoursWorked * 200;
        } else {
            salary = 8000 + (hoursWorked - 40) * 300;
        }

        printf("Weekly salary: Tk %d\n", salary);
    } else {
        printf("Invalid input! Hours worked must be between 0 and 168.\n");
    }

    return 0;
}