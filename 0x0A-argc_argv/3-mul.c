#include <stdio.h>
#include <stdlib.hm
/**
 * main - print sum of 2 numbers
 * @argc: number of commandline argumnts
 * @argv: pointer to ana array
 * Return: 0 if success non zero to fail
*/

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
