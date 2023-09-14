#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times and
 *                 use _ putcher three times
 *
 * Return : always 0 (success)
*/

void more_numbers(void)
{
	int x, y, z;

	for (x = 1; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			x = z;
			if (z > 9)
			{
				_putchar(1 + 48);
				x = z % 10;
			}
			_putchar(x + 48);
		}
		_putchar('\n');
	}
}
