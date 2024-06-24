#include "main.h"
/**
 * convert_day - converts day of month to day of year, without accounting
 * for leap year
 * @month: month in number format
 * @day: day of month
 * Return: day of year
 */
int convert_day(int month, int day)
{
int day_of_year = day;
switch (month)
{
case 2:
day_of_year += 31;
break;
case 3:
day_of_year += 59;
break;
case 4:
day_of_year += 90;
break;
case 5:
day_of_year += 120;
break;
case 6:
day_of_year += 151;
break;
case 7:
day_of_year += 181;
break;
case 8:
day_of_year += 212;
break;
case 9:
day_of_year += 243;
break;
case 10:
day_of_year += 273;
break;
case 11:
day_of_year += 304;
break;
case 12:
day_of_year += 334;
break;
default:
break;
}
return (day_of_year);
}

