#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int remainingDays = 0;
    int isLeap = 0;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        isLeap = 1;
    }

    if (isLeap) {
        daysInMonth[1] = 29;
    }

    if (month < 1 || month > 12 || day < 1 || day > daysInMonth[month - 1]) {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    for (int i = month - 1; i < 12; i++) {
        remainingDays += daysInMonth[i];
    }

    remainingDays -= day;

    printf("Day of the year: %d\n", day);
    printf("Remaining days: %d\n", remainingDays);
}

