#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of command line
 * @argv: array of command line
 *
 * Return: 0 on success 1 on error
 */
int main(int argc, char *argv[])
{
	int i, j;

	int a = 0;
	int b[] = {25, 10, 5, 2, 1};
	int c = sizeof(b) / sizeof(b[0]);

	if (argc != 2)
	{
		printf("Error\n");
			return (1);
	}

	j = atoi(argv[1]);

	if (j < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < c; i++)
	{
		a += j / b[i];
		j %= b[i];
	}

	printf("%d\n", a);

	return (0);
}


