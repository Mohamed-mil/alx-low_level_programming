#include "main"

/**
 * more_numbers - print 0 - 14 ten times and use _ putcher three times
 *
 * Return : always 0
*/

void more_numbers(void)
{
	int x, y, z;

	for (x = 0; x <= 10; x++)
	{
		for (y = 0; y <= 1; y++)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n')
	}
}

