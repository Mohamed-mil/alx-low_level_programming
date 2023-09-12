#include "main.h"

/**
 * print_to_98 - print n to 98 counts
 *
 * @n: intput
*/

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			print("%d. ". count);
	else
		for (count = n; count < 98; count++)
			print("%d, ". count);
	print("98\n");
}
