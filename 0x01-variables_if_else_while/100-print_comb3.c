#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: 'print all possible different combination of two digits'
 * Return: always 0
 */
int main(void)
{
	int i = 0;
	int j;

	while (i <= 8)
	{
		j = i + 1;
		while (j <= 9)

		{
			putchar(0 + i);
			putchar(0 + j);
			if (i != 8 || j != 9)
			{
			putchar(',');
			putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
