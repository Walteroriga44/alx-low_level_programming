#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all possible combination of three digit'
 * Return: always 0
 */
int main(void)
{
	int m;
	int n;
	int o;

	for (m = 48; m <= 55; m++)
	{
		for (n = m + 49; n <= 56; n++)
		{
			for (o = n + 49; o <= 57; o++)
			{
				putchar(48 + m);
				putchar(48 + n);
				putchar(48 + o);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
