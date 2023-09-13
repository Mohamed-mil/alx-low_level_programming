#include "main.h"

/**
 * times table - prints the 9 times table
 *
*/

void times_table(void)
{
	int num, mil, prod;

		for (num = 0; num <= 9; num++)
		{
			_putchar(48);
			for (mil = 1; mil <= 9; mil++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mil;

				if (prod <= 9)
					_putchar(' ');
				else
					_putchar((prod / 10) + 48);

				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
}

