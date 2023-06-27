#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int c = strlen(str);
	int a;

	if (c % 2 == 0)
	{
		a = c / 2;
	}
	else
	{
		a = (c - 1) / 2;
	}

	while (str[a] != '\0')
	{
		putchar(str[a]);
		a++;
	}

	putchar('\n');
}


