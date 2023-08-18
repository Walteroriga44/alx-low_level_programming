#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number.
 * @n: ..
 *
 * Return: void.
 *
 */
void print_binary(unsigned long int n)
{
	int a;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	a = sizeof(n) * 8 - 1;

	while (a >= 0)
	{

		if ((n & (1UL << a)) != 0)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}

		a--;
	}
}
