#include <stdio.h>
#include "main.h"

/**
 * is_leap_year - checks if a year is a leap year
 * @year: year to check
 * Return: 1 if leap year, 0 otherwise
 */
int is_leap_year(int year)
{
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
return (1);
else
return (0);
}

/**
 * day_of_year - calculates the day of the year for a given date
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: day of the year
 */
int day_of_year(int month, int day, int year)
{
int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int i;
int day_count = day;

for (i = 1; i < month; i++)
{
day_count += days_in_month[i];
if (i == 2 && is_leap_year(year))
day_count++; /* Add one extra day for February in a leap year*/
}

return (day_count);
}

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
int day_count = day_of_year(month, day, year);
int days_in_year = is_leap_year(year) ? 366 : 365;
int remaining_days = days_in_year - day_count;
if (day_count > days_in_year)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
}
else
{
printf("Day of the year: %d\n", day_count);
printf("Remaining days: %d\n", remaining_days);
}
}

