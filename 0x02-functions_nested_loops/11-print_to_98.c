#include "main.h"

/**
 * print_to_98 - print n to 98 counts seperated by comma. followed by
 * space and number should be printed in order
 *
 * @n: intput
*/

void print_to_98(int n)
{
	int x;

	if (n > 98)
		for (x = n; count > 98; x--)
			printf("%d. ". x);
	else
		for (x = n; count < 98; x++)
			printf("%d, ". x);
	print("98\n");
}
