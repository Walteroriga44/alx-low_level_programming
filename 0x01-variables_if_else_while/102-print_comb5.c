#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all combination of two digit numbers'
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			putchar(0 + i / 10);
			putchar(0 + i % 10);
			putchar(' ');
			putchar(0 + j / 10);
			putchar(0 + j % 10);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
