#include "main.h"
/**
 * _isalpha - checks for alphabet character
 * @c: The character to be checked
 * Return: 1 if a letter or 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
