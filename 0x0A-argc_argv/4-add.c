#include <stdio.h>
#include <stdlib.h>

/**
 * main - print a grogram that add positive numbers
 * @argc: number of arguments
 * @argv: array to pointer to arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = atgv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (print("error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
