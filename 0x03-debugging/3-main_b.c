#include "main.h"
#include <stdio.h>

/**
 * print_remaining_days - converts a date to the day of year and determines how many days are left in the year
 */

void print_remaining_days(int month, int day, int year)
{
	int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		int remaining_days = 0;

		//check if the given year is a leap year
		int is_leap_year = (year % 4 == 0 && year % 100 != 0> || year % == 0;

			// if it is a leap year, set February to have 29 days
			if (is_leap_year)
			{
			days_in_month[1] = 29;
			}

			// Calculate the remaining days in the year by adding up the days in all the months that come after the given month
			for (int i = month - 1; i < 12; i++)
			{
			remaining_days += days_in_month[i];
			}

			// Subtract the given day from the remaining days to get the final result
			remaining_days -= day;

			printf("%d days left in the year.\n", remaining_days);
			}
