#include "main.h"

/**
 * main - print numbers 1 - 100 followed by a new line
 *       numbers that ae multiples of 3 print fizz
 *       numbers that are multiplies of 5 print fiz
 *       numbers that are multiplies of 3 and 5 print fizzbuz
 *       each number and word seperate with a space
 *
 *       Return: always 0 (success)
*/

int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
		if (m % 3 == 0 && m % 5 != 0)
		{
			printf("fizz");
		}
		else if (m % 5 == 0 && m % 3 != 0)
		{
			printf("buzz");
		}
		else if (m % 3 == 0 && m % 5 == 0)
		{
			printf("fizzbuzz");
		}
		else if (m == 1)
		{
			printf("%d", m);
		}
		else
		{
			printf(" %d", m);
		}
	}
	return (0);
}
