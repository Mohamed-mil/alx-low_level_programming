#include <stdio.h>

/**
 * main - print the number of arguments
 * @argc: int
 * @argv: sting
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
