#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: always 0 (Success)
*/

void print_square(int size)
{
	int r, c;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{

		for (c = 0; c < size; c++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('35');
			}
			_putchar('\n');
		}
	}
}
