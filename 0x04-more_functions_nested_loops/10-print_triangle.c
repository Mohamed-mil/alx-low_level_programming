#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the square
 *
 * Return: always 0 (success)
*/

void print_triangle(int size)
{
	int h, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (h = 1; h <= size; h++)
		{
			for (b = 1; b < size; b++)
			{
				_putchar(' ');
			}
			for (b = 1; b <= h; b++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
