#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;

		i++;
		j--;
	}
}
