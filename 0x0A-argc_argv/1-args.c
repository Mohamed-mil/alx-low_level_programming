#include <stdio.h>

/**
 * main - print number of arguments
 * @argc: int
 * @argv: pointer to an array
 * Return: 0
*/

int main(int argc, char const *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
