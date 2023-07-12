#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: The two strings
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, j = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;

	while (s2[j])
		j++;

	l = a + j;
	s = malloc((sizeof(char) * l) + 1);

	j = 0;

	while (k < l)
	{
		if (k <= a)
			s[k] = s1[k];

		if (k >= a)
		{
			s[k] = s2[a];
			j++;
		}

		k++;
	}

	s[k] = '\0';
	return (s);
}
