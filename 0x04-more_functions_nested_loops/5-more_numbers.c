#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times and
 *                 use _ putchar three times
 *
 * Return: always 0 (success)
*/

void more_numbers(void)
{
	int x, y, z;

	for (x = 1; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
				_putchar('1');
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}
}
