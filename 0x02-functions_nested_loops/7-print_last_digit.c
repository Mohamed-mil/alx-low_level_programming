#include "main.h"

/**
 * print_last_digit - print last digit of a number.
 *
 * @n: takes number input
 *
 * Return: d
*/

int print_last_digit(int n)
{
	int d;

	if (n < 0)
		d = -1 * (n % 10);
	else
		d = n % 10;

	_putchar(d + '0');
	return (d);
}
