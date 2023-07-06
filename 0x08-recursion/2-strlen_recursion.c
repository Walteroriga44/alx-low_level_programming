#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 *
 * Return: 0, adds 1 to the result obtained from the recursive call.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return ((1) + _strlen_recursion(s + 1));
}
