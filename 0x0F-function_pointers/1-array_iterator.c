#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - print each array element on a \n.
 * @array: ..
 * @size: ..
 * @action: ..
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
