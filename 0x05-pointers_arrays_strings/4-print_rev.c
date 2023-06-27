#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: String to print
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')

	{
		i++;
		s++;
	}

	for (i =- 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
