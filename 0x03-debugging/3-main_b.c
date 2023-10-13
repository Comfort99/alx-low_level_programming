#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
* print_remaining_days - takes a date and prints how many days are left in the year, taking
* @month: parameter
* @day: parameter
* @year: parameter
* leap years into account
*
*
* Return: 0
*/

int print_remaining_days(int month,int day,int year);
int main(void)
{
	int month;
	int day;
	int year;

	month = 2;
	day = 29;
	year = 2000;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);
	return (0);
}
