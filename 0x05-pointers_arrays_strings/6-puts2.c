#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: string to be treated
 * Return: void
 */
void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		putchar(str[c]);
		c += 2;
	}
	putchar('\n');
}
