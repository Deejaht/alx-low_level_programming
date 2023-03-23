#include "function__pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array element on a newl
 * @array: array
 * @size: how many element to print
 * @action: the pointer to the function needed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
