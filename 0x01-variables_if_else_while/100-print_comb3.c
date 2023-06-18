#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all possible different combination of two digits'
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 56; i++)
	{
		for (j = i + 49; j <= 57; j++)
		{
			putchar(48 + i);
			putchar(48 + j);
			if (i != 56 || j != 57)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
