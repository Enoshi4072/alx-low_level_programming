#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of year
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	int leap_year = 366;
	int normal_year = 365;
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		if (month > 2)
			day++;
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", leap_year - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", normal_year - day);
		}
	}
}
