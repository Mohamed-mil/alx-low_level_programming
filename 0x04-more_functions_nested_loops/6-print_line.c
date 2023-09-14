#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the - character
 * should be printed
*/

void print_line(int n)
{
	int o;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (o = 1; o <= n; o++)
			_putchar('_');
		_putchar('\n');
	}
}
